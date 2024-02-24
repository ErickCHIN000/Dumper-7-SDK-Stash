#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ControllerClientInteractable.BPI_ControllerClientInteractable_C
// (None)

class UClass* IBPI_ControllerClientInteractable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ControllerClientInteractable_C");

	return Clss;
}


// BPI_ControllerClientInteractable_C BPI_ControllerClientInteractable.Default__BPI_ControllerClientInteractable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ControllerClientInteractable_C* IBPI_ControllerClientInteractable_C::GetDefaultObj()
{
	static class IBPI_ControllerClientInteractable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ControllerClientInteractable_C*>(IBPI_ControllerClientInteractable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ControllerClientInteractable.BPI_ControllerClientInteractable_C.Client_LocalControllerInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ControllerClientInteractable_C::Client_LocalControllerInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ControllerClientInteractable_C", "Client_LocalControllerInteract");



	UObject::ProcessEvent(Func, nullptr);

}

}


