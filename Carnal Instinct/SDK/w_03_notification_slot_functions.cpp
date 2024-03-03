#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_03_notification_slot.w_03_notification_slot_C
// (None)

class UClass* UW_03_notification_slot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_03_notification_slot_C");

	return Clss;
}


// w_03_notification_slot_C w_03_notification_slot.Default__w_03_notification_slot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_03_notification_slot_C* UW_03_notification_slot_C::GetDefaultObj()
{
	static class UW_03_notification_slot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_03_notification_slot_C*>(UW_03_notification_slot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_03_notification_slot.w_03_notification_slot_C.custom_notify_info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text_1                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text_2                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_03_notification_slot_C::Custom_notify_info(class FText Text_1, class FText Text_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_notification_slot_C", "custom_notify_info");

	Params::UW_03_notification_slot_C_Custom_notify_info_Params Parms{};

	Parms.Text_1 = Text_1;
	Parms.Text_2 = Text_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_notification_slot.w_03_notification_slot_C.custom_notify_start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_03_notification_slot_C::Custom_notify_start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_notification_slot_C", "custom_notify_start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_03_notification_slot.w_03_notification_slot_C.ExecuteUbergraph_w_03_notification_slot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_text_1                                              (None)
// class FText                        K2Node_Event_text_2                                              (None)

void UW_03_notification_slot_C::ExecuteUbergraph_w_03_notification_slot(int32 EntryPoint, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText K2Node_Event_text_1, class FText K2Node_Event_text_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_notification_slot_C", "ExecuteUbergraph_w_03_notification_slot");

	Params::UW_03_notification_slot_C_ExecuteUbergraph_w_03_notification_slot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Event_text_1 = K2Node_Event_text_1;
	Parms.K2Node_Event_text_2 = K2Node_Event_text_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


