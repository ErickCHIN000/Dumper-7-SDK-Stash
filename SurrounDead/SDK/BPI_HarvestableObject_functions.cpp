#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_HarvestableObject.BPI_HarvestableObject_C
// (None)

class UClass* IBPI_HarvestableObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_HarvestableObject_C");

	return Clss;
}


// BPI_HarvestableObject_C BPI_HarvestableObject.Default__BPI_HarvestableObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_HarvestableObject_C* IBPI_HarvestableObject_C::GetDefaultObj()
{
	static class IBPI_HarvestableObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_HarvestableObject_C*>(IBPI_HarvestableObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_HarvestableObject.BPI_HarvestableObject_C.HitHarvestableObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HarvestableObject_C::HitHarvestableObject(const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HarvestableObject_C", "HitHarvestableObject");

	Params::IBPI_HarvestableObject_C_HitHarvestableObject_Params Parms{};

	Parms.HitLocation = HitLocation;

	UObject::ProcessEvent(Func, &Parms);

}

}


