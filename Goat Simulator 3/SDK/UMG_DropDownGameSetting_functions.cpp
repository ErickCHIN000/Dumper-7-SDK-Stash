#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DropDownGameSetting.UMG_DropDownGameSetting_C
// (None)

class UClass* UUMG_DropDownGameSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DropDownGameSetting_C");

	return Clss;
}


// UMG_DropDownGameSetting_C UMG_DropDownGameSetting.Default__UMG_DropDownGameSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DropDownGameSetting_C* UUMG_DropDownGameSetting_C::GetDefaultObj()
{
	static class UUMG_DropDownGameSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DropDownGameSetting_C*>(UUMG_DropDownGameSetting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.Get Options As Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class FText>                Options                                                          (Parm, OutParm)
// TArray<class FText>                Out_Options                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGGSettingOption>    CallFunc_GetAvailableOptions_ReturnValue                         (ReferenceParm)
// struct FGGSettingOption            CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropDownGameSetting_C::Get_Options_As_Text(TArray<class FText>* Options, const TArray<class FText>& Out_Options, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue, const struct FGGSettingOption& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropDownGameSetting_C", "Get Options As Text");

	Params::UUMG_DropDownGameSetting_C_Get_Options_As_Text_Params Parms{};

	Parms.Out_Options = Out_Options;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAvailableOptions_ReturnValue = CallFunc_GetAvailableOptions_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Options != nullptr)
		*Options = std::move(Parms.Options);

}


// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UUMG_DropDownGameSetting_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, bool CallFunc_IsMobilePlatform_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropDownGameSetting_C", "OnFocusReceived");

	Params::UUMG_DropDownGameSetting_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.Get Current Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropDownGameSetting_C::Get_Current_Index(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropDownGameSetting_C", "Get Current Index");

	Params::UUMG_DropDownGameSetting_C_Get_Current_Index_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.GetInitialWidgetFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_DropDownGameSetting_C::GetInitialWidgetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropDownGameSetting_C", "GetInitialWidgetFocus");

	Params::UUMG_DropDownGameSetting_C_GetInitialWidgetFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_DropDownGameSetting_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropDownGameSetting_C", "OnRemovedFromFocusPath");

	Params::UUMG_DropDownGameSetting_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.On Option Index Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectionIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropDownGameSetting_C::On_Option_Index_Changed(int32 SelectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropDownGameSetting_C", "On Option Index Changed");

	Params::UUMG_DropDownGameSetting_C_On_Option_Index_Changed_Params Parms{};

	Parms.SelectionIndex = SelectionIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_DropDownGameSetting_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropDownGameSetting_C", "OnAddedToFocusPath");

	Params::UUMG_DropDownGameSetting_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.RefreshOption
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_DropDownGameSetting_C::RefreshOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropDownGameSetting_C", "RefreshOption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DropDownGameSetting_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropDownGameSetting_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.OnSetIsEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropDownGameSetting_C::OnSetIsEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropDownGameSetting_C", "OnSetIsEnabled");

	Params::UUMG_DropDownGameSetting_C_OnSetIsEnabled_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.ExecuteUbergraph_UMG_DropDownGameSetting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// int32                              CallFunc_GetOptionIndexForCurrentValue_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SelectionIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// TArray<class FText>                CallFunc_Get_Options_As_Text_Options                             (ReferenceParm)
// bool                               K2Node_Event_bInIsEnabled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropDownGameSetting_C::ExecuteUbergraph_UMG_DropDownGameSetting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, int32 CallFunc_GetOptionIndexForCurrentValue_ReturnValue, int32 CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1, int32 K2Node_CustomEvent_SelectionIndex, const struct FFocusEvent& K2Node_Event_InFocusEvent, TArray<class FText>& CallFunc_Get_Options_As_Text_Options, bool K2Node_Event_bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropDownGameSetting_C", "ExecuteUbergraph_UMG_DropDownGameSetting");

	Params::UUMG_DropDownGameSetting_C_ExecuteUbergraph_UMG_DropDownGameSetting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_GetOptionIndexForCurrentValue_ReturnValue = CallFunc_GetOptionIndexForCurrentValue_ReturnValue;
	Parms.CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1 = CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1;
	Parms.K2Node_CustomEvent_SelectionIndex = K2Node_CustomEvent_SelectionIndex;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_Get_Options_As_Text_Options = CallFunc_Get_Options_As_Text_Options;
	Parms.K2Node_Event_bInIsEnabled = K2Node_Event_bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}

}


