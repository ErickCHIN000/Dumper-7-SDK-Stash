#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_SpawnerPortal.BPI_SpawnerPortal_C
// (None)

class UClass* IBPI_SpawnerPortal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_SpawnerPortal_C");

	return Clss;
}


// BPI_SpawnerPortal_C BPI_SpawnerPortal.Default__BPI_SpawnerPortal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_SpawnerPortal_C* IBPI_SpawnerPortal_C::GetDefaultObj()
{
	static class IBPI_SpawnerPortal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_SpawnerPortal_C*>(IBPI_SpawnerPortal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_SpawnerPortal.BPI_SpawnerPortal_C.GetRallyPointLocations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             RallyPointLocations                                              (Parm, OutParm)

void IBPI_SpawnerPortal_C::GetRallyPointLocations(TArray<struct FVector>* RallyPointLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SpawnerPortal_C", "GetRallyPointLocations");

	Params::IBPI_SpawnerPortal_C_GetRallyPointLocations_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RallyPointLocations != nullptr)
		*RallyPointLocations = std::move(Parms.RallyPointLocations);

}


// Function BPI_SpawnerPortal.BPI_SpawnerPortal_C.GetSpawnTransforms
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>          SpawnTransforms                                                  (Parm, OutParm)

void IBPI_SpawnerPortal_C::GetSpawnTransforms(TArray<struct FTransform>* SpawnTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SpawnerPortal_C", "GetSpawnTransforms");

	Params::IBPI_SpawnerPortal_C_GetSpawnTransforms_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SpawnTransforms != nullptr)
		*SpawnTransforms = std::move(Parms.SpawnTransforms);

}

}


