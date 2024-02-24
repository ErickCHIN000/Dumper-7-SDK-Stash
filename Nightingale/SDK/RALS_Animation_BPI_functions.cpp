#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RALS_Animation_BPI.RALS_Animation_BPI_C
// (None)

class UClass* IRALS_Animation_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RALS_Animation_BPI_C");

	return Clss;
}


// RALS_Animation_BPI_C RALS_Animation_BPI.Default__RALS_Animation_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IRALS_Animation_BPI_C* IRALS_Animation_BPI_C::GetDefaultObj()
{
	static class IRALS_Animation_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IRALS_Animation_BPI_C*>(IRALS_Animation_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RALS_Animation_BPI.RALS_Animation_BPI_C.BPI_SetOverlayOverrideState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OverlayOverrideState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IRALS_Animation_BPI_C::BPI_SetOverlayOverrideState(int32 OverlayOverrideState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Animation_BPI_C", "BPI_SetOverlayOverrideState");

	Params::IRALS_Animation_BPI_C_BPI_SetOverlayOverrideState_Params Parms{};

	Parms.OverlayOverrideState = OverlayOverrideState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RALS_Animation_BPI.RALS_Animation_BPI_C.BPI_SetGroundedEntryState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERALS_GroundedEntryStateGroundedEntryState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IRALS_Animation_BPI_C::BPI_SetGroundedEntryState(enum class ERALS_GroundedEntryState GroundedEntryState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Animation_BPI_C", "BPI_SetGroundedEntryState");

	Params::IRALS_Animation_BPI_C_BPI_SetGroundedEntryState_Params Parms{};

	Parms.GroundedEntryState = GroundedEntryState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RALS_Animation_BPI.RALS_Animation_BPI_C.BPI_Jumped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IRALS_Animation_BPI_C::BPI_Jumped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Animation_BPI_C", "BPI_Jumped");



	UObject::ProcessEvent(Func, nullptr);

}

}


