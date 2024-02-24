#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GOAPBaitInterface.BP_GOAPBaitInterface_C
// (None)

class UClass* IBP_GOAPBaitInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GOAPBaitInterface_C");

	return Clss;
}


// BP_GOAPBaitInterface_C BP_GOAPBaitInterface.Default__BP_GOAPBaitInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_GOAPBaitInterface_C* IBP_GOAPBaitInterface_C::GetDefaultObj()
{
	static class IBP_GOAPBaitInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_GOAPBaitInterface_C*>(IBP_GOAPBaitInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GOAPBaitInterface.BP_GOAPBaitInterface_C.GetModifierToApplyOnConsume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifierStatesRowHandle    Modifier                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// float                              LifeTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_GOAPBaitInterface_C::GetModifierToApplyOnConsume(struct FModifierStatesRowHandle* Modifier, float* LifeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GOAPBaitInterface_C", "GetModifierToApplyOnConsume");

	Params::IBP_GOAPBaitInterface_C_GetModifierToApplyOnConsume_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Modifier != nullptr)
		*Modifier = std::move(Parms.Modifier);

	if (LifeTime != nullptr)
		*LifeTime = Parms.LifeTime;

}

}


