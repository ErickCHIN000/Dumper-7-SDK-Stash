#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C
// (None)

class UClass* UUMG_MobileClientTeleportWarning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MobileClientTeleportWarning_C");

	return Clss;
}


// UMG_MobileClientTeleportWarning_C UMG_MobileClientTeleportWarning.Default__UMG_MobileClientTeleportWarning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MobileClientTeleportWarning_C* UUMG_MobileClientTeleportWarning_C::GetDefaultObj()
{
	static class UUMG_MobileClientTeleportWarning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MobileClientTeleportWarning_C*>(UUMG_MobileClientTeleportWarning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.GetEndAnimationDuration
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUMG_MobileClientTeleportWarning_C::GetEndAnimationDuration(const struct FNotification& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MobileClientTeleportWarning_C", "GetEndAnimationDuration");

	Params::UUMG_MobileClientTeleportWarning_C_GetEndAnimationDuration_Params Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.GetStartAnimationDuration
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUMG_MobileClientTeleportWarning_C::GetStartAnimationDuration(const struct FNotification& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MobileClientTeleportWarning_C", "GetStartAnimationDuration");

	Params::UUMG_MobileClientTeleportWarning_C_GetStartAnimationDuration_Params Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.GetWidgetDuration
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUMG_MobileClientTeleportWarning_C::GetWidgetDuration(const struct FNotification& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MobileClientTeleportWarning_C", "GetWidgetDuration");

	Params::UUMG_MobileClientTeleportWarning_C_GetWidgetDuration_Params Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.ClearWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MobileClientTeleportWarning_C::ClearWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MobileClientTeleportWarning_C", "ClearWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.HideWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MobileClientTeleportWarning_C::HideWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MobileClientTeleportWarning_C", "HideWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.SetParentNotificationWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGNotificationUserWidget*   Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MobileClientTeleportWarning_C::SetParentNotificationWidget(class UGGNotificationUserWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MobileClientTeleportWarning_C", "SetParentNotificationWidget");

	Params::UUMG_MobileClientTeleportWarning_C_SetParentNotificationWidget_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.ShowWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_MobileClientTeleportWarning_C::ShowWidget(const struct FNotification& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MobileClientTeleportWarning_C", "ShowWidget");

	Params::UUMG_MobileClientTeleportWarning_C_ShowWidget_Params Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.UpdateWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_MobileClientTeleportWarning_C::UpdateWidget(const struct FNotification& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MobileClientTeleportWarning_C", "UpdateWidget");

	Params::UUMG_MobileClientTeleportWarning_C_UpdateWidget_Params Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MobileClientTeleportWarning_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MobileClientTeleportWarning_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.ExecuteUbergraph_UMG_MobileClientTeleportWarning
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGNotificationUserWidget*   K2Node_Event_Parent                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotification               K2Node_Event_Notification_1                                      (None)
// struct FNotification               K2Node_Event_Notification                                        (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MobileClientTeleportWarning_C::ExecuteUbergraph_UMG_MobileClientTeleportWarning(int32 EntryPoint, class UGGNotificationUserWidget* K2Node_Event_Parent, const struct FNotification& K2Node_Event_Notification_1, const struct FNotification& K2Node_Event_Notification, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MobileClientTeleportWarning_C", "ExecuteUbergraph_UMG_MobileClientTeleportWarning");

	Params::UUMG_MobileClientTeleportWarning_C_ExecuteUbergraph_UMG_MobileClientTeleportWarning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Parent = K2Node_Event_Parent;
	Parms.K2Node_Event_Notification_1 = K2Node_Event_Notification_1;
	Parms.K2Node_Event_Notification = K2Node_Event_Notification;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided = CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided;

	UObject::ProcessEvent(Func, &Parms);

}

}


