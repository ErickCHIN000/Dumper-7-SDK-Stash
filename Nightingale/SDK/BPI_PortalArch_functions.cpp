#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_PortalArch.BPI_PortalArch_C
// (None)

class UClass* IBPI_PortalArch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PortalArch_C");

	return Clss;
}


// BPI_PortalArch_C BPI_PortalArch.Default__BPI_PortalArch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_PortalArch_C* IBPI_PortalArch_C::GetDefaultObj()
{
	static class IBPI_PortalArch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_PortalArch_C*>(IBPI_PortalArch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_PortalArch.BPI_PortalArch_C.UpdatePortalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETemporalPortalState    PortalState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_PortalArch_C::UpdatePortalState(enum class ETemporalPortalState PortalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PortalArch_C", "UpdatePortalState");

	Params::IBPI_PortalArch_C_UpdatePortalState_Params Parms{};

	Parms.PortalState = PortalState;

	UObject::ProcessEvent(Func, &Parms);

}

}


