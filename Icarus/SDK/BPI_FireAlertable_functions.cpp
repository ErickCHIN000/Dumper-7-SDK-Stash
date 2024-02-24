#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_FireAlertable.BPI_FireAlertable_C
// (None)

class UClass* IBPI_FireAlertable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_FireAlertable_C");

	return Clss;
}


// BPI_FireAlertable_C BPI_FireAlertable.Default__BPI_FireAlertable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_FireAlertable_C* IBPI_FireAlertable_C::GetDefaultObj()
{
	static class IBPI_FireAlertable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_FireAlertable_C*>(IBPI_FireAlertable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_FireAlertable.BPI_FireAlertable_C.NotifyOfFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     FireLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasNotified                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_FireAlertable_C::NotifyOfFire(const struct FVector& FireLocation, bool* WasNotified)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FireAlertable_C", "NotifyOfFire");

	Params::IBPI_FireAlertable_C_NotifyOfFire_Params Parms{};

	Parms.FireLocation = FireLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (WasNotified != nullptr)
		*WasNotified = Parms.WasNotified;

}

}


