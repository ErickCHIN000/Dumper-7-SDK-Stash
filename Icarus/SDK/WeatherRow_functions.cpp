#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WeatherRow.WeatherRow_C
// (None)

class UClass* UWeatherRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeatherRow_C");

	return Clss;
}


// WeatherRow_C WeatherRow.Default__WeatherRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeatherRow_C* UWeatherRow_C::GetDefaultObj()
{
	static class UWeatherRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeatherRow_C*>(UWeatherRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeatherRow.WeatherRow_C.AddWeather
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AddWeatherEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeatherRow_C::AddWeather(class FName AddWeatherEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherRow_C", "AddWeather");

	Params::UWeatherRow_C_AddWeather_Params Parms{};

	Parms.AddWeatherEvent = AddWeatherEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeatherRow.WeatherRow_C.ExecuteUbergraph_WeatherRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_AddWeatherEvent                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FWeatherEventsRowHandle     CallFunc_MakeWeatherEvents_ReturnValue                           (NoDestructor, HasGetValueTypeHash)

void UWeatherRow_C::ExecuteUbergraph_WeatherRow(int32 EntryPoint, class FName K2Node_CustomEvent_AddWeatherEvent, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FWeatherEventsRowHandle& CallFunc_MakeWeatherEvents_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherRow_C", "ExecuteUbergraph_WeatherRow");

	Params::UWeatherRow_C_ExecuteUbergraph_WeatherRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_AddWeatherEvent = K2Node_CustomEvent_AddWeatherEvent;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_MakeWeatherEvents_ReturnValue = CallFunc_MakeWeatherEvents_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


