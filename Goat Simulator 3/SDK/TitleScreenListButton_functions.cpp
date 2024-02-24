#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TitleScreenListButton.TitleScreenListButton_C
// (None)

class UClass* UTitleScreenListButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleScreenListButton_C");

	return Clss;
}


// TitleScreenListButton_C TitleScreenListButton.Default__TitleScreenListButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitleScreenListButton_C* UTitleScreenListButton_C::GetDefaultObj()
{
	static class UTitleScreenListButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleScreenListButton_C*>(UTitleScreenListButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitleScreenListButton.TitleScreenListButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UTitleScreenListButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenListButton_C", "OnFocusReceived");

	Params::UTitleScreenListButton_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreenListButton.TitleScreenListButton_C.SetInitialFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleScreenListButton_C::SetInitialFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenListButton_C", "SetInitialFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreenListButton.TitleScreenListButton_C.OnSetActive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreenListButton_C::OnSetActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenListButton_C", "OnSetActive");

	Params::UTitleScreenListButton_C_OnSetActive_Params Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreenListButton.TitleScreenListButton_C.OnFocusMarkerEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bPrevious                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreenListButton_C::OnFocusMarkerEnabled(bool bEnabled, bool bPrevious)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenListButton_C", "OnFocusMarkerEnabled");

	Params::UTitleScreenListButton_C_OnFocusMarkerEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.bPrevious = bPrevious;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreenListButton.TitleScreenListButton_C.SetParentMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGMenuUserWidget*           Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreenListButton_C::SetParentMenu(class UGGMenuUserWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenListButton_C", "SetParentMenu");

	Params::UTitleScreenListButton_C_SetParentMenu_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreenListButton.TitleScreenListButton_C.OnMenuTabChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TabID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UTitleScreenListButton_C::OnMenuTabChanged(const struct FGameplayTag& TabID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenListButton_C", "OnMenuTabChanged");

	Params::UTitleScreenListButton_C_OnMenuTabChanged_Params Parms{};

	Parms.TabID = TabID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreenListButton.TitleScreenListButton_C.SetMenuObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreenListButton_C::SetMenuObject(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenListButton_C", "SetMenuObject");

	Params::UTitleScreenListButton_C_SetMenuObject_Params Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreenListButton.TitleScreenListButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTitleScreenListButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenListButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreenListButton.TitleScreenListButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreenListButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenListButton_C", "PreConstruct");

	Params::UTitleScreenListButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreenListButton.TitleScreenListButton_C.ExecuteUbergraph_TitleScreenListButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bActive                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPrevious                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGMenuUserWidget*           K2Node_CustomEvent_Parent                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_TabID                                         (NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Object                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGMenuDataAsset*            K2Node_DynamicCast_AsGGMenu_Data_Asset                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreenListButton_C::ExecuteUbergraph_TitleScreenListButton(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bActive, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool K2Node_Event_bEnabled, bool K2Node_Event_bPrevious, class UGGMenuUserWidget* K2Node_CustomEvent_Parent, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_TabID, class UObject* K2Node_Event_Object, class UGGMenuDataAsset* K2Node_DynamicCast_AsGGMenu_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MatchesTag_ReturnValue, const struct FLinearColor& K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenListButton_C", "ExecuteUbergraph_TitleScreenListButton");

	Params::UTitleScreenListButton_C_ExecuteUbergraph_TitleScreenListButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bActive = K2Node_Event_bActive;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.K2Node_Event_bPrevious = K2Node_Event_bPrevious;
	Parms.K2Node_CustomEvent_Parent = K2Node_CustomEvent_Parent;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_CustomEvent_TabID = K2Node_CustomEvent_TabID;
	Parms.K2Node_Event_Object = K2Node_Event_Object;
	Parms.K2Node_DynamicCast_AsGGMenu_Data_Asset = K2Node_DynamicCast_AsGGMenu_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsMobilePlatform_ReturnValue_1 = CallFunc_IsMobilePlatform_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


