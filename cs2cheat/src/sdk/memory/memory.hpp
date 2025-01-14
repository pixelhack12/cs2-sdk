#pragma once

#include "../../api/module/module.hpp"

class Vector;

namespace memory {
    void Initialize();
    void Shutdown();

    inline void*(__thiscall* fnGetClientNetworkable)(void*, int);
    inline int(__thiscall* fnGetMaxEntities)(void*, int*);
    inline void*(__thiscall* schema_detailed_class_layout)(void*, const char*);
    inline bool(__thiscall* fnScreenTransform)(const Vector&, Vector&);
    inline void* fnMouseInputEnabled;

    // SDL2 Functions
    inline int(__stdcall* fnSDL_SetRelativeMouseMode)(int);
    inline int(__stdcall* fnSDL_SetWindowGrab)(void*, int);
    inline int(__stdcall* fnSDL_WarpMouseInWindow)(void*, int, int);
}  // namespace memory
