#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LightIntensity.BP_LightIntensity_C
// (None)

class UClass* UBP_LightIntensity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LightIntensity_C");

	return Clss;
}


// BP_LightIntensity_C BP_LightIntensity.Default__BP_LightIntensity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_LightIntensity_C* UBP_LightIntensity_C::GetDefaultObj()
{
	static class UBP_LightIntensity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_LightIntensity_C*>(UBP_LightIntensity_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LightIntensity.BP_LightIntensity_C.SetStreetLightIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LightIntensity_C::SetStreetLightIntensity(double Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightIntensity_C", "SetStreetLightIntensity");

	Params::UBP_LightIntensity_C_SetStreetLightIntensity_Params Parms{};

	Parms.Intensity = Intensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightIntensity.BP_LightIntensity_C.GetStreetLightIntensity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Intensity                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LightIntensity_C::GetStreetLightIntensity(double* Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightIntensity_C", "GetStreetLightIntensity");

	Params::UBP_LightIntensity_C_GetStreetLightIntensity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Intensity != nullptr)
		*Intensity = Parms.Intensity;

}


// Function BP_LightIntensity.BP_LightIntensity_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_LightIntensity_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightIntensity_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LightIntensity.BP_LightIntensity_C.ExecuteUbergraph_BP_LightIntensity
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LightIntensity_C::ExecuteUbergraph_BP_LightIntensity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightIntensity_C", "ExecuteUbergraph_BP_LightIntensity");

	Params::UBP_LightIntensity_C_ExecuteUbergraph_BP_LightIntensity_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


