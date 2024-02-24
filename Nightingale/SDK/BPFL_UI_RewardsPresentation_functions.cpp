#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C
// (None)

class UClass* UBPFL_UI_RewardsPresentation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_UI_RewardsPresentation_C");

	return Clss;
}


// BPFL_UI_RewardsPresentation_C BPFL_UI_RewardsPresentation.Default__BPFL_UI_RewardsPresentation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_UI_RewardsPresentation_C* UBPFL_UI_RewardsPresentation_C::GetDefaultObj()
{
	static class UBPFL_UI_RewardsPresentation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_UI_RewardsPresentation_C*>(UBPFL_UI_RewardsPresentation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C.GenerateConditionalRewardsFromRewardTypes
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EEncounterRewardType>RewardTypes                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConditionalReward>  PresentationData                                                 (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FConditionalReward>  LOCAL_ConditionalRewards                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardType    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConditionalReward>  CallFunc_GenerateConditionalRewards_ReturnValue                  (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UI_RewardsPresentation_C::GenerateConditionalRewardsFromRewardTypes(TArray<enum class EEncounterRewardType>& RewardTypes, class UObject* __WorldContext, TArray<struct FConditionalReward>* PresentationData, const TArray<struct FConditionalReward>& LOCAL_ConditionalRewards, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EEncounterRewardType CallFunc_Array_Get_Item, TArray<struct FConditionalReward>& CallFunc_GenerateConditionalRewards_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_RewardsPresentation_C", "GenerateConditionalRewardsFromRewardTypes");

	Params::UBPFL_UI_RewardsPresentation_C_GenerateConditionalRewardsFromRewardTypes_Params Parms{};

	Parms.RewardTypes = RewardTypes;
	Parms.__WorldContext = __WorldContext;
	Parms.LOCAL_ConditionalRewards = LOCAL_ConditionalRewards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GenerateConditionalRewards_ReturnValue = CallFunc_GenerateConditionalRewards_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PresentationData != nullptr)
		*PresentationData = std::move(Parms.PresentationData);

}


// Function BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C.GenerateRealmRewardPresentation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       RealmTags                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNWXClusterCollectionPresentationData>ClusterCollectionsPresentationDataList                           (Parm, OutParm)
// TArray<struct FConditionalReward>  LOCAL_ConditionalRewards                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UConditionalRewardSet*>L_CurrentRealmConditionalRewards                                 (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EEncounterRewardType>CallFunc_GetRewardTypesFrom_RealmTags_EncounterRewardType        (ReferenceParm)
// TArray<struct FConditionalReward>  CallFunc_GenerateConditionalRewardsFromRewardTypes_PresentationData(ReferenceParm, ContainsInstancedReference)
// TArray<struct FNWXClusterCollectionPresentationData>CallFunc_GetClusterCollectionPresentationDataListFromConditionalRewards_ClusterCollectionPresentationDataList(ReferenceParm)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UI_RewardsPresentation_C::GenerateRealmRewardPresentation(const struct FGameplayTagContainer& RealmTags, class UObject* __WorldContext, TArray<struct FNWXClusterCollectionPresentationData>* ClusterCollectionsPresentationDataList, const TArray<struct FConditionalReward>& LOCAL_ConditionalRewards, const TArray<class UConditionalRewardSet*>& L_CurrentRealmConditionalRewards, bool CallFunc_IsValid_ReturnValue, TArray<enum class EEncounterRewardType>& CallFunc_GetRewardTypesFrom_RealmTags_EncounterRewardType, TArray<struct FConditionalReward>& CallFunc_GenerateConditionalRewardsFromRewardTypes_PresentationData, TArray<struct FNWXClusterCollectionPresentationData>& CallFunc_GetClusterCollectionPresentationDataListFromConditionalRewards_ClusterCollectionPresentationDataList, bool CallFunc_Array_IsNotEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_RewardsPresentation_C", "GenerateRealmRewardPresentation");

	Params::UBPFL_UI_RewardsPresentation_C_GenerateRealmRewardPresentation_Params Parms{};

	Parms.RealmTags = RealmTags;
	Parms.__WorldContext = __WorldContext;
	Parms.LOCAL_ConditionalRewards = LOCAL_ConditionalRewards;
	Parms.L_CurrentRealmConditionalRewards = L_CurrentRealmConditionalRewards;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRewardTypesFrom_RealmTags_EncounterRewardType = CallFunc_GetRewardTypesFrom_RealmTags_EncounterRewardType;
	Parms.CallFunc_GenerateConditionalRewardsFromRewardTypes_PresentationData = CallFunc_GenerateConditionalRewardsFromRewardTypes_PresentationData;
	Parms.CallFunc_GetClusterCollectionPresentationDataListFromConditionalRewards_ClusterCollectionPresentationDataList = CallFunc_GetClusterCollectionPresentationDataListFromConditionalRewards_ClusterCollectionPresentationDataList;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ClusterCollectionsPresentationDataList != nullptr)
		*ClusterCollectionsPresentationDataList = std::move(Parms.ClusterCollectionsPresentationDataList);

}


// Function BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C.GetClusterCollectionPresentationDataListFromConditionalRewards
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FConditionalReward>  ConditionalRewards                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNWXClusterCollectionPresentationData>ClusterCollectionPresentationDataList                            (Parm, OutParm)
// TArray<struct FNWXClusterCollectionPresentationData>L_TotalClusterCollectionPresentationData                         (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionalReward          CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNWXClusterCollectionPresentationData>CallFunc_GetClusterCollectionPresentationDataListFromRewardBehaviour_ClusterCollectionPresentationDataList(ReferenceParm)
// struct FNWXClusterCollectionPresentationDataCallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UI_RewardsPresentation_C::GetClusterCollectionPresentationDataListFromConditionalRewards(TArray<struct FConditionalReward>& ConditionalRewards, class UObject* __WorldContext, TArray<struct FNWXClusterCollectionPresentationData>* ClusterCollectionPresentationDataList, const TArray<struct FNWXClusterCollectionPresentationData>& L_TotalClusterCollectionPresentationData, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FConditionalReward& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FNWXClusterCollectionPresentationData>& CallFunc_GetClusterCollectionPresentationDataListFromRewardBehaviour_ClusterCollectionPresentationDataList, const struct FNWXClusterCollectionPresentationData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_RewardsPresentation_C", "GetClusterCollectionPresentationDataListFromConditionalRewards");

	Params::UBPFL_UI_RewardsPresentation_C_GetClusterCollectionPresentationDataListFromConditionalRewards_Params Parms{};

	Parms.ConditionalRewards = ConditionalRewards;
	Parms.__WorldContext = __WorldContext;
	Parms.L_TotalClusterCollectionPresentationData = L_TotalClusterCollectionPresentationData;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetClusterCollectionPresentationDataListFromRewardBehaviour_ClusterCollectionPresentationDataList = CallFunc_GetClusterCollectionPresentationDataListFromRewardBehaviour_ClusterCollectionPresentationDataList;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ClusterCollectionPresentationDataList != nullptr)
		*ClusterCollectionPresentationDataList = std::move(Parms.ClusterCollectionPresentationDataList);

}


