#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_Makeup_Eyes_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_Makeup_Eyes_C WBP_CC_DynamicSubPanel_Makeup_Eyes.Default__WBP_CC_DynamicSubPanel_Makeup_Eyes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_Makeup_Eyes_C* UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_Makeup_Eyes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_Makeup_Eyes_C*>(UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.OnInputMethodChanged
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LDesiredFocusTarget                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             NewLocalVar                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWBP_CC_Appearance_CategoryButton_C*K2Node_DynamicCast_AsWBP_CC_Appearance_Category_Button           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_cc_sw_Slider_1D_C*      K2Node_DynamicCast_AsWBP_Cc_Sw_Slider_1D                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, class UWidget* LDesiredFocusTarget, const TArray<class UWidget*>& NewLocalVar, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWBP_CC_Appearance_CategoryButton_C* K2Node_DynamicCast_AsWBP_CC_Appearance_Category_Button, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_cc_sw_Slider_1D_C* K2Node_DynamicCast_AsWBP_Cc_Sw_Slider_1D, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "OnInputMethodChanged");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.LDesiredFocusTarget = LDesiredFocusTarget;
	Parms.NewLocalVar = NewLocalVar;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_CC_Appearance_Category_Button = K2Node_DynamicCast_AsWBP_CC_Appearance_Category_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Cc_Sw_Slider_1D = K2Node_DynamicCast_AsWBP_Cc_Sw_Slider_1D;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1 = CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             NewLocalVar_0                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonUserWidget*        K2Node_DynamicCast_AsNWXCommon_User_Widget                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::BP_GetDesiredFocusTarget(const TArray<class UWidget*>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UNWXCommonUserWidget* K2Node_DynamicCast_AsNWXCommon_User_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXCommon_User_Widget = K2Node_DynamicCast_AsNWXCommon_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.RefreshControlEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::RefreshControlEnabled(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "RefreshControlEnabled");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_RefreshControlEnabled_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.CollectPanelValues
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>OutValues                                                        (Parm, OutParm)
// class FString                      OutPanelName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// double                             CurrentLinerColor2A                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentLinerColor1A                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentLinerColor2                                               (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentLinerColor1                                               (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentLinerMask                                                 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// double                             CurrentShadowColor2A                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentShadowColor1A                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentShadowColor2                                              (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentShadowColor1                                              (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentShadowMask                                                (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_4                       (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs             (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_5                       (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_6                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_7                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_6                       (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4           (None)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_5           (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_7                       (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_6           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_8                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_7           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_9                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_8           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_10                        (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_11                        (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_9           (None)
// double                             CallFunc_GetMakeupAlpha_Alpha_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>K2Node_MakeMap_Map                                               (None)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data                                      (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_1                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_2                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_3                                    (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_4                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_5                                    (NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, double CurrentLinerColor2A, double CurrentLinerColor1A, const struct FDataTableRowHandle& CurrentLinerColor2, const struct FDataTableRowHandle& CurrentLinerColor1, const struct FDataTableRowHandle& CurrentLinerMask, double CurrentShadowColor2A, double CurrentShadowColor1A, const struct FDataTableRowHandle& CurrentShadowColor2, const struct FDataTableRowHandle& CurrentShadowColor1, const struct FDataTableRowHandle& CurrentShadowMask, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_4, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_5, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_6, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_7, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_6, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_5, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_7, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_6, const class FString& CallFunc_Conv_NameToString_ReturnValue_8, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_7, const class FString& CallFunc_Conv_NameToString_ReturnValue_9, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_8, const class FString& CallFunc_Conv_NameToString_ReturnValue_10, double CallFunc_GetMakeupAlpha_Alpha, const class FString& CallFunc_Conv_NameToString_ReturnValue_11, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_9, double CallFunc_GetMakeupAlpha_Alpha_1, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_2, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_3, double CallFunc_GetMakeupAlpha_Alpha_2, double CallFunc_GetMakeupAlpha_Alpha_3, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_4, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "CollectPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_CollectPanelValues_Params Parms{};

	Parms.CurrentLinerColor2A = CurrentLinerColor2A;
	Parms.CurrentLinerColor1A = CurrentLinerColor1A;
	Parms.CurrentLinerColor2 = CurrentLinerColor2;
	Parms.CurrentLinerColor1 = CurrentLinerColor1;
	Parms.CurrentLinerMask = CurrentLinerMask;
	Parms.CurrentShadowColor2A = CurrentShadowColor2A;
	Parms.CurrentShadowColor1A = CurrentShadowColor1A;
	Parms.CurrentShadowColor2 = CurrentShadowColor2;
	Parms.CurrentShadowColor1 = CurrentShadowColor1;
	Parms.CurrentShadowMask = CurrentShadowMask;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_3 = CallFunc_Conv_DoubleToString_ReturnValue_3;
	Parms.CallFunc_Conv_NameToString_ReturnValue_3 = CallFunc_Conv_NameToString_ReturnValue_3;
	Parms.CallFunc_Conv_NameToString_ReturnValue_4 = CallFunc_Conv_NameToString_ReturnValue_4;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_4 = CallFunc_Conv_DoubleToString_ReturnValue_4;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_5 = CallFunc_Conv_DoubleToString_ReturnValue_5;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_5 = CallFunc_Conv_NameToString_ReturnValue_5;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_6 = CallFunc_Conv_NameToString_ReturnValue_6;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3;
	Parms.CallFunc_Conv_NameToString_ReturnValue_7 = CallFunc_Conv_NameToString_ReturnValue_7;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_6 = CallFunc_Conv_DoubleToString_ReturnValue_6;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_5 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_5;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_7 = CallFunc_Conv_DoubleToString_ReturnValue_7;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_6 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_6;
	Parms.CallFunc_Conv_NameToString_ReturnValue_8 = CallFunc_Conv_NameToString_ReturnValue_8;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_7 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_7;
	Parms.CallFunc_Conv_NameToString_ReturnValue_9 = CallFunc_Conv_NameToString_ReturnValue_9;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_8 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_8;
	Parms.CallFunc_Conv_NameToString_ReturnValue_10 = CallFunc_Conv_NameToString_ReturnValue_10;
	Parms.CallFunc_GetMakeupAlpha_Alpha = CallFunc_GetMakeupAlpha_Alpha;
	Parms.CallFunc_Conv_NameToString_ReturnValue_11 = CallFunc_Conv_NameToString_ReturnValue_11;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_9 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_9;
	Parms.CallFunc_GetMakeupAlpha_Alpha_1 = CallFunc_GetMakeupAlpha_Alpha_1;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_GetMakeupData_Data = CallFunc_GetMakeupData_Data;
	Parms.CallFunc_GetMakeupData_Data_1 = CallFunc_GetMakeupData_Data_1;
	Parms.CallFunc_GetMakeupData_Data_2 = CallFunc_GetMakeupData_Data_2;
	Parms.CallFunc_GetMakeupData_Data_3 = CallFunc_GetMakeupData_Data_3;
	Parms.CallFunc_GetMakeupAlpha_Alpha_2 = CallFunc_GetMakeupAlpha_Alpha_2;
	Parms.CallFunc_GetMakeupAlpha_Alpha_3 = CallFunc_GetMakeupAlpha_Alpha_3;
	Parms.CallFunc_GetMakeupData_Data_4 = CallFunc_GetMakeupData_Data_4;
	Parms.CallFunc_GetMakeupData_Data_5 = CallFunc_GetMakeupData_Data_5;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

	if (OutPanelName != nullptr)
		*OutPanelName = std::move(Parms.OutPanelName);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.CacheStartingPanelValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetMakeupAlpha_Alpha                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data                                      (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_1                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_2                                    (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_3                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_4                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_5                                    (NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::CacheStartingPanelValues(double CallFunc_GetMakeupAlpha_Alpha, double CallFunc_GetMakeupAlpha_Alpha_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_2, double CallFunc_GetMakeupAlpha_Alpha_2, double CallFunc_GetMakeupAlpha_Alpha_3, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_3, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_4, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "CacheStartingPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_CacheStartingPanelValues_Params Parms{};

	Parms.CallFunc_GetMakeupAlpha_Alpha = CallFunc_GetMakeupAlpha_Alpha;
	Parms.CallFunc_GetMakeupAlpha_Alpha_1 = CallFunc_GetMakeupAlpha_Alpha_1;
	Parms.CallFunc_GetMakeupData_Data = CallFunc_GetMakeupData_Data;
	Parms.CallFunc_GetMakeupData_Data_1 = CallFunc_GetMakeupData_Data_1;
	Parms.CallFunc_GetMakeupData_Data_2 = CallFunc_GetMakeupData_Data_2;
	Parms.CallFunc_GetMakeupAlpha_Alpha_2 = CallFunc_GetMakeupAlpha_Alpha_2;
	Parms.CallFunc_GetMakeupAlpha_Alpha_3 = CallFunc_GetMakeupAlpha_Alpha_3;
	Parms.CallFunc_GetMakeupData_Data_3 = CallFunc_GetMakeupData_Data_3;
	Parms.CallFunc_GetMakeupData_Data_4 = CallFunc_GetMakeupData_Data_4;
	Parms.CallFunc_GetMakeupData_Data_5 = CallFunc_GetMakeupData_Data_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.UpdateUIFromPersistence
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data                                      (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_1                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_2                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_3                                    (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::UpdateUIFromPersistence(TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_GetMakeupAlpha_Alpha, double CallFunc_GetMakeupAlpha_Alpha_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_2, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_3, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "UpdateUIFromPersistence");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_UpdateUIFromPersistence_Params Parms{};

	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.CallFunc_GetMakeupData_Data = CallFunc_GetMakeupData_Data;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetMakeupAlpha_Alpha = CallFunc_GetMakeupAlpha_Alpha;
	Parms.CallFunc_GetMakeupAlpha_Alpha_1 = CallFunc_GetMakeupAlpha_Alpha_1;
	Parms.CallFunc_GetMakeupData_Data_1 = CallFunc_GetMakeupData_Data_1;
	Parms.CallFunc_GetMakeupData_Data_2 = CallFunc_GetMakeupData_Data_2;
	Parms.CallFunc_GetMakeupData_Data_3 = CallFunc_GetMakeupData_Data_3;
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast;
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1 = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.SetMakeupMask
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMakeupType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_cc_sw_MakeupPicker_C*   CurrentMakeupWidget                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::SetMakeupMask(enum class EMakeupType Type, class UWBP_cc_sw_MakeupPicker_C* CurrentMakeupWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "SetMakeupMask");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_SetMakeupMask_Params Parms{};

	Parms.Type = Type;
	Parms.CurrentMakeupWidget = CurrentMakeupWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.UpdateMakeup_EyeShadow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_cc_sw_MakeupPicker_C*   CurrentMakeupWidget                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::UpdateMakeup_EyeShadow(class UWBP_cc_sw_MakeupPicker_C* CurrentMakeupWidget, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast, double CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_1, double CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "UpdateMakeup_EyeShadow");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_UpdateMakeup_EyeShadow_Params Parms{};

	Parms.CurrentMakeupWidget = CurrentMakeupWidget;
	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast = CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast;
	Parms.CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_1 = CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_1;
	Parms.CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_2 = CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourA_K2Node_ComponentBoundEvent_11_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourA_K2Node_ComponentBoundEvent_11_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourA_K2Node_ComponentBoundEvent_11_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourA_K2Node_ComponentBoundEvent_11_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourB_K2Node_ComponentBoundEvent_12_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourB_K2Node_ComponentBoundEvent_12_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourB_K2Node_ComponentBoundEvent_12_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourB_K2Node_ComponentBoundEvent_12_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_GlitterColor_K2Node_ComponentBoundEvent_13_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_GlitterColor_K2Node_ComponentBoundEvent_13_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_GlitterColor_K2Node_ComponentBoundEvent_13_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_GlitterColor_K2Node_ComponentBoundEvent_13_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_GlitterIntensity_K2Node_ComponentBoundEvent_14_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_GlitterIntensity_K2Node_ComponentBoundEvent_14_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_GlitterIntensity_K2Node_ComponentBoundEvent_14_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_GlitterIntensity_K2Node_ComponentBoundEvent_14_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_Intensity_K2Node_ComponentBoundEvent_15_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_Intensity_K2Node_ComponentBoundEvent_15_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_Intensity_K2Node_ComponentBoundEvent_15_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_Intensity_K2Node_ComponentBoundEvent_15_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_StylePicker_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_StylePicker_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_StylePicker_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_StylePicker_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "OnAddedToFocusPath");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "OnRemovedFromFocusPath");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_2_OnResetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_2_OnResetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_2_OnResetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Eyes
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID_2                             (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch__2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID_1                             (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch__1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID                               (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch_                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Eyes_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Eyes(int32 EntryPoint, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 Temp_int_Array_Index_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_2, int32 K2Node_ComponentBoundEvent_GridIndex_2, bool K2Node_ComponentBoundEvent_ColorSwatch__2, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_1, int32 K2Node_ComponentBoundEvent_GridIndex_1, bool K2Node_ComponentBoundEvent_ColorSwatch__1, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID, int32 K2Node_ComponentBoundEvent_GridIndex, bool K2Node_ComponentBoundEvent_ColorSwatch_, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints, double K2Node_ComponentBoundEvent_Slider_Value_1, double K2Node_ComponentBoundEvent_Slider_Value, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 K2Node_ComponentBoundEvent_Index, int32 CallFunc_Array_Length_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Eyes_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Eyes");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Eyes_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ColorID_2 = K2Node_ComponentBoundEvent_ColorID_2;
	Parms.K2Node_ComponentBoundEvent_GridIndex_2 = K2Node_ComponentBoundEvent_GridIndex_2;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch__2 = K2Node_ComponentBoundEvent_ColorSwatch__2;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2 = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2;
	Parms.K2Node_ComponentBoundEvent_ColorID_1 = K2Node_ComponentBoundEvent_ColorID_1;
	Parms.K2Node_ComponentBoundEvent_GridIndex_1 = K2Node_ComponentBoundEvent_GridIndex_1;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch__1 = K2Node_ComponentBoundEvent_ColorSwatch__1;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1 = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1;
	Parms.K2Node_ComponentBoundEvent_ColorID = K2Node_ComponentBoundEvent_ColorID;
	Parms.K2Node_ComponentBoundEvent_GridIndex = K2Node_ComponentBoundEvent_GridIndex;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch_ = K2Node_ComponentBoundEvent_ColorSwatch_;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_1 = K2Node_ComponentBoundEvent_Slider_Value_1;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_IsUsingGamepad_ReturnValue_1 = CallFunc_IsUsingGamepad_ReturnValue_1;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


