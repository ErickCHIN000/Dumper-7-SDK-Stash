#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Loading_ProgressBar.wid_Loading_ProgressBar_C
// (None)

class UClass* UWid_Loading_ProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Loading_ProgressBar_C");

	return Clss;
}


// wid_Loading_ProgressBar_C wid_Loading_ProgressBar.Default__wid_Loading_ProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Loading_ProgressBar_C* UWid_Loading_ProgressBar_C::GetDefaultObj()
{
	static class UWid_Loading_ProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Loading_ProgressBar_C*>(UWid_Loading_ProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.FinishTransitional
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loading_ProgressBar_C::FinishTransitional()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "FinishTransitional");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.SetIsTransitional
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTransitional                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Loading_ProgressBar_C::SetIsTransitional(bool IsTransitional)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "SetIsTransitional");

	Params::UWid_Loading_ProgressBar_C_SetIsTransitional_Params Parms{};

	Parms.IsTransitional = IsTransitional;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.StartQuickFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loading_ProgressBar_C::StartQuickFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "StartQuickFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.UpdateProgressBarValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Loading_ProgressBar_C::UpdateProgressBarValue(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "UpdateProgressBarValue");

	Params::UWid_Loading_ProgressBar_C_UpdateProgressBarValue_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.TryAcceptUnshownFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Loading_ProgressBar_C::TryAcceptUnshownFill(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "TryAcceptUnshownFill");

	Params::UWid_Loading_ProgressBar_C_TryAcceptUnshownFill_Params Parms{};

	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.UpdateUnshownFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FillSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFillCheckDelta_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Loading_ProgressBar_C::UpdateUnshownFill(float FillSpeed, float CallFunc_GetFillCheckDelta_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "UpdateUnshownFill");

	Params::UWid_Loading_ProgressBar_C_UpdateUnshownFill_Params Parms{};

	Parms.FillSpeed = FillSpeed;
	Parms.CallFunc_GetFillCheckDelta_ReturnValue = CallFunc_GetFillCheckDelta_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.GetFillCheckDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWid_Loading_ProgressBar_C::GetFillCheckDelta(float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "GetFillCheckDelta");

	Params::UWid_Loading_ProgressBar_C_GetFillCheckDelta_Params Parms{};

	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.UpdateLastFillCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Init                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAccurateRealTime_Seconds                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccurateRealTime_PartialSeconds                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Loading_ProgressBar_C::UpdateLastFillCheck(bool Init, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "UpdateLastFillCheck");

	Params::UWid_Loading_ProgressBar_C_UpdateLastFillCheck_Params Parms{};

	Parms.Init = Init;
	Parms.CallFunc_GetAccurateRealTime_Seconds = CallFunc_GetAccurateRealTime_Seconds;
	Parms.CallFunc_GetAccurateRealTime_PartialSeconds = CallFunc_GetAccurateRealTime_PartialSeconds;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.MakeNewUpdateAtDifference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Loading_ProgressBar_C::MakeNewUpdateAtDifference(float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "MakeNewUpdateAtDifference");

	Params::UWid_Loading_ProgressBar_C_MakeNewUpdateAtDifference_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Loading_ProgressBar_C::Start(bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "Start");

	Params::UWid_Loading_ProgressBar_C_Start_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.Progress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Loading_ProgressBar_C::Progress(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "Progress");

	Params::UWid_Loading_ProgressBar_C_Progress_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Loading_ProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "Tick");

	Params::UWid_Loading_ProgressBar_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Loading_ProgressBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.Finish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loading_ProgressBar_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "Finish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.StopAndHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loading_ProgressBar_C::StopAndHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "StopAndHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.ExecuteUbergraph_wid_Loading_ProgressBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Loading_ProgressBar_C::ExecuteUbergraph_wid_Loading_ProgressBar(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "ExecuteUbergraph_wid_Loading_ProgressBar");

	Params::UWid_Loading_ProgressBar_C_ExecuteUbergraph_wid_Loading_ProgressBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loading_ProgressBar.wid_Loading_ProgressBar_C.FinishedLoading__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Loading_ProgressBar_C::FinishedLoading__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loading_ProgressBar_C", "FinishedLoading__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