// Function BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C.GetClusterCollectionDiscoveryPresentationFromSkillReference
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillDataReference         SkillReference                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FNWXClusterCollectionPresentationDataClusterCollectionDiscoveryPresentationData                       (Parm, OutParm)
// class ABP_PlayerState_C*           PlayerState                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// enum class ENWXDiscoveryPresentationStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENWXDiscoveryPresentationStateTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillPresentationData      CallFunc_GetSkillPresentationData_ReturnValue                    (None)
// TScriptInterface<class ISkillUnlockInterface>K2Node_DynamicCast_AsSkill_Unlock_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENWXDiscoveryPresentationStateK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSkillFullyUnlocked_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXClusterCollectionPresentationDataK2Node_MakeStruct_NWXClusterCollectionPresentationData           (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UI_RewardsPresentation_C::GetClusterCollectionDiscoveryPresentationFromSkillReference(const struct FSkillDataReference& SkillReference, class UObject* __WorldContext, struct FNWXClusterCollectionPresentationData* ClusterCollectionDiscoveryPresentationData, class ABP_PlayerState_C* PlayerState, enum class ENWXDiscoveryPresentationState Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue_1, enum class ENWXDiscoveryPresentationState Temp_byte_Variable_1, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue, TScriptInterface<class ISkillUnlockInterface> K2Node_DynamicCast_AsSkill_Unlock_Interface, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, enum class ENWXDiscoveryPresentationState K2Node_Select_Default, bool CallFunc_HasSkillFullyUnlocked_ReturnValue, const struct FNWXClusterCollectionPresentationData& K2Node_MakeStruct_NWXClusterCollectionPresentationData, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_RewardsPresentation_C", "GetClusterCollectionDiscoveryPresentationFromSkillReference");

	Params::UBPFL_UI_RewardsPresentation_C_GetClusterCollectionDiscoveryPresentationFromSkillReference_Params Parms{};

	Parms.SkillReference = SkillReference;
	Parms.__WorldContext = __WorldContext;
	Parms.PlayerState = PlayerState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetSkillPresentationData_ReturnValue = CallFunc_GetSkillPresentationData_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkill_Unlock_Interface = K2Node_DynamicCast_AsSkill_Unlock_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HasSkillFullyUnlocked_ReturnValue = CallFunc_HasSkillFullyUnlocked_ReturnValue;
	Parms.K2Node_MakeStruct_NWXClusterCollectionPresentationData = K2Node_MakeStruct_NWXClusterCollectionPresentationData;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (ClusterCollectionDiscoveryPresentationData != nullptr)
		*ClusterCollectionDiscoveryPresentationData = std::move(Parms.ClusterCollectionDiscoveryPresentationData);

}


