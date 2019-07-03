#ifndef VULKAN_DEV_H
#define VULKAN_DEV_H

void
vk_dev_setup(void);

void
vk_dev_terminate(void);

void
vk_dev_fatal_error(const char* msg);

#endif // VULKAN_DEV_H
