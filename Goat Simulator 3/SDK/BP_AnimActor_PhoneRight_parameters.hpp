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

// 0x8 (0x8 - 0x0)
// Function BP_AnimActor_PhoneRight.BP_AnimActor_PhoneRight_C.NotifyWasTriggered
struct ABP_AnimActor_PhoneRight_C_NotifyWasTriggered_Params
{
public:
	struct FGameplayTag                          NotifyTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_AnimActor_PhoneRight.BP_AnimActor_PhoneRight_C.ExecuteUbergraph_BP_AnimActor_PhoneRight
struct ABP_AnimActor_PhoneRight_C_ExecuteUbergraph_BP_AnimActor_PhoneRight_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_NotifyTag;                            // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_921[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


