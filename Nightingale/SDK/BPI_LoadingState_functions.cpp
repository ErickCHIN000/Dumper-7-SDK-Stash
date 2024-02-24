#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_LoadingState.BPI_LoadingState_C
// (None)

class UClass* IBPI_LoadingState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_LoadingState_C");

	return Clss;
}


// BPI_LoadingState_C BPI_LoadingState.Default__BPI_LoadingState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_LoadingState_C* IBPI_LoadingState_C::GetDefaultObj()
{
	static class IBPI_LoadingState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_LoadingState_C*>(IBPI_LoadingState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_LoadingState.BPI_LoadingState_C.UpdateLoadingState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_LoadingState          LoadingState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_LoadingState_C::UpdateLoadingState(enum class E_LoadingState LoadingState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LoadingState_C", "UpdateLoadingState");

	Params::IBPI_LoadingState_C_UpdateLoadingState_Params Parms{};

	Parms.LoadingState = LoadingState;

	UObject::ProcessEvent(Func, &Parms);

}

}


