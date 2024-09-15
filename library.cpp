#include "library.h"

#include <iostream>

extern "C" __declspec(dllexport) void hello() {
    std::cout << "CImGUI_sdl_vk loaded!\nHello ImGUI World!" << std::endl;
}
