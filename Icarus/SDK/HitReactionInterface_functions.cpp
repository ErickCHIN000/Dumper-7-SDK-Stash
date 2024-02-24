#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionInterface.HitReactionInterface_C
// (None)

class UClass* IHitReactionInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionInterface_C");

	return Clss;
}


// HitReactionInterface_C HitReactionInterface.Default__HitReactionInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IHitReactionInterface_C* IHitReactionInterface_C::GetDefaultObj()
{
	static class IHitReactionInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IHitReactionInterface_C*>(IHitReactionInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HitReactionInterface.HitReactionInterface_C.OnHitSuccessful
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStealthAttackType      StealthAttack                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Killcam                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IHitReactionInterface_C::OnHitSuccessful(class AActor* HitActor, class AActor* DamageCauser, enum class EStealthAttackType StealthAttack, bool Killcam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitReactionInterface_C", "OnHitSuccessful");

	Params::IHitReactionInterface_C_OnHitSuccessful_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.DamageCauser = DamageCauser;
	Parms.StealthAttack = StealthAttack;
	Parms.Killcam = Killcam;

	UObject::ProcessEvent(Func, &Parms);

}

}


