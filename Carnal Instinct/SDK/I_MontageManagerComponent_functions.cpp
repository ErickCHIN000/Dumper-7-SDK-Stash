#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass I_MontageManagerComponent.I_MontageManagerComponent_C
// (None)

class UClass* II_MontageManagerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("I_MontageManagerComponent_C");

	return Clss;
}


// I_MontageManagerComponent_C I_MontageManagerComponent.Default__I_MontageManagerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class II_MontageManagerComponent_C* II_MontageManagerComponent_C::GetDefaultObj()
{
	static class II_MontageManagerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<II_MontageManagerComponent_C*>(II_MontageManagerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function I_MontageManagerComponent.I_MontageManagerComponent_C.GetMontages
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MontageAction         Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Montages                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_MontageManagerComponent_C::GetMontages(enum class E_MontageAction Action, class UDataTable** Montages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_MontageManagerComponent_C", "GetMontages");

	Params::II_MontageManagerComponent_C_GetMontages_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	if (Montages != nullptr)
		*Montages = Parms.Montages;

}

}


