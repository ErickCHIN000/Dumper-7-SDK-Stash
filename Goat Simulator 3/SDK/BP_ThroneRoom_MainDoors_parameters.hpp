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

// 0x110 (0x110 - 0x0)
// Function BP_ThroneRoom_MainDoors.BP_ThroneRoom_MainDoors_C.OnRep_DoorsOpen
struct ABP_ThroneRoom_MainDoors_C_OnRep_DoorsOpen_Params
{
public:
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x88(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function BP_ThroneRoom_MainDoors.BP_ThroneRoom_MainDoors_C.OpenDoors
struct ABP_ThroneRoom_MainDoors_C_OpenDoors_Params
{
public:
	class AGGGoat*                               ScannedGoat;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_ThroneRoom_MainDoors.BP_ThroneRoom_MainDoors_C.ExecuteUbergraph_BP_ThroneRoom_MainDoors
struct ABP_ThroneRoom_MainDoors_C_ExecuteUbergraph_BP_ThroneRoom_MainDoors_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B60[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsQuestStepCompleted_ReturnValue;         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B6A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_ScannedGoat;                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsLoaded_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B75[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue;               // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B7B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


