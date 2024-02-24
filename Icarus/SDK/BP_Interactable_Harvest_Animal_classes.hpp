#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x138 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C
class UBP_Interactable_Harvest_Animal_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_IcarusPlayerCharacterSurvival_C*   Current_Player;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkinningEfficiency;                                // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseSkinningDuration;                              // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          FPMontage;                                         // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TPMontage;                                         // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SkinningTimer;                                     // 0x110(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHarvested;                                       // 0x118(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_5CA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   HarvestingPlayer;                                  // 0x120(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   PreviousHarvester;                                 // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GOAP_Corpse_C*                     OwningCorpse;                                      // 0x130(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Harvest_Animal_C* GetDefaultObj();

	void GrantBestiaryProgress(const struct FBestiaryPointsRowHandle& Points, const struct FBestiaryPointsRowHandle& CallFunc_MakeLiteralBestiaryPoints_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsRowHandleValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, class UBestiaryManagerComponent* CallFunc_GetBestiaryManagerComponent_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ProcessDurability(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_CalculateDurabilityDamage_ReturnValue, bool CallFunc_DealSelfDamage_ReturnValue);
	int32 CalculateDurabilityDamage(int32 BaseWearAmount, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue);
	float GetHarvestSpeedModifier(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
	void OnRep_HarvestingPlayer(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetHarvestSpeedModifier_ReturnValue, class UHighlightableComponent* CallFunc_GetComponentByClass_ReturnValue, class UInteractableComponent* CallFunc_GetComponentByClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnRep_IsHarvested();
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess_1, enum class EValid CallFunc_GetTrait_Paths, class UDurableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FValidInteractQueriesRowHandle& CallFunc_GetObjectInteraction_RowHandle, bool CallFunc_GetObjectInteraction_bValidInteract, bool CallFunc_BooleanAND_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_2, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse, bool K2Node_DynamicCast_bSuccess_2);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void OnInteractionAborted();
	void OnSkinningComplete();
	void EndHarvestMontage(class ABP_IcarusPlayerCharacterSurvival_C* Harvester);
	void ExecuteUbergraph_BP_Interactable_Harvest_Animal(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_IsClosed_Variable, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_CustomEvent_Harvester, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetStat_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetHarvestSpeedModifier_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, class UCreatureSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FAISetupEnum& CallFunc_IntToStruct_ReturnValue, const struct FAISetupRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FAICreatureType& CallFunc_GetAICreatureTypeStruct_AICreatureType, enum class EValid CallFunc_GetAICreatureTypeStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_GrantExperienceToActor_ReturnValue);
};

}


