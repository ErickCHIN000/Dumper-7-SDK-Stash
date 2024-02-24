#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x18E8 - 0x1880)
// BlueprintGeneratedClass BP_Creature_NPC_Narrative.BP_Creature_NPC_Narrative_C
class ABP_Creature_NPC_Narrative_C : public ABP_Creature_NPC_Human_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialBillboardComponent*           QuestIndicatorSign;                                // 0x1888(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  CompassMarker;                                     // 0x1890(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_QuestGiverComponent_C*             BP_QuestGiverComponent;                            // 0x1898(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ContractMenuHandle;                                // 0x18A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNarrativeNPCMapPinComponent*          NarrativeNPCMapPin;                                // 0x18B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         AnimInstance;                                      // 0x18B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UCreatureAnimationDataAsset> DefaultIdleAnimAsset;                              // 0x18C0(0x28)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_NPC_Narrative_C* GetDefaultObj();

	void GetCompassHoverDescription(class FString* OutString);
	void GetCompassHoverLabel(class FString* OutString, class FText CallFunc_GetNPCNameText_NPCName, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void TrySetIdleAnimation(TSoftObjectPtr<class UCreatureAnimationDataAsset> AnimationDataAsset, bool* Success, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UNWXAIAnimInstance* K2Node_DynamicCast_AsNWXAIAnim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void DamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags);
	void AddRemoveStatesForDissolve(bool Add);
	void RefreshCompassMarker(const struct FDataTableRowHandle& L_HasQuestsGiveAndReturnRow, bool HasQuestsTogive, const struct FDataTableRowHandle& L_hasQuestsToReturnRow, bool HasQuestsToReturn, const struct FDataTableRowHandle& L_HasQuestsToGive, bool Temp_bool_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuestGiverKey& K2Node_MakeStruct_QuestGiverKey, class ABP_CompassMarker_C* K2Node_DynamicCast_AsBP_Compass_Marker, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FGameplayTag& CallFunc_GetQuestGiverTag_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsGameplayTagValid_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetQuestGiverStatus_bAvailableQuests, bool CallFunc_GetQuestGiverStatus_bTasksToComplete, bool CallFunc_GetQuestGiverStatus_bFoundQuestGiver, const struct FDataTableRowHandle& Temp_struct_Variable, bool CallFunc_BooleanAND_ReturnValue_1, const struct FDataTableRowHandle& K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_2, const struct FDataTableRowHandle& K2Node_Select_Default_1, const struct FDataTableRowHandle& K2Node_Select_Default_2);
	void Load_NPC_Data(const struct FDataTableRowHandle& NPC_Data, TSoftObjectPtr<class UShopDescriptorDataAsset> LShopDescriptor, const struct FDataTableRowHandle& LMapPinData, const struct FDataTableRowHandle& LNPCData, class UNarrativeNPCMapPinComponent* CallFunc_AddComponentByClass_ReturnValue, const struct FNWXNPCNarrativeData& CallFunc_GetNPCNarrativeDataFromDataTableRow_OutNPCNarrativeData, enum class ENPCBlueprintHelperGetResult CallFunc_GetNPCNarrativeDataFromDataTableRow_Branches, bool CallFunc_GetNPCNarrativeDataFromDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidRowHandle_IsValid, class UMapPinComponent* CallFunc_AddComponentByClass_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, const struct FTransform& Temp_struct_Variable, class UShopProviderComponent* CallFunc_AddComponent_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UShopDescriptorDataAsset* K2Node_DynamicCast_AsShop_Descriptor_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidRowHandle_IsValid_1, const struct FQuestGiverTableRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void ReceiveBeginPlay();
	void OnClientReady();
	void ExecuteUbergraph_BP_Creature_NPC_Narrative(int32 EntryPoint, bool CallFunc_TrySetIdleAnimation_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FDataTableRowHandle& CallFunc_GetQuestGiverRowHandle_ReturnValue, bool CallFunc_IsValidRowHandle_IsValid, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


