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

// 0x88 (0x88 - 0x0)
// Function bc_LightingElement_01_ExponentialHeightFog.bc_LightingElement_01_ExponentialHeightFog_C.Backup
struct Ubc_LightingElement_01_ExponentialHeightFog_C_Backup_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_245B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_LightingSetup_01_ExponentialHeightFog K2Node_MakeStruct_st_LightingSetup_01_ExponentialHeightFog; // 0x8(0x80)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x134 (0x134 - 0x0)
// Function bc_LightingElement_01_ExponentialHeightFog.bc_LightingElement_01_ExponentialHeightFog_C.Update
struct Ubc_LightingElement_01_ExponentialHeightFog_C_Update_Params
{
public:
	float                                        ChangeProgress;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SkipAnyTimeCheck;                                  // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Success;                                           // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_253E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_LightingSetup_01_ExponentialHeightFog SetupNew;                                          // 0x8(0x80)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Update_Success;                           // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2552[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x8C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2565[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0xA4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue_1;    // 0xB4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue_1;            // 0xC4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_1;                       // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue_2;            // 0xDC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_2;                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_3;                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_4;                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_5;                       // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue_3;            // 0xFC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_6;                       // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_7;                       // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_8;                       // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_9;                       // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_10;                      // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue_4;            // 0x120(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_11;                      // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function bc_LightingElement_01_ExponentialHeightFog.bc_LightingElement_01_ExponentialHeightFog_C.OverwriteCheck
struct Ubc_LightingElement_01_ExponentialHeightFog_C_OverwriteCheck_Params
{
public:
	class Aba_LightingSetup_01_C*                Setup;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


