#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/vulkan.h>

#ifndef GLAD_IMPL_UTIL_C_
#define GLAD_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLAD_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLAD_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLAD_IMPL_UTIL_C_ */


int GLAD_VK_VERSION_1_0 = 0;
int GLAD_VK_VERSION_1_1 = 0;
int GLAD_VK_AMD_buffer_marker = 0;
int GLAD_VK_AMD_display_native_hdr = 0;
int GLAD_VK_AMD_draw_indirect_count = 0;
int GLAD_VK_AMD_gcn_shader = 0;
int GLAD_VK_AMD_gpu_shader_half_float = 0;
int GLAD_VK_AMD_gpu_shader_int16 = 0;
int GLAD_VK_AMD_memory_overallocation_behavior = 0;
int GLAD_VK_AMD_mixed_attachment_samples = 0;
int GLAD_VK_AMD_negative_viewport_height = 0;
int GLAD_VK_AMD_rasterization_order = 0;
int GLAD_VK_AMD_shader_ballot = 0;
int GLAD_VK_AMD_shader_core_properties = 0;
int GLAD_VK_AMD_shader_explicit_vertex_parameter = 0;
int GLAD_VK_AMD_shader_fragment_mask = 0;
int GLAD_VK_AMD_shader_image_load_store_lod = 0;
int GLAD_VK_AMD_shader_info = 0;
int GLAD_VK_AMD_shader_trinary_minmax = 0;
int GLAD_VK_AMD_texture_gather_bias_lod = 0;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
int GLAD_VK_ANDROID_external_memory_android_hardware_buffer = 0;

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
int GLAD_VK_EXT_acquire_xlib_display = 0;

#endif
int GLAD_VK_EXT_astc_decode_mode = 0;
int GLAD_VK_EXT_blend_operation_advanced = 0;
int GLAD_VK_EXT_buffer_device_address = 0;
int GLAD_VK_EXT_calibrated_timestamps = 0;
int GLAD_VK_EXT_conditional_rendering = 0;
int GLAD_VK_EXT_conservative_rasterization = 0;
int GLAD_VK_EXT_debug_marker = 0;
int GLAD_VK_EXT_debug_report = 0;
int GLAD_VK_EXT_debug_utils = 0;
int GLAD_VK_EXT_depth_clip_enable = 0;
int GLAD_VK_EXT_depth_range_unrestricted = 0;
int GLAD_VK_EXT_descriptor_indexing = 0;
int GLAD_VK_EXT_direct_mode_display = 0;
int GLAD_VK_EXT_discard_rectangles = 0;
int GLAD_VK_EXT_display_control = 0;
int GLAD_VK_EXT_display_surface_counter = 0;
int GLAD_VK_EXT_external_memory_dma_buf = 0;
int GLAD_VK_EXT_external_memory_host = 0;
int GLAD_VK_EXT_filter_cubic = 0;
int GLAD_VK_EXT_fragment_density_map = 0;
int GLAD_VK_EXT_fragment_shader_interlock = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_EXT_full_screen_exclusive = 0;

#endif
int GLAD_VK_EXT_global_priority = 0;
int GLAD_VK_EXT_hdr_metadata = 0;
int GLAD_VK_EXT_headless_surface = 0;
int GLAD_VK_EXT_host_query_reset = 0;
int GLAD_VK_EXT_image_drm_format_modifier = 0;
int GLAD_VK_EXT_inline_uniform_block = 0;
int GLAD_VK_EXT_memory_budget = 0;
int GLAD_VK_EXT_memory_priority = 0;
#if defined(VK_USE_PLATFORM_METAL_EXT)
int GLAD_VK_EXT_metal_surface = 0;

#endif
int GLAD_VK_EXT_pci_bus_info = 0;
int GLAD_VK_EXT_pipeline_creation_feedback = 0;
int GLAD_VK_EXT_post_depth_coverage = 0;
int GLAD_VK_EXT_queue_family_foreign = 0;
int GLAD_VK_EXT_sample_locations = 0;
int GLAD_VK_EXT_sampler_filter_minmax = 0;
int GLAD_VK_EXT_scalar_block_layout = 0;
int GLAD_VK_EXT_separate_stencil_usage = 0;
int GLAD_VK_EXT_shader_stencil_export = 0;
int GLAD_VK_EXT_shader_subgroup_ballot = 0;
int GLAD_VK_EXT_shader_subgroup_vote = 0;
int GLAD_VK_EXT_shader_viewport_index_layer = 0;
int GLAD_VK_EXT_swapchain_colorspace = 0;
int GLAD_VK_EXT_transform_feedback = 0;
int GLAD_VK_EXT_validation_cache = 0;
int GLAD_VK_EXT_validation_features = 0;
int GLAD_VK_EXT_validation_flags = 0;
int GLAD_VK_EXT_vertex_attribute_divisor = 0;
int GLAD_VK_EXT_ycbcr_image_arrays = 0;
#if defined(VK_USE_PLATFORM_FUCHSIA)
int GLAD_VK_FUCHSIA_imagepipe_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_GGP)
int GLAD_VK_GGP_frame_token = 0;

#endif
#if defined(VK_USE_PLATFORM_GGP)
int GLAD_VK_GGP_stream_descriptor_surface = 0;

#endif
int GLAD_VK_GOOGLE_decorate_string = 0;
int GLAD_VK_GOOGLE_display_timing = 0;
int GLAD_VK_GOOGLE_hlsl_functionality1 = 0;
int GLAD_VK_IMG_filter_cubic = 0;
int GLAD_VK_IMG_format_pvrtc = 0;
int GLAD_VK_INTEL_performance_query = 0;
int GLAD_VK_INTEL_shader_integer_functions2 = 0;
int GLAD_VK_KHR_16bit_storage = 0;
int GLAD_VK_KHR_8bit_storage = 0;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
int GLAD_VK_KHR_android_surface = 0;

#endif
int GLAD_VK_KHR_bind_memory2 = 0;
int GLAD_VK_KHR_create_renderpass2 = 0;
int GLAD_VK_KHR_dedicated_allocation = 0;
int GLAD_VK_KHR_depth_stencil_resolve = 0;
int GLAD_VK_KHR_descriptor_update_template = 0;
int GLAD_VK_KHR_device_group = 0;
int GLAD_VK_KHR_device_group_creation = 0;
int GLAD_VK_KHR_display = 0;
int GLAD_VK_KHR_display_swapchain = 0;
int GLAD_VK_KHR_draw_indirect_count = 0;
int GLAD_VK_KHR_driver_properties = 0;
int GLAD_VK_KHR_external_fence = 0;
int GLAD_VK_KHR_external_fence_capabilities = 0;
int GLAD_VK_KHR_external_fence_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_external_fence_win32 = 0;

#endif
int GLAD_VK_KHR_external_memory = 0;
int GLAD_VK_KHR_external_memory_capabilities = 0;
int GLAD_VK_KHR_external_memory_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_external_memory_win32 = 0;

#endif
int GLAD_VK_KHR_external_semaphore = 0;
int GLAD_VK_KHR_external_semaphore_capabilities = 0;
int GLAD_VK_KHR_external_semaphore_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_external_semaphore_win32 = 0;

#endif
int GLAD_VK_KHR_get_display_properties2 = 0;
int GLAD_VK_KHR_get_memory_requirements2 = 0;
int GLAD_VK_KHR_get_physical_device_properties2 = 0;
int GLAD_VK_KHR_get_surface_capabilities2 = 0;
int GLAD_VK_KHR_image_format_list = 0;
int GLAD_VK_KHR_incremental_present = 0;
int GLAD_VK_KHR_maintenance1 = 0;
int GLAD_VK_KHR_maintenance2 = 0;
int GLAD_VK_KHR_maintenance3 = 0;
int GLAD_VK_KHR_multiview = 0;
int GLAD_VK_KHR_push_descriptor = 0;
int GLAD_VK_KHR_relaxed_block_layout = 0;
int GLAD_VK_KHR_sampler_mirror_clamp_to_edge = 0;
int GLAD_VK_KHR_sampler_ycbcr_conversion = 0;
int GLAD_VK_KHR_shader_atomic_int64 = 0;
int GLAD_VK_KHR_shader_draw_parameters = 0;
int GLAD_VK_KHR_shader_float16_int8 = 0;
int GLAD_VK_KHR_shader_float_controls = 0;
int GLAD_VK_KHR_shared_presentable_image = 0;
int GLAD_VK_KHR_storage_buffer_storage_class = 0;
int GLAD_VK_KHR_surface = 0;
int GLAD_VK_KHR_surface_protected_capabilities = 0;
int GLAD_VK_KHR_swapchain = 0;
int GLAD_VK_KHR_swapchain_mutable_format = 0;
int GLAD_VK_KHR_uniform_buffer_standard_layout = 0;
int GLAD_VK_KHR_variable_pointers = 0;
int GLAD_VK_KHR_vulkan_memory_model = 0;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
int GLAD_VK_KHR_wayland_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_win32_keyed_mutex = 0;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_win32_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
int GLAD_VK_KHR_xcb_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
int GLAD_VK_KHR_xlib_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
int GLAD_VK_MVK_ios_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
int GLAD_VK_MVK_macos_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
int GLAD_VK_NN_vi_surface = 0;

#endif
int GLAD_VK_NVX_device_generated_commands = 0;
int GLAD_VK_NVX_image_view_handle = 0;
int GLAD_VK_NVX_multiview_per_view_attributes = 0;
int GLAD_VK_NV_clip_space_w_scaling = 0;
int GLAD_VK_NV_compute_shader_derivatives = 0;
int GLAD_VK_NV_cooperative_matrix = 0;
int GLAD_VK_NV_corner_sampled_image = 0;
int GLAD_VK_NV_coverage_reduction_mode = 0;
int GLAD_VK_NV_dedicated_allocation = 0;
int GLAD_VK_NV_dedicated_allocation_image_aliasing = 0;
int GLAD_VK_NV_device_diagnostic_checkpoints = 0;
int GLAD_VK_NV_external_memory = 0;
int GLAD_VK_NV_external_memory_capabilities = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_NV_external_memory_win32 = 0;

#endif
int GLAD_VK_NV_fill_rectangle = 0;
int GLAD_VK_NV_fragment_coverage_to_color = 0;
int GLAD_VK_NV_fragment_shader_barycentric = 0;
int GLAD_VK_NV_framebuffer_mixed_samples = 0;
int GLAD_VK_NV_geometry_shader_passthrough = 0;
int GLAD_VK_NV_glsl_shader = 0;
int GLAD_VK_NV_mesh_shader = 0;
int GLAD_VK_NV_ray_tracing = 0;
int GLAD_VK_NV_representative_fragment_test = 0;
int GLAD_VK_NV_sample_mask_override_coverage = 0;
int GLAD_VK_NV_scissor_exclusive = 0;
int GLAD_VK_NV_shader_image_footprint = 0;
int GLAD_VK_NV_shader_sm_builtins = 0;
int GLAD_VK_NV_shader_subgroup_partitioned = 0;
int GLAD_VK_NV_shading_rate_image = 0;
int GLAD_VK_NV_viewport_array2 = 0;
int GLAD_VK_NV_viewport_swizzle = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_NV_win32_keyed_mutex = 0;

#endif



#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkAcquireFullScreenExclusiveModeEXT glad_vkAcquireFullScreenExclusiveModeEXT = NULL;

#endif
PFN_vkAcquireNextImage2KHR glad_vkAcquireNextImage2KHR = NULL;
PFN_vkAcquireNextImageKHR glad_vkAcquireNextImageKHR = NULL;
PFN_vkAcquirePerformanceConfigurationINTEL glad_vkAcquirePerformanceConfigurationINTEL = NULL;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
PFN_vkAcquireXlibDisplayEXT glad_vkAcquireXlibDisplayEXT = NULL;

#endif
PFN_vkAllocateCommandBuffers glad_vkAllocateCommandBuffers = NULL;
PFN_vkAllocateDescriptorSets glad_vkAllocateDescriptorSets = NULL;
PFN_vkAllocateMemory glad_vkAllocateMemory = NULL;
PFN_vkBeginCommandBuffer glad_vkBeginCommandBuffer = NULL;
PFN_vkBindAccelerationStructureMemoryNV glad_vkBindAccelerationStructureMemoryNV = NULL;
PFN_vkBindBufferMemory glad_vkBindBufferMemory = NULL;
PFN_vkBindBufferMemory2 glad_vkBindBufferMemory2 = NULL;
PFN_vkBindBufferMemory2KHR glad_vkBindBufferMemory2KHR = NULL;
PFN_vkBindImageMemory glad_vkBindImageMemory = NULL;
PFN_vkBindImageMemory2 glad_vkBindImageMemory2 = NULL;
PFN_vkBindImageMemory2KHR glad_vkBindImageMemory2KHR = NULL;
PFN_vkCmdBeginConditionalRenderingEXT glad_vkCmdBeginConditionalRenderingEXT = NULL;
PFN_vkCmdBeginDebugUtilsLabelEXT glad_vkCmdBeginDebugUtilsLabelEXT = NULL;
PFN_vkCmdBeginQuery glad_vkCmdBeginQuery = NULL;
PFN_vkCmdBeginQueryIndexedEXT glad_vkCmdBeginQueryIndexedEXT = NULL;
PFN_vkCmdBeginRenderPass glad_vkCmdBeginRenderPass = NULL;
PFN_vkCmdBeginRenderPass2KHR glad_vkCmdBeginRenderPass2KHR = NULL;
PFN_vkCmdBeginTransformFeedbackEXT glad_vkCmdBeginTransformFeedbackEXT = NULL;
PFN_vkCmdBindDescriptorSets glad_vkCmdBindDescriptorSets = NULL;
PFN_vkCmdBindIndexBuffer glad_vkCmdBindIndexBuffer = NULL;
PFN_vkCmdBindPipeline glad_vkCmdBindPipeline = NULL;
PFN_vkCmdBindShadingRateImageNV glad_vkCmdBindShadingRateImageNV = NULL;
PFN_vkCmdBindTransformFeedbackBuffersEXT glad_vkCmdBindTransformFeedbackBuffersEXT = NULL;
PFN_vkCmdBindVertexBuffers glad_vkCmdBindVertexBuffers = NULL;
PFN_vkCmdBlitImage glad_vkCmdBlitImage = NULL;
PFN_vkCmdBuildAccelerationStructureNV glad_vkCmdBuildAccelerationStructureNV = NULL;
PFN_vkCmdClearAttachments glad_vkCmdClearAttachments = NULL;
PFN_vkCmdClearColorImage glad_vkCmdClearColorImage = NULL;
PFN_vkCmdClearDepthStencilImage glad_vkCmdClearDepthStencilImage = NULL;
PFN_vkCmdCopyAccelerationStructureNV glad_vkCmdCopyAccelerationStructureNV = NULL;
PFN_vkCmdCopyBuffer glad_vkCmdCopyBuffer = NULL;
PFN_vkCmdCopyBufferToImage glad_vkCmdCopyBufferToImage = NULL;
PFN_vkCmdCopyImage glad_vkCmdCopyImage = NULL;
PFN_vkCmdCopyImageToBuffer glad_vkCmdCopyImageToBuffer = NULL;
PFN_vkCmdCopyQueryPoolResults glad_vkCmdCopyQueryPoolResults = NULL;
PFN_vkCmdDebugMarkerBeginEXT glad_vkCmdDebugMarkerBeginEXT = NULL;
PFN_vkCmdDebugMarkerEndEXT glad_vkCmdDebugMarkerEndEXT = NULL;
PFN_vkCmdDebugMarkerInsertEXT glad_vkCmdDebugMarkerInsertEXT = NULL;
PFN_vkCmdDispatch glad_vkCmdDispatch = NULL;
PFN_vkCmdDispatchBase glad_vkCmdDispatchBase = NULL;
PFN_vkCmdDispatchBaseKHR glad_vkCmdDispatchBaseKHR = NULL;
PFN_vkCmdDispatchIndirect glad_vkCmdDispatchIndirect = NULL;
PFN_vkCmdDraw glad_vkCmdDraw = NULL;
PFN_vkCmdDrawIndexed glad_vkCmdDrawIndexed = NULL;
PFN_vkCmdDrawIndexedIndirect glad_vkCmdDrawIndexedIndirect = NULL;
PFN_vkCmdDrawIndexedIndirectCountAMD glad_vkCmdDrawIndexedIndirectCountAMD = NULL;
PFN_vkCmdDrawIndexedIndirectCountKHR glad_vkCmdDrawIndexedIndirectCountKHR = NULL;
PFN_vkCmdDrawIndirect glad_vkCmdDrawIndirect = NULL;
PFN_vkCmdDrawIndirectByteCountEXT glad_vkCmdDrawIndirectByteCountEXT = NULL;
PFN_vkCmdDrawIndirectCountAMD glad_vkCmdDrawIndirectCountAMD = NULL;
PFN_vkCmdDrawIndirectCountKHR glad_vkCmdDrawIndirectCountKHR = NULL;
PFN_vkCmdDrawMeshTasksIndirectCountNV glad_vkCmdDrawMeshTasksIndirectCountNV = NULL;
PFN_vkCmdDrawMeshTasksIndirectNV glad_vkCmdDrawMeshTasksIndirectNV = NULL;
PFN_vkCmdDrawMeshTasksNV glad_vkCmdDrawMeshTasksNV = NULL;
PFN_vkCmdEndConditionalRenderingEXT glad_vkCmdEndConditionalRenderingEXT = NULL;
PFN_vkCmdEndDebugUtilsLabelEXT glad_vkCmdEndDebugUtilsLabelEXT = NULL;
PFN_vkCmdEndQuery glad_vkCmdEndQuery = NULL;
PFN_vkCmdEndQueryIndexedEXT glad_vkCmdEndQueryIndexedEXT = NULL;
PFN_vkCmdEndRenderPass glad_vkCmdEndRenderPass = NULL;
PFN_vkCmdEndRenderPass2KHR glad_vkCmdEndRenderPass2KHR = NULL;
PFN_vkCmdEndTransformFeedbackEXT glad_vkCmdEndTransformFeedbackEXT = NULL;
PFN_vkCmdExecuteCommands glad_vkCmdExecuteCommands = NULL;
PFN_vkCmdFillBuffer glad_vkCmdFillBuffer = NULL;
PFN_vkCmdInsertDebugUtilsLabelEXT glad_vkCmdInsertDebugUtilsLabelEXT = NULL;
PFN_vkCmdNextSubpass glad_vkCmdNextSubpass = NULL;
PFN_vkCmdNextSubpass2KHR glad_vkCmdNextSubpass2KHR = NULL;
PFN_vkCmdPipelineBarrier glad_vkCmdPipelineBarrier = NULL;
PFN_vkCmdProcessCommandsNVX glad_vkCmdProcessCommandsNVX = NULL;
PFN_vkCmdPushConstants glad_vkCmdPushConstants = NULL;
PFN_vkCmdPushDescriptorSetKHR glad_vkCmdPushDescriptorSetKHR = NULL;
PFN_vkCmdPushDescriptorSetWithTemplateKHR glad_vkCmdPushDescriptorSetWithTemplateKHR = NULL;
PFN_vkCmdReserveSpaceForCommandsNVX glad_vkCmdReserveSpaceForCommandsNVX = NULL;
PFN_vkCmdResetEvent glad_vkCmdResetEvent = NULL;
PFN_vkCmdResetQueryPool glad_vkCmdResetQueryPool = NULL;
PFN_vkCmdResolveImage glad_vkCmdResolveImage = NULL;
PFN_vkCmdSetBlendConstants glad_vkCmdSetBlendConstants = NULL;
PFN_vkCmdSetCheckpointNV glad_vkCmdSetCheckpointNV = NULL;
PFN_vkCmdSetCoarseSampleOrderNV glad_vkCmdSetCoarseSampleOrderNV = NULL;
PFN_vkCmdSetDepthBias glad_vkCmdSetDepthBias = NULL;
PFN_vkCmdSetDepthBounds glad_vkCmdSetDepthBounds = NULL;
PFN_vkCmdSetDeviceMask glad_vkCmdSetDeviceMask = NULL;
PFN_vkCmdSetDeviceMaskKHR glad_vkCmdSetDeviceMaskKHR = NULL;
PFN_vkCmdSetDiscardRectangleEXT glad_vkCmdSetDiscardRectangleEXT = NULL;
PFN_vkCmdSetEvent glad_vkCmdSetEvent = NULL;
PFN_vkCmdSetExclusiveScissorNV glad_vkCmdSetExclusiveScissorNV = NULL;
PFN_vkCmdSetLineWidth glad_vkCmdSetLineWidth = NULL;
PFN_vkCmdSetPerformanceMarkerINTEL glad_vkCmdSetPerformanceMarkerINTEL = NULL;
PFN_vkCmdSetPerformanceOverrideINTEL glad_vkCmdSetPerformanceOverrideINTEL = NULL;
PFN_vkCmdSetPerformanceStreamMarkerINTEL glad_vkCmdSetPerformanceStreamMarkerINTEL = NULL;
PFN_vkCmdSetSampleLocationsEXT glad_vkCmdSetSampleLocationsEXT = NULL;
PFN_vkCmdSetScissor glad_vkCmdSetScissor = NULL;
PFN_vkCmdSetStencilCompareMask glad_vkCmdSetStencilCompareMask = NULL;
PFN_vkCmdSetStencilReference glad_vkCmdSetStencilReference = NULL;
PFN_vkCmdSetStencilWriteMask glad_vkCmdSetStencilWriteMask = NULL;
PFN_vkCmdSetViewport glad_vkCmdSetViewport = NULL;
PFN_vkCmdSetViewportShadingRatePaletteNV glad_vkCmdSetViewportShadingRatePaletteNV = NULL;
PFN_vkCmdSetViewportWScalingNV glad_vkCmdSetViewportWScalingNV = NULL;
PFN_vkCmdTraceRaysNV glad_vkCmdTraceRaysNV = NULL;
PFN_vkCmdUpdateBuffer glad_vkCmdUpdateBuffer = NULL;
PFN_vkCmdWaitEvents glad_vkCmdWaitEvents = NULL;
PFN_vkCmdWriteAccelerationStructuresPropertiesNV glad_vkCmdWriteAccelerationStructuresPropertiesNV = NULL;
PFN_vkCmdWriteBufferMarkerAMD glad_vkCmdWriteBufferMarkerAMD = NULL;
PFN_vkCmdWriteTimestamp glad_vkCmdWriteTimestamp = NULL;
PFN_vkCompileDeferredNV glad_vkCompileDeferredNV = NULL;
PFN_vkCreateAccelerationStructureNV glad_vkCreateAccelerationStructureNV = NULL;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkCreateAndroidSurfaceKHR glad_vkCreateAndroidSurfaceKHR = NULL;

