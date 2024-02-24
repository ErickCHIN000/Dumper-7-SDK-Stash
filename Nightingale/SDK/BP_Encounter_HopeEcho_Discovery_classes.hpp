#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x390 - 0x368)
// BlueprintGeneratedClass BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C
class ABP_Encounter_HopeEcho_Discovery_C : public ABP_Encounter_HopeEcho_Base_C
{
public:
	TArray<struct FConditionalReward>            Conditional_Rewards;                               // 0x368(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, ContainsInstancedReference)
	class AEncounterBase*                        SpawningEncounter;                                 // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               Essence_Rewards;                                   // 0x380(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)

	static class UClass* StaticClass();
	static class ABP_Encounter_HopeEcho_Discovery_C* GetDefaultObj();

	void Initialize(class AEncounterBase* SpawningEncounter, enum class EEncounterRewardType EncounterRewardType, enum class EEncounterRewardScale RewardScale, TArray<struct FConditionalReward>& CallFunc_GenerateConditionalRewards_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GenerateEssenceRewardsForEncounter_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GenerateEssenceRewardsForHopeEcho_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Restore_Rewards_On_Persistence(TArray<struct FConditionalReward>& CallFunc_GenerateConditionalRewards_ReturnValue);
	void GetSpawningEncounter(class AEncounterBase** SpawningEncounter);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	bool GetInteractionTag(struct FGameplayTag* InteractionTag);
};

}


