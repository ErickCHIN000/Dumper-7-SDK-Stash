#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
struct UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor
struct UVirtualCursorFunctionLibrary_EnableVirtualCursor_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor
struct UVirtualCursorFunctionLibrary_DisableVirtualCursor_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


