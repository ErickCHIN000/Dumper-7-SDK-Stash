#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C
// (None)

class UClass* IBPI_FluxTickableEditorCallback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_FluxTickableEditorCallback_C");

	return Clss;
}


// BPI_FluxTickableEditorCallback_C BPI_FluxTickableEditorCallback.Default__BPI_FluxTickableEditorCallback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_FluxTickableEditorCallback_C* IBPI_FluxTickableEditorCallback_C::GetDefaultObj()
{
	static class IBPI_FluxTickableEditorCallback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_FluxTickableEditorCallback_C*>(IBPI_FluxTickableEditorCallback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.UpdateModifierMaterials
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>Materials                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               UseVelocityMap                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxTickableEditorCallback_C::UpdateModifierMaterials(TArray<class UMaterialInstanceDynamic*>& Materials, bool UseVelocityMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorCallback_C", "UpdateModifierMaterials");

	Params::IBPI_FluxTickableEditorCallback_C_UpdateModifierMaterials_Params Parms{};

	Parms.Materials = Materials;
	Parms.UseVelocityMap = UseVelocityMap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.ToggleUpdateSimulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxTickableEditorCallback_C::ToggleUpdateSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorCallback_C", "ToggleUpdateSimulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.TogleDebugGround
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxTickableEditorCallback_C::TogleDebugGround()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorCallback_C", "TogleDebugGround");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.OnEditorSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxTickableEditorCallback_C::OnEditorSelectionChanged(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorCallback_C", "OnEditorSelectionChanged");

	Params::IBPI_FluxTickableEditorCallback_C_OnEditorSelectionChanged_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.OnEditorUpdateLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxTickableEditorCallback_C::OnEditorUpdateLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorCallback_C", "OnEditorUpdateLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.OnEditorModifierChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxTickableEditorCallback_C::OnEditorModifierChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorCallback_C", "OnEditorModifierChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.OnEditorIterateSimulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Iterations                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxTickableEditorCallback_C::OnEditorIterateSimulation(int32 Iterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorCallback_C", "OnEditorIterateSimulation");

	Params::IBPI_FluxTickableEditorCallback_C_OnEditorIterateSimulation_Params Parms{};

	Parms.Iterations = Iterations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.OnEditorRestartSimulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxTickableEditorCallback_C::OnEditorRestartSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorCallback_C", "OnEditorRestartSimulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.OnEditorStopSimulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxTickableEditorCallback_C::OnEditorStopSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorCallback_C", "OnEditorStopSimulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.OnEditorShowSimulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxTickableEditorCallback_C::OnEditorShowSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorCallback_C", "OnEditorShowSimulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.OnEditorPostLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxTickableEditorCallback_C::OnEditorPostLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxTickableEditorCallback_C", "OnEditorPostLoad");



	UObject::ProcessEvent(Func, nullptr);

}

}


