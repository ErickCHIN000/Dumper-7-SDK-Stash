#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Ranger.BPI_Ranger_C
// (None)

class UClass* IBPI_Ranger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Ranger_C");

	return Clss;
}


// BPI_Ranger_C BPI_Ranger.Default__BPI_Ranger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Ranger_C* IBPI_Ranger_C::GetDefaultObj()
{
	static class IBPI_Ranger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Ranger_C*>(IBPI_Ranger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Ranger.BPI_Ranger_C.BeginSpawningTornados
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Ranger_C::BeginSpawningTornados()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Ranger_C", "BeginSpawningTornados");



	UObject::ProcessEvent(Func, nullptr);

}

}


