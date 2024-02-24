#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Vehicle.BPI_Vehicle_C
// (None)

class UClass* IBPI_Vehicle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Vehicle_C");

	return Clss;
}


// BPI_Vehicle_C BPI_Vehicle.Default__BPI_Vehicle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Vehicle_C* IBPI_Vehicle_C::GetDefaultObj()
{
	static class IBPI_Vehicle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Vehicle_C*>(IBPI_Vehicle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Vehicle.BPI_Vehicle_C.OnEndStorageInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Vehicle_C::OnEndStorageInteract(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Vehicle_C", "OnEndStorageInteract");

	Params::IBPI_Vehicle_C_OnEndStorageInteract_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Vehicle.BPI_Vehicle_C.OnBeginStorageInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Vehicle_C::OnBeginStorageInteract(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Vehicle_C", "OnBeginStorageInteract");

	Params::IBPI_Vehicle_C_OnBeginStorageInteract_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Vehicle.BPI_Vehicle_C.OnEndFuelInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Vehicle_C::OnEndFuelInteract(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Vehicle_C", "OnEndFuelInteract");

	Params::IBPI_Vehicle_C_OnEndFuelInteract_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Vehicle.BPI_Vehicle_C.OnBeginFuelInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Vehicle_C::OnBeginFuelInteract(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Vehicle_C", "OnBeginFuelInteract");

	Params::IBPI_Vehicle_C_OnBeginFuelInteract_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Vehicle.BPI_Vehicle_C.OnEndRepairInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Vehicle_C::OnEndRepairInteract(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Vehicle_C", "OnEndRepairInteract");

	Params::IBPI_Vehicle_C_OnEndRepairInteract_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Vehicle.BPI_Vehicle_C.OnBeginRepairInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Vehicle_C::OnBeginRepairInteract(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Vehicle_C", "OnBeginRepairInteract");

	Params::IBPI_Vehicle_C_OnBeginRepairInteract_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