#endif
PFN_vkCreateBuffer glad_vkCreateBuffer = NULL;
PFN_vkCreateBufferView glad_vkCreateBufferView = NULL;
PFN_vkCreateCommandPool glad_vkCreateCommandPool = NULL;
PFN_vkCreateComputePipelines glad_vkCreateComputePipelines = NULL;
PFN_vkCreateDebugReportCallbackEXT glad_vkCreateDebugReportCallbackEXT = NULL;
PFN_vkCreateDebugUtilsMessengerEXT glad_vkCreateDebugUtilsMessengerEXT = NULL;
PFN_vkCreateDescriptorPool glad_vkCreateDescriptorPool = NULL;
PFN_vkCreateDescriptorSetLayout glad_vkCreateDescriptorSetLayout = NULL;
PFN_vkCreateDescriptorUpdateTemplate glad_vkCreateDescriptorUpdateTemplate = NULL;
PFN_vkCreateDescriptorUpdateTemplateKHR glad_vkCreateDescriptorUpdateTemplateKHR = NULL;
PFN_vkCreateDevice glad_vkCreateDevice = NULL;
PFN_vkCreateDisplayModeKHR glad_vkCreateDisplayModeKHR = NULL;
PFN_vkCreateDisplayPlaneSurfaceKHR glad_vkCreateDisplayPlaneSurfaceKHR = NULL;
PFN_vkCreateEvent glad_vkCreateEvent = NULL;
PFN_vkCreateFence glad_vkCreateFence = NULL;
PFN_vkCreateFramebuffer glad_vkCreateFramebuffer = NULL;
PFN_vkCreateGraphicsPipelines glad_vkCreateGraphicsPipelines = NULL;
PFN_vkCreateHeadlessSurfaceEXT glad_vkCreateHeadlessSurfaceEXT = NULL;
#if defined(VK_USE_PLATFORM_IOS_MVK)
PFN_vkCreateIOSSurfaceMVK glad_vkCreateIOSSurfaceMVK = NULL;

#endif
PFN_vkCreateImage glad_vkCreateImage = NULL;
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkCreateImagePipeSurfaceFUCHSIA glad_vkCreateImagePipeSurfaceFUCHSIA = NULL;

#endif
PFN_vkCreateImageView glad_vkCreateImageView = NULL;
PFN_vkCreateIndirectCommandsLayoutNVX glad_vkCreateIndirectCommandsLayoutNVX = NULL;
PFN_vkCreateInstance glad_vkCreateInstance = NULL;
#if defined(VK_USE_PLATFORM_MACOS_MVK)
PFN_vkCreateMacOSSurfaceMVK glad_vkCreateMacOSSurfaceMVK = NULL;

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
PFN_vkCreateMetalSurfaceEXT glad_vkCreateMetalSurfaceEXT = NULL;

#endif
PFN_vkCreateObjectTableNVX glad_vkCreateObjectTableNVX = NULL;
PFN_vkCreatePipelineCache glad_vkCreatePipelineCache = NULL;
PFN_vkCreatePipelineLayout glad_vkCreatePipelineLayout = NULL;
PFN_vkCreateQueryPool glad_vkCreateQueryPool = NULL;
PFN_vkCreateRayTracingPipelinesNV glad_vkCreateRayTracingPipelinesNV = NULL;
PFN_vkCreateRenderPass glad_vkCreateRenderPass = NULL;
PFN_vkCreateRenderPass2KHR glad_vkCreateRenderPass2KHR = NULL;
PFN_vkCreateSampler glad_vkCreateSampler = NULL;
PFN_vkCreateSamplerYcbcrConversion glad_vkCreateSamplerYcbcrConversion = NULL;
PFN_vkCreateSamplerYcbcrConversionKHR glad_vkCreateSamplerYcbcrConversionKHR = NULL;
PFN_vkCreateSemaphore glad_vkCreateSemaphore = NULL;
PFN_vkCreateShaderModule glad_vkCreateShaderModule = NULL;
PFN_vkCreateSharedSwapchainsKHR glad_vkCreateSharedSwapchainsKHR = NULL;
#if defined(VK_USE_PLATFORM_GGP)
PFN_vkCreateStreamDescriptorSurfaceGGP glad_vkCreateStreamDescriptorSurfaceGGP = NULL;

#endif
PFN_vkCreateSwapchainKHR glad_vkCreateSwapchainKHR = NULL;
PFN_vkCreateValidationCacheEXT glad_vkCreateValidationCacheEXT = NULL;
#if defined(VK_USE_PLATFORM_VI_NN)
PFN_vkCreateViSurfaceNN glad_vkCreateViSurfaceNN = NULL;

#endif
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
PFN_vkCreateWaylandSurfaceKHR glad_vkCreateWaylandSurfaceKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkCreateWin32SurfaceKHR glad_vkCreateWin32SurfaceKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
PFN_vkCreateXcbSurfaceKHR glad_vkCreateXcbSurfaceKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
PFN_vkCreateXlibSurfaceKHR glad_vkCreateXlibSurfaceKHR = NULL;

#endif
PFN_vkDebugMarkerSetObjectNameEXT glad_vkDebugMarkerSetObjectNameEXT = NULL;
PFN_vkDebugMarkerSetObjectTagEXT glad_vkDebugMarkerSetObjectTagEXT = NULL;
PFN_vkDebugReportMessageEXT glad_vkDebugReportMessageEXT = NULL;
PFN_vkDestroyAccelerationStructureNV glad_vkDestroyAccelerationStructureNV = NULL;
PFN_vkDestroyBuffer glad_vkDestroyBuffer = NULL;
PFN_vkDestroyBufferView glad_vkDestroyBufferView = NULL;
PFN_vkDestroyCommandPool glad_vkDestroyCommandPool = NULL;
PFN_vkDestroyDebugReportCallbackEXT glad_vkDestroyDebugReportCallbackEXT = NULL;
PFN_vkDestroyDebugUtilsMessengerEXT glad_vkDestroyDebugUtilsMessengerEXT = NULL;
PFN_vkDestroyDescriptorPool glad_vkDestroyDescriptorPool = NULL;
PFN_vkDestroyDescriptorSetLayout glad_vkDestroyDescriptorSetLayout = NULL;
PFN_vkDestroyDescriptorUpdateTemplate glad_vkDestroyDescriptorUpdateTemplate = NULL;
PFN_vkDestroyDescriptorUpdateTemplateKHR glad_vkDestroyDescriptorUpdateTemplateKHR = NULL;
PFN_vkDestroyDevice glad_vkDestroyDevice = NULL;
PFN_vkDestroyEvent glad_vkDestroyEvent = NULL;
PFN_vkDestroyFence glad_vkDestroyFence = NULL;
PFN_vkDestroyFramebuffer glad_vkDestroyFramebuffer = NULL;
PFN_vkDestroyImage glad_vkDestroyImage = NULL;
PFN_vkDestroyImageView glad_vkDestroyImageView = NULL;
PFN_vkDestroyIndirectCommandsLayoutNVX glad_vkDestroyIndirectCommandsLayoutNVX = NULL;
PFN_vkDestroyInstance glad_vkDestroyInstance = NULL;
PFN_vkDestroyObjectTableNVX glad_vkDestroyObjectTableNVX = NULL;
PFN_vkDestroyPipeline glad_vkDestroyPipeline = NULL;
PFN_vkDestroyPipelineCache glad_vkDestroyPipelineCache = NULL;
PFN_vkDestroyPipelineLayout glad_vkDestroyPipelineLayout = NULL;
PFN_vkDestroyQueryPool glad_vkDestroyQueryPool = NULL;
PFN_vkDestroyRenderPass glad_vkDestroyRenderPass = NULL;
PFN_vkDestroySampler glad_vkDestroySampler = NULL;
PFN_vkDestroySamplerYcbcrConversion glad_vkDestroySamplerYcbcrConversion = NULL;
PFN_vkDestroySamplerYcbcrConversionKHR glad_vkDestroySamplerYcbcrConversionKHR = NULL;
PFN_vkDestroySemaphore glad_vkDestroySemaphore = NULL;
PFN_vkDestroyShaderModule glad_vkDestroyShaderModule = NULL;
PFN_vkDestroySurfaceKHR glad_vkDestroySurfaceKHR = NULL;
PFN_vkDestroySwapchainKHR glad_vkDestroySwapchainKHR = NULL;
PFN_vkDestroyValidationCacheEXT glad_vkDestroyValidationCacheEXT = NULL;
PFN_vkDeviceWaitIdle glad_vkDeviceWaitIdle = NULL;
PFN_vkDisplayPowerControlEXT glad_vkDisplayPowerControlEXT = NULL;
PFN_vkEndCommandBuffer glad_vkEndCommandBuffer = NULL;
PFN_vkEnumerateDeviceExtensionProperties glad_vkEnumerateDeviceExtensionProperties = NULL;
PFN_vkEnumerateDeviceLayerProperties glad_vkEnumerateDeviceLayerProperties = NULL;
PFN_vkEnumerateInstanceExtensionProperties glad_vkEnumerateInstanceExtensionProperties = NULL;
PFN_vkEnumerateInstanceLayerProperties glad_vkEnumerateInstanceLayerProperties = NULL;
PFN_vkEnumerateInstanceVersion glad_vkEnumerateInstanceVersion = NULL;
PFN_vkEnumeratePhysicalDeviceGroups glad_vkEnumeratePhysicalDeviceGroups = NULL;
PFN_vkEnumeratePhysicalDeviceGroupsKHR glad_vkEnumeratePhysicalDeviceGroupsKHR = NULL;
PFN_vkEnumeratePhysicalDevices glad_vkEnumeratePhysicalDevices = NULL;
PFN_vkFlushMappedMemoryRanges glad_vkFlushMappedMemoryRanges = NULL;
PFN_vkFreeCommandBuffers glad_vkFreeCommandBuffers = NULL;
PFN_vkFreeDescriptorSets glad_vkFreeDescriptorSets = NULL;
PFN_vkFreeMemory glad_vkFreeMemory = NULL;
PFN_vkGetAccelerationStructureHandleNV glad_vkGetAccelerationStructureHandleNV = NULL;
PFN_vkGetAccelerationStructureMemoryRequirementsNV glad_vkGetAccelerationStructureMemoryRequirementsNV = NULL;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkGetAndroidHardwareBufferPropertiesANDROID glad_vkGetAndroidHardwareBufferPropertiesANDROID = NULL;

#endif
PFN_vkGetBufferDeviceAddressEXT glad_vkGetBufferDeviceAddressEXT = NULL;
PFN_vkGetBufferMemoryRequirements glad_vkGetBufferMemoryRequirements = NULL;
PFN_vkGetBufferMemoryRequirements2 glad_vkGetBufferMemoryRequirements2 = NULL;
PFN_vkGetBufferMemoryRequirements2KHR glad_vkGetBufferMemoryRequirements2KHR = NULL;
PFN_vkGetCalibratedTimestampsEXT glad_vkGetCalibratedTimestampsEXT = NULL;
PFN_vkGetDescriptorSetLayoutSupport glad_vkGetDescriptorSetLayoutSupport = NULL;
PFN_vkGetDescriptorSetLayoutSupportKHR glad_vkGetDescriptorSetLayoutSupportKHR = NULL;
PFN_vkGetDeviceGroupPeerMemoryFeatures glad_vkGetDeviceGroupPeerMemoryFeatures = NULL;
PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR glad_vkGetDeviceGroupPeerMemoryFeaturesKHR = NULL;
PFN_vkGetDeviceGroupPresentCapabilitiesKHR glad_vkGetDeviceGroupPresentCapabilitiesKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetDeviceGroupSurfacePresentModes2EXT glad_vkGetDeviceGroupSurfacePresentModes2EXT = NULL;

#endif
PFN_vkGetDeviceGroupSurfacePresentModesKHR glad_vkGetDeviceGroupSurfacePresentModesKHR = NULL;
PFN_vkGetDeviceMemoryCommitment glad_vkGetDeviceMemoryCommitment = NULL;
PFN_vkGetDeviceProcAddr glad_vkGetDeviceProcAddr = NULL;
PFN_vkGetDeviceQueue glad_vkGetDeviceQueue = NULL;
PFN_vkGetDeviceQueue2 glad_vkGetDeviceQueue2 = NULL;
PFN_vkGetDisplayModeProperties2KHR glad_vkGetDisplayModeProperties2KHR = NULL;
PFN_vkGetDisplayModePropertiesKHR glad_vkGetDisplayModePropertiesKHR = NULL;
PFN_vkGetDisplayPlaneCapabilities2KHR glad_vkGetDisplayPlaneCapabilities2KHR = NULL;
PFN_vkGetDisplayPlaneCapabilitiesKHR glad_vkGetDisplayPlaneCapabilitiesKHR = NULL;
PFN_vkGetDisplayPlaneSupportedDisplaysKHR glad_vkGetDisplayPlaneSupportedDisplaysKHR = NULL;
PFN_vkGetEventStatus glad_vkGetEventStatus = NULL;
PFN_vkGetFenceFdKHR glad_vkGetFenceFdKHR = NULL;
PFN_vkGetFenceStatus glad_vkGetFenceStatus = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetFenceWin32HandleKHR glad_vkGetFenceWin32HandleKHR = NULL;

#endif
PFN_vkGetImageDrmFormatModifierPropertiesEXT glad_vkGetImageDrmFormatModifierPropertiesEXT = NULL;
PFN_vkGetImageMemoryRequirements glad_vkGetImageMemoryRequirements = NULL;
PFN_vkGetImageMemoryRequirements2 glad_vkGetImageMemoryRequirements2 = NULL;
PFN_vkGetImageMemoryRequirements2KHR glad_vkGetImageMemoryRequirements2KHR = NULL;
PFN_vkGetImageSparseMemoryRequirements glad_vkGetImageSparseMemoryRequirements = NULL;
PFN_vkGetImageSparseMemoryRequirements2 glad_vkGetImageSparseMemoryRequirements2 = NULL;
PFN_vkGetImageSparseMemoryRequirements2KHR glad_vkGetImageSparseMemoryRequirements2KHR = NULL;
PFN_vkGetImageSubresourceLayout glad_vkGetImageSubresourceLayout = NULL;
PFN_vkGetImageViewHandleNVX glad_vkGetImageViewHandleNVX = NULL;
PFN_vkGetInstanceProcAddr glad_vkGetInstanceProcAddr = NULL;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkGetMemoryAndroidHardwareBufferANDROID glad_vkGetMemoryAndroidHardwareBufferANDROID = NULL;

#endif
PFN_vkGetMemoryFdKHR glad_vkGetMemoryFdKHR = NULL;
PFN_vkGetMemoryFdPropertiesKHR glad_vkGetMemoryFdPropertiesKHR = NULL;
PFN_vkGetMemoryHostPointerPropertiesEXT glad_vkGetMemoryHostPointerPropertiesEXT = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandleKHR glad_vkGetMemoryWin32HandleKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandleNV glad_vkGetMemoryWin32HandleNV = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandlePropertiesKHR glad_vkGetMemoryWin32HandlePropertiesKHR = NULL;

#endif
PFN_vkGetPastPresentationTimingGOOGLE glad_vkGetPastPresentationTimingGOOGLE = NULL;
PFN_vkGetPerformanceParameterINTEL glad_vkGetPerformanceParameterINTEL = NULL;
PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = NULL;
PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = NULL;
PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceDisplayProperties2KHR glad_vkGetPhysicalDeviceDisplayProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceDisplayPropertiesKHR glad_vkGetPhysicalDeviceDisplayPropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalBufferProperties glad_vkGetPhysicalDeviceExternalBufferProperties = NULL;
PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalFenceProperties glad_vkGetPhysicalDeviceExternalFenceProperties = NULL;
PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR glad_vkGetPhysicalDeviceExternalFencePropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV glad_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = NULL;
PFN_vkGetPhysicalDeviceExternalSemaphoreProperties glad_vkGetPhysicalDeviceExternalSemaphoreProperties = NULL;
PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceFeatures glad_vkGetPhysicalDeviceFeatures = NULL;
PFN_vkGetPhysicalDeviceFeatures2 glad_vkGetPhysicalDeviceFeatures2 = NULL;
PFN_vkGetPhysicalDeviceFeatures2KHR glad_vkGetPhysicalDeviceFeatures2KHR = NULL;
PFN_vkGetPhysicalDeviceFormatProperties glad_vkGetPhysicalDeviceFormatProperties = NULL;
PFN_vkGetPhysicalDeviceFormatProperties2 glad_vkGetPhysicalDeviceFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceFormatProperties2KHR glad_vkGetPhysicalDeviceFormatProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX glad_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties glad_vkGetPhysicalDeviceImageFormatProperties = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties2 glad_vkGetPhysicalDeviceImageFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties2KHR glad_vkGetPhysicalDeviceImageFormatProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties glad_vkGetPhysicalDeviceMemoryProperties = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties2 glad_vkGetPhysicalDeviceMemoryProperties2 = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties2KHR glad_vkGetPhysicalDeviceMemoryProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT glad_vkGetPhysicalDeviceMultisamplePropertiesEXT = NULL;
PFN_vkGetPhysicalDevicePresentRectanglesKHR glad_vkGetPhysicalDevicePresentRectanglesKHR = NULL;
PFN_vkGetPhysicalDeviceProperties glad_vkGetPhysicalDeviceProperties = NULL;
PFN_vkGetPhysicalDeviceProperties2 glad_vkGetPhysicalDeviceProperties2 = NULL;
PFN_vkGetPhysicalDeviceProperties2KHR glad_vkGetPhysicalDeviceProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties glad_vkGetPhysicalDeviceQueueFamilyProperties = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties2 glad_vkGetPhysicalDeviceQueueFamilyProperties2 = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties glad_vkGetPhysicalDeviceSparseImageFormatProperties = NULL;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV glad_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = NULL;
PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT = NULL;
PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceFormats2KHR glad_vkGetPhysicalDeviceSurfaceFormats2KHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceFormatsKHR glad_vkGetPhysicalDeviceSurfaceFormatsKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT glad_vkGetPhysicalDeviceSurfacePresentModes2EXT = NULL;

