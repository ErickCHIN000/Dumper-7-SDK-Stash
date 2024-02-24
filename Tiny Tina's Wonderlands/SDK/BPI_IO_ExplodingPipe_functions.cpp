#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C
// (None)

class UClass* IBPI_IO_ExplodingPipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_IO_ExplodingPipe_C");

	return Clss;
}


// BPI_IO_ExplodingPipe_C BPI_IO_ExplodingPipe.Default__BPI_IO_ExplodingPipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_IO_ExplodingPipe_C* IBPI_IO_ExplodingPipe_C::GetDefaultObj()
{
	static class IBPI_IO_ExplodingPipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_IO_ExplodingPipe_C*>(IBPI_IO_ExplodingPipe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeFlowState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasFlow                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_IO_ExplodingPipe_C::GetPipeFlowState(bool* HasFlow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_ExplodingPipe_C", "GetPipeFlowState");

	Params::IBPI_IO_ExplodingPipe_C_GetPipeFlowState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasFlow != nullptr)
		*HasFlow = Parms.HasFlow;

}


// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeDestroyedState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Destroyed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_IO_ExplodingPipe_C::GetPipeDestroyedState(bool* Destroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_ExplodingPipe_C", "GetPipeDestroyedState");

	Params::IBPI_IO_ExplodingPipe_C_GetPipeDestroyedState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Destroyed != nullptr)
		*Destroyed = Parms.Destroyed;

}


// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_IO_ExplodingPipe_DestroyedStatePipeState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_IO_ExplodingPipe_C::SetPipeState(enum class Enum_IO_ExplodingPipe_DestroyedState PipeState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_ExplodingPipe_C", "SetPipeState");

	Params::IBPI_IO_ExplodingPipe_C_SetPipeState_Params Parms{};

	Parms.PipeState = PipeState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeFlowState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasFlow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_IO_ExplodingPipe_C::SetPipeFlowState(bool HasFlow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_ExplodingPipe_C", "SetPipeFlowState");

	Params::IBPI_IO_ExplodingPipe_C_SetPipeFlowState_Params Parms{};

	Parms.HasFlow = HasFlow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.DestroyPipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_IO_ExplodingPipe_C::DestroyPipe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_ExplodingPipe_C", "DestroyPipe");



	UObject::ProcessEvent(Func, nullptr);

}

}


