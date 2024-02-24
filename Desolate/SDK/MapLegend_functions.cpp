#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapLegend.MapLegend_C
// (None)

class UClass* UMapLegend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapLegend_C");

	return Clss;
}


// MapLegend_C MapLegend.Default__MapLegend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapLegend_C* UMapLegend_C::GetDefaultObj()
{
	static class UMapLegend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapLegend_C*>(UMapLegend_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MapLegend.MapLegend_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMapLegend_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapLegend_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapLegend.MapLegend_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void UMapLegend_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapLegend_C", "OnSynchronizeProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapLegend.MapLegend_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapLegend_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapLegend_C", "Tick");

	Params::UMapLegend_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapLegend.MapLegend_C.ExecuteUbergraph_MapLegend
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_3                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_4                               (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_5                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_6                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_7                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_8                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_8                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_9                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_9                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_10                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_10                              (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_11                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_11                              (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_12                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_13                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_12                              (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_13                              (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_14                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_14                              (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_15                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_15                              (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_16                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_16                              (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_17                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_17                              (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_18                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_19                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_18                              (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_19                              (None)

void UMapLegend_C::ExecuteUbergraph_MapLegend(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_TextToUpper_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText CallFunc_TextToUpper_ReturnValue_4, class FText CallFunc_TextToUpper_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_TextToUpper_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_7, class FText CallFunc_TextToUpper_ReturnValue_7, class FText CallFunc_MakeLiteralText_ReturnValue_8, class FText CallFunc_TextToUpper_ReturnValue_8, class FText CallFunc_MakeLiteralText_ReturnValue_9, class FText CallFunc_TextToUpper_ReturnValue_9, class FText CallFunc_MakeLiteralText_ReturnValue_10, class FText CallFunc_TextToUpper_ReturnValue_10, class FText CallFunc_MakeLiteralText_ReturnValue_11, class FText CallFunc_TextToUpper_ReturnValue_11, class FText CallFunc_MakeLiteralText_ReturnValue_12, class FText CallFunc_MakeLiteralText_ReturnValue_13, class FText CallFunc_TextToUpper_ReturnValue_12, class FText CallFunc_TextToUpper_ReturnValue_13, class FText CallFunc_MakeLiteralText_ReturnValue_14, class FText CallFunc_TextToUpper_ReturnValue_14, class FText CallFunc_MakeLiteralText_ReturnValue_15, class FText CallFunc_TextToUpper_ReturnValue_15, class FText CallFunc_MakeLiteralText_ReturnValue_16, class FText CallFunc_TextToUpper_ReturnValue_16, class FText CallFunc_MakeLiteralText_ReturnValue_17, class FText CallFunc_TextToUpper_ReturnValue_17, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText CallFunc_MakeLiteralText_ReturnValue_18, class FText CallFunc_MakeLiteralText_ReturnValue_19, class FText CallFunc_TextToUpper_ReturnValue_18, class FText CallFunc_TextToUpper_ReturnValue_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapLegend_C", "ExecuteUbergraph_MapLegend");

	Params::UMapLegend_C_ExecuteUbergraph_MapLegend_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_TextToUpper_ReturnValue_3 = CallFunc_TextToUpper_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_TextToUpper_ReturnValue_4 = CallFunc_TextToUpper_ReturnValue_4;
	Parms.CallFunc_TextToUpper_ReturnValue_5 = CallFunc_TextToUpper_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.CallFunc_TextToUpper_ReturnValue_6 = CallFunc_TextToUpper_ReturnValue_6;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.CallFunc_TextToUpper_ReturnValue_7 = CallFunc_TextToUpper_ReturnValue_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue_8 = CallFunc_MakeLiteralText_ReturnValue_8;
	Parms.CallFunc_TextToUpper_ReturnValue_8 = CallFunc_TextToUpper_ReturnValue_8;
	Parms.CallFunc_MakeLiteralText_ReturnValue_9 = CallFunc_MakeLiteralText_ReturnValue_9;
	Parms.CallFunc_TextToUpper_ReturnValue_9 = CallFunc_TextToUpper_ReturnValue_9;
	Parms.CallFunc_MakeLiteralText_ReturnValue_10 = CallFunc_MakeLiteralText_ReturnValue_10;
	Parms.CallFunc_TextToUpper_ReturnValue_10 = CallFunc_TextToUpper_ReturnValue_10;
	Parms.CallFunc_MakeLiteralText_ReturnValue_11 = CallFunc_MakeLiteralText_ReturnValue_11;
	Parms.CallFunc_TextToUpper_ReturnValue_11 = CallFunc_TextToUpper_ReturnValue_11;
	Parms.CallFunc_MakeLiteralText_ReturnValue_12 = CallFunc_MakeLiteralText_ReturnValue_12;
	Parms.CallFunc_MakeLiteralText_ReturnValue_13 = CallFunc_MakeLiteralText_ReturnValue_13;
	Parms.CallFunc_TextToUpper_ReturnValue_12 = CallFunc_TextToUpper_ReturnValue_12;
	Parms.CallFunc_TextToUpper_ReturnValue_13 = CallFunc_TextToUpper_ReturnValue_13;
	Parms.CallFunc_MakeLiteralText_ReturnValue_14 = CallFunc_MakeLiteralText_ReturnValue_14;
	Parms.CallFunc_TextToUpper_ReturnValue_14 = CallFunc_TextToUpper_ReturnValue_14;
	Parms.CallFunc_MakeLiteralText_ReturnValue_15 = CallFunc_MakeLiteralText_ReturnValue_15;
	Parms.CallFunc_TextToUpper_ReturnValue_15 = CallFunc_TextToUpper_ReturnValue_15;
	Parms.CallFunc_MakeLiteralText_ReturnValue_16 = CallFunc_MakeLiteralText_ReturnValue_16;
	Parms.CallFunc_TextToUpper_ReturnValue_16 = CallFunc_TextToUpper_ReturnValue_16;
	Parms.CallFunc_MakeLiteralText_ReturnValue_17 = CallFunc_MakeLiteralText_ReturnValue_17;
	Parms.CallFunc_TextToUpper_ReturnValue_17 = CallFunc_TextToUpper_ReturnValue_17;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_MakeLiteralText_ReturnValue_18 = CallFunc_MakeLiteralText_ReturnValue_18;
	Parms.CallFunc_MakeLiteralText_ReturnValue_19 = CallFunc_MakeLiteralText_ReturnValue_19;
	Parms.CallFunc_TextToUpper_ReturnValue_18 = CallFunc_TextToUpper_ReturnValue_18;
	Parms.CallFunc_TextToUpper_ReturnValue_19 = CallFunc_TextToUpper_ReturnValue_19;

	UObject::ProcessEvent(Func, &Parms);

}

}