#endif
PFN_vkGetPhysicalDeviceSurfacePresentModesKHR glad_vkGetPhysicalDeviceSurfacePresentModesKHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceSupportKHR glad_vkGetPhysicalDeviceSurfaceSupportKHR = NULL;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR glad_vkGetPhysicalDeviceWaylandPresentationSupportKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR glad_vkGetPhysicalDeviceWin32PresentationSupportKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR glad_vkGetPhysicalDeviceXcbPresentationSupportKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR glad_vkGetPhysicalDeviceXlibPresentationSupportKHR = NULL;

#endif
PFN_vkGetPipelineCacheData glad_vkGetPipelineCacheData = NULL;
PFN_vkGetQueryPoolResults glad_vkGetQueryPoolResults = NULL;
PFN_vkGetQueueCheckpointDataNV glad_vkGetQueueCheckpointDataNV = NULL;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
PFN_vkGetRandROutputDisplayEXT glad_vkGetRandROutputDisplayEXT = NULL;

#endif
PFN_vkGetRayTracingShaderGroupHandlesNV glad_vkGetRayTracingShaderGroupHandlesNV = NULL;
PFN_vkGetRefreshCycleDurationGOOGLE glad_vkGetRefreshCycleDurationGOOGLE = NULL;
PFN_vkGetRenderAreaGranularity glad_vkGetRenderAreaGranularity = NULL;
PFN_vkGetSemaphoreFdKHR glad_vkGetSemaphoreFdKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetSemaphoreWin32HandleKHR glad_vkGetSemaphoreWin32HandleKHR = NULL;

#endif
PFN_vkGetShaderInfoAMD glad_vkGetShaderInfoAMD = NULL;
PFN_vkGetSwapchainCounterEXT glad_vkGetSwapchainCounterEXT = NULL;
PFN_vkGetSwapchainImagesKHR glad_vkGetSwapchainImagesKHR = NULL;
PFN_vkGetSwapchainStatusKHR glad_vkGetSwapchainStatusKHR = NULL;
PFN_vkGetValidationCacheDataEXT glad_vkGetValidationCacheDataEXT = NULL;
PFN_vkImportFenceFdKHR glad_vkImportFenceFdKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkImportFenceWin32HandleKHR glad_vkImportFenceWin32HandleKHR = NULL;

#endif
PFN_vkImportSemaphoreFdKHR glad_vkImportSemaphoreFdKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkImportSemaphoreWin32HandleKHR glad_vkImportSemaphoreWin32HandleKHR = NULL;

#endif
PFN_vkInitializePerformanceApiINTEL glad_vkInitializePerformanceApiINTEL = NULL;
PFN_vkInvalidateMappedMemoryRanges glad_vkInvalidateMappedMemoryRanges = NULL;
PFN_vkMapMemory glad_vkMapMemory = NULL;
PFN_vkMergePipelineCaches glad_vkMergePipelineCaches = NULL;
PFN_vkMergeValidationCachesEXT glad_vkMergeValidationCachesEXT = NULL;
PFN_vkQueueBeginDebugUtilsLabelEXT glad_vkQueueBeginDebugUtilsLabelEXT = NULL;
PFN_vkQueueBindSparse glad_vkQueueBindSparse = NULL;
PFN_vkQueueEndDebugUtilsLabelEXT glad_vkQueueEndDebugUtilsLabelEXT = NULL;
PFN_vkQueueInsertDebugUtilsLabelEXT glad_vkQueueInsertDebugUtilsLabelEXT = NULL;
PFN_vkQueuePresentKHR glad_vkQueuePresentKHR = NULL;
PFN_vkQueueSetPerformanceConfigurationINTEL glad_vkQueueSetPerformanceConfigurationINTEL = NULL;
PFN_vkQueueSubmit glad_vkQueueSubmit = NULL;
PFN_vkQueueWaitIdle glad_vkQueueWaitIdle = NULL;
PFN_vkRegisterDeviceEventEXT glad_vkRegisterDeviceEventEXT = NULL;
PFN_vkRegisterDisplayEventEXT glad_vkRegisterDisplayEventEXT = NULL;
PFN_vkRegisterObjectsNVX glad_vkRegisterObjectsNVX = NULL;
PFN_vkReleaseDisplayEXT glad_vkReleaseDisplayEXT = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkReleaseFullScreenExclusiveModeEXT glad_vkReleaseFullScreenExclusiveModeEXT = NULL;

#endif
PFN_vkReleasePerformanceConfigurationINTEL glad_vkReleasePerformanceConfigurationINTEL = NULL;
PFN_vkResetCommandBuffer glad_vkResetCommandBuffer = NULL;
PFN_vkResetCommandPool glad_vkResetCommandPool = NULL;
PFN_vkResetDescriptorPool glad_vkResetDescriptorPool = NULL;
PFN_vkResetEvent glad_vkResetEvent = NULL;
PFN_vkResetFences glad_vkResetFences = NULL;
PFN_vkResetQueryPoolEXT glad_vkResetQueryPoolEXT = NULL;
PFN_vkSetDebugUtilsObjectNameEXT glad_vkSetDebugUtilsObjectNameEXT = NULL;
PFN_vkSetDebugUtilsObjectTagEXT glad_vkSetDebugUtilsObjectTagEXT = NULL;
PFN_vkSetEvent glad_vkSetEvent = NULL;
PFN_vkSetHdrMetadataEXT glad_vkSetHdrMetadataEXT = NULL;
PFN_vkSetLocalDimmingAMD glad_vkSetLocalDimmingAMD = NULL;
PFN_vkSubmitDebugUtilsMessageEXT glad_vkSubmitDebugUtilsMessageEXT = NULL;
PFN_vkTrimCommandPool glad_vkTrimCommandPool = NULL;
PFN_vkTrimCommandPoolKHR glad_vkTrimCommandPoolKHR = NULL;
PFN_vkUninitializePerformanceApiINTEL glad_vkUninitializePerformanceApiINTEL = NULL;
PFN_vkUnmapMemory glad_vkUnmapMemory = NULL;
PFN_vkUnregisterObjectsNVX glad_vkUnregisterObjectsNVX = NULL;
PFN_vkUpdateDescriptorSetWithTemplate glad_vkUpdateDescriptorSetWithTemplate = NULL;
PFN_vkUpdateDescriptorSetWithTemplateKHR glad_vkUpdateDescriptorSetWithTemplateKHR = NULL;
PFN_vkUpdateDescriptorSets glad_vkUpdateDescriptorSets = NULL;
PFN_vkWaitForFences glad_vkWaitForFences = NULL;


static void glad_vk_load_VK_VERSION_1_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VERSION_1_0) return;
    glad_vkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers) load(userptr, "vkAllocateCommandBuffers");
    glad_vkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets) load(userptr, "vkAllocateDescriptorSets");
    glad_vkAllocateMemory = (PFN_vkAllocateMemory) load(userptr, "vkAllocateMemory");
    glad_vkBeginCommandBuffer = (PFN_vkBeginCommandBuffer) load(userptr, "vkBeginCommandBuffer");
    glad_vkBindBufferMemory = (PFN_vkBindBufferMemory) load(userptr, "vkBindBufferMemory");
    glad_vkBindImageMemory = (PFN_vkBindImageMemory) load(userptr, "vkBindImageMemory");
    glad_vkCmdBeginQuery = (PFN_vkCmdBeginQuery) load(userptr, "vkCmdBeginQuery");
    glad_vkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass) load(userptr, "vkCmdBeginRenderPass");
    glad_vkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets) load(userptr, "vkCmdBindDescriptorSets");
    glad_vkCmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer) load(userptr, "vkCmdBindIndexBuffer");
    glad_vkCmdBindPipeline = (PFN_vkCmdBindPipeline) load(userptr, "vkCmdBindPipeline");
    glad_vkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers) load(userptr, "vkCmdBindVertexBuffers");
    glad_vkCmdBlitImage = (PFN_vkCmdBlitImage) load(userptr, "vkCmdBlitImage");
    glad_vkCmdClearAttachments = (PFN_vkCmdClearAttachments) load(userptr, "vkCmdClearAttachments");
    glad_vkCmdClearColorImage = (PFN_vkCmdClearColorImage) load(userptr, "vkCmdClearColorImage");
    glad_vkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage) load(userptr, "vkCmdClearDepthStencilImage");
    glad_vkCmdCopyBuffer = (PFN_vkCmdCopyBuffer) load(userptr, "vkCmdCopyBuffer");
    glad_vkCmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage) load(userptr, "vkCmdCopyBufferToImage");
    glad_vkCmdCopyImage = (PFN_vkCmdCopyImage) load(userptr, "vkCmdCopyImage");
    glad_vkCmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer) load(userptr, "vkCmdCopyImageToBuffer");
    glad_vkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults) load(userptr, "vkCmdCopyQueryPoolResults");
    glad_vkCmdDispatch = (PFN_vkCmdDispatch) load(userptr, "vkCmdDispatch");
    glad_vkCmdDispatchIndirect = (PFN_vkCmdDispatchIndirect) load(userptr, "vkCmdDispatchIndirect");
    glad_vkCmdDraw = (PFN_vkCmdDraw) load(userptr, "vkCmdDraw");
    glad_vkCmdDrawIndexed = (PFN_vkCmdDrawIndexed) load(userptr, "vkCmdDrawIndexed");
    glad_vkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect) load(userptr, "vkCmdDrawIndexedIndirect");
    glad_vkCmdDrawIndirect = (PFN_vkCmdDrawIndirect) load(userptr, "vkCmdDrawIndirect");
    glad_vkCmdEndQuery = (PFN_vkCmdEndQuery) load(userptr, "vkCmdEndQuery");
    glad_vkCmdEndRenderPass = (PFN_vkCmdEndRenderPass) load(userptr, "vkCmdEndRenderPass");
    glad_vkCmdExecuteCommands = (PFN_vkCmdExecuteCommands) load(userptr, "vkCmdExecuteCommands");
    glad_vkCmdFillBuffer = (PFN_vkCmdFillBuffer) load(userptr, "vkCmdFillBuffer");
    glad_vkCmdNextSubpass = (PFN_vkCmdNextSubpass) load(userptr, "vkCmdNextSubpass");
    glad_vkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier) load(userptr, "vkCmdPipelineBarrier");
    glad_vkCmdPushConstants = (PFN_vkCmdPushConstants) load(userptr, "vkCmdPushConstants");
    glad_vkCmdResetEvent = (PFN_vkCmdResetEvent) load(userptr, "vkCmdResetEvent");
    glad_vkCmdResetQueryPool = (PFN_vkCmdResetQueryPool) load(userptr, "vkCmdResetQueryPool");
    glad_vkCmdResolveImage = (PFN_vkCmdResolveImage) load(userptr, "vkCmdResolveImage");
    glad_vkCmdSetBlendConstants = (PFN_vkCmdSetBlendConstants) load(userptr, "vkCmdSetBlendConstants");
    glad_vkCmdSetDepthBias = (PFN_vkCmdSetDepthBias) load(userptr, "vkCmdSetDepthBias");
    glad_vkCmdSetDepthBounds = (PFN_vkCmdSetDepthBounds) load(userptr, "vkCmdSetDepthBounds");
    glad_vkCmdSetEvent = (PFN_vkCmdSetEvent) load(userptr, "vkCmdSetEvent");
    glad_vkCmdSetLineWidth = (PFN_vkCmdSetLineWidth) load(userptr, "vkCmdSetLineWidth");
    glad_vkCmdSetScissor = (PFN_vkCmdSetScissor) load(userptr, "vkCmdSetScissor");
    glad_vkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask) load(userptr, "vkCmdSetStencilCompareMask");
    glad_vkCmdSetStencilReference = (PFN_vkCmdSetStencilReference) load(userptr, "vkCmdSetStencilReference");
    glad_vkCmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask) load(userptr, "vkCmdSetStencilWriteMask");
    glad_vkCmdSetViewport = (PFN_vkCmdSetViewport) load(userptr, "vkCmdSetViewport");
    glad_vkCmdUpdateBuffer = (PFN_vkCmdUpdateBuffer) load(userptr, "vkCmdUpdateBuffer");
    glad_vkCmdWaitEvents = (PFN_vkCmdWaitEvents) load(userptr, "vkCmdWaitEvents");
    glad_vkCmdWriteTimestamp = (PFN_vkCmdWriteTimestamp) load(userptr, "vkCmdWriteTimestamp");
    glad_vkCreateBuffer = (PFN_vkCreateBuffer) load(userptr, "vkCreateBuffer");
    glad_vkCreateBufferView = (PFN_vkCreateBufferView) load(userptr, "vkCreateBufferView");
    glad_vkCreateCommandPool = (PFN_vkCreateCommandPool) load(userptr, "vkCreateCommandPool");
    glad_vkCreateComputePipelines = (PFN_vkCreateComputePipelines) load(userptr, "vkCreateComputePipelines");
    glad_vkCreateDescriptorPool = (PFN_vkCreateDescriptorPool) load(userptr, "vkCreateDescriptorPool");
    glad_vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout) load(userptr, "vkCreateDescriptorSetLayout");
    glad_vkCreateDevice = (PFN_vkCreateDevice) load(userptr, "vkCreateDevice");
    glad_vkCreateEvent = (PFN_vkCreateEvent) load(userptr, "vkCreateEvent");
    glad_vkCreateFence = (PFN_vkCreateFence) load(userptr, "vkCreateFence");
    glad_vkCreateFramebuffer = (PFN_vkCreateFramebuffer) load(userptr, "vkCreateFramebuffer");
    glad_vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines) load(userptr, "vkCreateGraphicsPipelines");
    glad_vkCreateImage = (PFN_vkCreateImage) load(userptr, "vkCreateImage");
    glad_vkCreateImageView = (PFN_vkCreateImageView) load(userptr, "vkCreateImageView");
    glad_vkCreateInstance = (PFN_vkCreateInstance) load(userptr, "vkCreateInstance");
    glad_vkCreatePipelineCache = (PFN_vkCreatePipelineCache) load(userptr, "vkCreatePipelineCache");
    glad_vkCreatePipelineLayout = (PFN_vkCreatePipelineLayout) load(userptr, "vkCreatePipelineLayout");
    glad_vkCreateQueryPool = (PFN_vkCreateQueryPool) load(userptr, "vkCreateQueryPool");
    glad_vkCreateRenderPass = (PFN_vkCreateRenderPass) load(userptr, "vkCreateRenderPass");
    glad_vkCreateSampler = (PFN_vkCreateSampler) load(userptr, "vkCreateSampler");
    glad_vkCreateSemaphore = (PFN_vkCreateSemaphore) load(userptr, "vkCreateSemaphore");
    glad_vkCreateShaderModule = (PFN_vkCreateShaderModule) load(userptr, "vkCreateShaderModule");
    glad_vkDestroyBuffer = (PFN_vkDestroyBuffer) load(userptr, "vkDestroyBuffer");
    glad_vkDestroyBufferView = (PFN_vkDestroyBufferView) load(userptr, "vkDestroyBufferView");
    glad_vkDestroyCommandPool = (PFN_vkDestroyCommandPool) load(userptr, "vkDestroyCommandPool");
    glad_vkDestroyDescriptorPool = (PFN_vkDestroyDescriptorPool) load(userptr, "vkDestroyDescriptorPool");
    glad_vkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout) load(userptr, "vkDestroyDescriptorSetLayout");
    glad_vkDestroyDevice = (PFN_vkDestroyDevice) load(userptr, "vkDestroyDevice");
    glad_vkDestroyEvent = (PFN_vkDestroyEvent) load(userptr, "vkDestroyEvent");
    glad_vkDestroyFence = (PFN_vkDestroyFence) load(userptr, "vkDestroyFence");
    glad_vkDestroyFramebuffer = (PFN_vkDestroyFramebuffer) load(userptr, "vkDestroyFramebuffer");
    glad_vkDestroyImage = (PFN_vkDestroyImage) load(userptr, "vkDestroyImage");
    glad_vkDestroyImageView = (PFN_vkDestroyImageView) load(userptr, "vkDestroyImageView");
    glad_vkDestroyInstance = (PFN_vkDestroyInstance) load(userptr, "vkDestroyInstance");
    glad_vkDestroyPipeline = (PFN_vkDestroyPipeline) load(userptr, "vkDestroyPipeline");
    glad_vkDestroyPipelineCache = (PFN_vkDestroyPipelineCache) load(userptr, "vkDestroyPipelineCache");
    glad_vkDestroyPipelineLayout = (PFN_vkDestroyPipelineLayout) load(userptr, "vkDestroyPipelineLayout");
    glad_vkDestroyQueryPool = (PFN_vkDestroyQueryPool) load(userptr, "vkDestroyQueryPool");
    glad_vkDestroyRenderPass = (PFN_vkDestroyRenderPass) load(userptr, "vkDestroyRenderPass");
    glad_vkDestroySampler = (PFN_vkDestroySampler) load(userptr, "vkDestroySampler");
    glad_vkDestroySemaphore = (PFN_vkDestroySemaphore) load(userptr, "vkDestroySemaphore");
    glad_vkDestroyShaderModule = (PFN_vkDestroyShaderModule) load(userptr, "vkDestroyShaderModule");
    glad_vkDeviceWaitIdle = (PFN_vkDeviceWaitIdle) load(userptr, "vkDeviceWaitIdle");
    glad_vkEndCommandBuffer = (PFN_vkEndCommandBuffer) load(userptr, "vkEndCommandBuffer");
    glad_vkEnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties) load(userptr, "vkEnumerateDeviceExtensionProperties");
    glad_vkEnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties) load(userptr, "vkEnumerateDeviceLayerProperties");
    glad_vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties) load(userptr, "vkEnumerateInstanceExtensionProperties");
    glad_vkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties) load(userptr, "vkEnumerateInstanceLayerProperties");
    glad_vkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices) load(userptr, "vkEnumeratePhysicalDevices");
    glad_vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges) load(userptr, "vkFlushMappedMemoryRanges");
    glad_vkFreeCommandBuffers = (PFN_vkFreeCommandBuffers) load(userptr, "vkFreeCommandBuffers");
    glad_vkFreeDescriptorSets = (PFN_vkFreeDescriptorSets) load(userptr, "vkFreeDescriptorSets");
    glad_vkFreeMemory = (PFN_vkFreeMemory) load(userptr, "vkFreeMemory");
    glad_vkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements) load(userptr, "vkGetBufferMemoryRequirements");
    glad_vkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment) load(userptr, "vkGetDeviceMemoryCommitment");
    glad_vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr) load(userptr, "vkGetDeviceProcAddr");
    glad_vkGetDeviceQueue = (PFN_vkGetDeviceQueue) load(userptr, "vkGetDeviceQueue");
    glad_vkGetEventStatus = (PFN_vkGetEventStatus) load(userptr, "vkGetEventStatus");
    glad_vkGetFenceStatus = (PFN_vkGetFenceStatus) load(userptr, "vkGetFenceStatus");
    glad_vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements) load(userptr, "vkGetImageMemoryRequirements");
    glad_vkGetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements) load(userptr, "vkGetImageSparseMemoryRequirements");
    glad_vkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout) load(userptr, "vkGetImageSubresourceLayout");
    glad_vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr) load(userptr, "vkGetInstanceProcAddr");
    glad_vkGetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures) load(userptr, "vkGetPhysicalDeviceFeatures");
    glad_vkGetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties) load(userptr, "vkGetPhysicalDeviceFormatProperties");
    glad_vkGetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties) load(userptr, "vkGetPhysicalDeviceImageFormatProperties");
    glad_vkGetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties) load(userptr, "vkGetPhysicalDeviceMemoryProperties");
    glad_vkGetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties) load(userptr, "vkGetPhysicalDeviceProperties");
    glad_vkGetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties");
    glad_vkGetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties");
    glad_vkGetPipelineCacheData = (PFN_vkGetPipelineCacheData) load(userptr, "vkGetPipelineCacheData");
    glad_vkGetQueryPoolResults = (PFN_vkGetQueryPoolResults) load(userptr, "vkGetQueryPoolResults");
    glad_vkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity) load(userptr, "vkGetRenderAreaGranularity");
    glad_vkInvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges) load(userptr, "vkInvalidateMappedMemoryRanges");
    glad_vkMapMemory = (PFN_vkMapMemory) load(userptr, "vkMapMemory");
    glad_vkMergePipelineCaches = (PFN_vkMergePipelineCaches) load(userptr, "vkMergePipelineCaches");
    glad_vkQueueBindSparse = (PFN_vkQueueBindSparse) load(userptr, "vkQueueBindSparse");
    glad_vkQueueSubmit = (PFN_vkQueueSubmit) load(userptr, "vkQueueSubmit");
    glad_vkQueueWaitIdle = (PFN_vkQueueWaitIdle) load(userptr, "vkQueueWaitIdle");
    glad_vkResetCommandBuffer = (PFN_vkResetCommandBuffer) load(userptr, "vkResetCommandBuffer");
    glad_vkResetCommandPool = (PFN_vkResetCommandPool) load(userptr, "vkResetCommandPool");
    glad_vkResetDescriptorPool = (PFN_vkResetDescriptorPool) load(userptr, "vkResetDescriptorPool");
    glad_vkResetEvent = (PFN_vkResetEvent) load(userptr, "vkResetEvent");
    glad_vkResetFences = (PFN_vkResetFences) load(userptr, "vkResetFences");
    glad_vkSetEvent = (PFN_vkSetEvent) load(userptr, "vkSetEvent");
    glad_vkUnmapMemory = (PFN_vkUnmapMemory) load(userptr, "vkUnmapMemory");
    glad_vkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets) load(userptr, "vkUpdateDescriptorSets");
    glad_vkWaitForFences = (PFN_vkWaitForFences) load(userptr, "vkWaitForFences");
}
static void glad_vk_load_VK_VERSION_1_1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VERSION_1_1) return;
    glad_vkBindBufferMemory2 = (PFN_vkBindBufferMemory2) load(userptr, "vkBindBufferMemory2");
    glad_vkBindImageMemory2 = (PFN_vkBindImageMemory2) load(userptr, "vkBindImageMemory2");
    glad_vkCmdDispatchBase = (PFN_vkCmdDispatchBase) load(userptr, "vkCmdDispatchBase");
    glad_vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask) load(userptr, "vkCmdSetDeviceMask");
    glad_vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate) load(userptr, "vkCreateDescriptorUpdateTemplate");
    glad_vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion) load(userptr, "vkCreateSamplerYcbcrConversion");
    glad_vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate) load(userptr, "vkDestroyDescriptorUpdateTemplate");
    glad_vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion) load(userptr, "vkDestroySamplerYcbcrConversion");
    glad_vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion) load(userptr, "vkEnumerateInstanceVersion");
    glad_vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups) load(userptr, "vkEnumeratePhysicalDeviceGroups");
    glad_vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2) load(userptr, "vkGetBufferMemoryRequirements2");
    glad_vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport) load(userptr, "vkGetDescriptorSetLayoutSupport");
    glad_vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures) load(userptr, "vkGetDeviceGroupPeerMemoryFeatures");
    glad_vkGetDeviceQueue2 = (PFN_vkGetDeviceQueue2) load(userptr, "vkGetDeviceQueue2");
    glad_vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2) load(userptr, "vkGetImageMemoryRequirements2");
    glad_vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2) load(userptr, "vkGetImageSparseMemoryRequirements2");
    glad_vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties) load(userptr, "vkGetPhysicalDeviceExternalBufferProperties");
    glad_vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties) load(userptr, "vkGetPhysicalDeviceExternalFenceProperties");
    glad_vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties) load(userptr, "vkGetPhysicalDeviceExternalSemaphoreProperties");
    glad_vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2) load(userptr, "vkGetPhysicalDeviceFeatures2");
    glad_vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2) load(userptr, "vkGetPhysicalDeviceFormatProperties2");
    glad_vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2) load(userptr, "vkGetPhysicalDeviceImageFormatProperties2");
    glad_vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2) load(userptr, "vkGetPhysicalDeviceMemoryProperties2");
    glad_vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2) load(userptr, "vkGetPhysicalDeviceProperties2");
    glad_vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties2");
    glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties2");
    glad_vkTrimCommandPool = (PFN_vkTrimCommandPool) load(userptr, "vkTrimCommandPool");
    glad_vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate) load(userptr, "vkUpdateDescriptorSetWithTemplate");
}
static void glad_vk_load_VK_AMD_buffer_marker( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_buffer_marker) return;
    glad_vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD) load(userptr, "vkCmdWriteBufferMarkerAMD");
}
static void glad_vk_load_VK_AMD_display_native_hdr( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_display_native_hdr) return;
    glad_vkSetLocalDimmingAMD = (PFN_vkSetLocalDimmingAMD) load(userptr, "vkSetLocalDimmingAMD");
}
static void glad_vk_load_VK_AMD_draw_indirect_count( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_draw_indirect_count) return;
    glad_vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD) load(userptr, "vkCmdDrawIndexedIndirectCountAMD");
    glad_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR) load(userptr, "vkCmdDrawIndexedIndirectCountKHR");
    glad_vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD) load(userptr, "vkCmdDrawIndirectCountAMD");
    glad_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR) load(userptr, "vkCmdDrawIndirectCountKHR");
}
static void glad_vk_load_VK_AMD_shader_info( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_shader_info) return;
    glad_vkGetShaderInfoAMD = (PFN_vkGetShaderInfoAMD) load(userptr, "vkGetShaderInfoAMD");
}
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
static void glad_vk_load_VK_ANDROID_external_memory_android_hardware_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_ANDROID_external_memory_android_hardware_buffer) return;
    glad_vkGetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID) load(userptr, "vkGetAndroidHardwareBufferPropertiesANDROID");
    glad_vkGetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID) load(userptr, "vkGetMemoryAndroidHardwareBufferANDROID");
}

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
static void glad_vk_load_VK_EXT_acquire_xlib_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_acquire_xlib_display) return;
    glad_vkAcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT) load(userptr, "vkAcquireXlibDisplayEXT");
    glad_vkGetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT) load(userptr, "vkGetRandROutputDisplayEXT");
}

