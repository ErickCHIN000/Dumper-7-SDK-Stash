#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MultiplayerStatusWidget.MultiplayerStatusWidget_C
// (None)

class UClass* UMultiplayerStatusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiplayerStatusWidget_C");

	return Clss;
}


// MultiplayerStatusWidget_C MultiplayerStatusWidget.Default__MultiplayerStatusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMultiplayerStatusWidget_C* UMultiplayerStatusWidget_C::GetDefaultObj()
{
	static class UMultiplayerStatusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiplayerStatusWidget_C*>(UMultiplayerStatusWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.GetEndAnimationDuration
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMultiplayerStatusWidget_C::GetEndAnimationDuration(const struct FNotification& Notification, float CallFunc_GetEndTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "GetEndAnimationDuration");

	Params::UMultiplayerStatusWidget_C_GetEndAnimationDuration_Params Parms{};

	Parms.Notification = Notification;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.GetStartAnimationDuration
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMultiplayerStatusWidget_C::GetStartAnimationDuration(const struct FNotification& Notification, float CallFunc_GetEndTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "GetStartAnimationDuration");

	Params::UMultiplayerStatusWidget_C_GetStartAnimationDuration_Params Parms{};

	Parms.Notification = Notification;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.GetWidgetDuration
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMultiplayerStatusWidget_C::GetWidgetDuration(const struct FNotification& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "GetWidgetDuration");

	Params::UMultiplayerStatusWidget_C_GetWidgetDuration_Params Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.Change Active Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// bool                               CallFunc_NotEqual_TextText_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_2                                   (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMultiplayerStatusWidget_C::Change_Active_Widget(class UWidget* ActiveWidget, class FText CallFunc_GetText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, bool CallFunc_NotEqual_TextText_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FText CallFunc_GetText_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "Change Active Widget");

	Params::UMultiplayerStatusWidget_C_Change_Active_Widget_Params Parms{};

	Parms.ActiveWidget = ActiveWidget;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_NotEqual_TextText_ReturnValue_1 = CallFunc_NotEqual_TextText_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_2 = CallFunc_GetText_ReturnValue_2;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.SetParentNotificationWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGNotificationUserWidget*   Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiplayerStatusWidget_C::SetParentNotificationWidget(class UGGNotificationUserWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "SetParentNotificationWidget");

	Params::UMultiplayerStatusWidget_C_SetParentNotificationWidget_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.UpdateLabels
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UMultiplayerStatusWidget_C::UpdateLabels(const struct FNotification& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "UpdateLabels");

	Params::UMultiplayerStatusWidget_C_UpdateLabels_Params Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.ClearWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMultiplayerStatusWidget_C::ClearWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "ClearWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.HideWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMultiplayerStatusWidget_C::HideWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "HideWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.UpdateWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UMultiplayerStatusWidget_C::UpdateWidget(const struct FNotification& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "UpdateWidget");

	Params::UMultiplayerStatusWidget_C_UpdateWidget_Params Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.ShowWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UMultiplayerStatusWidget_C::ShowWidget(const struct FNotification& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "ShowWidget");

	Params::UMultiplayerStatusWidget_C_ShowWidget_Params Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.WidgetAnimationEvt_ShowStatus_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UMultiplayerStatusWidget_C::WidgetAnimationEvt_ShowStatus_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "WidgetAnimationEvt_ShowStatus_K2Node_WidgetAnimationEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMultiplayerStatusWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "PreConstruct");

	Params::UMultiplayerStatusWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.ExecuteUbergraph_MultiplayerStatusWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotification               K2Node_Event_Notification_1                                      (None)
// struct FNotification               K2Node_Event_Notification                                        (None)
// struct FNotification               K2Node_CustomEvent_Notification                                  (None)
// class UGGNotificationUserWidget*   K2Node_Event_Parent                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMultiplayerStatusWidget_C::ExecuteUbergraph_MultiplayerStatusWidget(int32 EntryPoint, const struct FNotification& K2Node_Event_Notification_1, const struct FNotification& K2Node_Event_Notification, const struct FNotification& K2Node_CustomEvent_Notification, class UGGNotificationUserWidget* K2Node_Event_Parent, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue_2, bool CallFunc_MatchesTag_ReturnValue_3, bool CallFunc_MatchesTag_ReturnValue_4, bool CallFunc_IsGameplayTagValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiplayerStatusWidget_C", "ExecuteUbergraph_MultiplayerStatusWidget");

	Params::UMultiplayerStatusWidget_C_ExecuteUbergraph_MultiplayerStatusWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Notification_1 = K2Node_Event_Notification_1;
	Parms.K2Node_Event_Notification = K2Node_Event_Notification;
	Parms.K2Node_CustomEvent_Notification = K2Node_CustomEvent_Notification;
	Parms.K2Node_Event_Parent = K2Node_Event_Parent;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue_1 = CallFunc_MatchesTag_ReturnValue_1;
	Parms.CallFunc_MatchesTag_ReturnValue_2 = CallFunc_MatchesTag_ReturnValue_2;
	Parms.CallFunc_MatchesTag_ReturnValue_3 = CallFunc_MatchesTag_ReturnValue_3;
	Parms.CallFunc_MatchesTag_ReturnValue_4 = CallFunc_MatchesTag_ReturnValue_4;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


