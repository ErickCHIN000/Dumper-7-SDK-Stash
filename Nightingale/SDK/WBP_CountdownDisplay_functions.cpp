#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CountdownDisplay.WBP_CountdownDisplay_C
// (None)

class UClass* UWBP_CountdownDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CountdownDisplay_C");

	return Clss;
}


// WBP_CountdownDisplay_C WBP_CountdownDisplay.Default__WBP_CountdownDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CountdownDisplay_C* UWBP_CountdownDisplay_C::GetDefaultObj()
{
	static class UWBP_CountdownDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CountdownDisplay_C*>(UWBP_CountdownDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CountdownDisplay.WBP_CountdownDisplay_C.UpdateRemainingTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentTime                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimerDelta                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CountdownDisplay_C::UpdateRemainingTime(double CurrentTime, double TimerDelta, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_GetTimeSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CountdownDisplay_C", "UpdateRemainingTime");

	Params::UWBP_CountdownDisplay_C_UpdateRemainingTime_Params Parms{};

	Parms.CurrentTime = CurrentTime;
	Parms.TimerDelta = TimerDelta;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CountdownDisplay.WBP_CountdownDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CountdownDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CountdownDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CountdownDisplay.WBP_CountdownDisplay_C.OnCountdownTimerTicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CountdownDisplay_C::OnCountdownTimerTicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CountdownDisplay_C", "OnCountdownTimerTicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CountdownDisplay.WBP_CountdownDisplay_C.ExecuteUbergraph_WBP_CountdownDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CountdownDisplay_C::ExecuteUbergraph_WBP_CountdownDisplay(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CountdownDisplay_C", "ExecuteUbergraph_WBP_CountdownDisplay");

	Params::UWBP_CountdownDisplay_C_ExecuteUbergraph_WBP_CountdownDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CountdownDisplay.WBP_CountdownDisplay_C.OnTimeExpired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CountdownDisplay_C::OnTimeExpired__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CountdownDisplay_C", "OnTimeExpired__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


