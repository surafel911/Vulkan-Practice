#include <vulkan-dev/vulkan-dev.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#include <glad/vulkan.h>

#define ARRAY_SIZE(x) (sizeof(x)/sizeof(*x))

struct vk_dev_context {
	VkDevice device;
	VkInstance instance;
};

static VkResult _result;
static struct vk_dev_context _context;

static const char* const _required_extensions[2] = {
	"VK_KHR_surface",
#if defined(_WIN32)
	"VK_KHR_win32_surface",
#elif defined(__linux__)
	"VK_KHR_xlib_surface",
#endif
};

/*
 *	NOTE:	As Vulkan is just a graphics API, communication with the
 *			window/display system is facilitated with extensions. However,
 *			these required extensions have no special API nd are treated as
 *			any other extension. Thus, we must make sure that these required
 *			extensions are present in the query of available extensions.
 */
static bool
_vk_dev_found_required_extensions(char** extensions,
	const uint32_t count)
{
	int i, j;
	bool extension_found[2] = {false, false};

	for (i = 0, j = 0; i < count; i++) {
		if (strcmp(extensions[i], _required_extensions[j]) == 0) {
			extension_found[j++] = true;

			if (j == ARRAY_SIZE(_required_extensions)) {
				break;
			}
		}
	}

	return extension_found[0] && extension_found[1];
}

/*
 *	NOTE:	It's imperative that you initialize all members of a structs
 *			passed into the API since it is entirely feasable that vulkan
 *			will attempt to use uninitialized data and crash without warning.
 */

static void
_vk_dev_get_instance_extensions(char*** extensions,
	uint32_t* extension_count)
{
	VkExtensionProperties* extension_properties;

	_result = vkEnumerateInstanceExtensionProperties(NULL,
		extension_count, NULL);
	if (_result != VK_SUCCESS || extension_count == 0) {
		vk_dev_fatal_error("[VULKAN] Failed to query instance extension count.");
	}

	extension_properties = malloc(sizeof(*extension_properties) *
		*extension_count);

	_result = vkEnumerateInstanceExtensionProperties(NULL, extension_count,
		extension_properties);
	if (_result != VK_SUCCESS) {
		vk_dev_fatal_error("[VULKAN] Failed to query instance extensions.");
	}

	*extensions = malloc(sizeof(*(*extensions)) * *extension_count);
	for (int i = 0; i < *extension_count; i++) {
		(*extensions)[i] = extension_properties[i].extensionName;
	}

	if (_vk_dev_found_required_extensions(*extensions,
		*extension_count) == false) {
		vk_dev_fatal_error("[VULKAN] Query failed to find required platform\
			instance extensions.");
	}

	free(extension_properties);
}

static VkPhysicalDevice
_vk_dev_find_suitable_physical_device(const VkPhysicalDevice* physical_devices,
	const uint32_t device_count, const VkPhysicalDeviceType device_type)
{
	VkPhysicalDeviceProperties device_properties;

	for (int i = 0; i < device_count; i++) {
		vkGetPhysicalDeviceProperties(physical_devices[i], &device_properties);

		if (device_properties.deviceType == device_type) {
			return physical_devices[i];
		}
	}

	return VK_NULL_HANDLE;
}

static VkPhysicalDevice
_vk_dev_get_physical_device(void)
{
	VkPhysicalDevice* physical_devices;

	uint32_t device_count;
	VkPhysicalDevice physical_device;

	_result = vkEnumeratePhysicalDevices(_context.instance, &device_count, NULL);
	if (_result != VK_SUCCESS || device_count == 0) {
		vk_dev_fatal_error("[VULKAN] Failed to query physical device count.");
	}

	physical_devices = malloc(sizeof(*physical_devices) * device_count);

	_result = vkEnumeratePhysicalDevices(_context.instance, &device_count,
		physical_devices);
	if (_result != VK_SUCCESS) {
		vk_dev_fatal_error("[VULKAN] Failed to query physical devices.");
	}

	physical_device = VK_NULL_HANDLE;

	physical_device = _vk_dev_find_suitable_physical_device(physical_devices,
		device_count, VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU);
	if (physical_device == VK_NULL_HANDLE) {
		physical_device = _vk_dev_find_suitable_physical_device(physical_devices,
			device_count, VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU);
		if (physical_device == VK_NULL_HANDLE) {
			vk_dev_fatal_error("[VULKAN] No suitable physical device found.");
		}
	}

	free(physical_devices);

	return physical_device;
}

