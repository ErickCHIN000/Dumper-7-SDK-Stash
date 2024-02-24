#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExplosiveNPCInterface.BP_ExplosiveNPCInterface_C
// (None)

class UClass* IBP_ExplosiveNPCInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExplosiveNPCInterface_C");

	return Clss;
}


// BP_ExplosiveNPCInterface_C BP_ExplosiveNPCInterface.Default__BP_ExplosiveNPCInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_ExplosiveNPCInterface_C* IBP_ExplosiveNPCInterface_C::GetDefaultObj()
{
	static class IBP_ExplosiveNPCInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_ExplosiveNPCInterface_C*>(IBP_ExplosiveNPCInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ExplosiveNPCInterface.BP_ExplosiveNPCInterface_C.GetDetonationProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ExplosiveNPCInterface_C::GetDetonationProgress(float* Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosiveNPCInterface_C", "GetDetonationProgress");

	Params::IBP_ExplosiveNPCInterface_C_GetDetonationProgress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function BP_ExplosiveNPCInterface.BP_ExplosiveNPCInterface_C.BeginDetonation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ExplosiveNPCInterface_C::BeginDetonation(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosiveNPCInterface_C", "BeginDetonation");

	Params::IBP_ExplosiveNPCInterface_C_BeginDetonation_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}

}


