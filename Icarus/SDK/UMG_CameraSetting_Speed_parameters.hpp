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

// 0x18 (0x18 - 0x0)
// Function UMG_CameraSetting_Speed.UMG_CameraSetting_Speed_C.ManualIncrease
struct UUMG_CameraSetting_Speed_C_ManualIncrease_Params
{
public:
	float                                        Increase;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMinSliderValue_ReturnValue;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxSliderValue_ReturnValue;            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x571 (0x571 - 0x0)
// Function UMG_CameraSetting_Speed.UMG_CameraSetting_Speed_C.UpdatePostProcess
struct UUMG_CameraSetting_Speed_C_UpdatePostProcess_Params
{
public:
	struct FPostProcessSettings                  Settings;                                          // 0x0(0x560)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                        CallFunc_GetSliderValue_ReturnValue;               // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4140[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PhotoCamera_C*                     CallFunc_GetPhotoCameraPawn_ReturnValue;           // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


