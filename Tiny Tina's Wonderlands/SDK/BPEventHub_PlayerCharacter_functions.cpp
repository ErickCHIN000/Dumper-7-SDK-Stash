#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C
// (None)

class UClass* UBPEventHub_PlayerCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPEventHub_PlayerCharacter_C");

	return Clss;
}


// BPEventHub_PlayerCharacter_C BPEventHub_PlayerCharacter.Default__BPEventHub_PlayerCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPEventHub_PlayerCharacter_C* UBPEventHub_PlayerCharacter_C::GetDefaultObj()
{
	static class UBPEventHub_PlayerCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPEventHub_PlayerCharacter_C*>(UBPEventHub_PlayerCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Shaman_01_SpawnFX__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Shaman_01_SpawnFX__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Shaman_01_SpawnFX__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Shaman_02_Spawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Totem                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEventHub_PlayerCharacter_C::ClassEvent_Shaman_02_Spawned__DelegateSignature(class AActor* Totem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Shaman_02_Spawned__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_ClassEvent_Shaman_02_Spawned__DelegateSignature_Params Parms{};

	Parms.Totem = Totem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Ranger_Cryonado_Failed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Ranger_Cryonado_Failed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Ranger_Cryonado_Failed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Shaman_02_Drain_End__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Shaman_02_Drain_End__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Shaman_02_Drain_End__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Shaman_02_Drain_Start__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Shaman_02_Drain_Start__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Shaman_02_Drain_Start__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Shaman_02_Spawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Shaman_02_Spawn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Shaman_02_Spawn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Shaman_01_Spawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Shaman_01_Spawn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Shaman_01_Spawn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Rogue_OnExitedStealth__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEventHub_PlayerCharacter_C::ClassEvent_Rogue_OnExitedStealth__DelegateSignature(class AOakCharacter_Player* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Rogue_OnExitedStealth__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_ClassEvent_Rogue_OnExitedStealth__DelegateSignature_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Rogue_OnEnteredStealth__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEventHub_PlayerCharacter_C::ClassEvent_Rogue_OnEnteredStealth__DelegateSignature(class AOakCharacter_Player* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Rogue_OnEnteredStealth__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_ClassEvent_Rogue_OnEnteredStealth__DelegateSignature_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.GearEvent_BodyArmor_HeadOfTheSnake_DurationExtend__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DurationExtensionPercent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEventHub_PlayerCharacter_C::GearEvent_BodyArmor_HeadOfTheSnake_DurationExtend__DelegateSignature(float DurationExtensionPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "GearEvent_BodyArmor_HeadOfTheSnake_DurationExtend__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_GearEvent_BodyArmor_HeadOfTheSnake_DurationExtend__DelegateSignature_Params Parms{};

	Parms.DurationExtensionPercent = DurationExtensionPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Necromancer_EnchantmentCompDamage_Deactivate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Necromancer_EnchantmentCompDamage_Deactivate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Necromancer_EnchantmentCompDamage_Deactivate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Necromancer_EnchantmentCompDamage_Activate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Necromancer_EnchantmentCompDamage_Activate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Necromancer_EnchantmentCompDamage_Activate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_GunMage_PolymorphCastSpell__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FirstCast                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CastFromGunMage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPEventHub_PlayerCharacter_C::ClassEvent_GunMage_PolymorphCastSpell__DelegateSignature(bool FirstCast, bool CastFromGunMage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_GunMage_PolymorphCastSpell__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_ClassEvent_GunMage_PolymorphCastSpell__DelegateSignature_Params Parms{};

	Parms.FirstCast = FirstCast;
	Parms.CastFromGunMage = CastFromGunMage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Necromancer_LichSpellCast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Necromancer_LichSpellCast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Necromancer_LichSpellCast__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_GunMage_PolymorphFailed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_GunMage_PolymorphFailed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_GunMage_PolymorphFailed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_GunMage_PolymorphEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PolymorphedTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               KilledTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      PolymorphDrone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEventHub_PlayerCharacter_C::ClassEvent_GunMage_PolymorphEnded__DelegateSignature(class AActor* PolymorphedTarget, bool KilledTarget, class AActor* PolymorphDrone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_GunMage_PolymorphEnded__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_ClassEvent_GunMage_PolymorphEnded__DelegateSignature_Params Parms{};

	Parms.PolymorphedTarget = PolymorphedTarget;
	Parms.KilledTarget = KilledTarget;
	Parms.PolymorphDrone = PolymorphDrone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_GunMage_PolymorphedTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PolymorphedActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasImmune                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      PolymorphDrone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEventHub_PlayerCharacter_C::ClassEvent_GunMage_PolymorphedTarget__DelegateSignature(class AActor* PolymorphedActor, bool WasImmune, class AActor* PolymorphDrone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_GunMage_PolymorphedTarget__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_ClassEvent_GunMage_PolymorphedTarget__DelegateSignature_Params Parms{};

	Parms.PolymorphedActor = PolymorphedActor;
	Parms.WasImmune = WasImmune;
	Parms.PolymorphDrone = PolymorphDrone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.OnMeleeAttackEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::OnMeleeAttackEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "OnMeleeAttackEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.OnSummonedUnitDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEventHub_PlayerCharacter_C::OnSummonedUnitDeath__DelegateSignature(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "OnSummonedUnitDeath__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_OnSummonedUnitDeath__DelegateSignature_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.SkillEvent_ActivateKillSkills__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::SkillEvent_ActivateKillSkills__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "SkillEvent_ActivateKillSkills__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Ranger_Mushroom_TauntDeactivation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Ranger_Mushroom_TauntDeactivation__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Ranger_Mushroom_TauntDeactivation__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Ranger_Mushroom_TauntActivation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Ranger_Mushroom_TauntActivation__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Ranger_Mushroom_TauntActivation__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Ranger_MushroomDespawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Ranger_MushroomDespawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Ranger_MushroomDespawned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Ranger_MushroomSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Ranger_MushroomSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Ranger_MushroomSpawned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Necromancer_Passive_15_Deactivation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Necromancer_Passive_15_Deactivation__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Necromancer_Passive_15_Deactivation__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Necromancer_Passive_15_Activation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Necromancer_Passive_15_Activation__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Necromancer_Passive_15_Activation__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Rogue_LivingBlade_Spawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Rogue_LivingBlade_Spawn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Rogue_LivingBlade_Spawn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Barbarian_SlassImpact__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Barbarian_SlassImpact__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Barbarian_SlassImpact__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Ranger_MushroomCompanion_RevivedPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Revived_By                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEventHub_PlayerCharacter_C::ClassEvent_Ranger_MushroomCompanion_RevivedPlayer__DelegateSignature(class AActor* Revived_By)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Ranger_MushroomCompanion_RevivedPlayer__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_ClassEvent_Ranger_MushroomCompanion_RevivedPlayer__DelegateSignature_Params Parms{};

	Parms.Revived_By = Revived_By;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Necromancer_LichCausedDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPEventHub_PlayerCharacter_C::ClassEvent_Necromancer_LichCausedDeath__DelegateSignature(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Necromancer_LichCausedDeath__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_ClassEvent_Necromancer_LichCausedDeath__DelegateSignature_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Necromancer_LichDespawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Necromancer_LichDespawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Necromancer_LichDespawned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Necromancer_LichSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPEventHub_PlayerCharacter_C::ClassEvent_Necromancer_LichSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "ClassEvent_Necromancer_LichSpawned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.SkillEvent_OnActionSkillCoolingDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEventHub_PlayerCharacter_C::SkillEvent_OnActionSkillCoolingDown__DelegateSignature(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "SkillEvent_OnActionSkillCoolingDown__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_SkillEvent_OnActionSkillCoolingDown__DelegateSignature_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.SkillEvent_OnActionSkillReadied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEventHub_PlayerCharacter_C::SkillEvent_OnActionSkillReadied__DelegateSignature(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "SkillEvent_OnActionSkillReadied__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_SkillEvent_OnActionSkillReadied__DelegateSignature_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.SkillEvent_OnActionSkillActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPEventHub_PlayerCharacter_C::SkillEvent_OnActionSkillActivated__DelegateSignature(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPEventHub_PlayerCharacter_C", "SkillEvent_OnActionSkillActivated__DelegateSignature");

	Params::UBPEventHub_PlayerCharacter_C_SkillEvent_OnActionSkillActivated__DelegateSignature_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}

}


