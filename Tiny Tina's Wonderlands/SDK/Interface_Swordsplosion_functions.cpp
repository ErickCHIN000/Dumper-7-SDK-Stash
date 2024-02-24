#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_Swordsplosion.Interface_Swordsplosion_C
// (None)

class UClass* IInterface_Swordsplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_Swordsplosion_C");

	return Clss;
}


// Interface_Swordsplosion_C Interface_Swordsplosion.Default__Interface_Swordsplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_Swordsplosion_C* IInterface_Swordsplosion_C::GetDefaultObj()
{
	static class IInterface_Swordsplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_Swordsplosion_C*>(IInterface_Swordsplosion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_Swordsplosion.Interface_Swordsplosion_C.SwordsplosionExternalStartExplosion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_Swordsplosion_C::SwordsplosionExternalStartExplosion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_Swordsplosion_C", "SwordsplosionExternalStartExplosion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_Swordsplosion.Interface_Swordsplosion_C.SwordsplosionAttachedToCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AttachedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_Swordsplosion_C::SwordsplosionAttachedToCharacter(class AActor* AttachedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_Swordsplosion_C", "SwordsplosionAttachedToCharacter");

	Params::IInterface_Swordsplosion_C_SwordsplosionAttachedToCharacter_Params Parms{};

	Parms.AttachedActor = AttachedActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


