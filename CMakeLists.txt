cmake_minimum_required(VERSION 3.27)
project(cimgui_sdl2_vk)

set(CMAKE_CXX_STANDARD 23)

cmake_minimum_required(VERSION 3.27)
project(cimgui_sdl2_vk)

set(CMAKE_CXX_STANDARD 23)

# 指定Vulkan SDK路径
set(VULKAN_SDK "C:/VulkanSDK/1.3.290.0")
set(SDL_INCLUDE "./sdl2_include")

# 添加头文件搜索路径
include_directories("${VULKAN_SDK}/Include")
include_directories("${SDL_INCLUDE}")

# 添加库文件搜索路径
link_directories("${VULKAN_SDK}/Lib")

add_library(cimgui_sdl2_vk SHARED library.cpp cimgui.cpp cimgui_vk.cpp cimgui_sdl2.cpp imgui.cpp imgui_demo.cpp imgui_draw.cpp
        imgui_tables.cpp imgui_widgets.cpp imgui_impl_vulkan.cpp imgui_impl_sdl2.cpp)

# 链接 Vulkan 库
target_link_libraries(cimgui_sdl2_vk vulkan-1)

target_link_libraries(cimgui_sdl2_vk SDL2)
