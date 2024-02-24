#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_Makeup_Cheeks_C WBP_CC_DynamicSubPanel_Makeup_Cheeks.Default__WBP_CC_DynamicSubPanel_Makeup_Cheeks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C* UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C*>(UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.OnInputMethodChanged
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             NewLocalVar                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// class UWidget*                     LDesiredFocusTarget                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CC_Appearance_CategoryButton_C*K2Node_DynamicCast_AsWBP_CC_Appearance_Category_Button           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_cc_sw_Slider_1D_C*      K2Node_DynamicCast_AsWBP_Cc_Sw_Slider_1D                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, const TArray<class UWidget*>& NewLocalVar, class UWidget* LDesiredFocusTarget, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_CC_Appearance_CategoryButton_C* K2Node_DynamicCast_AsWBP_CC_Appearance_Category_Button, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_cc_sw_Slider_1D_C* K2Node_DynamicCast_AsWBP_Cc_Sw_Slider_1D, bool K2Node_DynamicCast_bSuccess_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "OnInputMethodChanged");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.NewLocalVar = NewLocalVar;
	Parms.LDesiredFocusTarget = LDesiredFocusTarget;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_CC_Appearance_Category_Button = K2Node_DynamicCast_AsWBP_CC_Appearance_Category_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Cc_Sw_Slider_1D = K2Node_DynamicCast_AsWBP_Cc_Sw_Slider_1D;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1 = CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BP_GetDesiredFocusTarget
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

