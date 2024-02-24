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

// 0x10 (0x10 - 0x0)
// Function BP_Achievement_GOAT.BP_Achievement_GOAT_C.OnCompletedAchievement
struct ABP_Achievement_GOAT_C_OnCompletedAchievement_Params
{
public:
	class FString                                AchievementID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_Achievement_GOAT.BP_Achievement_GOAT_C.ExecuteUbergraph_BP_Achievement_GOAT
struct ABP_Achievement_GOAT_C_ExecuteUbergraph_BP_Achievement_GOAT_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_952[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_AchievementID;                  // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


