#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FX_LocalFogVolume.BP_FX_LocalFogVolume_C
// (Actor)

class UClass* ABP_FX_LocalFogVolume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FX_LocalFogVolume_C");

	return Clss;
}


// BP_FX_LocalFogVolume_C BP_FX_LocalFogVolume.Default__BP_FX_LocalFogVolume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FX_LocalFogVolume_C* ABP_FX_LocalFogVolume_C::GetDefaultObj()
{
	static class ABP_FX_LocalFogVolume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FX_LocalFogVolume_C*>(ABP_FX_LocalFogVolume_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FX_LocalFogVolume.BP_FX_LocalFogVolume_C.SetActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FX_LocalFogVolume_C::SetActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FX_LocalFogVolume_C", "SetActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FX_LocalFogVolume.BP_FX_LocalFogVolume_C.SetDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FX_LocalFogVolume_C::SetDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FX_LocalFogVolume_C", "SetDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FX_LocalFogVolume.BP_FX_LocalFogVolume_C.ExecuteUbergraph_BP_FX_LocalFogVolume
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FX_LocalFogVolume_C::ExecuteUbergraph_BP_FX_LocalFogVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FX_LocalFogVolume_C", "ExecuteUbergraph_BP_FX_LocalFogVolume");

	Params::ABP_FX_LocalFogVolume_C_ExecuteUbergraph_BP_FX_LocalFogVolume_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


