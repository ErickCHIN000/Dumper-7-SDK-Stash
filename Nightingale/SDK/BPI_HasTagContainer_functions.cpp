#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_HasTagContainer.BPI_HasTagContainer_C
// (None)

class UClass* IBPI_HasTagContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_HasTagContainer_C");

	return Clss;
}


// BPI_HasTagContainer_C BPI_HasTagContainer.Default__BPI_HasTagContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_HasTagContainer_C* IBPI_HasTagContainer_C::GetDefaultObj()
{
	static class IBPI_HasTagContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_HasTagContainer_C*>(IBPI_HasTagContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_HasTagContainer.BPI_HasTagContainer_C.GetTagContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       GameplayTagContainer                                             (Parm, OutParm)

void IBPI_HasTagContainer_C::GetTagContainer(struct FGameplayTagContainer* GameplayTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HasTagContainer_C", "GetTagContainer");

	Params::IBPI_HasTagContainer_C_GetTagContainer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GameplayTagContainer != nullptr)
		*GameplayTagContainer = std::move(Parms.GameplayTagContainer);

}

}