#endif
static void glad_vk_load_VK_EXT_buffer_device_address( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_buffer_device_address) return;
    glad_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT) load(userptr, "vkGetBufferDeviceAddressEXT");
}
static void glad_vk_load_VK_EXT_calibrated_timestamps( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_calibrated_timestamps) return;
    glad_vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT) load(userptr, "vkGetCalibratedTimestampsEXT");
    glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT) load(userptr, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
}
static void glad_vk_load_VK_EXT_conditional_rendering( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_conditional_rendering) return;
    glad_vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT) load(userptr, "vkCmdBeginConditionalRenderingEXT");
    glad_vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT) load(userptr, "vkCmdEndConditionalRenderingEXT");
}
static void glad_vk_load_VK_EXT_debug_marker( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_debug_marker) return;
    glad_vkCmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT) load(userptr, "vkCmdDebugMarkerBeginEXT");
    glad_vkCmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT) load(userptr, "vkCmdDebugMarkerEndEXT");
    glad_vkCmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT) load(userptr, "vkCmdDebugMarkerInsertEXT");
    glad_vkDebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT) load(userptr, "vkDebugMarkerSetObjectNameEXT");
    glad_vkDebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT) load(userptr, "vkDebugMarkerSetObjectTagEXT");
}
static void glad_vk_load_VK_EXT_debug_report( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_debug_report) return;
    glad_vkCreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT) load(userptr, "vkCreateDebugReportCallbackEXT");
    glad_vkDebugReportMessageEXT = (PFN_vkDebugReportMessageEXT) load(userptr, "vkDebugReportMessageEXT");
    glad_vkDestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT) load(userptr, "vkDestroyDebugReportCallbackEXT");
}
static void glad_vk_load_VK_EXT_debug_utils( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_debug_utils) return;
    glad_vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT) load(userptr, "vkCmdBeginDebugUtilsLabelEXT");
    glad_vkCmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT) load(userptr, "vkCmdEndDebugUtilsLabelEXT");
    glad_vkCmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT) load(userptr, "vkCmdInsertDebugUtilsLabelEXT");
    glad_vkCreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT) load(userptr, "vkCreateDebugUtilsMessengerEXT");
    glad_vkDestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT) load(userptr, "vkDestroyDebugUtilsMessengerEXT");
    glad_vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT) load(userptr, "vkQueueBeginDebugUtilsLabelEXT");
    glad_vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT) load(userptr, "vkQueueEndDebugUtilsLabelEXT");
    glad_vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT) load(userptr, "vkQueueInsertDebugUtilsLabelEXT");
    glad_vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT) load(userptr, "vkSetDebugUtilsObjectNameEXT");
    glad_vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT) load(userptr, "vkSetDebugUtilsObjectTagEXT");
    glad_vkSubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT) load(userptr, "vkSubmitDebugUtilsMessageEXT");
}
static void glad_vk_load_VK_EXT_direct_mode_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_direct_mode_display) return;
    glad_vkReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT) load(userptr, "vkReleaseDisplayEXT");
}
static void glad_vk_load_VK_EXT_discard_rectangles( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_discard_rectangles) return;
    glad_vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT) load(userptr, "vkCmdSetDiscardRectangleEXT");
}
static void glad_vk_load_VK_EXT_display_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_display_control) return;
    glad_vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT) load(userptr, "vkDisplayPowerControlEXT");
    glad_vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT) load(userptr, "vkGetSwapchainCounterEXT");
    glad_vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT) load(userptr, "vkRegisterDeviceEventEXT");
    glad_vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT) load(userptr, "vkRegisterDisplayEventEXT");
}
static void glad_vk_load_VK_EXT_display_surface_counter( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_display_surface_counter) return;
    glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT) load(userptr, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
}
static void glad_vk_load_VK_EXT_external_memory_host( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_external_memory_host) return;
    glad_vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT) load(userptr, "vkGetMemoryHostPointerPropertiesEXT");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_EXT_full_screen_exclusive( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_full_screen_exclusive) return;
    glad_vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT) load(userptr, "vkAcquireFullScreenExclusiveModeEXT");
    glad_vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT) load(userptr, "vkGetDeviceGroupSurfacePresentModes2EXT");
    glad_vkGetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT) load(userptr, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
    glad_vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT) load(userptr, "vkReleaseFullScreenExclusiveModeEXT");
}

#endif
static void glad_vk_load_VK_EXT_hdr_metadata( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_hdr_metadata) return;
    glad_vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT) load(userptr, "vkSetHdrMetadataEXT");
}
static void glad_vk_load_VK_EXT_headless_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_headless_surface) return;
    glad_vkCreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT) load(userptr, "vkCreateHeadlessSurfaceEXT");
}
static void glad_vk_load_VK_EXT_host_query_reset( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_host_query_reset) return;
    glad_vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT) load(userptr, "vkResetQueryPoolEXT");
}
static void glad_vk_load_VK_EXT_image_drm_format_modifier( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_image_drm_format_modifier) return;
    glad_vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT) load(userptr, "vkGetImageDrmFormatModifierPropertiesEXT");
}
#if defined(VK_USE_PLATFORM_METAL_EXT)
static void glad_vk_load_VK_EXT_metal_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_metal_surface) return;
    glad_vkCreateMetalSurfaceEXT = (PFN_vkCreateMetalSurfaceEXT) load(userptr, "vkCreateMetalSurfaceEXT");
}

#endif
static void glad_vk_load_VK_EXT_sample_locations( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_sample_locations) return;
    glad_vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT) load(userptr, "vkCmdSetSampleLocationsEXT");
    glad_vkGetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT) load(userptr, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
}
static void glad_vk_load_VK_EXT_transform_feedback( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_transform_feedback) return;
    glad_vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT) load(userptr, "vkCmdBeginQueryIndexedEXT");
    glad_vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT) load(userptr, "vkCmdBeginTransformFeedbackEXT");
    glad_vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT) load(userptr, "vkCmdBindTransformFeedbackBuffersEXT");
    glad_vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT) load(userptr, "vkCmdDrawIndirectByteCountEXT");
    glad_vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT) load(userptr, "vkCmdEndQueryIndexedEXT");
    glad_vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT) load(userptr, "vkCmdEndTransformFeedbackEXT");
}
static void glad_vk_load_VK_EXT_validation_cache( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_validation_cache) return;
    glad_vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT) load(userptr, "vkCreateValidationCacheEXT");
    glad_vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT) load(userptr, "vkDestroyValidationCacheEXT");
    glad_vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT) load(userptr, "vkGetValidationCacheDataEXT");
    glad_vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT) load(userptr, "vkMergeValidationCachesEXT");
}
#if defined(VK_USE_PLATFORM_FUCHSIA)
static void glad_vk_load_VK_FUCHSIA_imagepipe_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_FUCHSIA_imagepipe_surface) return;
    glad_vkCreateImagePipeSurfaceFUCHSIA = (PFN_vkCreateImagePipeSurfaceFUCHSIA) load(userptr, "vkCreateImagePipeSurfaceFUCHSIA");
}

#endif
#if defined(VK_USE_PLATFORM_GGP)
static void glad_vk_load_VK_GGP_stream_descriptor_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_GGP_stream_descriptor_surface) return;
    glad_vkCreateStreamDescriptorSurfaceGGP = (PFN_vkCreateStreamDescriptorSurfaceGGP) load(userptr, "vkCreateStreamDescriptorSurfaceGGP");
}

#endif
static void glad_vk_load_VK_GOOGLE_display_timing( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_GOOGLE_display_timing) return;
    glad_vkGetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE) load(userptr, "vkGetPastPresentationTimingGOOGLE");
    glad_vkGetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE) load(userptr, "vkGetRefreshCycleDurationGOOGLE");
}
static void glad_vk_load_VK_INTEL_performance_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_INTEL_performance_query) return;
    glad_vkAcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL) load(userptr, "vkAcquirePerformanceConfigurationINTEL");
    glad_vkCmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL) load(userptr, "vkCmdSetPerformanceMarkerINTEL");
    glad_vkCmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL) load(userptr, "vkCmdSetPerformanceOverrideINTEL");
    glad_vkCmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL) load(userptr, "vkCmdSetPerformanceStreamMarkerINTEL");
    glad_vkGetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL) load(userptr, "vkGetPerformanceParameterINTEL");
    glad_vkInitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL) load(userptr, "vkInitializePerformanceApiINTEL");
    glad_vkQueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL) load(userptr, "vkQueueSetPerformanceConfigurationINTEL");
    glad_vkReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL) load(userptr, "vkReleasePerformanceConfigurationINTEL");
    glad_vkUninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL) load(userptr, "vkUninitializePerformanceApiINTEL");
}
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
static void glad_vk_load_VK_KHR_android_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_android_surface) return;
    glad_vkCreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR) load(userptr, "vkCreateAndroidSurfaceKHR");
}

#endif
static void glad_vk_load_VK_KHR_bind_memory2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_bind_memory2) return;
    glad_vkBindBufferMemory2 = (PFN_vkBindBufferMemory2) load(userptr, "vkBindBufferMemory2");
    glad_vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR) load(userptr, "vkBindBufferMemory2KHR");
    glad_vkBindImageMemory2 = (PFN_vkBindImageMemory2) load(userptr, "vkBindImageMemory2");
    glad_vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR) load(userptr, "vkBindImageMemory2KHR");
}
static void glad_vk_load_VK_KHR_create_renderpass2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_create_renderpass2) return;
    glad_vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR) load(userptr, "vkCmdBeginRenderPass2KHR");
    glad_vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR) load(userptr, "vkCmdEndRenderPass2KHR");
    glad_vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR) load(userptr, "vkCmdNextSubpass2KHR");
    glad_vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR) load(userptr, "vkCreateRenderPass2KHR");
}
static void glad_vk_load_VK_KHR_descriptor_update_template( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_descriptor_update_template) return;
    glad_vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR) load(userptr, "vkCmdPushDescriptorSetWithTemplateKHR");
    glad_vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate) load(userptr, "vkCreateDescriptorUpdateTemplate");
    glad_vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR) load(userptr, "vkCreateDescriptorUpdateTemplateKHR");
    glad_vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate) load(userptr, "vkDestroyDescriptorUpdateTemplate");
    glad_vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR) load(userptr, "vkDestroyDescriptorUpdateTemplateKHR");
    glad_vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate) load(userptr, "vkUpdateDescriptorSetWithTemplate");
    glad_vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR) load(userptr, "vkUpdateDescriptorSetWithTemplateKHR");
}
static void glad_vk_load_VK_KHR_device_group( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_device_group) return;
    glad_vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR) load(userptr, "vkAcquireNextImage2KHR");
    glad_vkCmdDispatchBase = (PFN_vkCmdDispatchBase) load(userptr, "vkCmdDispatchBase");
    glad_vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR) load(userptr, "vkCmdDispatchBaseKHR");
    glad_vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask) load(userptr, "vkCmdSetDeviceMask");
    glad_vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR) load(userptr, "vkCmdSetDeviceMaskKHR");
    glad_vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures) load(userptr, "vkGetDeviceGroupPeerMemoryFeatures");
    glad_vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR) load(userptr, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
    glad_vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR) load(userptr, "vkGetDeviceGroupPresentCapabilitiesKHR");
    glad_vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR) load(userptr, "vkGetDeviceGroupSurfacePresentModesKHR");
    glad_vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR) load(userptr, "vkGetPhysicalDevicePresentRectanglesKHR");
}
static void glad_vk_load_VK_KHR_device_group_creation( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_device_group_creation) return;
    glad_vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups) load(userptr, "vkEnumeratePhysicalDeviceGroups");
    glad_vkEnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR) load(userptr, "vkEnumeratePhysicalDeviceGroupsKHR");
}
static void glad_vk_load_VK_KHR_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_display) return;
    glad_vkCreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR) load(userptr, "vkCreateDisplayModeKHR");
    glad_vkCreateDisplayPlaneSurfaceKHR = (PFN_vkCreateDisplayPlaneSurfaceKHR) load(userptr, "vkCreateDisplayPlaneSurfaceKHR");
    glad_vkGetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR) load(userptr, "vkGetDisplayModePropertiesKHR");
    glad_vkGetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR) load(userptr, "vkGetDisplayPlaneCapabilitiesKHR");
    glad_vkGetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR) load(userptr, "vkGetDisplayPlaneSupportedDisplaysKHR");
    glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR) load(userptr, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
    glad_vkGetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR) load(userptr, "vkGetPhysicalDeviceDisplayPropertiesKHR");
}
static void glad_vk_load_VK_KHR_display_swapchain( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_display_swapchain) return;
    glad_vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR) load(userptr, "vkCreateSharedSwapchainsKHR");
}
static void glad_vk_load_VK_KHR_draw_indirect_count( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_draw_indirect_count) return;
    glad_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR) load(userptr, "vkCmdDrawIndexedIndirectCountKHR");
    glad_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR) load(userptr, "vkCmdDrawIndirectCountKHR");
}
static void glad_vk_load_VK_KHR_external_fence_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_fence_capabilities) return;
    glad_vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties) load(userptr, "vkGetPhysicalDeviceExternalFenceProperties");
    glad_vkGetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
}
static void glad_vk_load_VK_KHR_external_fence_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_fence_fd) return;
    glad_vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR) load(userptr, "vkGetFenceFdKHR");
    glad_vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR) load(userptr, "vkImportFenceFdKHR");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_external_fence_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_fence_win32) return;
    glad_vkGetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR) load(userptr, "vkGetFenceWin32HandleKHR");
    glad_vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR) load(userptr, "vkImportFenceWin32HandleKHR");
}

