#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_FluxTickableEditorEvents.BPI_FluxTickableEditorEvents_C
// (None)

class UClass* IBPI_FluxTickableEditorEvents_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_FluxTickableEditorEvents_C");

	return Clss;
}


// BPI_FluxTickableEditorEvents_C BPI_FluxTickableEditorEvents.Default__BPI_FluxTickableEditorEvents_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_FluxTickableEditorEvents_C* IBPI_FluxTickableEditorEvents_C::GetDefaultObj()
{
	static class IBPI_FluxTickableEditorEvents_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_FluxTickableEditorEvents_C*>(IBPI_FluxTickableEditorEvents_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_FluxTickableEditorEvents.BPI_FluxTickableEditorEvents_C.SelectionLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxTickableEditorEvents_C::SelectionLoop(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorEvents_C", "SelectionLoop");

	Params::IBPI_FluxTickableEditorEvents_C_SelectionLoop_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxTickableEditorEvents.BPI_FluxTickableEditorEvents_C.PostLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxTickableEditorEvents_C::PostLoad(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorEvents_C", "PostLoad");

	Params::IBPI_FluxTickableEditorEvents_C_PostLoad_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxTickableEditorEvents.BPI_FluxTickableEditorEvents_C.UpdateLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxTickableEditorEvents_C::UpdateLoop(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorEvents_C", "UpdateLoop");

	Params::IBPI_FluxTickableEditorEvents_C_UpdateLoop_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxTickableEditorEvents.BPI_FluxTickableEditorEvents_C.StopSimulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxTickableEditorEvents_C::StopSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorEvents_C", "StopSimulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxTickableEditorEvents.BPI_FluxTickableEditorEvents_C.StartSimulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Iterations                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxTickableEditorEvents_C::StartSimulation(double Delay, int32 Iterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorEvents_C", "StartSimulation");

	Params::IBPI_FluxTickableEditorEvents_C_StartSimulation_Params Parms{};

	Parms.Delay = Delay;
	Parms.Iterations = Iterations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxTickableEditorEvents.BPI_FluxTickableEditorEvents_C.RestartSimulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxTickableEditorEvents_C::RestartSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorEvents_C", "RestartSimulation");



	UObject::ProcessEvent(Func, nullptr);

}

}


