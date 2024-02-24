#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EncounterMessage.WBP_EncounterMessage_C
// (None)

class UClass* UWBP_EncounterMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EncounterMessage_C");

	return Clss;
}


// WBP_EncounterMessage_C WBP_EncounterMessage.Default__WBP_EncounterMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EncounterMessage_C* UWBP_EncounterMessage_C::GetDefaultObj()
{
	static class UWBP_EncounterMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EncounterMessage_C*>(UWBP_EncounterMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EncounterMessage.WBP_EncounterMessage_C.SetupMessageAndShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        InText2                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EncounterMessage_C::SetupMessageAndShow(class FText InText, class FText InText2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterMessage_C", "SetupMessageAndShow");

	Params::UWBP_EncounterMessage_C_SetupMessageAndShow_Params Parms{};

	Parms.InText = InText;
	Parms.InText2 = InText2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EncounterMessage.WBP_EncounterMessage_C.EncounterMessage_RemoveMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EncounterMessage_C::EncounterMessage_RemoveMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterMessage_C", "EncounterMessage_RemoveMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncounterMessage.WBP_EncounterMessage_C.EncounterMessage_DisplayAndPin
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotificationEncounter      Notification_Encounter                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_EncounterMessage_C::EncounterMessage_DisplayAndPin(struct FNotificationEncounter& Notification_Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterMessage_C", "EncounterMessage_DisplayAndPin");

	Params::UWBP_EncounterMessage_C_EncounterMessage_DisplayAndPin_Params Parms{};

	Parms.Notification_Encounter = Notification_Encounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EncounterMessage.WBP_EncounterMessage_C.EncounterMessage_DisplayFor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_EncounterMessage_C::EncounterMessage_DisplayFor(double TimeToDisplay, const struct FNotificationEncounter& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterMessage_C", "EncounterMessage_DisplayFor");

	Params::UWBP_EncounterMessage_C_EncounterMessage_DisplayFor_Params Parms{};

	Parms.TimeToDisplay = TimeToDisplay;
	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EncounterMessage.WBP_EncounterMessage_C.ExecuteUbergraph_WBP_EncounterMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_CustomEvent_Notification_Encounter                        (ConstParm)
// double                             K2Node_CustomEvent_TimeToDisplay                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_CustomEvent_Content                                       (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncounterMessage_C::ExecuteUbergraph_WBP_EncounterMessage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double Temp_real_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, const struct FNotificationEncounter& K2Node_CustomEvent_Notification_Encounter, double K2Node_CustomEvent_TimeToDisplay, const struct FNotificationEncounter& K2Node_CustomEvent_Content, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterMessage_C", "ExecuteUbergraph_WBP_EncounterMessage");

	Params::UWBP_EncounterMessage_C_ExecuteUbergraph_WBP_EncounterMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_Notification_Encounter = K2Node_CustomEvent_Notification_Encounter;
	Parms.K2Node_CustomEvent_TimeToDisplay = K2Node_CustomEvent_TimeToDisplay;
	Parms.K2Node_CustomEvent_Content = K2Node_CustomEvent_Content;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


