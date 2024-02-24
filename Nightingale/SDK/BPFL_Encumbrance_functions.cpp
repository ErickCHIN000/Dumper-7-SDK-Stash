#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Encumbrance.BPFL_Encumbrance_C
// (None)

class UClass* UBPFL_Encumbrance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Encumbrance_C");

	return Clss;
}


// BPFL_Encumbrance_C BPFL_Encumbrance.Default__BPFL_Encumbrance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Encumbrance_C* UBPFL_Encumbrance_C::GetDefaultObj()
{
	static class UBPFL_Encumbrance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Encumbrance_C*>(UBPFL_Encumbrance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Encumbrance.BPFL_Encumbrance_C.Get Encumbrance Ratio for Max Penalty
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             OverEncumbranceRatioForMaxPenalty                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Encumbrance_C::Get_Encumbrance_Ratio_for_Max_Penalty(class UObject* __WorldContext, double* OverEncumbranceRatioForMaxPenalty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Encumbrance_C", "Get Encumbrance Ratio for Max Penalty");

	Params::UBPFL_Encumbrance_C_Get_Encumbrance_Ratio_for_Max_Penalty_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OverEncumbranceRatioForMaxPenalty != nullptr)
		*OverEncumbranceRatioForMaxPenalty = Parms.OverEncumbranceRatioForMaxPenalty;

}

}


