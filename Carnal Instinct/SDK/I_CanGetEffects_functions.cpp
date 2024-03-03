#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass I_CanGetEffects.I_CanGetEffects_C
// (None)

class UClass* II_CanGetEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("I_CanGetEffects_C");

	return Clss;
}


// I_CanGetEffects_C I_CanGetEffects.Default__I_CanGetEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class II_CanGetEffects_C* II_CanGetEffects_C::GetDefaultObj()
{
	static class II_CanGetEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<II_CanGetEffects_C*>(II_CanGetEffects_C::StaticClass()->DefaultObject);

	return Default;
}


// Function I_CanGetEffects.I_CanGetEffects_C.CanEffectBeApplied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_EffectType            Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Applier                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool II_CanGetEffects_C::CanEffectBeApplied(enum class E_EffectType Type, class AActor* Applier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_CanGetEffects_C", "CanEffectBeApplied");

	Params::II_CanGetEffects_C_CanEffectBeApplied_Params Parms{};

	Parms.Type = Type;
	Parms.Applier = Applier;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