#endif
static void glad_vk_load_VK_KHR_external_memory_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_memory_capabilities) return;
    glad_vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties) load(userptr, "vkGetPhysicalDeviceExternalBufferProperties");
    glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
}
static void glad_vk_load_VK_KHR_external_memory_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_memory_fd) return;
    glad_vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR) load(userptr, "vkGetMemoryFdKHR");
    glad_vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR) load(userptr, "vkGetMemoryFdPropertiesKHR");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_external_memory_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_memory_win32) return;
    glad_vkGetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR) load(userptr, "vkGetMemoryWin32HandleKHR");
    glad_vkGetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR) load(userptr, "vkGetMemoryWin32HandlePropertiesKHR");
}

#endif
static void glad_vk_load_VK_KHR_external_semaphore_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_semaphore_capabilities) return;
    glad_vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties) load(userptr, "vkGetPhysicalDeviceExternalSemaphoreProperties");
    glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
}
static void glad_vk_load_VK_KHR_external_semaphore_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_semaphore_fd) return;
    glad_vkGetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR) load(userptr, "vkGetSemaphoreFdKHR");
    glad_vkImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR) load(userptr, "vkImportSemaphoreFdKHR");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_external_semaphore_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_semaphore_win32) return;
    glad_vkGetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR) load(userptr, "vkGetSemaphoreWin32HandleKHR");
    glad_vkImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR) load(userptr, "vkImportSemaphoreWin32HandleKHR");
}

#endif
static void glad_vk_load_VK_KHR_get_display_properties2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_display_properties2) return;
    glad_vkGetDisplayModeProperties2KHR = (PFN_vkGetDisplayModeProperties2KHR) load(userptr, "vkGetDisplayModeProperties2KHR");
    glad_vkGetDisplayPlaneCapabilities2KHR = (PFN_vkGetDisplayPlaneCapabilities2KHR) load(userptr, "vkGetDisplayPlaneCapabilities2KHR");
    glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR) load(userptr, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
    glad_vkGetPhysicalDeviceDisplayProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR) load(userptr, "vkGetPhysicalDeviceDisplayProperties2KHR");
}
static void glad_vk_load_VK_KHR_get_memory_requirements2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_memory_requirements2) return;
    glad_vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2) load(userptr, "vkGetBufferMemoryRequirements2");
    glad_vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR) load(userptr, "vkGetBufferMemoryRequirements2KHR");
    glad_vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2) load(userptr, "vkGetImageMemoryRequirements2");
    glad_vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR) load(userptr, "vkGetImageMemoryRequirements2KHR");
    glad_vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2) load(userptr, "vkGetImageSparseMemoryRequirements2");
    glad_vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR) load(userptr, "vkGetImageSparseMemoryRequirements2KHR");
}
static void glad_vk_load_VK_KHR_get_physical_device_properties2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_physical_device_properties2) return;
    glad_vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2) load(userptr, "vkGetPhysicalDeviceFeatures2");
    glad_vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR) load(userptr, "vkGetPhysicalDeviceFeatures2KHR");
    glad_vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2) load(userptr, "vkGetPhysicalDeviceFormatProperties2");
    glad_vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceFormatProperties2KHR");
    glad_vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2) load(userptr, "vkGetPhysicalDeviceImageFormatProperties2");
    glad_vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceImageFormatProperties2KHR");
    glad_vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2) load(userptr, "vkGetPhysicalDeviceMemoryProperties2");
    glad_vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR) load(userptr, "vkGetPhysicalDeviceMemoryProperties2KHR");
    glad_vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2) load(userptr, "vkGetPhysicalDeviceProperties2");
    glad_vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR) load(userptr, "vkGetPhysicalDeviceProperties2KHR");
    glad_vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties2");
    glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
    glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties2");
    glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
}
static void glad_vk_load_VK_KHR_get_surface_capabilities2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_surface_capabilities2) return;
    glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR) load(userptr, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
    glad_vkGetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR) load(userptr, "vkGetPhysicalDeviceSurfaceFormats2KHR");
}
static void glad_vk_load_VK_KHR_maintenance1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_maintenance1) return;
    glad_vkTrimCommandPool = (PFN_vkTrimCommandPool) load(userptr, "vkTrimCommandPool");
    glad_vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR) load(userptr, "vkTrimCommandPoolKHR");
}
static void glad_vk_load_VK_KHR_maintenance3( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_maintenance3) return;
    glad_vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport) load(userptr, "vkGetDescriptorSetLayoutSupport");
    glad_vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR) load(userptr, "vkGetDescriptorSetLayoutSupportKHR");
}
static void glad_vk_load_VK_KHR_push_descriptor( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_push_descriptor) return;
    glad_vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR) load(userptr, "vkCmdPushDescriptorSetKHR");
    glad_vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR) load(userptr, "vkCmdPushDescriptorSetWithTemplateKHR");
}
static void glad_vk_load_VK_KHR_sampler_ycbcr_conversion( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_sampler_ycbcr_conversion) return;
    glad_vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion) load(userptr, "vkCreateSamplerYcbcrConversion");
    glad_vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR) load(userptr, "vkCreateSamplerYcbcrConversionKHR");
    glad_vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion) load(userptr, "vkDestroySamplerYcbcrConversion");
    glad_vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR) load(userptr, "vkDestroySamplerYcbcrConversionKHR");
}
static void glad_vk_load_VK_KHR_shared_presentable_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_shared_presentable_image) return;
    glad_vkGetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR) load(userptr, "vkGetSwapchainStatusKHR");
}
static void glad_vk_load_VK_KHR_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_surface) return;
    glad_vkDestroySurfaceKHR = (PFN_vkDestroySurfaceKHR) load(userptr, "vkDestroySurfaceKHR");
    glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR) load(userptr, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
    glad_vkGetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR) load(userptr, "vkGetPhysicalDeviceSurfaceFormatsKHR");
    glad_vkGetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR) load(userptr, "vkGetPhysicalDeviceSurfacePresentModesKHR");
    glad_vkGetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR) load(userptr, "vkGetPhysicalDeviceSurfaceSupportKHR");
}
static void glad_vk_load_VK_KHR_swapchain( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_swapchain) return;
    glad_vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR) load(userptr, "vkAcquireNextImage2KHR");
    glad_vkAcquireNextImageKHR = (PFN_vkAcquireNextImageKHR) load(userptr, "vkAcquireNextImageKHR");
    glad_vkCreateSwapchainKHR = (PFN_vkCreateSwapchainKHR) load(userptr, "vkCreateSwapchainKHR");
    glad_vkDestroySwapchainKHR = (PFN_vkDestroySwapchainKHR) load(userptr, "vkDestroySwapchainKHR");
    glad_vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR) load(userptr, "vkGetDeviceGroupPresentCapabilitiesKHR");
    glad_vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR) load(userptr, "vkGetDeviceGroupSurfacePresentModesKHR");
    glad_vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR) load(userptr, "vkGetPhysicalDevicePresentRectanglesKHR");
    glad_vkGetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR) load(userptr, "vkGetSwapchainImagesKHR");
    glad_vkQueuePresentKHR = (PFN_vkQueuePresentKHR) load(userptr, "vkQueuePresentKHR");
}
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
static void glad_vk_load_VK_KHR_wayland_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_wayland_surface) return;
    glad_vkCreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR) load(userptr, "vkCreateWaylandSurfaceKHR");
    glad_vkGetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_win32_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_win32_surface) return;
    glad_vkCreateWin32SurfaceKHR = (PFN_vkCreateWin32SurfaceKHR) load(userptr, "vkCreateWin32SurfaceKHR");
    glad_vkGetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
static void glad_vk_load_VK_KHR_xcb_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_xcb_surface) return;
    glad_vkCreateXcbSurfaceKHR = (PFN_vkCreateXcbSurfaceKHR) load(userptr, "vkCreateXcbSurfaceKHR");
    glad_vkGetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
static void glad_vk_load_VK_KHR_xlib_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_xlib_surface) return;
    glad_vkCreateXlibSurfaceKHR = (PFN_vkCreateXlibSurfaceKHR) load(userptr, "vkCreateXlibSurfaceKHR");
    glad_vkGetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
static void glad_vk_load_VK_MVK_ios_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_MVK_ios_surface) return;
    glad_vkCreateIOSSurfaceMVK = (PFN_vkCreateIOSSurfaceMVK) load(userptr, "vkCreateIOSSurfaceMVK");
}

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
static void glad_vk_load_VK_MVK_macos_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_MVK_macos_surface) return;
    glad_vkCreateMacOSSurfaceMVK = (PFN_vkCreateMacOSSurfaceMVK) load(userptr, "vkCreateMacOSSurfaceMVK");
}

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
static void glad_vk_load_VK_NN_vi_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NN_vi_surface) return;
    glad_vkCreateViSurfaceNN = (PFN_vkCreateViSurfaceNN) load(userptr, "vkCreateViSurfaceNN");
}

#endif
static void glad_vk_load_VK_NVX_device_generated_commands( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NVX_device_generated_commands) return;
    glad_vkCmdProcessCommandsNVX = (PFN_vkCmdProcessCommandsNVX) load(userptr, "vkCmdProcessCommandsNVX");
    glad_vkCmdReserveSpaceForCommandsNVX = (PFN_vkCmdReserveSpaceForCommandsNVX) load(userptr, "vkCmdReserveSpaceForCommandsNVX");
    glad_vkCreateIndirectCommandsLayoutNVX = (PFN_vkCreateIndirectCommandsLayoutNVX) load(userptr, "vkCreateIndirectCommandsLayoutNVX");
    glad_vkCreateObjectTableNVX = (PFN_vkCreateObjectTableNVX) load(userptr, "vkCreateObjectTableNVX");
    glad_vkDestroyIndirectCommandsLayoutNVX = (PFN_vkDestroyIndirectCommandsLayoutNVX) load(userptr, "vkDestroyIndirectCommandsLayoutNVX");
    glad_vkDestroyObjectTableNVX = (PFN_vkDestroyObjectTableNVX) load(userptr, "vkDestroyObjectTableNVX");
    glad_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX = (PFN_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX) load(userptr, "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX");
    glad_vkRegisterObjectsNVX = (PFN_vkRegisterObjectsNVX) load(userptr, "vkRegisterObjectsNVX");
    glad_vkUnregisterObjectsNVX = (PFN_vkUnregisterObjectsNVX) load(userptr, "vkUnregisterObjectsNVX");
}
static void glad_vk_load_VK_NVX_image_view_handle( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NVX_image_view_handle) return;
    glad_vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX) load(userptr, "vkGetImageViewHandleNVX");
}
static void glad_vk_load_VK_NV_clip_space_w_scaling( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_clip_space_w_scaling) return;
    glad_vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV) load(userptr, "vkCmdSetViewportWScalingNV");
}
static void glad_vk_load_VK_NV_cooperative_matrix( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_cooperative_matrix) return;
    glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV) load(userptr, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
}
static void glad_vk_load_VK_NV_coverage_reduction_mode( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_coverage_reduction_mode) return;
    glad_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV) load(userptr, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
}
static void glad_vk_load_VK_NV_device_diagnostic_checkpoints( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_device_diagnostic_checkpoints) return;
    glad_vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV) load(userptr, "vkCmdSetCheckpointNV");
    glad_vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV) load(userptr, "vkGetQueueCheckpointDataNV");
}
static void glad_vk_load_VK_NV_external_memory_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_external_memory_capabilities) return;
    glad_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV) load(userptr, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_NV_external_memory_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_external_memory_win32) return;
    glad_vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV) load(userptr, "vkGetMemoryWin32HandleNV");
}

#endif
static void glad_vk_load_VK_NV_mesh_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_mesh_shader) return;
    glad_vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV) load(userptr, "vkCmdDrawMeshTasksIndirectCountNV");
    glad_vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV) load(userptr, "vkCmdDrawMeshTasksIndirectNV");
    glad_vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV) load(userptr, "vkCmdDrawMeshTasksNV");
}
static void glad_vk_load_VK_NV_ray_tracing( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_ray_tracing) return;
    glad_vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV) load(userptr, "vkBindAccelerationStructureMemoryNV");
    glad_vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV) load(userptr, "vkCmdBuildAccelerationStructureNV");
    glad_vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV) load(userptr, "vkCmdCopyAccelerationStructureNV");
    glad_vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV) load(userptr, "vkCmdTraceRaysNV");
    glad_vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV) load(userptr, "vkCmdWriteAccelerationStructuresPropertiesNV");
    glad_vkCompileDeferredNV = (PFN_vkCompileDeferredNV) load(userptr, "vkCompileDeferredNV");
    glad_vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV) load(userptr, "vkCreateAccelerationStructureNV");
    glad_vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV) load(userptr, "vkCreateRayTracingPipelinesNV");
    glad_vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV) load(userptr, "vkDestroyAccelerationStructureNV");
    glad_vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV) load(userptr, "vkGetAccelerationStructureHandleNV");
    glad_vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV) load(userptr, "vkGetAccelerationStructureMemoryRequirementsNV");
    glad_vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV) load(userptr, "vkGetRayTracingShaderGroupHandlesNV");
}
static void glad_vk_load_VK_NV_scissor_exclusive( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_scissor_exclusive) return;
    glad_vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV) load(userptr, "vkCmdSetExclusiveScissorNV");
}
static void glad_vk_load_VK_NV_shading_rate_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_shading_rate_image) return;
    glad_vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV) load(userptr, "vkCmdBindShadingRateImageNV");
    glad_vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV) load(userptr, "vkCmdSetCoarseSampleOrderNV");
    glad_vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV) load(userptr, "vkCmdSetViewportShadingRatePaletteNV");
}


static void glad_vk_resolve_aliases(void) {
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)

#endif
    if (glad_vkBindBufferMemory2 == NULL && glad_vkBindBufferMemory2KHR != NULL) glad_vkBindBufferMemory2 = (PFN_vkBindBufferMemory2)glad_vkBindBufferMemory2KHR;
    if (glad_vkBindBufferMemory2KHR == NULL && glad_vkBindBufferMemory2 != NULL) glad_vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)glad_vkBindBufferMemory2;
    if (glad_vkBindImageMemory2 == NULL && glad_vkBindImageMemory2KHR != NULL) glad_vkBindImageMemory2 = (PFN_vkBindImageMemory2)glad_vkBindImageMemory2KHR;
    if (glad_vkBindImageMemory2KHR == NULL && glad_vkBindImageMemory2 != NULL) glad_vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)glad_vkBindImageMemory2;
    if (glad_vkCmdDispatchBase == NULL && glad_vkCmdDispatchBaseKHR != NULL) glad_vkCmdDispatchBase = (PFN_vkCmdDispatchBase)glad_vkCmdDispatchBaseKHR;
    if (glad_vkCmdDispatchBaseKHR == NULL && glad_vkCmdDispatchBase != NULL) glad_vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)glad_vkCmdDispatchBase;
    if (glad_vkCmdDrawIndexedIndirectCountAMD == NULL && glad_vkCmdDrawIndexedIndirectCountKHR != NULL) glad_vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)glad_vkCmdDrawIndexedIndirectCountKHR;
    if (glad_vkCmdDrawIndexedIndirectCountKHR == NULL && glad_vkCmdDrawIndexedIndirectCountAMD != NULL) glad_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)glad_vkCmdDrawIndexedIndirectCountAMD;
    if (glad_vkCmdDrawIndirectCountAMD == NULL && glad_vkCmdDrawIndirectCountKHR != NULL) glad_vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)glad_vkCmdDrawIndirectCountKHR;
    if (glad_vkCmdDrawIndirectCountKHR == NULL && glad_vkCmdDrawIndirectCountAMD != NULL) glad_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)glad_vkCmdDrawIndirectCountAMD;
    if (glad_vkCmdSetDeviceMask == NULL && glad_vkCmdSetDeviceMaskKHR != NULL) glad_vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)glad_vkCmdSetDeviceMaskKHR;
    if (glad_vkCmdSetDeviceMaskKHR == NULL && glad_vkCmdSetDeviceMask != NULL) glad_vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)glad_vkCmdSetDeviceMask;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)

#endif
    if (glad_vkCreateDescriptorUpdateTemplate == NULL && glad_vkCreateDescriptorUpdateTemplateKHR != NULL) glad_vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)glad_vkCreateDescriptorUpdateTemplateKHR;
    if (glad_vkCreateDescriptorUpdateTemplateKHR == NULL && glad_vkCreateDescriptorUpdateTemplate != NULL) glad_vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR)glad_vkCreateDescriptorUpdateTemplate;
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)

#endif
    if (glad_vkCreateSamplerYcbcrConversion == NULL && glad_vkCreateSamplerYcbcrConversionKHR != NULL) glad_vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)glad_vkCreateSamplerYcbcrConversionKHR;
    if (glad_vkCreateSamplerYcbcrConversionKHR == NULL && glad_vkCreateSamplerYcbcrConversion != NULL) glad_vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR)glad_vkCreateSamplerYcbcrConversion;
#if defined(VK_USE_PLATFORM_GGP)

#endif
#if defined(VK_USE_PLATFORM_VI_NN)

#endif
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)

#endif
    if (glad_vkDestroyDescriptorUpdateTemplate == NULL && glad_vkDestroyDescriptorUpdateTemplateKHR != NULL) glad_vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)glad_vkDestroyDescriptorUpdateTemplateKHR;
    if (glad_vkDestroyDescriptorUpdateTemplateKHR == NULL && glad_vkDestroyDescriptorUpdateTemplate != NULL) glad_vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR)glad_vkDestroyDescriptorUpdateTemplate;
    if (glad_vkDestroySamplerYcbcrConversion == NULL && glad_vkDestroySamplerYcbcrConversionKHR != NULL) glad_vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)glad_vkDestroySamplerYcbcrConversionKHR;
    if (glad_vkDestroySamplerYcbcrConversionKHR == NULL && glad_vkDestroySamplerYcbcrConversion != NULL) glad_vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR)glad_vkDestroySamplerYcbcrConversion;
    if (glad_vkEnumeratePhysicalDeviceGroups == NULL && glad_vkEnumeratePhysicalDeviceGroupsKHR != NULL) glad_vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups)glad_vkEnumeratePhysicalDeviceGroupsKHR;
    if (glad_vkEnumeratePhysicalDeviceGroupsKHR == NULL && glad_vkEnumeratePhysicalDeviceGroups != NULL) glad_vkEnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR)glad_vkEnumeratePhysicalDeviceGroups;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)

