#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Lockpick.BPI_Lockpick_C
// (None)

class UClass* IBPI_Lockpick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Lockpick_C");

	return Clss;
}


// BPI_Lockpick_C BPI_Lockpick.Default__BPI_Lockpick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Lockpick_C* IBPI_Lockpick_C::GetDefaultObj()
{
	static class IBPI_Lockpick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Lockpick_C*>(IBPI_Lockpick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Lockpick.BPI_Lockpick_C.LockpickSuccessful
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Lockpick_C::LockpickSuccessful()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Lockpick_C", "LockpickSuccessful");



	UObject::ProcessEvent(Func, nullptr);

}

}


