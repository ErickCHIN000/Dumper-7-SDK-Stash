#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_01_notification_parent.w_01_notification_parent_C
// (None)

class UClass* UW_01_notification_parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_01_notification_parent_C");

	return Clss;
}


// w_01_notification_parent_C w_01_notification_parent.Default__w_01_notification_parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_01_notification_parent_C* UW_01_notification_parent_C::GetDefaultObj()
{
	static class UW_01_notification_parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_01_notification_parent_C*>(UW_01_notification_parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_01_notification_parent.w_01_notification_parent_C.finish_notify
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_01_notification_parent_C::Finish_notify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_notification_parent_C", "finish_notify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_notification_parent.w_01_notification_parent_C.add_notification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubp_notification_component_C*Notify_component                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Queue_index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_notification_parent_C::Add_notification(class Ubp_notification_component_C* Notify_component, int32 Queue_index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_notification_parent_C", "add_notification");

	Params::UW_01_notification_parent_C_Add_notification_Params Parms{};

	Parms.Notify_component = Notify_component;
	Parms.Queue_index = Queue_index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_notification_parent.w_01_notification_parent_C.start_notification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Active_index                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_notification_parent_C::Start_notification(int32 Active_index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_notification_parent_C", "start_notification");

	Params::UW_01_notification_parent_C_Start_notification_Params Parms{};

	Parms.Active_index = Active_index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_notification_parent.w_01_notification_parent_C.custom_notify_info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text_1                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text_2                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_01_notification_parent_C::Custom_notify_info(class FText Text_1, class FText Text_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_notification_parent_C", "custom_notify_info");

	Params::UW_01_notification_parent_C_Custom_notify_info_Params Parms{};

	Parms.Text_1 = Text_1;
	Parms.Text_2 = Text_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_notification_parent.w_01_notification_parent_C.custom_notify_start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_01_notification_parent_C::Custom_notify_start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_notification_parent_C", "custom_notify_start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_notification_parent.w_01_notification_parent_C.custom_notify_end
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_01_notification_parent_C::Custom_notify_end()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_notification_parent_C", "custom_notify_end");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_notification_parent.w_01_notification_parent_C.custom_notify_settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Notify_end_time                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Notify_padding                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Notify_order                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_notification_parent_C::Custom_notify_settings(float Notify_end_time, float Notify_padding, int32 Notify_order)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_notification_parent_C", "custom_notify_settings");

	Params::UW_01_notification_parent_C_Custom_notify_settings_Params Parms{};

	Parms.Notify_end_time = Notify_end_time;
	Parms.Notify_padding = Notify_padding;
	Parms.Notify_order = Notify_order;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_notification_parent.w_01_notification_parent_C.ExecuteUbergraph_w_01_notification_parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_notification_component_C*K2Node_CustomEvent_notify_component                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_queue_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_active_index                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_text_1                                        (None)
// class FText                        K2Node_CustomEvent_text_2                                        (None)
// float                              K2Node_CustomEvent_notify_end_time                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_notify_padding                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_notify_order                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_notification_parent_C::ExecuteUbergraph_w_01_notification_parent(int32 EntryPoint, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class Ubp_notification_component_C* K2Node_CustomEvent_notify_component, int32 K2Node_CustomEvent_queue_index, int32 K2Node_CustomEvent_active_index, class FText K2Node_CustomEvent_text_1, class FText K2Node_CustomEvent_text_2, float K2Node_CustomEvent_notify_end_time, float K2Node_CustomEvent_notify_padding, int32 K2Node_CustomEvent_notify_order, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_notification_parent_C", "ExecuteUbergraph_w_01_notification_parent");

	Params::UW_01_notification_parent_C_ExecuteUbergraph_w_01_notification_parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_CustomEvent_notify_component = K2Node_CustomEvent_notify_component;
	Parms.K2Node_CustomEvent_queue_index = K2Node_CustomEvent_queue_index;
	Parms.K2Node_CustomEvent_active_index = K2Node_CustomEvent_active_index;
	Parms.K2Node_CustomEvent_text_1 = K2Node_CustomEvent_text_1;
	Parms.K2Node_CustomEvent_text_2 = K2Node_CustomEvent_text_2;
	Parms.K2Node_CustomEvent_notify_end_time = K2Node_CustomEvent_notify_end_time;
	Parms.K2Node_CustomEvent_notify_padding = K2Node_CustomEvent_notify_padding;
	Parms.K2Node_CustomEvent_notify_order = K2Node_CustomEvent_notify_order;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


