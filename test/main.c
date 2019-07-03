#include <vulkan-dev/vulkan-dev.h>

#include <stdio.h>

#include <glad/vulkan.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

static GLFWwindow* _window;

static void
_setup(void)
{
	const GLFWvidmode* mode;

	if (glfwInit() == GLFW_FALSE) {
		vk_dev_fatal_error("[GLFW] Failed to initialize.");
	}

	if (glfwVulkanSupported() == GLFW_FALSE) {
		vk_dev_fatal_error("[GLFW] Vulkan not supported.");
	}

	mode = glfwGetVideoMode(glfwGetPrimaryMonitor());

	_window = glfwCreateWindow(mode->width, mode->height, "Vulkan-Dev", 
		glfwGetPrimaryMonitor(), NULL);
	if (_window == NULL) {
		vk_dev_fatal_error("[GLFW] Failed to create window.");
	}
}

static void
_terminate(void)
{
	glfwDestroyWindow(_window);
	glfwTerminate();
}

int
main()
{
	_setup();

	vk_dev_setup();

	while (!glfwWindowShouldClose(_window)) {
		glfwPollEvents();
	}

	vk_dev_terminate();

	_terminate();
}
