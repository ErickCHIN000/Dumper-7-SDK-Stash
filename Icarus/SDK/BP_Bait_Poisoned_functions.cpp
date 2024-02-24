#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bait_Poisoned.BP_Bait_Poisoned_C
// (Actor)

class UClass* ABP_Bait_Poisoned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bait_Poisoned_C");

	return Clss;
}


// BP_Bait_Poisoned_C BP_Bait_Poisoned.Default__BP_Bait_Poisoned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bait_Poisoned_C* ABP_Bait_Poisoned_C::GetDefaultObj()
{
	static class ABP_Bait_Poisoned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bait_Poisoned_C*>(ABP_Bait_Poisoned_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Bait_Poisoned.BP_Bait_Poisoned_C.GetModifierToApplyOnConsume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifierStatesRowHandle    Modifier                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// float                              LifeTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Bait_Poisoned_C::GetModifierToApplyOnConsume(struct FModifierStatesRowHandle* Modifier, float* LifeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bait_Poisoned_C", "GetModifierToApplyOnConsume");

	Params::ABP_Bait_Poisoned_C_GetModifierToApplyOnConsume_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Modifier != nullptr)
		*Modifier = std::move(Parms.Modifier);

	if (LifeTime != nullptr)
		*LifeTime = Parms.LifeTime;

}

}


