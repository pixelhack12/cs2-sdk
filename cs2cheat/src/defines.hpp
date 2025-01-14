#pragma once

#include "sdk/game_defines.hpp"

// Helper
#define SIGNATURE(sig) \
    stb::simple_conversion::build<stb::fixed_string{sig}>::value

// Modules
#define CLIENT_DLL "client.dll"
#define ENGINE2_DLL "engine2.dll"
#define SCHEMASYSTEM_DLL "schemasystem.dll"
#define INPUTSYSTEM_DLL "inputsystem.dll"
#define SDL2_DLL "SDL2.dll"

// Interfaces
#define GAME_RESOURCE_SERVICE_CLIENT "GameResourceServiceClientV001"
#define SOURCE2_CLIENT "Source2Client002"
#define SCHEMA_SYSTEM "SchemaSystem_001"
#define INPUT_SYSTEM_VERSION "InputSystemVersion001"

// Signatures

// CGameEntitySystem::
#define GET_MAX_ENTITIES SIGNATURE("33 DB E8 ? ? ? ? 8B 08")
#define GET_CLIENT_NETWORKABLE \
    SIGNATURE("8B D3 E8 ? ? ? ? 48 8B F8 48 85 C0 74 76")

#define PRINT_SCHEMA_DETAILED_CLASS_LAYOUT \
    SIGNATURE("48 89 5C 24 ? 48 89 6C 24 ? 48 89 4C 24 ?")

#define SCREEN_TRANSFORM SIGNATURE("E8 ? ? ? ? F3 0F 10 45 ? 8B D0")

// CCSGOInput::
#define MOUSE_INPUT_ENABLED \
    SIGNATURE("40 53 48 83 EC 20 80 B9 ? ? ? ? ? 48 8B D9 75 78")
