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
// Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
struct UXeSSBlueprintLibrary_SetXeSSQualityMode_Params
{
public:
	enum class EXeSSQualityMode                  QualityMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
struct UXeSSBlueprintLibrary_IsXeSSSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
struct UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Params
{
public:
	enum class EXeSSQualityMode                  QualityMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScreenPercentage;                                  // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
struct UXeSSBlueprintLibrary_GetXeSSQualityMode_Params
{
public:
	enum class EXeSSQualityMode                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
struct UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Params
{
public:
	TArray<enum class EXeSSQualityMode>          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
struct UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Params
{
public:
	struct FIntPoint                             ScreenResolution;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EXeSSQualityMode                  ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