class UWidget* UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BP_GetDesiredFocusTarget(const TArray<class UWidget*>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UNWXCommonUserWidget* K2Node_DynamicCast_AsNWXCommon_User_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_BP_GetDesiredFocusTarget_Params Parms{};

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


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.RefreshControlEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::RefreshControlEnabled(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "RefreshControlEnabled");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_RefreshControlEnabled_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.PopulateStylePicker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::PopulateStylePicker(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "PopulateStylePicker");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_PopulateStylePicker_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.FoundationUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFoundationOpacityOverride_NewFoundationOpacity_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFoundationBiasOverride_NewFoundationBias_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::FoundationUpdate(double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_SetFoundationOpacityOverride_NewFoundationOpacity_ImplicitCast, double CallFunc_SetFoundationBiasOverride_NewFoundationBias_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "FoundationUpdate");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_FoundationUpdate_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_SetFoundationOpacityOverride_NewFoundationOpacity_ImplicitCast = CallFunc_SetFoundationOpacityOverride_NewFoundationOpacity_ImplicitCast;
	Parms.CallFunc_SetFoundationBiasOverride_NewFoundationBias_ImplicitCast = CallFunc_SetFoundationBiasOverride_NewFoundationBias_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.CollectPanelValues
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>OutValues                                                        (Parm, OutParm)
// class FString                      OutPanelName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// double                             CurrentColor2A                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentColor1A                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentColor2                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentColor1                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentMask                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs             (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2           (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3           (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4           (None)
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>K2Node_MakeMap_Map                                               (None)
// double                             CallFunc_GetMakeupAlpha_Alpha_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data                                      (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_1                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_2                                    (NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, double CurrentColor2A, double CurrentColor1A, const struct FDataTableRowHandle& CurrentColor2, const struct FDataTableRowHandle& CurrentColor1, const struct FDataTableRowHandle& CurrentMask, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_4, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_5, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, double CallFunc_GetMakeupAlpha_Alpha, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map, double CallFunc_GetMakeupAlpha_Alpha_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "CollectPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_CollectPanelValues_Params Parms{};

	Parms.CurrentColor2A = CurrentColor2A;
	Parms.CurrentColor1A = CurrentColor1A;
	Parms.CurrentColor2 = CurrentColor2;
	Parms.CurrentColor1 = CurrentColor1;
	Parms.CurrentMask = CurrentMask;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_3 = CallFunc_Conv_NameToString_ReturnValue_3;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_4 = CallFunc_Conv_NameToString_ReturnValue_4;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_5 = CallFunc_Conv_NameToString_ReturnValue_5;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_3 = CallFunc_Conv_DoubleToString_ReturnValue_3;
	Parms.CallFunc_GetMakeupAlpha_Alpha = CallFunc_GetMakeupAlpha_Alpha;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_GetMakeupAlpha_Alpha_1 = CallFunc_GetMakeupAlpha_Alpha_1;
	Parms.CallFunc_GetMakeupData_Data = CallFunc_GetMakeupData_Data;
	Parms.CallFunc_GetMakeupData_Data_1 = CallFunc_GetMakeupData_Data_1;
	Parms.CallFunc_GetMakeupData_Data_2 = CallFunc_GetMakeupData_Data_2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

	if (OutPanelName != nullptr)
		*OutPanelName = std::move(Parms.OutPanelName);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.CacheStartingPanelValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetMakeupAlpha_Alpha                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMakeupAlpha_Alpha_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data                                      (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_1                                    (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetMakeupData_Data_2                                    (NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::CacheStartingPanelValues(double CallFunc_GetMakeupAlpha_Alpha, double CallFunc_GetMakeupAlpha_Alpha_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "CacheStartingPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_CacheStartingPanelValues_Params Parms{};

	Parms.CallFunc_GetMakeupAlpha_Alpha = CallFunc_GetMakeupAlpha_Alpha;
	Parms.CallFunc_GetMakeupAlpha_Alpha_1 = CallFunc_GetMakeupAlpha_Alpha_1;
	Parms.CallFunc_GetMakeupData_Data = CallFunc_GetMakeupData_Data;
	Parms.CallFunc_GetMakeupData_Data_1 = CallFunc_GetMakeupData_Data_1;
	Parms.CallFunc_GetMakeupData_Data_2 = CallFunc_GetMakeupData_Data_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.UpdateUIFromPersistence
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// double                             CallFunc_GetFoundationRoughness_OutFoundationRoughness           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFoundationBias_OutFoundationBias                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFoundationOpacity_OutFoundationOpacity               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_3      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_4      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::UpdateUIFromPersistence(TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, double CallFunc_GetFoundationRoughness_OutFoundationRoughness, double CallFunc_GetFoundationBias_OutFoundationBias, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_GetFoundationOpacity_OutFoundationOpacity, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_GetMakeupAlpha_Alpha, double CallFunc_GetMakeupAlpha_Alpha_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_2, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_3, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_2, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_3, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "UpdateUIFromPersistence");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_UpdateUIFromPersistence_Params Parms{};

	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.CallFunc_GetFoundationRoughness_OutFoundationRoughness = CallFunc_GetFoundationRoughness_OutFoundationRoughness;
	Parms.CallFunc_GetFoundationBias_OutFoundationBias = CallFunc_GetFoundationBias_OutFoundationBias;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetFoundationOpacity_OutFoundationOpacity = CallFunc_GetFoundationOpacity_OutFoundationOpacity;
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
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_2 = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_2;
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_3 = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_3;
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_4 = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.UpdateMakeup_Blush
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_cc_sw_MakeupPicker_C*   CurrentMakeupWidget                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::UpdateMakeup_Blush(class UWBP_cc_sw_MakeupPicker_C* CurrentMakeupWidget, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast, double CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_1, double CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "UpdateMakeup_Blush");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_UpdateMakeup_Blush_Params Parms{};

	Parms.CurrentMakeupWidget = CurrentMakeupWidget;
	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast = CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast;
	Parms.CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_1 = CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_1;
	Parms.CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_2 = CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.RandomizePanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::RandomizePanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "RandomizePanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Foundation_Strength_K2Node_ComponentBoundEvent_10_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Foundation_Strength_K2Node_ComponentBoundEvent_10_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Foundation_Strength_K2Node_ComponentBoundEvent_10_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Foundation_Strength_K2Node_ComponentBoundEvent_10_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Foundation_DarknessBias_K2Node_ComponentBoundEvent_11_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Foundation_DarknessBias_K2Node_ComponentBoundEvent_11_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Foundation_DarknessBias_K2Node_ComponentBoundEvent_11_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Foundation_DarknessBias_K2Node_ComponentBoundEvent_11_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_FoundationRoughness_K2Node_ComponentBoundEvent_12_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_FoundationRoughness_K2Node_ComponentBoundEvent_12_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_FoundationRoughness_K2Node_ComponentBoundEvent_12_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_FoundationRoughness_K2Node_ComponentBoundEvent_12_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Blush_ColorA_K2Node_ComponentBoundEvent_2_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Blush_ColorA_K2Node_ComponentBoundEvent_2_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Blush_ColorA_K2Node_ComponentBoundEvent_2_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Blush_ColorA_K2Node_ComponentBoundEvent_2_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_BlushColorB_K2Node_ComponentBoundEvent_4_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_BlushColorB_K2Node_ComponentBoundEvent_4_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_BlushColorB_K2Node_ComponentBoundEvent_4_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_BlushColorB_K2Node_ComponentBoundEvent_4_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Blush_ColorA_Intensity_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Blush_ColorA_Intensity_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Blush_ColorA_Intensity_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_Blush_ColorA_Intensity_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_BlushGlitterColor_K2Node_ComponentBoundEvent_8_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_BlushGlitterColor_K2Node_ComponentBoundEvent_8_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_BlushGlitterColor_K2Node_ComponentBoundEvent_8_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_BlushGlitterColor_K2Node_ComponentBoundEvent_8_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_BlushGlitter_Intensity_K2Node_ComponentBoundEvent_9_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_BlushGlitter_Intensity_K2Node_ComponentBoundEvent_9_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_BlushGlitter_Intensity_K2Node_ComponentBoundEvent_9_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_Slider_BlushGlitter_Intensity_K2Node_ComponentBoundEvent_9_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_StylePicker_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_StylePicker_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_StylePicker_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_StylePicker_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "OnAddedToFocusPath");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "OnRemovedFromFocusPath");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_3_OnResetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_3_OnResetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BndEvt__WBP_CC_DynamicSubPanel_Makeup_Cheeks_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_3_OnResetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Makeup_Cheeks.WBP_CC_DynamicSubPanel_Makeup_Cheeks_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Cheeks
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID_2                             (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch__2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID_1                             (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch__1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID                               (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch_                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Cheeks(int32 EntryPoint, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool K2Node_Event_IsDesignTime, double K2Node_ComponentBoundEvent_Slider_Value_4, double K2Node_ComponentBoundEvent_Slider_Value_3, double K2Node_ComponentBoundEvent_Slider_Value_2, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_2, int32 K2Node_ComponentBoundEvent_GridIndex_2, bool K2Node_ComponentBoundEvent_ColorSwatch__2, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_1, int32 K2Node_ComponentBoundEvent_GridIndex_1, bool K2Node_ComponentBoundEvent_ColorSwatch__1, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1, double K2Node_ComponentBoundEvent_Slider_Value_1, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID, int32 K2Node_ComponentBoundEvent_GridIndex, bool K2Node_ComponentBoundEvent_ColorSwatch_, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints, double K2Node_ComponentBoundEvent_Slider_Value, int32 K2Node_ComponentBoundEvent_Index, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue_1, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Makeup_Cheeks_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Cheeks");

	Params::UWBP_CC_DynamicSubPanel_Makeup_Cheeks_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Cheeks_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_4 = K2Node_ComponentBoundEvent_Slider_Value_4;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_3 = K2Node_ComponentBoundEvent_Slider_Value_3;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_2 = K2Node_ComponentBoundEvent_Slider_Value_2;
	Parms.K2Node_ComponentBoundEvent_ColorID_2 = K2Node_ComponentBoundEvent_ColorID_2;
	Parms.K2Node_ComponentBoundEvent_GridIndex_2 = K2Node_ComponentBoundEvent_GridIndex_2;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch__2 = K2Node_ComponentBoundEvent_ColorSwatch__2;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2 = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2;
	Parms.K2Node_ComponentBoundEvent_ColorID_1 = K2Node_ComponentBoundEvent_ColorID_1;
	Parms.K2Node_ComponentBoundEvent_GridIndex_1 = K2Node_ComponentBoundEvent_GridIndex_1;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch__1 = K2Node_ComponentBoundEvent_ColorSwatch__1;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1 = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_1 = K2Node_ComponentBoundEvent_Slider_Value_1;
	Parms.K2Node_ComponentBoundEvent_ColorID = K2Node_ComponentBoundEvent_ColorID;
	Parms.K2Node_ComponentBoundEvent_GridIndex = K2Node_ComponentBoundEvent_GridIndex;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch_ = K2Node_ComponentBoundEvent_ColorSwatch_;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_IsUsingGamepad_ReturnValue_1 = CallFunc_IsUsingGamepad_ReturnValue_1;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


