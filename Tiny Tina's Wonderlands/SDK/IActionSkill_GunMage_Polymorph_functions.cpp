#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IActionSkill_GunMage_Polymorph.IActionSkill_GunMage_Polymorph_C
// (None)

class UClass* IIActionSkill_GunMage_Polymorph_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IActionSkill_GunMage_Polymorph_C");

	return Clss;
}


// IActionSkill_GunMage_Polymorph_C IActionSkill_GunMage_Polymorph.Default__IActionSkill_GunMage_Polymorph_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIActionSkill_GunMage_Polymorph_C* IIActionSkill_GunMage_Polymorph_C::GetDefaultObj()
{
	static class IIActionSkill_GunMage_Polymorph_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIActionSkill_GunMage_Polymorph_C*>(IIActionSkill_GunMage_Polymorph_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IActionSkill_GunMage_Polymorph.IActionSkill_GunMage_Polymorph_C.PolymorphSetFailedToFindTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIActionSkill_GunMage_Polymorph_C::PolymorphSetFailedToFindTarget(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IActionSkill_GunMage_Polymorph_C", "PolymorphSetFailedToFindTarget");

	Params::IIActionSkill_GunMage_Polymorph_C_PolymorphSetFailedToFindTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IActionSkill_GunMage_Polymorph.IActionSkill_GunMage_Polymorph_C.PolymorphSpawnDrone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIActionSkill_GunMage_Polymorph_C::PolymorphSpawnDrone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IActionSkill_GunMage_Polymorph_C", "PolymorphSpawnDrone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IActionSkill_GunMage_Polymorph.IActionSkill_GunMage_Polymorph_C.PolymorphFindTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      PolymorphTarget                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIActionSkill_GunMage_Polymorph_C::PolymorphFindTarget(bool* Res, class AActor** PolymorphTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IActionSkill_GunMage_Polymorph_C", "PolymorphFindTarget");

	Params::IIActionSkill_GunMage_Polymorph_C_PolymorphFindTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

	if (PolymorphTarget != nullptr)
		*PolymorphTarget = Parms.PolymorphTarget;

}

}


