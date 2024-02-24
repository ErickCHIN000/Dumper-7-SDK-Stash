#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass iProj_KotC_AS4_Hammer.iProj_KotC_AS4_Hammer_C
// (None)

class UClass* IIProj_KotC_AS4_Hammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("iProj_KotC_AS4_Hammer_C");

	return Clss;
}


// iProj_KotC_AS4_Hammer_C iProj_KotC_AS4_Hammer.Default__iProj_KotC_AS4_Hammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIProj_KotC_AS4_Hammer_C* IIProj_KotC_AS4_Hammer_C::GetDefaultObj()
{
	static class IIProj_KotC_AS4_Hammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIProj_KotC_AS4_Hammer_C*>(IIProj_KotC_AS4_Hammer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function iProj_KotC_AS4_Hammer.iProj_KotC_AS4_Hammer_C.KnightOfTheClawSetHammerState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKnightOfTheClawHammerStateState                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIProj_KotC_AS4_Hammer_C::KnightOfTheClawSetHammerState(enum class EKnightOfTheClawHammerState State, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("iProj_KotC_AS4_Hammer_C", "KnightOfTheClawSetHammerState");

	Params::IIProj_KotC_AS4_Hammer_C_KnightOfTheClawSetHammerState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


