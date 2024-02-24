#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C
// (None)

class UClass* UUMG_ProgressBarAnimatedLayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ProgressBarAnimatedLayer_C");

	return Clss;
}


// UMG_ProgressBarAnimatedLayer_C UMG_ProgressBarAnimatedLayer.Default__UMG_ProgressBarAnimatedLayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ProgressBarAnimatedLayer_C* UUMG_ProgressBarAnimatedLayer_C::GetDefaultObj()
{
	static class UUMG_ProgressBarAnimatedLayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ProgressBarAnimatedLayer_C*>(UUMG_ProgressBarAnimatedLayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C.GetCurrent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Current                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProgressBarAnimatedLayer_C::GetCurrent(float* Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProgressBarAnimatedLayer_C", "GetCurrent");

	Params::UUMG_ProgressBarAnimatedLayer_C_GetCurrent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Current != nullptr)
		*Current = Parms.Current;

}


// Function UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C.IsAnimating
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Animating                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProgressBarAnimatedLayer_C::IsAnimating(bool* Animating, bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProgressBarAnimatedLayer_C", "IsAnimating");

	Params::UUMG_ProgressBarAnimatedLayer_C_IsAnimating_Params Parms{};

	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Animating != nullptr)
		*Animating = Parms.Animating;

}


// Function UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProgressBarAnimatedLayer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProgressBarAnimatedLayer_C", "Tick");

	Params::UUMG_ProgressBarAnimatedLayer_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C.SetTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProgressBarAnimatedLayer_C::SetTarget(float Target, float Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProgressBarAnimatedLayer_C", "SetTarget");

	Params::UUMG_ProgressBarAnimatedLayer_C_SetTarget_Params Parms{};

	Parms.Target = Target;
	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C.ExecuteUbergraph_UMG_ProgressBarAnimatedLayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Speed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProgressBarAnimatedLayer_C::ExecuteUbergraph_UMG_ProgressBarAnimatedLayer(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, float K2Node_CustomEvent_Target, float K2Node_CustomEvent_Speed, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProgressBarAnimatedLayer_C", "ExecuteUbergraph_UMG_ProgressBarAnimatedLayer");

	Params::UUMG_ProgressBarAnimatedLayer_C_ExecuteUbergraph_UMG_ProgressBarAnimatedLayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.K2Node_CustomEvent_Speed = K2Node_CustomEvent_Speed;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


