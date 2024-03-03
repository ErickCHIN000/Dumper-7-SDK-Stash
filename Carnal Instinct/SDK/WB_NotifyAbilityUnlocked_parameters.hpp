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
// Function WB_NotifyAbilityUnlocked.WB_NotifyAbilityUnlocked_C.GetName
struct UWB_NotifyAbilityUnlocked_C_GetName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x8 (0x8 - 0x0)
// Function WB_NotifyAbilityUnlocked.WB_NotifyAbilityUnlocked_C.OnAnimationFinished
struct UWB_NotifyAbilityUnlocked_C_OnAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WB_NotifyAbilityUnlocked.WB_NotifyAbilityUnlocked_C.ExecuteUbergraph_WB_NotifyAbilityUnlocked
struct UWB_NotifyAbilityUnlocked_C_ExecuteUbergraph_WB_NotifyAbilityUnlocked_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      K2Node_Event_Animation;                            // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


