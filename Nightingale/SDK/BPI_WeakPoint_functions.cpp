#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_WeakPoint.BPI_WeakPoint_C
// (None)

class UClass* IBPI_WeakPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_WeakPoint_C");

	return Clss;
}


// BPI_WeakPoint_C BPI_WeakPoint.Default__BPI_WeakPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_WeakPoint_C* IBPI_WeakPoint_C::GetDefaultObj()
{
	static class IBPI_WeakPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_WeakPoint_C*>(IBPI_WeakPoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_WeakPoint.BPI_WeakPoint_C.GetWeakpointTriggerDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_WeakPoint_C::GetWeakpointTriggerDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeakPoint_C", "GetWeakpointTriggerDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_WeakPoint.BPI_WeakPoint_C.GetWeakpointHitDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Damage                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ModifiedDamage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_WeakPoint_C::GetWeakpointHitDamage(double Damage, double* ModifiedDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeakPoint_C", "GetWeakpointHitDamage");

	Params::IBPI_WeakPoint_C_GetWeakpointHitDamage_Params Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedDamage != nullptr)
		*ModifiedDamage = Parms.ModifiedDamage;

}

}


