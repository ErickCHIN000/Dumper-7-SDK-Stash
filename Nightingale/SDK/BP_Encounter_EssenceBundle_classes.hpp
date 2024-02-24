#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x390 - 0x368)
// BlueprintGeneratedClass BP_Encounter_EssenceBundle.BP_Encounter_EssenceBundle_C
class ABP_Encounter_EssenceBundle_C : public ABP_Encounter_HopeEcho_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FInventoryEntry>               Essence_Rewards;                                   // 0x370(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)
	class AEncounterBase*                        SpawningEncounter;                                 // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Escape_VFX;                                        // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Encounter_EssenceBundle_C* GetDefaultObj();

	void Initialize(class AEncounterBase* SpawningEncounter, enum class EEncounterRewardType EncounterRewardType, enum class EEncounterRewardScale RewardScale, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FInventoryEntry>& CallFunc_GenerateEssenceRewardsForEncounter_ReturnValue);
	void Spawn_Hope_Echo_Escape_AVFX(const struct FGameplayTag& Essence_Bundle_Escape_Row, bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, bool CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterAVFX_NiagaraSystem);
	void GetSpawningEncounter(class AEncounterBase** SpawningEncounter);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	bool GetInteractionTag(struct FGameplayTag* InteractionTag);
	void Clear_Hope_Echo_AVFX();
	void ExecuteUbergraph_BP_Encounter_EssenceBundle(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue);
};

}


