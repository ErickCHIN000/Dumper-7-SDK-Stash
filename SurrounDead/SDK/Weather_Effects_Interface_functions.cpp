#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Weather_Effects_Interface.Weather_Effects_Interface_C
// (None)

class UClass* IWeather_Effects_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Weather_Effects_Interface_C");

	return Clss;
}


// Weather_Effects_Interface_C Weather_Effects_Interface.Default__Weather_Effects_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IWeather_Effects_Interface_C* IWeather_Effects_Interface_C::GetDefaultObj()
{
	static class IWeather_Effects_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IWeather_Effects_Interface_C*>(IWeather_Effects_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Weather_Effects_Interface.Weather_Effects_Interface_C.Force Startup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWeather_Effects_Interface_C::Force_Startup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weather_Effects_Interface_C", "Force Startup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weather_Effects_Interface.Weather_Effects_Interface_C.Reset Emitters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWeather_Effects_Interface_C::Reset_Emitters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weather_Effects_Interface_C", "Reset Emitters");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Weather_Effects_Interface.Weather_Effects_Interface_C.Editor Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWeather_Effects_Interface_C::Editor_Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Weather_Effects_Interface_C", "Editor Update");



	UObject::ProcessEvent(Func, nullptr);

}

}


