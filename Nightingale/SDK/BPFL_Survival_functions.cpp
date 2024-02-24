#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Survival.BPFL_Survival_C
// (None)

class UClass* UBPFL_Survival_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Survival_C");

	return Clss;
}


// BPFL_Survival_C BPFL_Survival.Default__BPFL_Survival_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Survival_C* UBPFL_Survival_C::GetDefaultObj()
{
	static class UBPFL_Survival_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Survival_C*>(UBPFL_Survival_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Survival.BPFL_Survival_C.Get Tired Threshold Percentage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             TiredThreshold                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Survival_C::Get_Tired_Threshold_Percentage(class UObject* __WorldContext, double* TiredThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Survival_C", "Get Tired Threshold Percentage");

	Params::UBPFL_Survival_C_Get_Tired_Threshold_Percentage_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (TiredThreshold != nullptr)
		*TiredThreshold = Parms.TiredThreshold;

}


// Function BPFL_Survival.BPFL_Survival_C.Get Starving Threshold Percentage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             StarvingThreshold                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Survival_C::Get_Starving_Threshold_Percentage(class UObject* __WorldContext, double* StarvingThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Survival_C", "Get Starving Threshold Percentage");

	Params::UBPFL_Survival_C_Get_Starving_Threshold_Percentage_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (StarvingThreshold != nullptr)
		*StarvingThreshold = Parms.StarvingThreshold;

}

}


