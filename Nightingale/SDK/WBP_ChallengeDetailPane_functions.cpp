#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C
// (None)

class UClass* UWBP_ChallengeDetailPane_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ChallengeDetailPane_C");

	return Clss;
}


// WBP_ChallengeDetailPane_C WBP_ChallengeDetailPane.Default__WBP_ChallengeDetailPane_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ChallengeDetailPane_C* UWBP_ChallengeDetailPane_C::GetDefaultObj()
{
	static class UWBP_ChallengeDetailPane_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ChallengeDetailPane_C*>(UWBP_ChallengeDetailPane_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.OnExecuteCategoryOperation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LIsValidReward                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UChallengeSystem*            K2Node_DynamicCast_AsChallenge_System                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExperienceStateID          CallFunc_GetID_ReturnValue                                       (NoDestructor, HasGetValueTypeHash)
// TArray<class URewardBehaviour*>    CallFunc_GetRewards_ReturnValue                                  (ConstParm, ReferenceParm)
// class URewardBehaviour*            CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRewardValid_bIsValid                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_IsRewardValid_OutInvalidReason                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeDetailPane_C::OnExecuteCategoryOperation(bool LIsValidReward, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UChallengeSystem* K2Node_DynamicCast_AsChallenge_System, bool K2Node_DynamicCast_bSuccess, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, TArray<class URewardBehaviour*>& CallFunc_GetRewards_ReturnValue, class URewardBehaviour* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsRewardValid_bIsValid, class FText CallFunc_IsRewardValid_OutInvalidReason, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "OnExecuteCategoryOperation");

	Params::UWBP_ChallengeDetailPane_C_OnExecuteCategoryOperation_Params Parms{};

	Parms.LIsValidReward = LIsValidReward;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_DynamicCast_AsChallenge_System = K2Node_DynamicCast_AsChallenge_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_GetRewards_ReturnValue = CallFunc_GetRewards_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsRewardValid_bIsValid = CallFunc_IsRewardValid_bIsValid;
	Parms.CallFunc_IsRewardValid_OutInvalidReason = CallFunc_IsRewardValid_OutInvalidReason;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.InitializeDesignerPreview
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LTotal                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LCount                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ChallengeDetailPane_ConditionEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeDetailPane_C::InitializeDesignerPreview(int32 LTotal, int32 LCount, class UWBP_ChallengeDetailPane_ConditionEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText Temp_text_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "InitializeDesignerPreview");

	Params::UWBP_ChallengeDetailPane_C_InitializeDesignerPreview_Params Parms{};

	Parms.LTotal = LTotal;
	Parms.LCount = LCount;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.ResetCosmetics
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ChallengeDetailPane_C::ResetCosmetics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "ResetCosmetics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.UpdateCosmetics
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             LRewards                                                         (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URewardBehaviour*>    CallFunc_GetRewards_ReturnValue                                  (ConstParm, ReferenceParm)
// class FText                        CallFunc_GetDescription_ReturnValue                              (None)
// class URewardBehaviour*            CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeRewardPresentation>CallFunc_GetChallengeRewardPresentationForReward_Presentation    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetChallengeRewardPresentationForReward_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTitle_ReturnValue                                    (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeDetailPane_C::UpdateCosmetics(const TArray<class UObject*>& LRewards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class URewardBehaviour*>& CallFunc_GetRewards_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class URewardBehaviour* CallFunc_Array_Get_Item, TScriptInterface<class IChallengeRewardPresentation> CallFunc_GetChallengeRewardPresentationForReward_Presentation, bool CallFunc_GetChallengeRewardPresentationForReward_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetTitle_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "UpdateCosmetics");

	Params::UWBP_ChallengeDetailPane_C_UpdateCosmetics_Params Parms{};

	Parms.LRewards = LRewards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetRewards_ReturnValue = CallFunc_GetRewards_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetChallengeRewardPresentationForReward_Presentation = CallFunc_GetChallengeRewardPresentationForReward_Presentation;
	Parms.CallFunc_GetChallengeRewardPresentationForReward_ReturnValue = CallFunc_GetChallengeRewardPresentationForReward_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTitle_ReturnValue = CallFunc_GetTitle_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.OnChallengeUpdated
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExperienceStateID          ChallengeID                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FExperienceStateID          CallFunc_GetID_ReturnValue                                       (NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FExperienceStateID_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeDetailPane_C::OnChallengeUpdated(struct FExperienceStateID& ChallengeID, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_EqualEqual_FExperienceStateID_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "OnChallengeUpdated");

	Params::UWBP_ChallengeDetailPane_C_OnChallengeUpdated_Params Parms{};

	Parms.ChallengeID = ChallengeID;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_EqualEqual_FExperienceStateID_ReturnValue = CallFunc_EqualEqual_FExperienceStateID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.UpdateConditionEntries
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FString> StringMap                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ChallengeDetailPane_ConditionEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeDetailPane_C::UpdateConditionEntries(TMap<class FString, class FString> StringMap, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWBP_ChallengeDetailPane_ConditionEntry_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "UpdateConditionEntries");

	Params::UWBP_ChallengeDetailPane_C_UpdateConditionEntries_Params Parms{};

	Parms.StringMap = StringMap;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.UpdateProgressElements
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExperienceStateID          ChallengeID                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetProgressData_NumConditionsComplete                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetProgressData_NumConditionsTotal                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FString> CallFunc_GetProgressData_ConditionsProgressMap                   (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_ChallengeDetailPane_C::UpdateProgressElements(const struct FExperienceStateID& ChallengeID, bool Temp_bool_Variable, int32 CallFunc_GetProgressData_NumConditionsComplete, int32 CallFunc_GetProgressData_NumConditionsTotal, TMap<class FString, class FString> CallFunc_GetProgressData_ConditionsProgressMap, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UWidget* K2Node_Select_Default, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "UpdateProgressElements");

	Params::UWBP_ChallengeDetailPane_C_UpdateProgressElements_Params Parms{};

	Parms.ChallengeID = ChallengeID;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetProgressData_NumConditionsComplete = CallFunc_GetProgressData_NumConditionsComplete;
	Parms.CallFunc_GetProgressData_NumConditionsTotal = CallFunc_GetProgressData_NumConditionsTotal;
	Parms.CallFunc_GetProgressData_ConditionsProgressMap = CallFunc_GetProgressData_ConditionsProgressMap;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.UpdateProgressStatus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExperienceStateID          LChallengeID                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChallengeComplete_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExperienceStateID          CallFunc_GetID_ReturnValue                                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreRewardsGranted_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryChallenge*  K2Node_DynamicCast_AsNWXMenu_Data_Entry_Challenge                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChallengeDataAsset*         CallFunc_GetChallengeDataAsset_ReturnValue                       (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeDefinition>K2Node_DynamicCast_AsChallenge_Definition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeDetailPane_C::UpdateProgressStatus(const struct FExperienceStateID& LChallengeID, bool CallFunc_IsChallengeComplete_ReturnValue, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, bool CallFunc_AreRewardsGranted_ReturnValue, class UNWXMenuDataEntryChallenge* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Challenge, bool K2Node_DynamicCast_bSuccess, class UChallengeDataAsset* CallFunc_GetChallengeDataAsset_ReturnValue, TScriptInterface<class IChallengeDefinition> K2Node_DynamicCast_AsChallenge_Definition, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "UpdateProgressStatus");

	Params::UWBP_ChallengeDetailPane_C_UpdateProgressStatus_Params Parms{};

	Parms.LChallengeID = LChallengeID;
	Parms.CallFunc_IsChallengeComplete_ReturnValue = CallFunc_IsChallengeComplete_ReturnValue;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_AreRewardsGranted_ReturnValue = CallFunc_AreRewardsGranted_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Challenge = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Challenge;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChallengeDataAsset_ReturnValue = CallFunc_GetChallengeDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsChallenge_Definition = K2Node_DynamicCast_AsChallenge_Definition;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.GetProgressData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumConditionsComplete                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumConditionsTotal                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FString> ConditionsProgressMap                                            (Parm, OutParm)
// class UBP_ChallengeConditionPresentationBuilder_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UConditionBehaviour>CallFunc_GetCompletionCondition_ReturnValue                      (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UConditionBehaviour*         K2Node_DynamicCast_AsCondition_Behaviour                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTask                       K2Node_MakeStruct_Task                                           (ContainsInstancedReference)
// int32                              CallFunc_GetProgressPresentationData_NumConditionsComplete       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetProgressPresentationData_NumConditionsTotal          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FString> CallFunc_GetProgressPresentationData_ConditionsProgressMap       (None)

void UWBP_ChallengeDetailPane_C::GetProgressData(int32* NumConditionsComplete, int32* NumConditionsTotal, TMap<class FString, class FString>* ConditionsProgressMap, class UBP_ChallengeConditionPresentationBuilder_C* CallFunc_SpawnObject_ReturnValue, TSoftObjectPtr<class UConditionBehaviour> CallFunc_GetCompletionCondition_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UConditionBehaviour* K2Node_DynamicCast_AsCondition_Behaviour, bool K2Node_DynamicCast_bSuccess, const struct FTask& K2Node_MakeStruct_Task, int32 CallFunc_GetProgressPresentationData_NumConditionsComplete, int32 CallFunc_GetProgressPresentationData_NumConditionsTotal, TMap<class FString, class FString> CallFunc_GetProgressPresentationData_ConditionsProgressMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "GetProgressData");

	Params::UWBP_ChallengeDetailPane_C_GetProgressData_Params Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetCompletionCondition_ReturnValue = CallFunc_GetCompletionCondition_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCondition_Behaviour = K2Node_DynamicCast_AsCondition_Behaviour;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_Task = K2Node_MakeStruct_Task;
	Parms.CallFunc_GetProgressPresentationData_NumConditionsComplete = CallFunc_GetProgressPresentationData_NumConditionsComplete;
	Parms.CallFunc_GetProgressPresentationData_NumConditionsTotal = CallFunc_GetProgressPresentationData_NumConditionsTotal;
	Parms.CallFunc_GetProgressPresentationData_ConditionsProgressMap = CallFunc_GetProgressPresentationData_ConditionsProgressMap;

	UObject::ProcessEvent(Func, &Parms);

	if (NumConditionsComplete != nullptr)
		*NumConditionsComplete = Parms.NumConditionsComplete;

	if (NumConditionsTotal != nullptr)
		*NumConditionsTotal = Parms.NumConditionsTotal;

	if (ConditionsProgressMap != nullptr)
		*ConditionsProgressMap = Parms.ConditionsProgressMap;

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeSystemObservable>K2Node_DynamicCast_AsChallenge_System_Observable                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeDetailPane_C::Initialize(TSubclassOf<class IInterface> Temp_class_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_FindFirstImplementor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IChallengeSystemObservable> K2Node_DynamicCast_AsChallenge_System_Observable, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "Initialize");

	Params::UWBP_ChallengeDetailPane_C_Initialize_Params Parms{};

	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsChallenge_System_Observable = K2Node_DynamicCast_AsChallenge_System_Observable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ChallengeDetailPane_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.BndEvt__WBP_ChallengeDetailPane_BTN_ClaimRewards_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeDetailPane_C::BndEvt__WBP_ChallengeDetailPane_BTN_ClaimRewards_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "BndEvt__WBP_ChallengeDetailPane_BTN_ClaimRewards_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_ChallengeDetailPane_C_BndEvt__WBP_ChallengeDetailPane_BTN_ClaimRewards_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ChallengeDetailPane_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChallengeDetailPane.WBP_ChallengeDetailPane_C.ExecuteUbergraph_WBP_ChallengeDetailPane
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeDetailPane_C::ExecuteUbergraph_WBP_ChallengeDetailPane(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_C", "ExecuteUbergraph_WBP_ChallengeDetailPane");

	Params::UWBP_ChallengeDetailPane_C_ExecuteUbergraph_WBP_ChallengeDetailPane_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