static int
_vk_dev_find_suitable_queue_family(const VkQueueFamilyProperties* queue_family_properties,
	const uint32_t queue_family_count)
{
	for (int i = 0; i < queue_family_count; i++) {
		if (queue_family_properties[i].queueCount > 1 && queue_family_properties[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) {
			return i;
		}
	}

	return -1;
}

static uint32_t
_vk_dev_get_physical_device_queue_family_index(const VkPhysicalDevice physical_device)
{
	VkQueueFamilyProperties* queue_family_properties;

	int queue_family_index;
	uint32_t queue_family_count;

	vkGetPhysicalDeviceQueueFamilyProperties(physical_device, &queue_family_count, NULL);

	queue_family_properties = malloc(sizeof(*queue_family_properties) * queue_family_count);
	vkGetPhysicalDeviceQueueFamilyProperties(physical_device, &queue_family_count,
		queue_family_properties);

	vkGetPhysicalDeviceQueueFamilyProperties(physical_device, &queue_family_count, queue_family_properties);

	queue_family_index = _vk_dev_find_suitable_queue_family(queue_family_properties, queue_family_count);
	if (queue_family_index == -1) {
		// TODO: Fucking die man
	}

	free(queue_family_properties);

	return queue_family_index;
}

static void
_vk_dev_instance_create(void)
{
	char** extensions;

	uint32_t extension_count;
	VkApplicationInfo application_info;
	VkInstanceCreateInfo create_info;
	VkPhysicalDevice physical_device;

	/*
	 * 	NOTE:	An optional structure to provide context to the drivers
	 *			and validation layers.
	 */
	application_info.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	application_info.pNext = NULL;
	application_info.pApplicationName = "Qubit Engine";
	application_info.applicationVersion = VK_MAKE_VERSION(0, 0, 1);
	application_info.pEngineName = "Qubit Engine";
	application_info.engineVersion = VK_MAKE_VERSION(0, 0, 1);
	application_info.apiVersion = VK_API_VERSION_1_1;

	/* 
	 * NOTE: Irrelevant if you use a platform library such as SDL or GLFW, but
	 * this function retrieves available instance extensions, as well as checks
	 * if the required extensions have been queried
	 */
	_vk_dev_get_instance_extensions(&extensions, &extension_count);

	/*
	 * NOTE: A non-optional stucture to global extensions and validation layers
	 * 		 not particular to any given device.
	 */
	create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	create_info.pNext = NULL;
	create_info.pApplicationInfo = &application_info;
	create_info.enabledLayerCount = 0;
	create_info.ppEnabledLayerNames = NULL;
	create_info.enabledExtensionCount = extension_count;
	create_info.ppEnabledExtensionNames = (const char* const*)extensions;

	free(extensions);

	_result = vkCreateInstance(&create_info, NULL, &_context.instance);
	if (_result != VK_SUCCESS) {
		vk_dev_fatal_error("[VULKAN] Failed to create instance (check ICD).");
	}

	physical_device = _vk_dev_get_physical_device();

	int i = _vk_dev_get_physical_device_queue_family_index(physical_device);
}

static void
_vk_dev_instance_destroy(void)
{
	vkDestroyInstance(_context.instance, NULL);
}

void
vk_dev_setup(void)
{
	gladLoaderLoadVulkan(NULL, NULL, NULL);

	_vk_dev_instance_create();
}

void
vk_dev_terminate(void)
{
	_vk_dev_instance_destroy();

	gladLoaderUnloadVulkan();
}

void
vk_dev_fatal_error(const char* msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(-1);
}

