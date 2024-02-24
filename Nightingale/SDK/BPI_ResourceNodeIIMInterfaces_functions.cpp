#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ResourceNodeIIMInterfaces.BPI_ResourceNodeIIMInterfaces_C
// (None)

class UClass* IBPI_ResourceNodeIIMInterfaces_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ResourceNodeIIMInterfaces_C");

	return Clss;
}


// BPI_ResourceNodeIIMInterfaces_C BPI_ResourceNodeIIMInterfaces.Default__BPI_ResourceNodeIIMInterfaces_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ResourceNodeIIMInterfaces_C* IBPI_ResourceNodeIIMInterfaces_C::GetDefaultObj()
{
	static class IBPI_ResourceNodeIIMInterfaces_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ResourceNodeIIMInterfaces_C*>(IBPI_ResourceNodeIIMInterfaces_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ResourceNodeIIMInterfaces.BPI_ResourceNodeIIMInterfaces_C.GetResourceNodeInteractionInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_ResourceInteraction_C>ResourceInteraction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ResourceNodeIIMInterfaces_C::GetResourceNodeInteractionInterface(TScriptInterface<class IBPI_ResourceInteraction_C>* ResourceInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ResourceNodeIIMInterfaces_C", "GetResourceNodeInteractionInterface");

	Params::IBPI_ResourceNodeIIMInterfaces_C_GetResourceNodeInteractionInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ResourceInteraction != nullptr)
		*ResourceInteraction = Parms.ResourceInteraction;

}

}


