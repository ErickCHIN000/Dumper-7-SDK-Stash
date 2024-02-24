#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Options_InputAction.WBP_Options_InputAction_C
// (None)

class UClass* UWBP_Options_InputAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Options_InputAction_C");

	return Clss;
}


// WBP_Options_InputAction_C WBP_Options_InputAction.Default__WBP_Options_InputAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Options_InputAction_C* UWBP_Options_InputAction_C::GetDefaultObj()
{
	static class UWBP_Options_InputAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Options_InputAction_C*>(UWBP_Options_InputAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Options_InputAction.WBP_Options_InputAction_C.Internal_OnSettingValueUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 SettingsWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_InputAction_C::Internal_OnSettingValueUpdated(class UUserWidget* SettingsWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputAction_C", "Internal_OnSettingValueUpdated");

	Params::UWBP_Options_InputAction_C_Internal_OnSettingValueUpdated_Params Parms{};

	Parms.SettingsWidget = SettingsWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_InputAction.WBP_Options_InputAction_C.CreateWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerKeyMapping           PlayerKeyMapping                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UOverlay*                    ContainerOverlay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXKeyMappingWidget*        KeyMappingWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Options_InputKeySelector_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_InputAction_C::CreateWidget(const struct FPlayerKeyMapping& PlayerKeyMapping, class UOverlay* ContainerOverlay, class UNWXKeyMappingWidget** KeyMappingWidget, class UWBP_Options_InputKeySelector_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputAction_C", "CreateWidget");

	Params::UWBP_Options_InputAction_C_CreateWidget_Params Parms{};

	Parms.PlayerKeyMapping = PlayerKeyMapping;
	Parms.ContainerOverlay = ContainerOverlay;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (KeyMappingWidget != nullptr)
		*KeyMappingWidget = Parms.KeyMappingWidget;

}


// Function WBP_Options_InputAction.WBP_Options_InputAction_C.CreateKeyMappingWidgets
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXKeyMappingWidget*        CallFunc_CreateWidget_KeyMappingWidget                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXKeyMappingWidget*        CallFunc_CreateWidget_KeyMappingWidget_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMappingInitialized_IsValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMappingInitialized_IsValid_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXKeyMappingWidget*        CallFunc_CreateWidget_KeyMappingWidget_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMappingInitialized_IsValid_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_InputAction_C::CreateKeyMappingWidgets(class UNWXKeyMappingWidget* CallFunc_CreateWidget_KeyMappingWidget, class UNWXKeyMappingWidget* CallFunc_CreateWidget_KeyMappingWidget_1, bool CallFunc_IsMappingInitialized_IsValid, bool CallFunc_IsMappingInitialized_IsValid_1, class UNWXKeyMappingWidget* CallFunc_CreateWidget_KeyMappingWidget_2, bool CallFunc_IsMappingInitialized_IsValid_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputAction_C", "CreateKeyMappingWidgets");

	Params::UWBP_Options_InputAction_C_CreateKeyMappingWidgets_Params Parms{};

	Parms.CallFunc_CreateWidget_KeyMappingWidget = CallFunc_CreateWidget_KeyMappingWidget;
	Parms.CallFunc_CreateWidget_KeyMappingWidget_1 = CallFunc_CreateWidget_KeyMappingWidget_1;
	Parms.CallFunc_IsMappingInitialized_IsValid = CallFunc_IsMappingInitialized_IsValid;
	Parms.CallFunc_IsMappingInitialized_IsValid_1 = CallFunc_IsMappingInitialized_IsValid_1;
	Parms.CallFunc_CreateWidget_KeyMappingWidget_2 = CallFunc_CreateWidget_KeyMappingWidget_2;
	Parms.CallFunc_IsMappingInitialized_IsValid_2 = CallFunc_IsMappingInitialized_IsValid_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_InputAction.WBP_Options_InputAction_C.IsMappingGamepad
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerKeyMapping           PlayerKeyMapping                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsGamepad                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_InputAction_C::IsMappingGamepad(const struct FPlayerKeyMapping& PlayerKeyMapping, bool* IsGamepad, bool CallFunc_Key_IsGamepadKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputAction_C", "IsMappingGamepad");

	Params::UWBP_Options_InputAction_C_IsMappingGamepad_Params Parms{};

	Parms.PlayerKeyMapping = PlayerKeyMapping;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsGamepad != nullptr)
		*IsGamepad = Parms.IsGamepad;

}


// Function WBP_Options_InputAction.WBP_Options_InputAction_C.IsMappingInitialized
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerKeyMapping           PlayerKeyMapping                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_InputAction_C::IsMappingInitialized(const struct FPlayerKeyMapping& PlayerKeyMapping, bool* IsValid, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputAction_C", "IsMappingInitialized");

	Params::UWBP_Options_InputAction_C_IsMappingInitialized_Params Parms{};

	Parms.PlayerKeyMapping = PlayerKeyMapping;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function WBP_Options_InputAction.WBP_Options_InputAction_C.AddMapping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerKeyMapping           NewMapping                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_IsMappingGamepad_IsGamepad                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMappingInitialized_IsValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_InputAction_C::AddMapping(const struct FPlayerKeyMapping& NewMapping, bool CallFunc_IsMappingGamepad_IsGamepad, bool CallFunc_IsMappingInitialized_IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputAction_C", "AddMapping");

	Params::UWBP_Options_InputAction_C_AddMapping_Params Parms{};

	Parms.NewMapping = NewMapping;
	Parms.CallFunc_IsMappingGamepad_IsGamepad = CallFunc_IsMappingGamepad_IsGamepad;
	Parms.CallFunc_IsMappingInitialized_IsValid = CallFunc_IsMappingInitialized_IsValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_InputAction.WBP_Options_InputAction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Options_InputAction_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputAction_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_InputAction.WBP_Options_InputAction_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Options_InputAction_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputAction_C", "OnMouseEnter");

	Params::UWBP_Options_InputAction_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_InputAction.WBP_Options_InputAction_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Options_InputAction_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputAction_C", "OnMouseLeave");

	Params::UWBP_Options_InputAction_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_InputAction.WBP_Options_InputAction_C.ExecuteUbergraph_WBP_Options_InputAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UWBP_Options_InputAction_C::ExecuteUbergraph_WBP_Options_InputAction(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputAction_C", "ExecuteUbergraph_WBP_Options_InputAction");

	Params::UWBP_Options_InputAction_C_ExecuteUbergraph_WBP_Options_InputAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_InputAction.WBP_Options_InputAction_C.OnSettingsValueUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 SettingsWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_InputAction_C::OnSettingsValueUpdated__DelegateSignature(class UUserWidget* SettingsWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_InputAction_C", "OnSettingsValueUpdated__DelegateSignature");

	Params::UWBP_Options_InputAction_C_OnSettingsValueUpdated__DelegateSignature_Params Parms{};

	Parms.SettingsWidget = SettingsWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


