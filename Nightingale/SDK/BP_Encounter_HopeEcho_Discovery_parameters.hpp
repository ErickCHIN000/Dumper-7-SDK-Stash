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

// 0x69 (0x69 - 0x0)
// Function BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C.Initialize
struct ABP_Encounter_HopeEcho_Discovery_C_Initialize_Params
{
public:
	class AEncounterBase*                        SpawningEncounter;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEncounterRewardType              EncounterRewardType;                               // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEncounterRewardScale             RewardScale;                                       // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2217[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConditionalReward>            CallFunc_GenerateConditionalRewards_ReturnValue;   // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue;               // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_GenerateEssenceRewardsForEncounter_ReturnValue; // 0x28(0x10)(ReferenceParm)
	TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput;        // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEncounterMarkupDataAsset*             CallFunc_GetMarkupDataAsset_ReturnValue;           // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2224[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               CallFunc_GenerateEssenceRewardsForHopeEcho_ReturnValue; // 0x58(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C.Restore Rewards On Persistence
struct ABP_Encounter_HopeEcho_Discovery_C_Restore_Rewards_On_Persistence_Params
{
public:
	TArray<struct FConditionalReward>            CallFunc_GenerateConditionalRewards_ReturnValue;   // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C.GetSpawningEncounter
struct ABP_Encounter_HopeEcho_Discovery_C_GetSpawningEncounter_Params
{
public:
	class AEncounterBase*                        SpawningEncounter;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1C0 (0x1C0 - 0x0)
// Function BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C.GetInteractText
struct ABP_Encounter_HopeEcho_Discovery_C_GetInteractText_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class FString                                InteractText;                                      // 0x178(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x188(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x198(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C.GetInteractionTag
struct ABP_Encounter_HopeEcho_Discovery_C_GetInteractionTag_Params
{
public:
	struct FGameplayTag                          InteractionTag;                                    // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


