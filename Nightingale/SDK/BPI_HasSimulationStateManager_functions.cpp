#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_HasSimulationStateManager.BPI_HasSimulationStateManager_C
// (None)

class UClass* IBPI_HasSimulationStateManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_HasSimulationStateManager_C");

	return Clss;
}


// BPI_HasSimulationStateManager_C BPI_HasSimulationStateManager.Default__BPI_HasSimulationStateManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_HasSimulationStateManager_C* IBPI_HasSimulationStateManager_C::GetDefaultObj()
{
	static class IBPI_HasSimulationStateManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_HasSimulationStateManager_C*>(IBPI_HasSimulationStateManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_HasSimulationStateManager.BPI_HasSimulationStateManager_C.ResolveSimulationRound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HasSimulationStateManager_C::ResolveSimulationRound(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HasSimulationStateManager_C", "ResolveSimulationRound");

	Params::IBPI_HasSimulationStateManager_C_ResolveSimulationRound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_HasSimulationStateManager.BPI_HasSimulationStateManager_C.GetSimulationStateManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXSimStateManagerBase*     Simulation_State_Manager                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_HasSimulationStateManager_C::GetSimulationStateManager(class ANWXSimStateManagerBase** Simulation_State_Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HasSimulationStateManager_C", "GetSimulationStateManager");

	Params::IBPI_HasSimulationStateManager_C_GetSimulationStateManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Simulation_State_Manager != nullptr)
		*Simulation_State_Manager = Parms.Simulation_State_Manager;

}

}


