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
// Function BP_PlayerBanner_Emote.BP_PlayerBanner_Emote_C.BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_BP_PlayerBanner_Emote
struct ABP_PlayerBanner_Emote_C_BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_BP_PlayerBanner_Emote_Params
{
public:
	class UGbxCustomizationData*                 Customization;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerBanner_Emote.BP_PlayerBanner_Emote_C.ExecuteUbergraph_BP_PlayerBanner_Emote
struct ABP_PlayerBanner_Emote_C_ExecuteUbergraph_BP_PlayerBanner_Emote_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1875[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCustomizationData*                 K2Node_ComponentBoundEvent_Customization;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


