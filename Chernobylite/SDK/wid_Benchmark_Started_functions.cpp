#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Benchmark_Started.wid_Benchmark_Started_C
// (None)

class UClass* UWid_Benchmark_Started_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Benchmark_Started_C");

	return Clss;
}


// wid_Benchmark_Started_C wid_Benchmark_Started.Default__wid_Benchmark_Started_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Benchmark_Started_C* UWid_Benchmark_Started_C::GetDefaultObj()
{
	static class UWid_Benchmark_Started_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Benchmark_Started_C*>(UWid_Benchmark_Started_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Benchmark_Started.wid_Benchmark_Started_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Benchmark_Started_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Benchmark_Started_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Benchmark_Started.wid_Benchmark_Started_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Benchmark_Started_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Benchmark_Started_C", "Tick");

	Params::UWid_Benchmark_Started_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Benchmark_Started.wid_Benchmark_Started_C.SetBenchmarkActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_Benchmark_C*             BActor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Benchmark_Started_C::SetBenchmarkActor(class Abp_Benchmark_C* BActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Benchmark_Started_C", "SetBenchmarkActor");

	Params::UWid_Benchmark_Started_C_SetBenchmarkActor_Params Parms{};

	Parms.BActor = BActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Benchmark_Started.wid_Benchmark_Started_C.ExecuteUbergraph_wid_Benchmark_Started
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_Benchmark_C*             K2Node_Event_BActor                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSmoothedAvarageFPS_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWid_Benchmark_Started_C::ExecuteUbergraph_wid_Benchmark_Started(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class Abp_Benchmark_C* K2Node_Event_BActor, float CallFunc_GetSmoothedAvarageFPS_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Benchmark_Started_C", "ExecuteUbergraph_wid_Benchmark_Started");

	Params::UWid_Benchmark_Started_C_ExecuteUbergraph_wid_Benchmark_Started_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_BActor = K2Node_Event_BActor;
	Parms.CallFunc_GetSmoothedAvarageFPS_ReturnValue = CallFunc_GetSmoothedAvarageFPS_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


