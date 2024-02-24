#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StormModeSpawner.BPI_StormModeSpawner_C
// (None)

class UClass* IBPI_StormModeSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StormModeSpawner_C");

	return Clss;
}


// BPI_StormModeSpawner_C BPI_StormModeSpawner.Default__BPI_StormModeSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StormModeSpawner_C* IBPI_StormModeSpawner_C::GetDefaultObj()
{
	static class IBPI_StormModeSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StormModeSpawner_C*>(IBPI_StormModeSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StormModeSpawner.BPI_StormModeSpawner_C.AddSpawnerToTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedEnemySpawner_StormMode_C*Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeSpawner_C::AddSpawnerToTrigger(class AAdvancedEnemySpawner_StormMode_C* Spawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeSpawner_C", "AddSpawnerToTrigger");

	Params::IBPI_StormModeSpawner_C_AddSpawnerToTrigger_Params Parms{};

	Parms.Spawner = Spawner;

	UObject::ProcessEvent(Func, &Parms);

}

}


