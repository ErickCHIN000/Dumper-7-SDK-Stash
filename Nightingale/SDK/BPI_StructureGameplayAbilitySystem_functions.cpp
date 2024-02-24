#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StructureGameplayAbilitySystem.BPI_StructureGameplayAbilitySystem_C
// (None)

class UClass* IBPI_StructureGameplayAbilitySystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StructureGameplayAbilitySystem_C");

	return Clss;
}


// BPI_StructureGameplayAbilitySystem_C BPI_StructureGameplayAbilitySystem.Default__BPI_StructureGameplayAbilitySystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StructureGameplayAbilitySystem_C* IBPI_StructureGameplayAbilitySystem_C::GetDefaultObj()
{
	static class IBPI_StructureGameplayAbilitySystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StructureGameplayAbilitySystem_C*>(IBPI_StructureGameplayAbilitySystem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StructureGameplayAbilitySystem.BPI_StructureGameplayAbilitySystem_C.RemoveGameplayTagFromStructure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void IBPI_StructureGameplayAbilitySystem_C::RemoveGameplayTagFromStructure(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureGameplayAbilitySystem_C", "RemoveGameplayTagFromStructure");

	Params::IBPI_StructureGameplayAbilitySystem_C_RemoveGameplayTagFromStructure_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StructureGameplayAbilitySystem.BPI_StructureGameplayAbilitySystem_C.AddGameplayTagToStructure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void IBPI_StructureGameplayAbilitySystem_C::AddGameplayTagToStructure(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureGameplayAbilitySystem_C", "AddGameplayTagToStructure");

	Params::IBPI_StructureGameplayAbilitySystem_C_AddGameplayTagToStructure_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	UObject::ProcessEvent(Func, &Parms);

}

}


