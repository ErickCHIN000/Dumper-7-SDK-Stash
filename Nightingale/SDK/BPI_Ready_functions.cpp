#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Ready.BPI_Ready_C
// (None)

class UClass* IBPI_Ready_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Ready_C");

	return Clss;
}


// BPI_Ready_C BPI_Ready.Default__BPI_Ready_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Ready_C* IBPI_Ready_C::GetDefaultObj()
{
	static class IBPI_Ready_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Ready_C*>(IBPI_Ready_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Ready.BPI_Ready_C.GameStateReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Ready_C::GameStateReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Ready_C", "GameStateReady");



	UObject::ProcessEvent(Func, nullptr);

}

}


