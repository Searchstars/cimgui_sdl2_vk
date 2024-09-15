# cimgui_sdl2_vk
基于 https://github.com/dearimgui/dear_bindings 生成的ImGui C Bindings，自动dllexport所有函数，提供给C#等语言执行P/Invoke操作

## 编译时注意
1. 只支持MSVC工具链，不支持其它的，比如MinGW。
2. 该项目仅适用于Windows。