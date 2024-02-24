#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Burnable.BPI_Burnable_C
// (None)

class UClass* IBPI_Burnable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Burnable_C");

	return Clss;
}


// BPI_Burnable_C BPI_Burnable.Default__BPI_Burnable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Burnable_C* IBPI_Burnable_C::GetDefaultObj()
{
	static class IBPI_Burnable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Burnable_C*>(IBPI_Burnable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Burnable.BPI_Burnable_C.Extinguish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Burnable_C::Extinguish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Burnable_C", "Extinguish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Burnable.BPI_Burnable_C.Ignite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Burnable_C::Ignite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Burnable_C", "Ignite");



	UObject::ProcessEvent(Func, nullptr);

}

}