// Function BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C.GetClusterCollectionPresentationDataListFromRewardBehaviour
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardBehaviour*            RewardBehaviour                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNWXClusterCollectionPresentationData>ClusterCollectionPresentationDataList                            (Parm, OutParm)
// TArray<struct FNWXClusterCollectionPresentationData>L_TotalClusterCollectionPresentationData                         (Edit, BlueprintVisible)
// class UBP_RewardBehaviour_Technique_Multiple_C*K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique_Multiple      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillDataReference         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXClusterCollectionPresentationDataCallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData(None)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RewardBehaviour_Technique_C*K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXClusterCollectionPresentationDataCallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData_1(None)
// TArray<struct FNWXClusterCollectionPresentationData>K2Node_MakeArray_Array                                           (ReferenceParm)

void UBPFL_UI_RewardsPresentation_C::GetClusterCollectionPresentationDataListFromRewardBehaviour(class URewardBehaviour* RewardBehaviour, class UObject* __WorldContext, TArray<struct FNWXClusterCollectionPresentationData>* ClusterCollectionPresentationDataList, const TArray<struct FNWXClusterCollectionPresentationData>& L_TotalClusterCollectionPresentationData, class UBP_RewardBehaviour_Technique_Multiple_C* K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique_Multiple, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FSkillDataReference& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FNWXClusterCollectionPresentationData& CallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData, int32 CallFunc_Array_AddUnique_ReturnValue, class UBP_RewardBehaviour_Technique_C* K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique, bool K2Node_DynamicCast_bSuccess_1, const struct FNWXClusterCollectionPresentationData& CallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData_1, TArray<struct FNWXClusterCollectionPresentationData>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_RewardsPresentation_C", "GetClusterCollectionPresentationDataListFromRewardBehaviour");

	Params::UBPFL_UI_RewardsPresentation_C_GetClusterCollectionPresentationDataListFromRewardBehaviour_Params Parms{};

	Parms.RewardBehaviour = RewardBehaviour;
	Parms.__WorldContext = __WorldContext;
	Parms.L_TotalClusterCollectionPresentationData = L_TotalClusterCollectionPresentationData;
	Parms.K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique_Multiple = K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique_Multiple;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData = CallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique = K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData_1 = CallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (ClusterCollectionPresentationDataList != nullptr)
		*ClusterCollectionPresentationDataList = std::move(Parms.ClusterCollectionPresentationDataList);

}

}


