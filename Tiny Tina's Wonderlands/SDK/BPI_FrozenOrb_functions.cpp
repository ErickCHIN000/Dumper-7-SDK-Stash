#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_FrozenOrb.BPI_FrozenOrb_C
// (None)

class UClass* IBPI_FrozenOrb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_FrozenOrb_C");

	return Clss;
}


// BPI_FrozenOrb_C BPI_FrozenOrb.Default__BPI_FrozenOrb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_FrozenOrb_C* IBPI_FrozenOrb_C::GetDefaultObj()
{
	static class IBPI_FrozenOrb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_FrozenOrb_C*>(IBPI_FrozenOrb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_FrozenOrb.BPI_FrozenOrb_C.FrozenOrbTryStopMoving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FrozenOrb_C::FrozenOrbTryStopMoving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FrozenOrb_C", "FrozenOrbTryStopMoving");



	UObject::ProcessEvent(Func, nullptr);

}

}


