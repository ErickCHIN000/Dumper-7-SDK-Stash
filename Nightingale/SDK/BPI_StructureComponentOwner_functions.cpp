#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StructureComponentOwner.BPI_StructureComponentOwner_C
// (None)

class UClass* IBPI_StructureComponentOwner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StructureComponentOwner_C");

	return Clss;
}


// BPI_StructureComponentOwner_C BPI_StructureComponentOwner.Default__BPI_StructureComponentOwner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StructureComponentOwner_C* IBPI_StructureComponentOwner_C::GetDefaultObj()
{
	static class IBPI_StructureComponentOwner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StructureComponentOwner_C*>(IBPI_StructureComponentOwner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StructureComponentOwner.BPI_StructureComponentOwner_C.CallHealthChangedEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureHealthChangedContextHealthChangedContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void IBPI_StructureComponentOwner_C::CallHealthChangedEvent(const struct FStructureHealthChangedContext& HealthChangedContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureComponentOwner_C", "CallHealthChangedEvent");

	Params::IBPI_StructureComponentOwner_C_CallHealthChangedEvent_Params Parms{};

	Parms.HealthChangedContext = HealthChangedContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StructureComponentOwner.BPI_StructureComponentOwner_C.GetEventsObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStructureEventsObject*      EventObject                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_StructureComponentOwner_C::GetEventsObject(class UStructureEventsObject** EventObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureComponentOwner_C", "GetEventsObject");

	Params::IBPI_StructureComponentOwner_C_GetEventsObject_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EventObject != nullptr)
		*EventObject = Parms.EventObject;

}

}


