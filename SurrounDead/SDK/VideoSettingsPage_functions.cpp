#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VideoSettingsPage.VideoSettingsPage_C
// (None)

class UClass* UVideoSettingsPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VideoSettingsPage_C");

	return Clss;
}


// VideoSettingsPage_C VideoSettingsPage.Default__VideoSettingsPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVideoSettingsPage_C* UVideoSettingsPage_C::GetDefaultObj()
{
	static class UVideoSettingsPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVideoSettingsPage_C*>(UVideoSettingsPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VideoSettingsPage.VideoSettingsPage_C.Get_AutoApplyCheckbox_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVideoSettingsPage_C::Get_AutoApplyCheckbox_bIsEnabled_0(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Get_AutoApplyCheckbox_bIsEnabled_0");

	Params::UVideoSettingsPage_C_Get_AutoApplyCheckbox_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VideoSettingsPage.VideoSettingsPage_C.Get_ApplyButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVideoSettingsPage_C::Get_ApplyButton_bIsEnabled_0(bool CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Get_ApplyButton_bIsEnabled_0");

	Params::UVideoSettingsPage_C_Get_ApplyButton_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue = CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VideoSettingsPage.VideoSettingsPage_C.Get_SaveButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UVideoSettingsPage_C::Get_SaveButton_bIsEnabled_0(bool CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Get_SaveButton_bIsEnabled_0");

	Params::UVideoSettingsPage_C_Get_SaveButton_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue = CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "BndEvt__AutoDetectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__AutoSaveCheckbox_K2Node_ComponentBoundEvent_40_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVideoSettingsPage_C::BndEvt__AutoSaveCheckbox_K2Node_ComponentBoundEvent_40_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "BndEvt__AutoSaveCheckbox_K2Node_ComponentBoundEvent_40_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UVideoSettingsPage_C_BndEvt__AutoSaveCheckbox_K2Node_ComponentBoundEvent_40_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__AutoApplyCheckbox_K2Node_ComponentBoundEvent_336_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVideoSettingsPage_C::BndEvt__AutoApplyCheckbox_K2Node_ComponentBoundEvent_336_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "BndEvt__AutoApplyCheckbox_K2Node_ComponentBoundEvent_336_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UVideoSettingsPage_C_BndEvt__AutoApplyCheckbox_K2Node_ComponentBoundEvent_336_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::BndEvt__SaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "BndEvt__SaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.ExecuteUbergraph_VideoSettingsPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAutoSettingWidget*>  CallFunc_GetChildSettings_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAutoSettingWidget*>  CallFunc_GetChildSettings_ReturnValue_1                          (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAutoSettingWidget*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAutoSettingWidget*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVideoSettingsPage_C::ExecuteUbergraph_VideoSettingsPage(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_ComponentBoundEvent_bIsChecked_1, TArray<class UAutoSettingWidget*>& CallFunc_GetChildSettings_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool K2Node_ComponentBoundEvent_bIsChecked, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UAutoSettingWidget*>& CallFunc_GetChildSettings_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UAutoSettingWidget* CallFunc_Array_Get_Item, class UAutoSettingWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "ExecuteUbergraph_VideoSettingsPage");

	Params::UVideoSettingsPage_C_ExecuteUbergraph_VideoSettingsPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.CallFunc_GetChildSettings_ReturnValue = CallFunc_GetChildSettings_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetChildSettings_ReturnValue_1 = CallFunc_GetChildSettings_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


