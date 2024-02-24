#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass INT_AnimBPPlayer.INT_AnimBPPlayer_C
// (None)

class UClass* IINT_AnimBPPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("INT_AnimBPPlayer_C");

	return Clss;
}


// INT_AnimBPPlayer_C INT_AnimBPPlayer.Default__INT_AnimBPPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IINT_AnimBPPlayer_C* IINT_AnimBPPlayer_C::GetDefaultObj()
{
	static class IINT_AnimBPPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IINT_AnimBPPlayer_C*>(IINT_AnimBPPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function INT_AnimBPPlayer.INT_AnimBPPlayer_C.DeathState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Dead                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IINT_AnimBPPlayer_C::DeathState(bool Dead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("INT_AnimBPPlayer_C", "DeathState");

	Params::IINT_AnimBPPlayer_C_DeathState_Params Parms{};

	Parms.Dead = Dead;

	UObject::ProcessEvent(Func, &Parms);

}


// Function INT_AnimBPPlayer.INT_AnimBPPlayer_C.CombatState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BlendSpace                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IINT_AnimBPPlayer_C::CombatState(int32 BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("INT_AnimBPPlayer_C", "CombatState");

	Params::IINT_AnimBPPlayer_C_CombatState_Params Parms{};

	Parms.BlendSpace = BlendSpace;

	UObject::ProcessEvent(Func, &Parms);

}

}


