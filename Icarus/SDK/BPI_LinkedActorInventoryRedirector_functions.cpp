#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_LinkedActorInventoryRedirector.BPI_LinkedActorInventoryRedirector_C
// (None)

class UClass* IBPI_LinkedActorInventoryRedirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_LinkedActorInventoryRedirector_C");

	return Clss;
}


// BPI_LinkedActorInventoryRedirector_C BPI_LinkedActorInventoryRedirector.Default__BPI_LinkedActorInventoryRedirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_LinkedActorInventoryRedirector_C* IBPI_LinkedActorInventoryRedirector_C::GetDefaultObj()
{
	static class IBPI_LinkedActorInventoryRedirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_LinkedActorInventoryRedirector_C*>(IBPI_LinkedActorInventoryRedirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_LinkedActorInventoryRedirector.BPI_LinkedActorInventoryRedirector_C.GetRedirectedInventoryComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent*         InventoryComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_LinkedActorInventoryRedirector_C::GetRedirectedInventoryComponent(class UInventoryComponent** InventoryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LinkedActorInventoryRedirector_C", "GetRedirectedInventoryComponent");

	Params::IBPI_LinkedActorInventoryRedirector_C_GetRedirectedInventoryComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InventoryComponent != nullptr)
		*InventoryComponent = Parms.InventoryComponent;

}

}


