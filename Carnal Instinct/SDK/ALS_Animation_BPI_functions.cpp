#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ALS_Animation_BPI.ALS_Animation_BPI_C
// (None)

class UClass* IALS_Animation_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_Animation_BPI_C");

	return Clss;
}


// ALS_Animation_BPI_C ALS_Animation_BPI.Default__ALS_Animation_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALS_Animation_BPI_C* IALS_Animation_BPI_C::GetDefaultObj()
{
	static class IALS_Animation_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALS_Animation_BPI_C*>(IALS_Animation_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_Animation_BPI.ALS_Animation_BPI_C.BPI_SetOverlayOverrideState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OverlayOverrideState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Animation_BPI_C::BPI_SetOverlayOverrideState(int32 OverlayOverrideState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Animation_BPI_C", "BPI_SetOverlayOverrideState");

	Params::IALS_Animation_BPI_C_BPI_SetOverlayOverrideState_Params Parms{};

	Parms.OverlayOverrideState = OverlayOverrideState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_Animation_BPI.ALS_Animation_BPI_C.BPI_SetGroundedEntryState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGroundedEntryState     GroundedEntryState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Animation_BPI_C::BPI_SetGroundedEntryState(enum class EGroundedEntryState GroundedEntryState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Animation_BPI_C", "BPI_SetGroundedEntryState");

	Params::IALS_Animation_BPI_C_BPI_SetGroundedEntryState_Params Parms{};

	Parms.GroundedEntryState = GroundedEntryState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_Animation_BPI.ALS_Animation_BPI_C.BPI_Jumped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IALS_Animation_BPI_C::BPI_Jumped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Animation_BPI_C", "BPI_Jumped");



	UObject::ProcessEvent(Func, nullptr);

}

}


