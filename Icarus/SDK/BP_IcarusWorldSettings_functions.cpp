#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusWorldSettings.BP_IcarusWorldSettings_C
// (Actor)

class UClass* ABP_IcarusWorldSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusWorldSettings_C");

	return Clss;
}


// BP_IcarusWorldSettings_C BP_IcarusWorldSettings.Default__BP_IcarusWorldSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusWorldSettings_C* ABP_IcarusWorldSettings_C::GetDefaultObj()
{
	static class ABP_IcarusWorldSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusWorldSettings_C*>(ABP_IcarusWorldSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusWorldSettings.BP_IcarusWorldSettings_C.CreateAssets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusWorldSettings_C::CreateAssets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusWorldSettings_C", "CreateAssets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusWorldSettings.BP_IcarusWorldSettings_C.CaptureMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusWorldSettings_C::CaptureMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusWorldSettings_C", "CaptureMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusWorldSettings.BP_IcarusWorldSettings_C.ExecuteUbergraph_BP_IcarusWorldSettings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusWorldSettings_C::ExecuteUbergraph_BP_IcarusWorldSettings(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusWorldSettings_C", "ExecuteUbergraph_BP_IcarusWorldSettings");

	Params::ABP_IcarusWorldSettings_C_ExecuteUbergraph_BP_IcarusWorldSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


