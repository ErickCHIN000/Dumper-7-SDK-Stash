#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeatherInteractable.BP_WeatherInteractable_C
// (None)

class UClass* IBP_WeatherInteractable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeatherInteractable_C");

	return Clss;
}


// BP_WeatherInteractable_C BP_WeatherInteractable.Default__BP_WeatherInteractable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_WeatherInteractable_C* IBP_WeatherInteractable_C::GetDefaultObj()
{
	static class IBP_WeatherInteractable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_WeatherInteractable_C*>(IBP_WeatherInteractable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeatherInteractable.BP_WeatherInteractable_C.Snow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeatherInteractable_C::Snow(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherInteractable_C", "Snow");

	Params::IBP_WeatherInteractable_C_Snow_Params Parms{};

	Parms.Intensity = Intensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherInteractable.BP_WeatherInteractable_C.Rain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Millilitres                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_WeatherInteractable_C::Rain(int32 Millilitres)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherInteractable_C", "Rain");

	Params::IBP_WeatherInteractable_C_Rain_Params Parms{};

	Parms.Millilitres = Millilitres;

	UObject::ProcessEvent(Func, &Parms);

}

}


