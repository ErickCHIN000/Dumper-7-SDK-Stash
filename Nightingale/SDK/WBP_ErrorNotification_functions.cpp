#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ErrorNotification.WBP_ErrorNotification_C
// (None)

class UClass* UWBP_ErrorNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ErrorNotification_C");

	return Clss;
}


// WBP_ErrorNotification_C WBP_ErrorNotification.Default__WBP_ErrorNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ErrorNotification_C* UWBP_ErrorNotification_C::GetDefaultObj()
{
	static class UWBP_ErrorNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ErrorNotification_C*>(UWBP_ErrorNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ErrorNotification.WBP_ErrorNotification_C.Display Error Notification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TypeText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        HeadlineText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ErrorNotification_C::Display_Error_Notification(double DisplayTime, class FText TypeText, class FText HeadlineText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ErrorNotification_C", "Display Error Notification");

	Params::UWBP_ErrorNotification_C_Display_Error_Notification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.TypeText = TypeText;
	Parms.HeadlineText = HeadlineText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ErrorNotification.WBP_ErrorNotification_C.RemoveErrorNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ErrorNotification_C::RemoveErrorNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ErrorNotification_C", "RemoveErrorNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ErrorNotification.WBP_ErrorNotification_C.ExecuteUbergraph_WBP_ErrorNotification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_DisplayTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TypeText                                      (None)
// class FText                        K2Node_CustomEvent_HeadlineText                                  (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ErrorNotification_C::ExecuteUbergraph_WBP_ErrorNotification(int32 EntryPoint, double K2Node_CustomEvent_DisplayTime, class FText K2Node_CustomEvent_TypeText, class FText K2Node_CustomEvent_HeadlineText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ErrorNotification_C", "ExecuteUbergraph_WBP_ErrorNotification");

	Params::UWBP_ErrorNotification_C_ExecuteUbergraph_WBP_ErrorNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_DisplayTime = K2Node_CustomEvent_DisplayTime;
	Parms.K2Node_CustomEvent_TypeText = K2Node_CustomEvent_TypeText;
	Parms.K2Node_CustomEvent_HeadlineText = K2Node_CustomEvent_HeadlineText;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


