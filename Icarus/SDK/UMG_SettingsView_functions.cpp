#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SettingsView.UMG_SettingsView_C
// (None)

class UClass* UUMG_SettingsView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SettingsView_C");

	return Clss;
}


// UMG_SettingsView_C UMG_SettingsView.Default__UMG_SettingsView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SettingsView_C* UUMG_SettingsView_C::GetDefaultObj()
{
	static class UUMG_SettingsView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SettingsView_C*>(UUMG_SettingsView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SettingsView.UMG_SettingsView_C.CreateNewSection
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingsSection*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_SettingsSection_C*      Section                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_SettingsSection_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USettingsSection* UUMG_SettingsView_C::CreateNewSection(class UUMG_SettingsSection_C* Section, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UUMG_SettingsSection_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingsView_C", "CreateNewSection");

	Params::UUMG_SettingsView_C_CreateNewSection_Params Parms{};

	Parms.Section = Section;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_SettingsView.UMG_SettingsView_C.AddNewSection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingsSection*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_SettingsSection_C*      Section                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_SettingsSection_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USettingsSection* UUMG_SettingsView_C::AddNewSection(class UUMG_SettingsSection_C* Section, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UUMG_SettingsSection_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingsView_C", "AddNewSection");

	Params::UUMG_SettingsView_C_AddNewSection_Params Parms{};

	Parms.Section = Section;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_SettingsView.UMG_SettingsView_C.Setting Option Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_SettingRowBorder_C*     Setting_Option                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingsView_C::Setting_Option_Hovered(class UUMG_SettingRowBorder_C* Setting_Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingsView_C", "Setting Option Hovered");

	Params::UUMG_SettingsView_C_Setting_Option_Hovered_Params Parms{};

	Parms.Setting_Option = Setting_Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingsView.UMG_SettingsView_C.Setting Option Unhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_SettingRowBorder_C*     Setting_Option                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingsView_C::Setting_Option_Unhovered(class UUMG_SettingRowBorder_C* Setting_Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingsView_C", "Setting Option Unhovered");

	Params::UUMG_SettingsView_C_Setting_Option_Unhovered_Params Parms{};

	Parms.Setting_Option = Setting_Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingsView.UMG_SettingsView_C.PostSetup
// (Event, Public, BlueprintEvent)
// Parameters:

void UUMG_SettingsView_C::PostSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingsView_C", "PostSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SettingsView.UMG_SettingsView_C.OnRefresh
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_SettingsView_C::OnRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingsView_C", "OnRefresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SettingsView.UMG_SettingsView_C.Set Confirmation Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNamedSlot*                  Confirmation_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingsView_C::Set_Confirmation_Slot(class UNamedSlot* Confirmation_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingsView_C", "Set Confirmation Slot");

	Params::UUMG_SettingsView_C_Set_Confirmation_Slot_Params Parms{};

	Parms.Confirmation_Slot = Confirmation_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingsView.UMG_SettingsView_C.ExecuteUbergraph_UMG_SettingsView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNamedSlot*                  K2Node_CustomEvent_Confirmation_Slot                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_SettingRowBorder_C*     K2Node_CustomEvent_Setting_Option_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_SettingRowBorder_C*     K2Node_CustomEvent_Setting_Option                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_SettingsSection_C*      K2Node_DynamicCast_AsUMG_Settings_Section                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SettingsView_C::ExecuteUbergraph_UMG_SettingsView(int32 EntryPoint, class UNamedSlot* K2Node_CustomEvent_Confirmation_Slot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_SettingRowBorder_C* K2Node_CustomEvent_Setting_Option_1, class UUMG_SettingRowBorder_C* K2Node_CustomEvent_Setting_Option, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_SettingsSection_C* K2Node_DynamicCast_AsUMG_Settings_Section, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingsView_C", "ExecuteUbergraph_UMG_SettingsView");

	Params::UUMG_SettingsView_C_ExecuteUbergraph_UMG_SettingsView_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Confirmation_Slot = K2Node_CustomEvent_Confirmation_Slot;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Setting_Option_1 = K2Node_CustomEvent_Setting_Option_1;
	Parms.K2Node_CustomEvent_Setting_Option = K2Node_CustomEvent_Setting_Option;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Settings_Section = K2Node_DynamicCast_AsUMG_Settings_Section;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingsView.UMG_SettingsView_C.On View Refresh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_SettingsView_C*         View                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingsView_C::On_View_Refresh__DelegateSignature(class UUMG_SettingsView_C* View)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingsView_C", "On View Refresh__DelegateSignature");

	Params::UUMG_SettingsView_C_On_View_Refresh__DelegateSignature_Params Parms{};

	Parms.View = View;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingsView.UMG_SettingsView_C.On Setting Option Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_SettingRowBorder_C*     Setting_Option                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingsView_C::On_Setting_Option_Unhovered__DelegateSignature(class UUMG_SettingRowBorder_C* Setting_Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingsView_C", "On Setting Option Unhovered__DelegateSignature");

	Params::UUMG_SettingsView_C_On_Setting_Option_Unhovered__DelegateSignature_Params Parms{};

	Parms.Setting_Option = Setting_Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingsView.UMG_SettingsView_C.On Setting Option Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_SettingRowBorder_C*     Setting_Option                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingsView_C::On_Setting_Option_Hovered__DelegateSignature(class UUMG_SettingRowBorder_C* Setting_Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingsView_C", "On Setting Option Hovered__DelegateSignature");

	Params::UUMG_SettingsView_C_On_Setting_Option_Hovered__DelegateSignature_Params Parms{};

	Parms.Setting_Option = Setting_Option;

	UObject::ProcessEvent(Func, &Parms);

}

}


