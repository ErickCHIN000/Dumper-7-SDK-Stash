#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_PlayerStateSystems.BPI_PlayerStateSystems_C
// (None)

class UClass* IBPI_PlayerStateSystems_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PlayerStateSystems_C");

	return Clss;
}


// BPI_PlayerStateSystems_C BPI_PlayerStateSystems.Default__BPI_PlayerStateSystems_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_PlayerStateSystems_C* IBPI_PlayerStateSystems_C::GetDefaultObj()
{
	static class IBPI_PlayerStateSystems_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_PlayerStateSystems_C*>(IBPI_PlayerStateSystems_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_PlayerStateSystems.BPI_PlayerStateSystems_C.GetBPPlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_C*      Player_Controller                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_PlayerStateSystems_C::GetBPPlayerController(class ABP_PlayerController_C** Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStateSystems_C", "GetBPPlayerController");

	Params::IBPI_PlayerStateSystems_C_GetBPPlayerController_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Player_Controller != nullptr)
		*Player_Controller = Parms.Player_Controller;

}


// Function BPI_PlayerStateSystems.BPI_PlayerStateSystems_C.GetMapTracker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MapTracker_C*            MapTracker                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_PlayerStateSystems_C::GetMapTracker(class UBP_MapTracker_C** MapTracker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStateSystems_C", "GetMapTracker");

	Params::IBPI_PlayerStateSystems_C_GetMapTracker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MapTracker != nullptr)
		*MapTracker = Parms.MapTracker;

}


// Function BPI_PlayerStateSystems.BPI_PlayerStateSystems_C.GetGroupSystem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGroupComponentBase*         GroupComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_PlayerStateSystems_C::GetGroupSystem(class UGroupComponentBase** GroupComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStateSystems_C", "GetGroupSystem");

	Params::IBPI_PlayerStateSystems_C_GetGroupSystem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GroupComponent != nullptr)
		*GroupComponent = Parms.GroupComponent;

}


// Function BPI_PlayerStateSystems.BPI_PlayerStateSystems_C.GetDebugModeStateInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBP_DebugModeStateComponent_C*DebugModeState                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_PlayerStateSystems_C::GetDebugModeStateInterface(class UBP_DebugModeStateComponent_C** DebugModeState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStateSystems_C", "GetDebugModeStateInterface");

	Params::IBPI_PlayerStateSystems_C_GetDebugModeStateInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DebugModeState != nullptr)
		*DebugModeState = Parms.DebugModeState;

}

}


