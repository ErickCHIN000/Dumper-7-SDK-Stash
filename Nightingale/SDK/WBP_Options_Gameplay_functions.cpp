#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Options_Gameplay.WBP_Options_Gameplay_C
// (None)

class UClass* UWBP_Options_Gameplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Options_Gameplay_C");

	return Clss;
}


// WBP_Options_Gameplay_C WBP_Options_Gameplay.Default__WBP_Options_Gameplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Options_Gameplay_C* UWBP_Options_Gameplay_C::GetDefaultObj()
{
	static class UWBP_Options_Gameplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Options_Gameplay_C*>(UWBP_Options_Gameplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.DoCustomNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     FocusedWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUserWidget*              K2Node_DynamicCast_AsNWXUser_Widget                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUserWidget*              K2Node_DynamicCast_AsNWXUser_Widget_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Options_Gameplay_C::DoCustomNavigation(enum class EUINavigation Navigation, class UWidget* FocusedWidget, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, class UNWXUserWidget* K2Node_DynamicCast_AsNWXUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue_1, class UNWXUserWidget* K2Node_DynamicCast_AsNWXUser_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsEnabled_ReturnValue_1, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "DoCustomNavigation");

	Params::UWBP_Options_Gameplay_C_DoCustomNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.FocusedWidget = FocusedWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue = CallFunc_HasFocusedDescendants_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXUser_Widget = K2Node_DynamicCast_AsNWXUser_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue_1 = CallFunc_HasFocusedDescendants_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXUser_Widget_1 = K2Node_DynamicCast_AsNWXUser_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue_1 = CallFunc_GetIsEnabled_ReturnValue_1;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue_1 = CallFunc_GetDefaultFocusWidget_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.SetupNavigationWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_Options_Gameplay_C::SetupNavigationWidgets(TArray<class UWidget*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "SetupNavigationWidgets");

	Params::UWBP_Options_Gameplay_C_SetupNavigationWidgets_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_StreamerModeEnabled
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_StreamerModeEnabled(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_StreamerModeEnabled");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_StreamerModeEnabled_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_DamageNumberSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_DamageNumberSize(float NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_DamageNumberSize");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_DamageNumberSize_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_DamageNumberSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_DamageNumberSpeed(float NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_DamageNumberSpeed");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_DamageNumberSpeed_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_ShowDamageFloaties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_ShowDamageFloaties(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_ShowDamageFloaties");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_ShowDamageFloaties_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_StreamerModeEnabled
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStreamerModeEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_StreamerModeEnabled(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetStreamerModeEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_StreamerModeEnabled");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_StreamerModeEnabled_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetStreamerModeEnabled_ReturnValue = CallFunc_GetStreamerModeEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_DamageNumbers
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamageFloatySize_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamageFloatySpeed_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDamageFloatyEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_DamageNumbers(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, float CallFunc_GetDamageFloatySize_ReturnValue, float CallFunc_GetDamageFloatySpeed_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2, bool CallFunc_GetDamageFloatyEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_DamageNumbers");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_DamageNumbers_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetDamageFloatySize_ReturnValue = CallFunc_GetDamageFloatySize_ReturnValue;
	Parms.CallFunc_GetDamageFloatySpeed_ReturnValue = CallFunc_GetDamageFloatySpeed_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_2 = CallFunc_GetNWXGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetDamageFloatyEnabled_ReturnValue = CallFunc_GetDamageFloatyEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_ShowTutorials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_ShowTutorials(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_ShowTutorials");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_ShowTutorials_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_ShowTutorials
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowTutorials_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_ShowTutorials(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetShowTutorials_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_ShowTutorials");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_ShowTutorials_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShowTutorials_ReturnValue = CallFunc_GetShowTutorials_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Options_Gameplay_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Options_Gameplay_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_ChatMode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewVal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_ChatMode(int32 NewVal, const class FString& Option, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_ChatMode");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_ChatMode_Params Parms{};

	Parms.NewVal = NewVal;
	Parms.Option = Option;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.GetTextArray_ChatModes
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class FText>                TextValues                                                       (Parm, OutParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_Options_Gameplay_C::GetTextArray_ChatModes(TArray<class FText>* TextValues, TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "GetTextArray_ChatModes");

	Params::UWBP_Options_Gameplay_C_GetTextArray_ChatModes_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (TextValues != nullptr)
		*TextValues = std::move(Parms.TextValues);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_ChatMode
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                CallFunc_GetTextArray_ChatModes_TextValues                       (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EChatMode               CallFunc_GetChatMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_ChatMode(TArray<class FText>& CallFunc_GetTextArray_ChatModes_TextValues, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EChatMode CallFunc_GetChatMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_ChatMode");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_ChatMode_Params Parms{};

	Parms.CallFunc_GetTextArray_ChatModes_TextValues = CallFunc_GetTextArray_ChatModes_TextValues;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetChatMode_ReturnValue = CallFunc_GetChatMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.GetTextArrayOfPrivateNameOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                TextFields                                                       (Parm, OutParm)
// TArray<class FText>                ShareOptions                                                     (Edit, BlueprintVisible)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_Options_Gameplay_C::GetTextArrayOfPrivateNameOptions(TArray<class FText>* TextFields, const TArray<class FText>& ShareOptions, TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "GetTextArrayOfPrivateNameOptions");

	Params::UWBP_Options_Gameplay_C_GetTextArrayOfPrivateNameOptions_Params Parms{};

	Parms.ShareOptions = ShareOptions;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (TextFields != nullptr)
		*TextFields = std::move(Parms.TextFields);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_OthersPrivateName
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewVal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_OthersPrivateName(int32 NewVal, const class FString& Option, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_OthersPrivateName");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_OthersPrivateName_Params Parms{};

	Parms.NewVal = NewVal;
	Parms.Option = Option;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_MyPrivateName
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewVal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_MyPrivateName(int32 NewVal, const class FString& Option, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_MyPrivateName");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_MyPrivateName_Params Parms{};

	Parms.NewVal = NewVal;
	Parms.Option = Option;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_SeeOthersPrivateNames
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                CallFunc_GetTextArrayOfPrivateNameOptions_TextFields             (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPrivateNamesMode       CallFunc_GetMyPrivateNameMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_SeeOthersPrivateNames(TArray<class FText>& CallFunc_GetTextArrayOfPrivateNameOptions_TextFields, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EPrivateNamesMode CallFunc_GetMyPrivateNameMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_SeeOthersPrivateNames");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_SeeOthersPrivateNames_Params Parms{};

	Parms.CallFunc_GetTextArrayOfPrivateNameOptions_TextFields = CallFunc_GetTextArrayOfPrivateNameOptions_TextFields;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetMyPrivateNameMode_ReturnValue = CallFunc_GetMyPrivateNameMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_ShareMyPrivateName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                CallFunc_GetTextArrayOfPrivateNameOptions_TextFields             (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPrivateNamesMode       CallFunc_GetMyPrivateNameMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_ShareMyPrivateName(TArray<class FText>& CallFunc_GetTextArrayOfPrivateNameOptions_TextFields, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EPrivateNamesMode CallFunc_GetMyPrivateNameMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_ShareMyPrivateName");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_ShareMyPrivateName_Params Parms{};

	Parms.CallFunc_GetTextArrayOfPrivateNameOptions_TextFields = CallFunc_GetTextArrayOfPrivateNameOptions_TextFields;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetMyPrivateNameMode_ReturnValue = CallFunc_GetMyPrivateNameMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidgets
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidgets(enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidgets");

	Params::UWBP_Options_Gameplay_C_InitializeWidgets_Params Parms{};

	Parms.CallFunc_FeatureFlagBranch_Result = CallFunc_FeatureFlagBranch_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_PartyInvitesMode
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPartyInvitesMode       CallFunc_GetPartyInvitesMode_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_PartyInvites_TextValues                    (ReferenceParm)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_PartyInvitesMode(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EPartyInvitesMode CallFunc_GetPartyInvitesMode_ReturnValue, TArray<class FText>& CallFunc_GetTextArray_PartyInvites_TextValues, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_PartyInvitesMode");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_PartyInvitesMode_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetPartyInvitesMode_ReturnValue = CallFunc_GetPartyInvitesMode_ReturnValue;
	Parms.CallFunc_GetTextArray_PartyInvites_TextValues = CallFunc_GetTextArray_PartyInvites_TextValues;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_GamepadInvertY
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertY_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_GamepadInvertY(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetGamepadInvertY_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_GamepadInvertY");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_GamepadInvertY_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGamepadInvertY_ReturnValue = CallFunc_GetGamepadInvertY_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_GamepadInvertX
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertX_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_GamepadInvertX(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetGamepadInvertX_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_GamepadInvertX");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_GamepadInvertX_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGamepadInvertX_ReturnValue = CallFunc_GetGamepadInvertX_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_GamepadDeadzone
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadDeadzone_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_GamepadDeadzone(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_GetGamepadDeadzone_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_GamepadDeadzone");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_GamepadDeadzone_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGamepadDeadzone_ReturnValue = CallFunc_GetGamepadDeadzone_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_GamepadSensitivity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadSensitivity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_GamepadSensitivity(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_GetGamepadSensitivity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_GamepadSensitivity");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_GamepadSensitivity_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGamepadSensitivity_ReturnValue = CallFunc_GetGamepadSensitivity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_MouseInvertY
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInvertY_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_MouseInvertY(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetMouseInvertY_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_MouseInvertY");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_MouseInvertY_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetMouseInvertY_ReturnValue = CallFunc_GetMouseInvertY_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_MouseInvertX
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInvertX_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_MouseInvertX(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetMouseInvertX_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_MouseInvertX");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_MouseInvertX_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetMouseInvertX_ReturnValue = CallFunc_GetMouseInvertX_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_MouseSensitivity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMouseSensitivity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_MouseSensitivity(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_GetMouseSensitivity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_MouseSensitivity");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_MouseSensitivity_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetMouseSensitivity_ReturnValue = CallFunc_GetMouseSensitivity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.InitializeWidget_AutoHideHUD
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAutoHideHUD_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::InitializeWidget_AutoHideHUD(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetAutoHideHUD_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "InitializeWidget_AutoHideHUD");

	Params::UWBP_Options_Gameplay_C_InitializeWidget_AutoHideHUD_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAutoHideHUD_ReturnValue = CallFunc_GetAutoHideHUD_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_PartyInvitesMode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_PartyInvitesMode(int32 NewValue, const class FString& Option, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_PartyInvitesMode");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_PartyInvitesMode_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_GamepadInvertY
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_GamepadInvertY(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_GamepadInvertY");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_GamepadInvertY_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetLocalGameUserSettingsComponent_ReturnValue = CallFunc_GetLocalGameUserSettingsComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_GamepadInvertX
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_GamepadInvertX(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_GamepadInvertX");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_GamepadInvertX_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetLocalGameUserSettingsComponent_ReturnValue = CallFunc_GetLocalGameUserSettingsComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_GamepadDeadzone
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_GamepadDeadzone(float NewValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_GamepadDeadzone");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_GamepadDeadzone_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetLocalGameUserSettingsComponent_ReturnValue = CallFunc_GetLocalGameUserSettingsComponent_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_GamepadSensitivity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_GamepadSensitivity(float NewValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_GamepadSensitivity");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_GamepadSensitivity_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetLocalGameUserSettingsComponent_ReturnValue = CallFunc_GetLocalGameUserSettingsComponent_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_MouseInvertY
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_MouseInvertY(bool NewValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_MouseInvertY");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_MouseInvertY_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetLocalGameUserSettingsComponent_ReturnValue = CallFunc_GetLocalGameUserSettingsComponent_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_MouseInvertX
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_MouseInvertX(bool NewValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_MouseInvertX");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_MouseInvertX_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetLocalGameUserSettingsComponent_ReturnValue = CallFunc_GetLocalGameUserSettingsComponent_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_MouseSensitivity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_MouseSensitivity(float NewValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_MouseSensitivity");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_MouseSensitivity_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetLocalGameUserSettingsComponent_ReturnValue = CallFunc_GetLocalGameUserSettingsComponent_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.OnValueChanged_AutoHideHUD
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::OnValueChanged_AutoHideHUD(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "OnValueChanged_AutoHideHUD");

	Params::UWBP_Options_Gameplay_C_OnValueChanged_AutoHideHUD_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.GetTextArray_PartyInvites
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class FText>                TextValues                                                       (Parm, OutParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_Options_Gameplay_C::GetTextArray_PartyInvites(TArray<class FText>* TextValues, TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "GetTextArray_PartyInvites");

	Params::UWBP_Options_Gameplay_C_GetTextArray_PartyInvites_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (TextValues != nullptr)
		*TextValues = std::move(Parms.TextValues);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Options_Gameplay_C::GetDefaultFocusWidget(class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "GetDefaultFocusWidget");

	Params::UWBP_Options_Gameplay_C_GetDefaultFocusWidget_Params Parms{};

	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Options_Gameplay_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Options_Gameplay_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_Gameplay.WBP_Options_Gameplay_C.ExecuteUbergraph_WBP_Options_Gameplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Gameplay_C::ExecuteUbergraph_WBP_Options_Gameplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Gameplay_C", "ExecuteUbergraph_WBP_Options_Gameplay");

	Params::UWBP_Options_Gameplay_C_ExecuteUbergraph_WBP_Options_Gameplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


