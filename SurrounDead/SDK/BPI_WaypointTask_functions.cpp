#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_WaypointTask.BPI_WaypointTask_C
// (None)

class UClass* IBPI_WaypointTask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_WaypointTask_C");

	return Clss;
}


// BPI_WaypointTask_C BPI_WaypointTask.Default__BPI_WaypointTask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_WaypointTask_C* IBPI_WaypointTask_C::GetDefaultObj()
{
	static class IBPI_WaypointTask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_WaypointTask_C*>(IBPI_WaypointTask_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_WaypointTask.BPI_WaypointTask_C.GetTaskLocationName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)

void IBPI_WaypointTask_C::GetTaskLocationName(class FText* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WaypointTask_C", "GetTaskLocationName");

	Params::IBPI_WaypointTask_C_GetTaskLocationName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BPI_WaypointTask.BPI_WaypointTask_C.GetTaskLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_WaypointTask_C::GetTaskLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WaypointTask_C", "GetTaskLocation");

	Params::IBPI_WaypointTask_C_GetTaskLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}

}


