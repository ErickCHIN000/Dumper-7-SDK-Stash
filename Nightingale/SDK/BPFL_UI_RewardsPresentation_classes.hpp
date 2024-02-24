#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C
class UBPFL_UI_RewardsPresentation_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_UI_RewardsPresentation_C* GetDefaultObj();

	void GenerateConditionalRewardsFromRewardTypes(TArray<enum class EEncounterRewardType>& RewardTypes, class UObject* __WorldContext, TArray<struct FConditionalReward>* PresentationData, const TArray<struct FConditionalReward>& LOCAL_ConditionalRewards, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EEncounterRewardType CallFunc_Array_Get_Item, TArray<struct FConditionalReward>& CallFunc_GenerateConditionalRewards_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GenerateRealmRewardPresentation(const struct FGameplayTagContainer& RealmTags, class UObject* __WorldContext, TArray<struct FNWXClusterCollectionPresentationData>* ClusterCollectionsPresentationDataList, const TArray<struct FConditionalReward>& LOCAL_ConditionalRewards, const TArray<class UConditionalRewardSet*>& L_CurrentRealmConditionalRewards, bool CallFunc_IsValid_ReturnValue, TArray<enum class EEncounterRewardType>& CallFunc_GetRewardTypesFrom_RealmTags_EncounterRewardType, TArray<struct FConditionalReward>& CallFunc_GenerateConditionalRewardsFromRewardTypes_PresentationData, TArray<struct FNWXClusterCollectionPresentationData>& CallFunc_GetClusterCollectionPresentationDataListFromConditionalRewards_ClusterCollectionPresentationDataList, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void GetClusterCollectionPresentationDataListFromConditionalRewards(TArray<struct FConditionalReward>& ConditionalRewards, class UObject* __WorldContext, TArray<struct FNWXClusterCollectionPresentationData>* ClusterCollectionPresentationDataList, const TArray<struct FNWXClusterCollectionPresentationData>& L_TotalClusterCollectionPresentationData, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FConditionalReward& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FNWXClusterCollectionPresentationData>& CallFunc_GetClusterCollectionPresentationDataListFromRewardBehaviour_ClusterCollectionPresentationDataList, const struct FNWXClusterCollectionPresentationData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue);
	void GetClusterCollectionDiscoveryPresentationFromSkillReference(const struct FSkillDataReference& SkillReference, class UObject* __WorldContext, struct FNWXClusterCollectionPresentationData* ClusterCollectionDiscoveryPresentationData, class ABP_PlayerState_C* PlayerState, enum class ENWXDiscoveryPresentationState Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue_1, enum class ENWXDiscoveryPresentationState Temp_byte_Variable_1, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue, TScriptInterface<class ISkillUnlockInterface> K2Node_DynamicCast_AsSkill_Unlock_Interface, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, enum class ENWXDiscoveryPresentationState K2Node_Select_Default, bool CallFunc_HasSkillFullyUnlocked_ReturnValue, const struct FNWXClusterCollectionPresentationData& K2Node_MakeStruct_NWXClusterCollectionPresentationData, bool CallFunc_IsValid_ReturnValue_2);
	void GetClusterCollectionPresentationDataListFromRewardBehaviour(class URewardBehaviour* RewardBehaviour, class UObject* __WorldContext, TArray<struct FNWXClusterCollectionPresentationData>* ClusterCollectionPresentationDataList, const TArray<struct FNWXClusterCollectionPresentationData>& L_TotalClusterCollectionPresentationData, class UBP_RewardBehaviour_Technique_Multiple_C* K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique_Multiple, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FSkillDataReference& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FNWXClusterCollectionPresentationData& CallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData, int32 CallFunc_Array_AddUnique_ReturnValue, class UBP_RewardBehaviour_Technique_C* K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique, bool K2Node_DynamicCast_bSuccess_1, const struct FNWXClusterCollectionPresentationData& CallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData_1, TArray<struct FNWXClusterCollectionPresentationData>& K2Node_MakeArray_Array);
};

}


