#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_VehicleSiren.BPI_VehicleSiren_C
// (None)

class UClass* IBPI_VehicleSiren_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_VehicleSiren_C");

	return Clss;
}


// BPI_VehicleSiren_C BPI_VehicleSiren.Default__BPI_VehicleSiren_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_VehicleSiren_C* IBPI_VehicleSiren_C::GetDefaultObj()
{
	static class IBPI_VehicleSiren_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_VehicleSiren_C*>(IBPI_VehicleSiren_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_VehicleSiren.BPI_VehicleSiren_C.ToggleSiren
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSirenEnabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_VehicleSiren_C::ToggleSiren(bool bSirenEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_VehicleSiren_C", "ToggleSiren");

	Params::IBPI_VehicleSiren_C_ToggleSiren_Params Parms{};

	Parms.bSirenEnabled = bSirenEnabled;

	UObject::ProcessEvent(Func, &Parms);

}

}