#endif
    if (glad_vkGetBufferMemoryRequirements2 == NULL && glad_vkGetBufferMemoryRequirements2KHR != NULL) glad_vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)glad_vkGetBufferMemoryRequirements2KHR;
    if (glad_vkGetBufferMemoryRequirements2KHR == NULL && glad_vkGetBufferMemoryRequirements2 != NULL) glad_vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)glad_vkGetBufferMemoryRequirements2;
    if (glad_vkGetDescriptorSetLayoutSupport == NULL && glad_vkGetDescriptorSetLayoutSupportKHR != NULL) glad_vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)glad_vkGetDescriptorSetLayoutSupportKHR;
    if (glad_vkGetDescriptorSetLayoutSupportKHR == NULL && glad_vkGetDescriptorSetLayoutSupport != NULL) glad_vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)glad_vkGetDescriptorSetLayoutSupport;
    if (glad_vkGetDeviceGroupPeerMemoryFeatures == NULL && glad_vkGetDeviceGroupPeerMemoryFeaturesKHR != NULL) glad_vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)glad_vkGetDeviceGroupPeerMemoryFeaturesKHR;
    if (glad_vkGetDeviceGroupPeerMemoryFeaturesKHR == NULL && glad_vkGetDeviceGroupPeerMemoryFeatures != NULL) glad_vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)glad_vkGetDeviceGroupPeerMemoryFeatures;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
    if (glad_vkGetImageMemoryRequirements2 == NULL && glad_vkGetImageMemoryRequirements2KHR != NULL) glad_vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)glad_vkGetImageMemoryRequirements2KHR;
    if (glad_vkGetImageMemoryRequirements2KHR == NULL && glad_vkGetImageMemoryRequirements2 != NULL) glad_vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)glad_vkGetImageMemoryRequirements2;
    if (glad_vkGetImageSparseMemoryRequirements2 == NULL && glad_vkGetImageSparseMemoryRequirements2KHR != NULL) glad_vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)glad_vkGetImageSparseMemoryRequirements2KHR;
    if (glad_vkGetImageSparseMemoryRequirements2KHR == NULL && glad_vkGetImageSparseMemoryRequirements2 != NULL) glad_vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)glad_vkGetImageSparseMemoryRequirements2;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
    if (glad_vkGetPhysicalDeviceExternalBufferProperties == NULL && glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR != NULL) glad_vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR;
    if (glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR == NULL && glad_vkGetPhysicalDeviceExternalBufferProperties != NULL) glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)glad_vkGetPhysicalDeviceExternalBufferProperties;
    if (glad_vkGetPhysicalDeviceExternalFenceProperties == NULL && glad_vkGetPhysicalDeviceExternalFencePropertiesKHR != NULL) glad_vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)glad_vkGetPhysicalDeviceExternalFencePropertiesKHR;
    if (glad_vkGetPhysicalDeviceExternalFencePropertiesKHR == NULL && glad_vkGetPhysicalDeviceExternalFenceProperties != NULL) glad_vkGetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)glad_vkGetPhysicalDeviceExternalFenceProperties;
    if (glad_vkGetPhysicalDeviceExternalSemaphoreProperties == NULL && glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR != NULL) glad_vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;
    if (glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR == NULL && glad_vkGetPhysicalDeviceExternalSemaphoreProperties != NULL) glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)glad_vkGetPhysicalDeviceExternalSemaphoreProperties;
    if (glad_vkGetPhysicalDeviceFeatures2 == NULL && glad_vkGetPhysicalDeviceFeatures2KHR != NULL) glad_vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)glad_vkGetPhysicalDeviceFeatures2KHR;
    if (glad_vkGetPhysicalDeviceFeatures2KHR == NULL && glad_vkGetPhysicalDeviceFeatures2 != NULL) glad_vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)glad_vkGetPhysicalDeviceFeatures2;
    if (glad_vkGetPhysicalDeviceFormatProperties2 == NULL && glad_vkGetPhysicalDeviceFormatProperties2KHR != NULL) glad_vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2)glad_vkGetPhysicalDeviceFormatProperties2KHR;
    if (glad_vkGetPhysicalDeviceFormatProperties2KHR == NULL && glad_vkGetPhysicalDeviceFormatProperties2 != NULL) glad_vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)glad_vkGetPhysicalDeviceFormatProperties2;
    if (glad_vkGetPhysicalDeviceImageFormatProperties2 == NULL && glad_vkGetPhysicalDeviceImageFormatProperties2KHR != NULL) glad_vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)glad_vkGetPhysicalDeviceImageFormatProperties2KHR;
    if (glad_vkGetPhysicalDeviceImageFormatProperties2KHR == NULL && glad_vkGetPhysicalDeviceImageFormatProperties2 != NULL) glad_vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)glad_vkGetPhysicalDeviceImageFormatProperties2;
    if (glad_vkGetPhysicalDeviceMemoryProperties2 == NULL && glad_vkGetPhysicalDeviceMemoryProperties2KHR != NULL) glad_vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2)glad_vkGetPhysicalDeviceMemoryProperties2KHR;
    if (glad_vkGetPhysicalDeviceMemoryProperties2KHR == NULL && glad_vkGetPhysicalDeviceMemoryProperties2 != NULL) glad_vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)glad_vkGetPhysicalDeviceMemoryProperties2;
    if (glad_vkGetPhysicalDeviceProperties2 == NULL && glad_vkGetPhysicalDeviceProperties2KHR != NULL) glad_vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)glad_vkGetPhysicalDeviceProperties2KHR;
    if (glad_vkGetPhysicalDeviceProperties2KHR == NULL && glad_vkGetPhysicalDeviceProperties2 != NULL) glad_vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)glad_vkGetPhysicalDeviceProperties2;
    if (glad_vkGetPhysicalDeviceQueueFamilyProperties2 == NULL && glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR != NULL) glad_vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR;
    if (glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR == NULL && glad_vkGetPhysicalDeviceQueueFamilyProperties2 != NULL) glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)glad_vkGetPhysicalDeviceQueueFamilyProperties2;
    if (glad_vkGetPhysicalDeviceSparseImageFormatProperties2 == NULL && glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR != NULL) glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
    if (glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR == NULL && glad_vkGetPhysicalDeviceSparseImageFormatProperties2 != NULL) glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)glad_vkGetPhysicalDeviceSparseImageFormatProperties2;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
    if (glad_vkTrimCommandPool == NULL && glad_vkTrimCommandPoolKHR != NULL) glad_vkTrimCommandPool = (PFN_vkTrimCommandPool)glad_vkTrimCommandPoolKHR;
    if (glad_vkTrimCommandPoolKHR == NULL && glad_vkTrimCommandPool != NULL) glad_vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)glad_vkTrimCommandPool;
    if (glad_vkUpdateDescriptorSetWithTemplate == NULL && glad_vkUpdateDescriptorSetWithTemplateKHR != NULL) glad_vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)glad_vkUpdateDescriptorSetWithTemplateKHR;
    if (glad_vkUpdateDescriptorSetWithTemplateKHR == NULL && glad_vkUpdateDescriptorSetWithTemplate != NULL) glad_vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR)glad_vkUpdateDescriptorSetWithTemplate;
}

static int glad_vk_get_extensions( VkPhysicalDevice physical_device, uint32_t *out_extension_count, char ***out_extensions) {
    uint32_t i;
    uint32_t instance_extension_count = 0;
    uint32_t device_extension_count = 0;
    uint32_t max_extension_count;
    uint32_t total_extension_count;
    char **extensions;
    VkExtensionProperties *ext_properties;
    VkResult result;

    if (glad_vkEnumerateInstanceExtensionProperties == NULL || (physical_device != NULL && glad_vkEnumerateDeviceExtensionProperties == NULL)) {
        return 0;
    }

    result = glad_vkEnumerateInstanceExtensionProperties(NULL, &instance_extension_count, NULL);
    if (result != VK_SUCCESS) {
        return 0;
    }

    if (physical_device != NULL) {
        result = glad_vkEnumerateDeviceExtensionProperties(physical_device, NULL, &device_extension_count, NULL);
        if (result != VK_SUCCESS) {
            return 0;
        }
    }

    total_extension_count = instance_extension_count + device_extension_count;
    max_extension_count = instance_extension_count > device_extension_count
        ? instance_extension_count : device_extension_count;

    ext_properties = (VkExtensionProperties*) malloc(max_extension_count * sizeof(VkExtensionProperties));
    if (ext_properties == NULL) {
        return 0;
    }

    result = glad_vkEnumerateInstanceExtensionProperties(NULL, &instance_extension_count, ext_properties);
    if (result != VK_SUCCESS) {
        free((void*) ext_properties);
        return 0;
    }

    extensions = (char**) calloc(total_extension_count, sizeof(char*));
    if (extensions == NULL) {
        free((void*) ext_properties);
        return 0;
    }

    for (i = 0; i < instance_extension_count; ++i) {
        VkExtensionProperties ext = ext_properties[i];

        size_t extension_name_length = strlen(ext.extensionName) + 1;
        extensions[i] = (char*) malloc(extension_name_length * sizeof(char));
        memcpy(extensions[i], ext.extensionName, extension_name_length * sizeof(char));
    }

    if (physical_device != NULL) {
        result = glad_vkEnumerateDeviceExtensionProperties(physical_device, NULL, &device_extension_count, ext_properties);
        if (result != VK_SUCCESS) {
            for (i = 0; i < instance_extension_count; ++i) {
                free((void*) extensions[i]);
            }
            free(extensions);
            return 0;
        }

        for (i = 0; i < device_extension_count; ++i) {
            VkExtensionProperties ext = ext_properties[i];

            size_t extension_name_length = strlen(ext.extensionName) + 1;
            extensions[instance_extension_count + i] = (char*) malloc(extension_name_length * sizeof(char));
            memcpy(extensions[instance_extension_count + i], ext.extensionName, extension_name_length * sizeof(char));
        }
    }

    free((void*) ext_properties);

    *out_extension_count = total_extension_count;
    *out_extensions = extensions;

    return 1;
}

static void glad_vk_free_extensions(uint32_t extension_count, char **extensions) {
    uint32_t i;

    for(i = 0; i < extension_count ; ++i) {
        free((void*) (extensions[i]));
    }

    free((void*) extensions);
}

static int glad_vk_has_extension(const char *name, uint32_t extension_count, char **extensions) {
    uint32_t i;

    for (i = 0; i < extension_count; ++i) {
        if(strcmp(name, extensions[i]) == 0) {
            return 1;
        }
    }

    return 0;
}

