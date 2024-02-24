#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Rain.BPI_Rain_C
// (None)

class UClass* IBPI_Rain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Rain_C");

	return Clss;
}


// BPI_Rain_C BPI_Rain.Default__BPI_Rain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Rain_C* IBPI_Rain_C::GetDefaultObj()
{
	static class IBPI_Rain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Rain_C*>(IBPI_Rain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Rain.BPI_Rain_C.LaunchLightning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Rain_C::LaunchLightning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Rain_C", "LaunchLightning");



	UObject::ProcessEvent(Func, nullptr);

}

}


