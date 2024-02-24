#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BooleanOption.UMG_BooleanOption_C
// (None)

class UClass* UUMG_BooleanOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BooleanOption_C");

	return Clss;
}


// UMG_BooleanOption_C UMG_BooleanOption.Default__UMG_BooleanOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BooleanOption_C* UUMG_BooleanOption_C::GetDefaultObj()
{
	static class UUMG_BooleanOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BooleanOption_C*>(UUMG_BooleanOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BooleanOption.UMG_BooleanOption_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsKeyEventFromAction_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsKeyEventFromAction_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UUMG_BooleanOption_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsKeyEventFromAction_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsKeyEventFromAction_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "OnPreviewKeyDown");

	Params::UUMG_BooleanOption_C_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsKeyEventFromAction_ReturnValue = CallFunc_IsKeyEventFromAction_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsKeyEventFromAction_ReturnValue_1 = CallFunc_IsKeyEventFromAction_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UUMG_BooleanOption_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "OnFocusReceived");

	Params::UUMG_BooleanOption_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.Get Off Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// TArray<struct FGGSettingOption>    CallFunc_GetAvailableOptions_ReturnValue                         (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BooleanOption_C::Get_Off_Text(class FText* Text, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "Get Off Text");

	Params::UUMG_BooleanOption_C_Get_Off_Text_Params Parms{};

	Parms.CallFunc_GetAvailableOptions_ReturnValue = CallFunc_GetAvailableOptions_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.Get On Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// TArray<struct FGGSettingOption>    CallFunc_GetAvailableOptions_ReturnValue                         (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BooleanOption_C::Get_On_Text(class FText* Text, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "Get On Text");

	Params::UUMG_BooleanOption_C_Get_On_Text_Params Parms{};

	Parms.CallFunc_GetAvailableOptions_ReturnValue = CallFunc_GetAvailableOptions_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.ToggleOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetSettingValueAsBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BooleanOption_C::ToggleOption(bool CallFunc_GetSettingValueAsBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "ToggleOption");

	Params::UUMG_BooleanOption_C_ToggleOption_Params Parms{};

	Parms.CallFunc_GetSettingValueAsBool_ReturnValue = CallFunc_GetSettingValueAsBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.GetInitialWidgetFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_BooleanOption_C::GetInitialWidgetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "GetInitialWidgetFocus");

	Params::UUMG_BooleanOption_C_GetInitialWidgetFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSettingValueAsBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Get_Off_Text_Text                                       (None)
// class FText                        CallFunc_Get_On_Text_Text                                        (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UTexture2D*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UUMG_BooleanOption_C::UpdateState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_GetSettingValueAsBool_ReturnValue, class FText CallFunc_Get_Off_Text_Text, class FText CallFunc_Get_On_Text_Text, bool Temp_bool_Variable_2, class UTexture2D* K2Node_Select_Default, bool Temp_bool_Variable_3, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UTexture2D* K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "UpdateState");

	Params::UUMG_BooleanOption_C_UpdateState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetSettingValueAsBool_ReturnValue = CallFunc_GetSettingValueAsBool_ReturnValue;
	Parms.CallFunc_Get_Off_Text_Text = CallFunc_Get_Off_Text_Text;
	Parms.CallFunc_Get_On_Text_Text = CallFunc_Get_On_Text_Text;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.EnableOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BooleanOption_C::EnableOption(bool Enabled, int32 CallFunc_Conv_BoolToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "EnableOption");

	Params::UUMG_BooleanOption_C_EnableOption_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.BndEvt__OnButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::BndEvt__OnButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "BndEvt__OnButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.BndEvt__OffButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::BndEvt__OffButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "BndEvt__OffButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.UpdateUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::UpdateUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "UpdateUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.OnOptionNavigationInputLeft
// (BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::OnOptionNavigationInputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "OnOptionNavigationInputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.OnOptionNavigationInputRight
// (BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::OnOptionNavigationInputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "OnOptionNavigationInputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.BndEvt__ControllerFocus_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::BndEvt__ControllerFocus_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "BndEvt__ControllerFocus_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.BndEvt__UMG_BooleanOption_OnButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::BndEvt__UMG_BooleanOption_OnButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "BndEvt__UMG_BooleanOption_OnButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.BndEvt__UMG_BooleanOption_OnButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::BndEvt__UMG_BooleanOption_OnButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "BndEvt__UMG_BooleanOption_OnButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.BndEvt__UMG_BooleanOption_OffButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::BndEvt__UMG_BooleanOption_OffButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "BndEvt__UMG_BooleanOption_OffButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.BndEvt__UMG_BooleanOption_OffButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::BndEvt__UMG_BooleanOption_OffButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "BndEvt__UMG_BooleanOption_OffButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.RefreshOption
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BooleanOption_C::RefreshOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "RefreshOption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BooleanOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "PreConstruct");

	Params::UUMG_BooleanOption_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BooleanOption.UMG_BooleanOption_C.ExecuteUbergraph_UMG_BooleanOption
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSettingValueAsBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BooleanOption_C::ExecuteUbergraph_UMG_BooleanOption(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetSettingValueAsBool_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BooleanOption_C", "ExecuteUbergraph_UMG_BooleanOption");

	Params::UUMG_BooleanOption_C_ExecuteUbergraph_UMG_BooleanOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetSettingValueAsBool_ReturnValue = CallFunc_GetSettingValueAsBool_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided = CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided;

	UObject::ProcessEvent(Func, &Parms);

}

}