static GLADapiproc glad_vk_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_vk_find_extensions_vulkan( VkPhysicalDevice physical_device) {
    uint32_t extension_count = 0;
    char **extensions = NULL;
    if (!glad_vk_get_extensions(physical_device, &extension_count, &extensions)) return 0;

    GLAD_VK_AMD_buffer_marker = glad_vk_has_extension("VK_AMD_buffer_marker", extension_count, extensions);
    GLAD_VK_AMD_display_native_hdr = glad_vk_has_extension("VK_AMD_display_native_hdr", extension_count, extensions);
    GLAD_VK_AMD_draw_indirect_count = glad_vk_has_extension("VK_AMD_draw_indirect_count", extension_count, extensions);
    GLAD_VK_AMD_gcn_shader = glad_vk_has_extension("VK_AMD_gcn_shader", extension_count, extensions);
    GLAD_VK_AMD_gpu_shader_half_float = glad_vk_has_extension("VK_AMD_gpu_shader_half_float", extension_count, extensions);
    GLAD_VK_AMD_gpu_shader_int16 = glad_vk_has_extension("VK_AMD_gpu_shader_int16", extension_count, extensions);
    GLAD_VK_AMD_memory_overallocation_behavior = glad_vk_has_extension("VK_AMD_memory_overallocation_behavior", extension_count, extensions);
    GLAD_VK_AMD_mixed_attachment_samples = glad_vk_has_extension("VK_AMD_mixed_attachment_samples", extension_count, extensions);
    GLAD_VK_AMD_negative_viewport_height = glad_vk_has_extension("VK_AMD_negative_viewport_height", extension_count, extensions);
    GLAD_VK_AMD_rasterization_order = glad_vk_has_extension("VK_AMD_rasterization_order", extension_count, extensions);
    GLAD_VK_AMD_shader_ballot = glad_vk_has_extension("VK_AMD_shader_ballot", extension_count, extensions);
    GLAD_VK_AMD_shader_core_properties = glad_vk_has_extension("VK_AMD_shader_core_properties", extension_count, extensions);
    GLAD_VK_AMD_shader_explicit_vertex_parameter = glad_vk_has_extension("VK_AMD_shader_explicit_vertex_parameter", extension_count, extensions);
    GLAD_VK_AMD_shader_fragment_mask = glad_vk_has_extension("VK_AMD_shader_fragment_mask", extension_count, extensions);
    GLAD_VK_AMD_shader_image_load_store_lod = glad_vk_has_extension("VK_AMD_shader_image_load_store_lod", extension_count, extensions);
    GLAD_VK_AMD_shader_info = glad_vk_has_extension("VK_AMD_shader_info", extension_count, extensions);
    GLAD_VK_AMD_shader_trinary_minmax = glad_vk_has_extension("VK_AMD_shader_trinary_minmax", extension_count, extensions);
    GLAD_VK_AMD_texture_gather_bias_lod = glad_vk_has_extension("VK_AMD_texture_gather_bias_lod", extension_count, extensions);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    GLAD_VK_ANDROID_external_memory_android_hardware_buffer = glad_vk_has_extension("VK_ANDROID_external_memory_android_hardware_buffer", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
    GLAD_VK_EXT_acquire_xlib_display = glad_vk_has_extension("VK_EXT_acquire_xlib_display", extension_count, extensions);

#endif
    GLAD_VK_EXT_astc_decode_mode = glad_vk_has_extension("VK_EXT_astc_decode_mode", extension_count, extensions);
    GLAD_VK_EXT_blend_operation_advanced = glad_vk_has_extension("VK_EXT_blend_operation_advanced", extension_count, extensions);
    GLAD_VK_EXT_buffer_device_address = glad_vk_has_extension("VK_EXT_buffer_device_address", extension_count, extensions);
    GLAD_VK_EXT_calibrated_timestamps = glad_vk_has_extension("VK_EXT_calibrated_timestamps", extension_count, extensions);
    GLAD_VK_EXT_conditional_rendering = glad_vk_has_extension("VK_EXT_conditional_rendering", extension_count, extensions);
    GLAD_VK_EXT_conservative_rasterization = glad_vk_has_extension("VK_EXT_conservative_rasterization", extension_count, extensions);
    GLAD_VK_EXT_debug_marker = glad_vk_has_extension("VK_EXT_debug_marker", extension_count, extensions);
    GLAD_VK_EXT_debug_report = glad_vk_has_extension("VK_EXT_debug_report", extension_count, extensions);
    GLAD_VK_EXT_debug_utils = glad_vk_has_extension("VK_EXT_debug_utils", extension_count, extensions);
    GLAD_VK_EXT_depth_clip_enable = glad_vk_has_extension("VK_EXT_depth_clip_enable", extension_count, extensions);
    GLAD_VK_EXT_depth_range_unrestricted = glad_vk_has_extension("VK_EXT_depth_range_unrestricted", extension_count, extensions);
    GLAD_VK_EXT_descriptor_indexing = glad_vk_has_extension("VK_EXT_descriptor_indexing", extension_count, extensions);
    GLAD_VK_EXT_direct_mode_display = glad_vk_has_extension("VK_EXT_direct_mode_display", extension_count, extensions);
    GLAD_VK_EXT_discard_rectangles = glad_vk_has_extension("VK_EXT_discard_rectangles", extension_count, extensions);
    GLAD_VK_EXT_display_control = glad_vk_has_extension("VK_EXT_display_control", extension_count, extensions);
    GLAD_VK_EXT_display_surface_counter = glad_vk_has_extension("VK_EXT_display_surface_counter", extension_count, extensions);
    GLAD_VK_EXT_external_memory_dma_buf = glad_vk_has_extension("VK_EXT_external_memory_dma_buf", extension_count, extensions);
    GLAD_VK_EXT_external_memory_host = glad_vk_has_extension("VK_EXT_external_memory_host", extension_count, extensions);
    GLAD_VK_EXT_filter_cubic = glad_vk_has_extension("VK_EXT_filter_cubic", extension_count, extensions);
    GLAD_VK_EXT_fragment_density_map = glad_vk_has_extension("VK_EXT_fragment_density_map", extension_count, extensions);
    GLAD_VK_EXT_fragment_shader_interlock = glad_vk_has_extension("VK_EXT_fragment_shader_interlock", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_EXT_full_screen_exclusive = glad_vk_has_extension("VK_EXT_full_screen_exclusive", extension_count, extensions);

#endif
    GLAD_VK_EXT_global_priority = glad_vk_has_extension("VK_EXT_global_priority", extension_count, extensions);
    GLAD_VK_EXT_hdr_metadata = glad_vk_has_extension("VK_EXT_hdr_metadata", extension_count, extensions);
    GLAD_VK_EXT_headless_surface = glad_vk_has_extension("VK_EXT_headless_surface", extension_count, extensions);
    GLAD_VK_EXT_host_query_reset = glad_vk_has_extension("VK_EXT_host_query_reset", extension_count, extensions);
    GLAD_VK_EXT_image_drm_format_modifier = glad_vk_has_extension("VK_EXT_image_drm_format_modifier", extension_count, extensions);
    GLAD_VK_EXT_inline_uniform_block = glad_vk_has_extension("VK_EXT_inline_uniform_block", extension_count, extensions);
    GLAD_VK_EXT_memory_budget = glad_vk_has_extension("VK_EXT_memory_budget", extension_count, extensions);
    GLAD_VK_EXT_memory_priority = glad_vk_has_extension("VK_EXT_memory_priority", extension_count, extensions);
#if defined(VK_USE_PLATFORM_METAL_EXT)
    GLAD_VK_EXT_metal_surface = glad_vk_has_extension("VK_EXT_metal_surface", extension_count, extensions);

#endif
    GLAD_VK_EXT_pci_bus_info = glad_vk_has_extension("VK_EXT_pci_bus_info", extension_count, extensions);
    GLAD_VK_EXT_pipeline_creation_feedback = glad_vk_has_extension("VK_EXT_pipeline_creation_feedback", extension_count, extensions);
    GLAD_VK_EXT_post_depth_coverage = glad_vk_has_extension("VK_EXT_post_depth_coverage", extension_count, extensions);
    GLAD_VK_EXT_queue_family_foreign = glad_vk_has_extension("VK_EXT_queue_family_foreign", extension_count, extensions);
    GLAD_VK_EXT_sample_locations = glad_vk_has_extension("VK_EXT_sample_locations", extension_count, extensions);
    GLAD_VK_EXT_sampler_filter_minmax = glad_vk_has_extension("VK_EXT_sampler_filter_minmax", extension_count, extensions);
    GLAD_VK_EXT_scalar_block_layout = glad_vk_has_extension("VK_EXT_scalar_block_layout", extension_count, extensions);
    GLAD_VK_EXT_separate_stencil_usage = glad_vk_has_extension("VK_EXT_separate_stencil_usage", extension_count, extensions);
    GLAD_VK_EXT_shader_stencil_export = glad_vk_has_extension("VK_EXT_shader_stencil_export", extension_count, extensions);
    GLAD_VK_EXT_shader_subgroup_ballot = glad_vk_has_extension("VK_EXT_shader_subgroup_ballot", extension_count, extensions);
    GLAD_VK_EXT_shader_subgroup_vote = glad_vk_has_extension("VK_EXT_shader_subgroup_vote", extension_count, extensions);
    GLAD_VK_EXT_shader_viewport_index_layer = glad_vk_has_extension("VK_EXT_shader_viewport_index_layer", extension_count, extensions);
    GLAD_VK_EXT_swapchain_colorspace = glad_vk_has_extension("VK_EXT_swapchain_colorspace", extension_count, extensions);
    GLAD_VK_EXT_transform_feedback = glad_vk_has_extension("VK_EXT_transform_feedback", extension_count, extensions);
    GLAD_VK_EXT_validation_cache = glad_vk_has_extension("VK_EXT_validation_cache", extension_count, extensions);
    GLAD_VK_EXT_validation_features = glad_vk_has_extension("VK_EXT_validation_features", extension_count, extensions);
    GLAD_VK_EXT_validation_flags = glad_vk_has_extension("VK_EXT_validation_flags", extension_count, extensions);
    GLAD_VK_EXT_vertex_attribute_divisor = glad_vk_has_extension("VK_EXT_vertex_attribute_divisor", extension_count, extensions);
    GLAD_VK_EXT_ycbcr_image_arrays = glad_vk_has_extension("VK_EXT_ycbcr_image_arrays", extension_count, extensions);
#if defined(VK_USE_PLATFORM_FUCHSIA)
    GLAD_VK_FUCHSIA_imagepipe_surface = glad_vk_has_extension("VK_FUCHSIA_imagepipe_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_GGP)
    GLAD_VK_GGP_frame_token = glad_vk_has_extension("VK_GGP_frame_token", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_GGP)
    GLAD_VK_GGP_stream_descriptor_surface = glad_vk_has_extension("VK_GGP_stream_descriptor_surface", extension_count, extensions);

#endif
    GLAD_VK_GOOGLE_decorate_string = glad_vk_has_extension("VK_GOOGLE_decorate_string", extension_count, extensions);
    GLAD_VK_GOOGLE_display_timing = glad_vk_has_extension("VK_GOOGLE_display_timing", extension_count, extensions);
    GLAD_VK_GOOGLE_hlsl_functionality1 = glad_vk_has_extension("VK_GOOGLE_hlsl_functionality1", extension_count, extensions);
    GLAD_VK_IMG_filter_cubic = glad_vk_has_extension("VK_IMG_filter_cubic", extension_count, extensions);
    GLAD_VK_IMG_format_pvrtc = glad_vk_has_extension("VK_IMG_format_pvrtc", extension_count, extensions);
    GLAD_VK_INTEL_performance_query = glad_vk_has_extension("VK_INTEL_performance_query", extension_count, extensions);
    GLAD_VK_INTEL_shader_integer_functions2 = glad_vk_has_extension("VK_INTEL_shader_integer_functions2", extension_count, extensions);
    GLAD_VK_KHR_16bit_storage = glad_vk_has_extension("VK_KHR_16bit_storage", extension_count, extensions);
    GLAD_VK_KHR_8bit_storage = glad_vk_has_extension("VK_KHR_8bit_storage", extension_count, extensions);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    GLAD_VK_KHR_android_surface = glad_vk_has_extension("VK_KHR_android_surface", extension_count, extensions);

#endif
    GLAD_VK_KHR_bind_memory2 = glad_vk_has_extension("VK_KHR_bind_memory2", extension_count, extensions);
    GLAD_VK_KHR_create_renderpass2 = glad_vk_has_extension("VK_KHR_create_renderpass2", extension_count, extensions);
    GLAD_VK_KHR_dedicated_allocation = glad_vk_has_extension("VK_KHR_dedicated_allocation", extension_count, extensions);
    GLAD_VK_KHR_depth_stencil_resolve = glad_vk_has_extension("VK_KHR_depth_stencil_resolve", extension_count, extensions);
    GLAD_VK_KHR_descriptor_update_template = glad_vk_has_extension("VK_KHR_descriptor_update_template", extension_count, extensions);
    GLAD_VK_KHR_device_group = glad_vk_has_extension("VK_KHR_device_group", extension_count, extensions);
    GLAD_VK_KHR_device_group_creation = glad_vk_has_extension("VK_KHR_device_group_creation", extension_count, extensions);
    GLAD_VK_KHR_display = glad_vk_has_extension("VK_KHR_display", extension_count, extensions);
    GLAD_VK_KHR_display_swapchain = glad_vk_has_extension("VK_KHR_display_swapchain", extension_count, extensions);
    GLAD_VK_KHR_draw_indirect_count = glad_vk_has_extension("VK_KHR_draw_indirect_count", extension_count, extensions);
    GLAD_VK_KHR_driver_properties = glad_vk_has_extension("VK_KHR_driver_properties", extension_count, extensions);
    GLAD_VK_KHR_external_fence = glad_vk_has_extension("VK_KHR_external_fence", extension_count, extensions);
    GLAD_VK_KHR_external_fence_capabilities = glad_vk_has_extension("VK_KHR_external_fence_capabilities", extension_count, extensions);
    GLAD_VK_KHR_external_fence_fd = glad_vk_has_extension("VK_KHR_external_fence_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_external_fence_win32 = glad_vk_has_extension("VK_KHR_external_fence_win32", extension_count, extensions);

#endif
    GLAD_VK_KHR_external_memory = glad_vk_has_extension("VK_KHR_external_memory", extension_count, extensions);
    GLAD_VK_KHR_external_memory_capabilities = glad_vk_has_extension("VK_KHR_external_memory_capabilities", extension_count, extensions);
    GLAD_VK_KHR_external_memory_fd = glad_vk_has_extension("VK_KHR_external_memory_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_external_memory_win32 = glad_vk_has_extension("VK_KHR_external_memory_win32", extension_count, extensions);

#endif
    GLAD_VK_KHR_external_semaphore = glad_vk_has_extension("VK_KHR_external_semaphore", extension_count, extensions);
    GLAD_VK_KHR_external_semaphore_capabilities = glad_vk_has_extension("VK_KHR_external_semaphore_capabilities", extension_count, extensions);
    GLAD_VK_KHR_external_semaphore_fd = glad_vk_has_extension("VK_KHR_external_semaphore_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_external_semaphore_win32 = glad_vk_has_extension("VK_KHR_external_semaphore_win32", extension_count, extensions);

#endif
    GLAD_VK_KHR_get_display_properties2 = glad_vk_has_extension("VK_KHR_get_display_properties2", extension_count, extensions);
    GLAD_VK_KHR_get_memory_requirements2 = glad_vk_has_extension("VK_KHR_get_memory_requirements2", extension_count, extensions);
    GLAD_VK_KHR_get_physical_device_properties2 = glad_vk_has_extension("VK_KHR_get_physical_device_properties2", extension_count, extensions);
    GLAD_VK_KHR_get_surface_capabilities2 = glad_vk_has_extension("VK_KHR_get_surface_capabilities2", extension_count, extensions);
    GLAD_VK_KHR_image_format_list = glad_vk_has_extension("VK_KHR_image_format_list", extension_count, extensions);
    GLAD_VK_KHR_incremental_present = glad_vk_has_extension("VK_KHR_incremental_present", extension_count, extensions);
    GLAD_VK_KHR_maintenance1 = glad_vk_has_extension("VK_KHR_maintenance1", extension_count, extensions);
    GLAD_VK_KHR_maintenance2 = glad_vk_has_extension("VK_KHR_maintenance2", extension_count, extensions);
    GLAD_VK_KHR_maintenance3 = glad_vk_has_extension("VK_KHR_maintenance3", extension_count, extensions);
    GLAD_VK_KHR_multiview = glad_vk_has_extension("VK_KHR_multiview", extension_count, extensions);
    GLAD_VK_KHR_push_descriptor = glad_vk_has_extension("VK_KHR_push_descriptor", extension_count, extensions);
    GLAD_VK_KHR_relaxed_block_layout = glad_vk_has_extension("VK_KHR_relaxed_block_layout", extension_count, extensions);
    GLAD_VK_KHR_sampler_mirror_clamp_to_edge = glad_vk_has_extension("VK_KHR_sampler_mirror_clamp_to_edge", extension_count, extensions);
    GLAD_VK_KHR_sampler_ycbcr_conversion = glad_vk_has_extension("VK_KHR_sampler_ycbcr_conversion", extension_count, extensions);
    GLAD_VK_KHR_shader_atomic_int64 = glad_vk_has_extension("VK_KHR_shader_atomic_int64", extension_count, extensions);
    GLAD_VK_KHR_shader_draw_parameters = glad_vk_has_extension("VK_KHR_shader_draw_parameters", extension_count, extensions);
    GLAD_VK_KHR_shader_float16_int8 = glad_vk_has_extension("VK_KHR_shader_float16_int8", extension_count, extensions);
    GLAD_VK_KHR_shader_float_controls = glad_vk_has_extension("VK_KHR_shader_float_controls", extension_count, extensions);
    GLAD_VK_KHR_shared_presentable_image = glad_vk_has_extension("VK_KHR_shared_presentable_image", extension_count, extensions);
    GLAD_VK_KHR_storage_buffer_storage_class = glad_vk_has_extension("VK_KHR_storage_buffer_storage_class", extension_count, extensions);
    GLAD_VK_KHR_surface = glad_vk_has_extension("VK_KHR_surface", extension_count, extensions);
    GLAD_VK_KHR_surface_protected_capabilities = glad_vk_has_extension("VK_KHR_surface_protected_capabilities", extension_count, extensions);
    GLAD_VK_KHR_swapchain = glad_vk_has_extension("VK_KHR_swapchain", extension_count, extensions);
    GLAD_VK_KHR_swapchain_mutable_format = glad_vk_has_extension("VK_KHR_swapchain_mutable_format", extension_count, extensions);
    GLAD_VK_KHR_uniform_buffer_standard_layout = glad_vk_has_extension("VK_KHR_uniform_buffer_standard_layout", extension_count, extensions);
    GLAD_VK_KHR_variable_pointers = glad_vk_has_extension("VK_KHR_variable_pointers", extension_count, extensions);
    GLAD_VK_KHR_vulkan_memory_model = glad_vk_has_extension("VK_KHR_vulkan_memory_model", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    GLAD_VK_KHR_wayland_surface = glad_vk_has_extension("VK_KHR_wayland_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_win32_keyed_mutex = glad_vk_has_extension("VK_KHR_win32_keyed_mutex", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_win32_surface = glad_vk_has_extension("VK_KHR_win32_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
    GLAD_VK_KHR_xcb_surface = glad_vk_has_extension("VK_KHR_xcb_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    GLAD_VK_KHR_xlib_surface = glad_vk_has_extension("VK_KHR_xlib_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
    GLAD_VK_MVK_ios_surface = glad_vk_has_extension("VK_MVK_ios_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
    GLAD_VK_MVK_macos_surface = glad_vk_has_extension("VK_MVK_macos_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
    GLAD_VK_NN_vi_surface = glad_vk_has_extension("VK_NN_vi_surface", extension_count, extensions);

#endif
    GLAD_VK_NVX_device_generated_commands = glad_vk_has_extension("VK_NVX_device_generated_commands", extension_count, extensions);
    GLAD_VK_NVX_image_view_handle = glad_vk_has_extension("VK_NVX_image_view_handle", extension_count, extensions);
    GLAD_VK_NVX_multiview_per_view_attributes = glad_vk_has_extension("VK_NVX_multiview_per_view_attributes", extension_count, extensions);
    GLAD_VK_NV_clip_space_w_scaling = glad_vk_has_extension("VK_NV_clip_space_w_scaling", extension_count, extensions);
    GLAD_VK_NV_compute_shader_derivatives = glad_vk_has_extension("VK_NV_compute_shader_derivatives", extension_count, extensions);
    GLAD_VK_NV_cooperative_matrix = glad_vk_has_extension("VK_NV_cooperative_matrix", extension_count, extensions);
    GLAD_VK_NV_corner_sampled_image = glad_vk_has_extension("VK_NV_corner_sampled_image", extension_count, extensions);
    GLAD_VK_NV_coverage_reduction_mode = glad_vk_has_extension("VK_NV_coverage_reduction_mode", extension_count, extensions);
    GLAD_VK_NV_dedicated_allocation = glad_vk_has_extension("VK_NV_dedicated_allocation", extension_count, extensions);
    GLAD_VK_NV_dedicated_allocation_image_aliasing = glad_vk_has_extension("VK_NV_dedicated_allocation_image_aliasing", extension_count, extensions);
    GLAD_VK_NV_device_diagnostic_checkpoints = glad_vk_has_extension("VK_NV_device_diagnostic_checkpoints", extension_count, extensions);
    GLAD_VK_NV_external_memory = glad_vk_has_extension("VK_NV_external_memory", extension_count, extensions);
    GLAD_VK_NV_external_memory_capabilities = glad_vk_has_extension("VK_NV_external_memory_capabilities", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_NV_external_memory_win32 = glad_vk_has_extension("VK_NV_external_memory_win32", extension_count, extensions);

#endif
    GLAD_VK_NV_fill_rectangle = glad_vk_has_extension("VK_NV_fill_rectangle", extension_count, extensions);
    GLAD_VK_NV_fragment_coverage_to_color = glad_vk_has_extension("VK_NV_fragment_coverage_to_color", extension_count, extensions);
    GLAD_VK_NV_fragment_shader_barycentric = glad_vk_has_extension("VK_NV_fragment_shader_barycentric", extension_count, extensions);
    GLAD_VK_NV_framebuffer_mixed_samples = glad_vk_has_extension("VK_NV_framebuffer_mixed_samples", extension_count, extensions);
    GLAD_VK_NV_geometry_shader_passthrough = glad_vk_has_extension("VK_NV_geometry_shader_passthrough", extension_count, extensions);
    GLAD_VK_NV_glsl_shader = glad_vk_has_extension("VK_NV_glsl_shader", extension_count, extensions);
    GLAD_VK_NV_mesh_shader = glad_vk_has_extension("VK_NV_mesh_shader", extension_count, extensions);
    GLAD_VK_NV_ray_tracing = glad_vk_has_extension("VK_NV_ray_tracing", extension_count, extensions);
    GLAD_VK_NV_representative_fragment_test = glad_vk_has_extension("VK_NV_representative_fragment_test", extension_count, extensions);
    GLAD_VK_NV_sample_mask_override_coverage = glad_vk_has_extension("VK_NV_sample_mask_override_coverage", extension_count, extensions);
    GLAD_VK_NV_scissor_exclusive = glad_vk_has_extension("VK_NV_scissor_exclusive", extension_count, extensions);
    GLAD_VK_NV_shader_image_footprint = glad_vk_has_extension("VK_NV_shader_image_footprint", extension_count, extensions);
    GLAD_VK_NV_shader_sm_builtins = glad_vk_has_extension("VK_NV_shader_sm_builtins", extension_count, extensions);
    GLAD_VK_NV_shader_subgroup_partitioned = glad_vk_has_extension("VK_NV_shader_subgroup_partitioned", extension_count, extensions);
    GLAD_VK_NV_shading_rate_image = glad_vk_has_extension("VK_NV_shading_rate_image", extension_count, extensions);
    GLAD_VK_NV_viewport_array2 = glad_vk_has_extension("VK_NV_viewport_array2", extension_count, extensions);
    GLAD_VK_NV_viewport_swizzle = glad_vk_has_extension("VK_NV_viewport_swizzle", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_NV_win32_keyed_mutex = glad_vk_has_extension("VK_NV_win32_keyed_mutex", extension_count, extensions);

#endif

    glad_vk_free_extensions(extension_count, extensions);

    return 1;
}

static int glad_vk_find_core_vulkan( VkPhysicalDevice physical_device) {
    int major = 1;
    int minor = 0;

#ifdef VK_VERSION_1_1
    if (glad_vkEnumerateInstanceVersion != NULL) {
        uint32_t version;
        VkResult result;

        result = glad_vkEnumerateInstanceVersion(&version);
        if (result == VK_SUCCESS) {
            major = (int) VK_VERSION_MAJOR(version);
            minor = (int) VK_VERSION_MINOR(version);
        }
    }
#endif

    if (physical_device != NULL && glad_vkGetPhysicalDeviceProperties != NULL) {
        VkPhysicalDeviceProperties properties;
        glad_vkGetPhysicalDeviceProperties(physical_device, &properties);

        major = (int) VK_VERSION_MAJOR(properties.apiVersion);
        minor = (int) VK_VERSION_MINOR(properties.apiVersion);
    }

    GLAD_VK_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    GLAD_VK_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;

    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadVulkanUserPtr( VkPhysicalDevice physical_device, GLADuserptrloadfunc load, void *userptr) {
    int version;

#ifdef VK_VERSION_1_1
    glad_vkEnumerateInstanceVersion  = (PFN_vkEnumerateInstanceVersion) load(userptr, "vkEnumerateInstanceVersion");
#endif
    version = glad_vk_find_core_vulkan( physical_device);
    if (!version) {
        return 0;
    }

    glad_vk_load_VK_VERSION_1_0(load, userptr);
    glad_vk_load_VK_VERSION_1_1(load, userptr);

    if (!glad_vk_find_extensions_vulkan( physical_device)) return 0;
    glad_vk_load_VK_AMD_buffer_marker(load, userptr);
    glad_vk_load_VK_AMD_display_native_hdr(load, userptr);
    glad_vk_load_VK_AMD_draw_indirect_count(load, userptr);
    glad_vk_load_VK_AMD_shader_info(load, userptr);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_vk_load_VK_ANDROID_external_memory_android_hardware_buffer(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
    glad_vk_load_VK_EXT_acquire_xlib_display(load, userptr);

#endif
    glad_vk_load_VK_EXT_buffer_device_address(load, userptr);
    glad_vk_load_VK_EXT_calibrated_timestamps(load, userptr);
    glad_vk_load_VK_EXT_conditional_rendering(load, userptr);
    glad_vk_load_VK_EXT_debug_marker(load, userptr);
    glad_vk_load_VK_EXT_debug_report(load, userptr);
    glad_vk_load_VK_EXT_debug_utils(load, userptr);
    glad_vk_load_VK_EXT_direct_mode_display(load, userptr);
    glad_vk_load_VK_EXT_discard_rectangles(load, userptr);
    glad_vk_load_VK_EXT_display_control(load, userptr);
    glad_vk_load_VK_EXT_display_surface_counter(load, userptr);
    glad_vk_load_VK_EXT_external_memory_host(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_EXT_full_screen_exclusive(load, userptr);

#endif
    glad_vk_load_VK_EXT_hdr_metadata(load, userptr);
    glad_vk_load_VK_EXT_headless_surface(load, userptr);
    glad_vk_load_VK_EXT_host_query_reset(load, userptr);
    glad_vk_load_VK_EXT_image_drm_format_modifier(load, userptr);
#if defined(VK_USE_PLATFORM_METAL_EXT)
    glad_vk_load_VK_EXT_metal_surface(load, userptr);

#endif
    glad_vk_load_VK_EXT_sample_locations(load, userptr);
    glad_vk_load_VK_EXT_transform_feedback(load, userptr);
    glad_vk_load_VK_EXT_validation_cache(load, userptr);
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_vk_load_VK_FUCHSIA_imagepipe_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_GGP)
    glad_vk_load_VK_GGP_stream_descriptor_surface(load, userptr);

#endif
    glad_vk_load_VK_GOOGLE_display_timing(load, userptr);
    glad_vk_load_VK_INTEL_performance_query(load, userptr);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_vk_load_VK_KHR_android_surface(load, userptr);

#endif
    glad_vk_load_VK_KHR_bind_memory2(load, userptr);
    glad_vk_load_VK_KHR_create_renderpass2(load, userptr);
    glad_vk_load_VK_KHR_descriptor_update_template(load, userptr);
    glad_vk_load_VK_KHR_device_group(load, userptr);
    glad_vk_load_VK_KHR_device_group_creation(load, userptr);
    glad_vk_load_VK_KHR_display(load, userptr);
    glad_vk_load_VK_KHR_display_swapchain(load, userptr);
    glad_vk_load_VK_KHR_draw_indirect_count(load, userptr);
    glad_vk_load_VK_KHR_external_fence_capabilities(load, userptr);
    glad_vk_load_VK_KHR_external_fence_fd(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_external_fence_win32(load, userptr);

#endif
    glad_vk_load_VK_KHR_external_memory_capabilities(load, userptr);
    glad_vk_load_VK_KHR_external_memory_fd(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_external_memory_win32(load, userptr);

#endif
    glad_vk_load_VK_KHR_external_semaphore_capabilities(load, userptr);
    glad_vk_load_VK_KHR_external_semaphore_fd(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_external_semaphore_win32(load, userptr);

#endif
    glad_vk_load_VK_KHR_get_display_properties2(load, userptr);
    glad_vk_load_VK_KHR_get_memory_requirements2(load, userptr);
    glad_vk_load_VK_KHR_get_physical_device_properties2(load, userptr);
    glad_vk_load_VK_KHR_get_surface_capabilities2(load, userptr);
    glad_vk_load_VK_KHR_maintenance1(load, userptr);
    glad_vk_load_VK_KHR_maintenance3(load, userptr);
    glad_vk_load_VK_KHR_push_descriptor(load, userptr);
    glad_vk_load_VK_KHR_sampler_ycbcr_conversion(load, userptr);
    glad_vk_load_VK_KHR_shared_presentable_image(load, userptr);
    glad_vk_load_VK_KHR_surface(load, userptr);
    glad_vk_load_VK_KHR_swapchain(load, userptr);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    glad_vk_load_VK_KHR_wayland_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_win32_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
    glad_vk_load_VK_KHR_xcb_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    glad_vk_load_VK_KHR_xlib_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
    glad_vk_load_VK_MVK_ios_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
    glad_vk_load_VK_MVK_macos_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
    glad_vk_load_VK_NN_vi_surface(load, userptr);

#endif
    glad_vk_load_VK_NVX_device_generated_commands(load, userptr);
    glad_vk_load_VK_NVX_image_view_handle(load, userptr);
    glad_vk_load_VK_NV_clip_space_w_scaling(load, userptr);
    glad_vk_load_VK_NV_cooperative_matrix(load, userptr);
    glad_vk_load_VK_NV_coverage_reduction_mode(load, userptr);
    glad_vk_load_VK_NV_device_diagnostic_checkpoints(load, userptr);
    glad_vk_load_VK_NV_external_memory_capabilities(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_NV_external_memory_win32(load, userptr);

#endif
    glad_vk_load_VK_NV_mesh_shader(load, userptr);
    glad_vk_load_VK_NV_ray_tracing(load, userptr);
    glad_vk_load_VK_NV_scissor_exclusive(load, userptr);
    glad_vk_load_VK_NV_shading_rate_image(load, userptr);

    glad_vk_resolve_aliases();

    return version;
}


int gladLoadVulkan( VkPhysicalDevice physical_device, GLADloadfunc load) {
    return gladLoadVulkanUserPtr( physical_device, glad_vk_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}



 
#ifdef GLAD_VULKAN

#ifndef GLAD_LOADER_LIBRARY_C_
#define GLAD_LOADER_LIBRARY_C_

#include <stddef.h>
#include <stdlib.h>

#if GLAD_PLATFORM_WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif


static void* glad_get_dlopen_handle(const char *lib_names[], int length) {
    void *handle = NULL;
    int i;

    for (i = 0; i < length; ++i) {
#if GLAD_PLATFORM_WIN32
  #if GLAD_PLATFORM_UWP
        size_t buffer_size = (strlen(lib_names[i]) + 1) * sizeof(WCHAR);
        LPWSTR buffer = (LPWSTR) malloc(buffer_size);
        if (buffer != NULL) {
            int ret = MultiByteToWideChar(CP_ACP, 0, lib_names[i], -1, buffer, buffer_size);
            if (ret != 0) {
                handle = (void*) LoadPackagedLibrary(buffer, 0);
            }
            free((void*) buffer);
        }
  #else
        handle = (void*) LoadLibraryA(lib_names[i]);
  #endif
#else
        handle = dlopen(lib_names[i], RTLD_LAZY | RTLD_LOCAL);
#endif
        if (handle != NULL) {
            return handle;
        }
    }

    return NULL;
}

static void glad_close_dlopen_handle(void* handle) {
    if (handle != NULL) {
#if GLAD_PLATFORM_WIN32
        FreeLibrary((HMODULE) handle);
#else
        dlclose(handle);
#endif
    }
}

static GLADapiproc glad_dlsym_handle(void* handle, const char *name) {
    if (handle == NULL) {
        return NULL;
    }

#if GLAD_PLATFORM_WIN32
    return (GLADapiproc) GetProcAddress((HMODULE) handle, name);
#else
    return GLAD_GNUC_EXTENSION (GLADapiproc) dlsym(handle, name);
#endif
}

#endif /* GLAD_LOADER_LIBRARY_C_ */


static const char* DEVICE_FUNCTIONS[] = {
    "vkAcquireFullScreenExclusiveModeEXT",
    "vkAcquireNextImage2KHR",
    "vkAcquireNextImageKHR",
    "vkAcquirePerformanceConfigurationINTEL",
    "vkAllocateCommandBuffers",
    "vkAllocateDescriptorSets",
    "vkAllocateMemory",
    "vkBeginCommandBuffer",
    "vkBindAccelerationStructureMemoryNV",
    "vkBindBufferMemory",
    "vkBindBufferMemory2",
    "vkBindBufferMemory2KHR",
    "vkBindImageMemory",
    "vkBindImageMemory2",
    "vkBindImageMemory2KHR",
    "vkCmdBeginConditionalRenderingEXT",
    "vkCmdBeginDebugUtilsLabelEXT",
    "vkCmdBeginQuery",
    "vkCmdBeginQueryIndexedEXT",
    "vkCmdBeginRenderPass",
    "vkCmdBeginRenderPass2KHR",
    "vkCmdBeginTransformFeedbackEXT",
    "vkCmdBindDescriptorSets",
    "vkCmdBindIndexBuffer",
    "vkCmdBindPipeline",
    "vkCmdBindShadingRateImageNV",
    "vkCmdBindTransformFeedbackBuffersEXT",
    "vkCmdBindVertexBuffers",
    "vkCmdBlitImage",
    "vkCmdBuildAccelerationStructureNV",
    "vkCmdClearAttachments",
    "vkCmdClearColorImage",
    "vkCmdClearDepthStencilImage",
    "vkCmdCopyAccelerationStructureNV",
    "vkCmdCopyBuffer",
    "vkCmdCopyBufferToImage",
    "vkCmdCopyImage",
    "vkCmdCopyImageToBuffer",
    "vkCmdCopyQueryPoolResults",
    "vkCmdDebugMarkerBeginEXT",
    "vkCmdDebugMarkerEndEXT",
    "vkCmdDebugMarkerInsertEXT",
    "vkCmdDispatch",
    "vkCmdDispatchBase",
    "vkCmdDispatchBaseKHR",
    "vkCmdDispatchIndirect",
    "vkCmdDraw",
    "vkCmdDrawIndexed",
    "vkCmdDrawIndexedIndirect",
    "vkCmdDrawIndexedIndirectCountAMD",
    "vkCmdDrawIndexedIndirectCountKHR",
    "vkCmdDrawIndirect",
    "vkCmdDrawIndirectByteCountEXT",
    "vkCmdDrawIndirectCountAMD",
    "vkCmdDrawIndirectCountKHR",
    "vkCmdDrawMeshTasksIndirectCountNV",
    "vkCmdDrawMeshTasksIndirectNV",
    "vkCmdDrawMeshTasksNV",
    "vkCmdEndConditionalRenderingEXT",
    "vkCmdEndDebugUtilsLabelEXT",
    "vkCmdEndQuery",
    "vkCmdEndQueryIndexedEXT",
    "vkCmdEndRenderPass",
    "vkCmdEndRenderPass2KHR",
    "vkCmdEndTransformFeedbackEXT",
    "vkCmdExecuteCommands",
    "vkCmdFillBuffer",
    "vkCmdInsertDebugUtilsLabelEXT",
    "vkCmdNextSubpass",
    "vkCmdNextSubpass2KHR",
    "vkCmdPipelineBarrier",
    "vkCmdProcessCommandsNVX",
    "vkCmdPushConstants",
    "vkCmdPushDescriptorSetKHR",
    "vkCmdPushDescriptorSetWithTemplateKHR",
    "vkCmdReserveSpaceForCommandsNVX",
    "vkCmdResetEvent",
    "vkCmdResetQueryPool",
    "vkCmdResolveImage",
    "vkCmdSetBlendConstants",
    "vkCmdSetCheckpointNV",
    "vkCmdSetCoarseSampleOrderNV",
    "vkCmdSetDepthBias",
    "vkCmdSetDepthBounds",
    "vkCmdSetDeviceMask",
    "vkCmdSetDeviceMaskKHR",
    "vkCmdSetDiscardRectangleEXT",
    "vkCmdSetEvent",
    "vkCmdSetExclusiveScissorNV",
    "vkCmdSetLineWidth",
    "vkCmdSetPerformanceMarkerINTEL",
    "vkCmdSetPerformanceOverrideINTEL",
    "vkCmdSetPerformanceStreamMarkerINTEL",
    "vkCmdSetSampleLocationsEXT",
    "vkCmdSetScissor",
    "vkCmdSetStencilCompareMask",
    "vkCmdSetStencilReference",
    "vkCmdSetStencilWriteMask",
    "vkCmdSetViewport",
    "vkCmdSetViewportShadingRatePaletteNV",
    "vkCmdSetViewportWScalingNV",
    "vkCmdTraceRaysNV",
    "vkCmdUpdateBuffer",
    "vkCmdWaitEvents",
    "vkCmdWriteAccelerationStructuresPropertiesNV",
    "vkCmdWriteBufferMarkerAMD",
    "vkCmdWriteTimestamp",
    "vkCompileDeferredNV",
    "vkCreateAccelerationStructureNV",
    "vkCreateBuffer",
    "vkCreateBufferView",
    "vkCreateCommandPool",
    "vkCreateComputePipelines",
    "vkCreateDescriptorPool",
    "vkCreateDescriptorSetLayout",
    "vkCreateDescriptorUpdateTemplate",
    "vkCreateDescriptorUpdateTemplateKHR",
    "vkCreateEvent",
    "vkCreateFence",
    "vkCreateFramebuffer",
    "vkCreateGraphicsPipelines",
    "vkCreateImage",
    "vkCreateImageView",
    "vkCreateIndirectCommandsLayoutNVX",
    "vkCreateObjectTableNVX",
    "vkCreatePipelineCache",
    "vkCreatePipelineLayout",
    "vkCreateQueryPool",
    "vkCreateRayTracingPipelinesNV",
    "vkCreateRenderPass",
    "vkCreateRenderPass2KHR",
    "vkCreateSampler",
    "vkCreateSamplerYcbcrConversion",
    "vkCreateSamplerYcbcrConversionKHR",
    "vkCreateSemaphore",
    "vkCreateShaderModule",
    "vkCreateSharedSwapchainsKHR",
    "vkCreateSwapchainKHR",
    "vkCreateValidationCacheEXT",
    "vkDebugMarkerSetObjectNameEXT",
    "vkDebugMarkerSetObjectTagEXT",
    "vkDestroyAccelerationStructureNV",
    "vkDestroyBuffer",
    "vkDestroyBufferView",
    "vkDestroyCommandPool",
    "vkDestroyDescriptorPool",
    "vkDestroyDescriptorSetLayout",
    "vkDestroyDescriptorUpdateTemplate",
    "vkDestroyDescriptorUpdateTemplateKHR",
    "vkDestroyDevice",
    "vkDestroyEvent",
    "vkDestroyFence",
    "vkDestroyFramebuffer",
    "vkDestroyImage",
    "vkDestroyImageView",
    "vkDestroyIndirectCommandsLayoutNVX",
    "vkDestroyObjectTableNVX",
    "vkDestroyPipeline",
    "vkDestroyPipelineCache",
    "vkDestroyPipelineLayout",
    "vkDestroyQueryPool",
    "vkDestroyRenderPass",
    "vkDestroySampler",
    "vkDestroySamplerYcbcrConversion",
    "vkDestroySamplerYcbcrConversionKHR",
    "vkDestroySemaphore",
    "vkDestroyShaderModule",
    "vkDestroySwapchainKHR",
    "vkDestroyValidationCacheEXT",
    "vkDeviceWaitIdle",
    "vkDisplayPowerControlEXT",
    "vkEndCommandBuffer",
    "vkFlushMappedMemoryRanges",
    "vkFreeCommandBuffers",
    "vkFreeDescriptorSets",
    "vkFreeMemory",
    "vkGetAccelerationStructureHandleNV",
    "vkGetAccelerationStructureMemoryRequirementsNV",
    "vkGetAndroidHardwareBufferPropertiesANDROID",
    "vkGetBufferDeviceAddressEXT",
    "vkGetBufferMemoryRequirements",
    "vkGetBufferMemoryRequirements2",
    "vkGetBufferMemoryRequirements2KHR",
    "vkGetCalibratedTimestampsEXT",
    "vkGetDescriptorSetLayoutSupport",
    "vkGetDescriptorSetLayoutSupportKHR",
    "vkGetDeviceGroupPeerMemoryFeatures",
    "vkGetDeviceGroupPeerMemoryFeaturesKHR",
    "vkGetDeviceGroupPresentCapabilitiesKHR",
    "vkGetDeviceGroupSurfacePresentModes2EXT",
    "vkGetDeviceGroupSurfacePresentModesKHR",
    "vkGetDeviceMemoryCommitment",
    "vkGetDeviceProcAddr",
    "vkGetDeviceQueue",
    "vkGetDeviceQueue2",
    "vkGetEventStatus",
    "vkGetFenceFdKHR",
    "vkGetFenceStatus",
    "vkGetFenceWin32HandleKHR",
    "vkGetImageDrmFormatModifierPropertiesEXT",
    "vkGetImageMemoryRequirements",
    "vkGetImageMemoryRequirements2",
    "vkGetImageMemoryRequirements2KHR",
    "vkGetImageSparseMemoryRequirements",
    "vkGetImageSparseMemoryRequirements2",
    "vkGetImageSparseMemoryRequirements2KHR",
    "vkGetImageSubresourceLayout",
    "vkGetImageViewHandleNVX",
    "vkGetMemoryAndroidHardwareBufferANDROID",
    "vkGetMemoryFdKHR",
    "vkGetMemoryFdPropertiesKHR",
    "vkGetMemoryHostPointerPropertiesEXT",
    "vkGetMemoryWin32HandleKHR",
    "vkGetMemoryWin32HandleNV",
    "vkGetMemoryWin32HandlePropertiesKHR",
    "vkGetPastPresentationTimingGOOGLE",
    "vkGetPerformanceParameterINTEL",
    "vkGetPipelineCacheData",
    "vkGetQueryPoolResults",
    "vkGetQueueCheckpointDataNV",
    "vkGetRayTracingShaderGroupHandlesNV",
    "vkGetRefreshCycleDurationGOOGLE",
    "vkGetRenderAreaGranularity",
    "vkGetSemaphoreFdKHR",
    "vkGetSemaphoreWin32HandleKHR",
    "vkGetShaderInfoAMD",
    "vkGetSwapchainCounterEXT",
    "vkGetSwapchainImagesKHR",
    "vkGetSwapchainStatusKHR",
    "vkGetValidationCacheDataEXT",
    "vkImportFenceFdKHR",
    "vkImportFenceWin32HandleKHR",
    "vkImportSemaphoreFdKHR",
    "vkImportSemaphoreWin32HandleKHR",
    "vkInitializePerformanceApiINTEL",
    "vkInvalidateMappedMemoryRanges",
    "vkMapMemory",
    "vkMergePipelineCaches",
    "vkMergeValidationCachesEXT",
    "vkQueueBeginDebugUtilsLabelEXT",
    "vkQueueBindSparse",
    "vkQueueEndDebugUtilsLabelEXT",
    "vkQueueInsertDebugUtilsLabelEXT",
    "vkQueuePresentKHR",
    "vkQueueSetPerformanceConfigurationINTEL",
    "vkQueueSubmit",
    "vkQueueWaitIdle",
    "vkRegisterDeviceEventEXT",
    "vkRegisterDisplayEventEXT",
    "vkRegisterObjectsNVX",
    "vkReleaseFullScreenExclusiveModeEXT",
    "vkReleasePerformanceConfigurationINTEL",
    "vkResetCommandBuffer",
    "vkResetCommandPool",
    "vkResetDescriptorPool",
    "vkResetEvent",
    "vkResetFences",
    "vkResetQueryPoolEXT",
    "vkSetDebugUtilsObjectNameEXT",
    "vkSetDebugUtilsObjectTagEXT",
    "vkSetEvent",
    "vkSetHdrMetadataEXT",
    "vkSetLocalDimmingAMD",
    "vkTrimCommandPool",
    "vkTrimCommandPoolKHR",
    "vkUninitializePerformanceApiINTEL",
    "vkUnmapMemory",
    "vkUnregisterObjectsNVX",
    "vkUpdateDescriptorSetWithTemplate",
    "vkUpdateDescriptorSetWithTemplateKHR",
    "vkUpdateDescriptorSets",
    "vkWaitForFences",
};

static int glad_vulkan_is_device_function(const char *name) {
    /* Exists as a workaround for:
     * https://github.com/KhronosGroup/Vulkan-LoaderAndValidationLayers/issues/2323
     *
     * `vkGetDeviceProcAddr` does not return NULL for non-device functions.
     */
    int i;
    int length = sizeof(DEVICE_FUNCTIONS) / sizeof(DEVICE_FUNCTIONS[0]);

    for (i=0; i < length; ++i) {
        if (strcmp(DEVICE_FUNCTIONS[i], name) == 0) {
            return 1;
        }
    }

    return 0;
}

struct _glad_vulkan_userptr {
    void *vk_handle;
    VkInstance vk_instance;
    VkDevice vk_device;
    PFN_vkGetInstanceProcAddr get_instance_proc_addr;
    PFN_vkGetDeviceProcAddr get_device_proc_addr;
};

static GLADapiproc glad_vulkan_get_proc(void *vuserptr, const char *name) {
    struct _glad_vulkan_userptr userptr = *(struct _glad_vulkan_userptr*) vuserptr;
    PFN_vkVoidFunction result = NULL;

    if (userptr.vk_device != NULL && glad_vulkan_is_device_function(name)) {
        result = userptr.get_device_proc_addr(userptr.vk_device, name);
    }

    if (result == NULL && userptr.vk_instance != NULL) {
        result = userptr.get_instance_proc_addr(userptr.vk_instance, name);
    }

    if(result == NULL) {
        result = (PFN_vkVoidFunction) glad_dlsym_handle(userptr.vk_handle, name);
    }

    return (GLADapiproc) result;
}


static void* _vulkan_handle;

static void* glad_vulkan_dlopen_handle(void) {
    static const char *NAMES[] = {
#if GLAD_PLATFORM_APPLE
        "libvulkan.1.dylib",
#elif GLAD_PLATFORM_WIN32
        "vulkan-1.dll",
        "vulkan.dll",
#else
        "libvulkan.so.1",
        "libvulkan.so",
#endif
    };

    if (_vulkan_handle == NULL) {
        _vulkan_handle = glad_get_dlopen_handle(NAMES, sizeof(NAMES) / sizeof(NAMES[0]));
    }

    return _vulkan_handle;
}

static struct _glad_vulkan_userptr glad_vulkan_build_userptr(void *handle, VkInstance instance, VkDevice device) {
    struct _glad_vulkan_userptr userptr;
    userptr.vk_handle = handle;
    userptr.vk_instance = instance;
    userptr.vk_device = device;
    userptr.get_instance_proc_addr = (PFN_vkGetInstanceProcAddr) glad_dlsym_handle(handle, "vkGetInstanceProcAddr");
    userptr.get_device_proc_addr = (PFN_vkGetDeviceProcAddr) glad_dlsym_handle(handle, "vkGetDeviceProcAddr");
    return userptr;
}

int gladLoaderLoadVulkan( VkInstance instance, VkPhysicalDevice physical_device, VkDevice device) {
    int version = 0;
    void *handle = NULL;
    int did_load = 0;
    struct _glad_vulkan_userptr userptr;

    did_load = _vulkan_handle == NULL;
    handle = glad_vulkan_dlopen_handle();
    if (handle != NULL) {
        userptr = glad_vulkan_build_userptr(handle, instance, device);

        if (userptr.get_instance_proc_addr != NULL && userptr.get_device_proc_addr != NULL) {
            version = gladLoadVulkanUserPtr( physical_device, glad_vulkan_get_proc, &userptr);
        }

        if (!version && did_load) {
            gladLoaderUnloadVulkan();
        }
    }

    return version;
}



void gladLoaderUnloadVulkan(void) {
    if (_vulkan_handle != NULL) {
        glad_close_dlopen_handle(_vulkan_handle);
        _vulkan_handle = NULL;
    }
}

#endif /* GLAD_VULKAN */
