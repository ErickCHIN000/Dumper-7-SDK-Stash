#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_EncounterEvents.BPI_EncounterEvents_C
// (None)

class UClass* IBPI_EncounterEvents_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_EncounterEvents_C");

	return Clss;
}


// BPI_EncounterEvents_C BPI_EncounterEvents.Default__BPI_EncounterEvents_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_EncounterEvents_C* IBPI_EncounterEvents_C::GetDefaultObj()
{
	static class IBPI_EncounterEvents_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_EncounterEvents_C*>(IBPI_EncounterEvents_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_EncounterEvents.BPI_EncounterEvents_C.GetEncounterEvents
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_EncounterEventsObject_C* EncounterEventsObject                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_EncounterEvents_C::GetEncounterEvents(class UBP_EncounterEventsObject_C** EncounterEventsObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EncounterEvents_C", "GetEncounterEvents");

	Params::IBPI_EncounterEvents_C_GetEncounterEvents_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EncounterEventsObject != nullptr)
		*EncounterEventsObject = Parms.EncounterEventsObject;

}

}


