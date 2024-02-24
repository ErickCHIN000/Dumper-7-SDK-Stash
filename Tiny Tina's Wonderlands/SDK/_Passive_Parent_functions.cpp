#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _Passive_Parent._Passive_Parent_C
// (None)

class UClass* U_Passive_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_Passive_Parent_C");

	return Clss;
}


// _Passive_Parent_C _Passive_Parent.Default___Passive_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_Passive_Parent_C* U_Passive_Parent_C::GetDefaultObj()
{
	static class U_Passive_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_Passive_Parent_C*>(U_Passive_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function _Passive_Parent._Passive_Parent_C.GetSkillGrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Passive_Parent_C::GetSkillGrade(int32* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "GetSkillGrade");

	Params::U_Passive_Parent_C_GetSkillGrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnSpellCastFired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 SpellMod                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Passive_Parent_C::OakPassiveOnSpellCastFired(class AGrenadeMod* SpellMod, class AOakCharacter_Player* EquippedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnSpellCastFired");

	Params::U_Passive_Parent_C_OakPassiveOnSpellCastFired_Params Parms{};

	Parms.SpellMod = SpellMod;
	Parms.EquippedPlayer = EquippedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveTriggerKillSkillEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bWasAutoTrigger                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void U_Passive_Parent_C::OakPassiveTriggerKillSkillEffect(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details, bool bWasAutoTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveTriggerKillSkillEffect");

	Params::U_Passive_Parent_C_OakPassiveTriggerKillSkillEffect_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;
	Parms.bWasAutoTrigger = bWasAutoTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnCausedBonusDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void U_Passive_Parent_C::OakPassiveOnCausedBonusDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnCausedBonusDamage");

	Params::U_Passive_Parent_C_OakPassiveOnCausedBonusDamage_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnDownStateStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void U_Passive_Parent_C::OakPassiveOnDownStateStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnDownStateStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnDownStateStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void U_Passive_Parent_C::OakPassiveOnDownStateStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnDownStateStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnCastSpell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 SpellMod                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Passive_Parent_C::OakPassiveOnCastSpell(class AGrenadeMod* SpellMod, class AOakCharacter_Player* EquippedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnCastSpell");

	Params::U_Passive_Parent_C_OakPassiveOnCastSpell_Params Parms{};

	Parms.SpellMod = SpellMod;
	Parms.EquippedPlayer = EquippedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnCausedMaxResourceEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakStatusEffectResourceEffectTypeResourceEffectType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Passive_Parent_C::OakPassiveOnCausedMaxResourceEffect(class AActor* Target, enum class EOakStatusEffectResourceEffectType ResourceEffectType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnCausedMaxResourceEffect");

	Params::U_Passive_Parent_C_OakPassiveOnCausedMaxResourceEffect_Params Parms{};

	Parms.Target = Target;
	Parms.ResourceEffectType = ResourceEffectType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnCausedElementalEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void U_Passive_Parent_C::OakPassiveOnCausedElementalEffect(class AActor* Target, const struct FStatusEffectSpec& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnCausedElementalEffect");

	Params::U_Passive_Parent_C_OakPassiveOnCausedElementalEffect_Params Parms{};

	Parms.Target = Target;
	Parms.Spec = Spec;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnReloadEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Completed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AmmoGiven                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void U_Passive_Parent_C::OakPassiveOnReloadEnded(class AWeapon* Weapon, bool Completed, bool AmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnReloadEnded");

	Params::U_Passive_Parent_C_OakPassiveOnReloadEnded_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.Completed = Completed;
	Parms.AmmoGiven = AmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnActionSkillActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Passive_Parent_C::OakPassiveOnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnActionSkillActivated");

	Params::U_Passive_Parent_C_OakPassiveOnActionSkillActivated_Params Parms{};

	Parms.ActionAbility = ActionAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnActionSkillCoolingDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Passive_Parent_C::OakPassiveOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnActionSkillCoolingDown");

	Params::U_Passive_Parent_C_OakPassiveOnActionSkillCoolingDown_Params Parms{};

	Parms.ActionAbility = ActionAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnActionSkillReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Passive_Parent_C::OakPassiveOnActionSkillReady(class UOakActionAbility* ActionAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnActionSkillReady");

	Params::U_Passive_Parent_C_OakPassiveOnActionSkillReady_Params Parms{};

	Parms.ActionAbility = ActionAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnShieldNotFilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void U_Passive_Parent_C::OakPassiveOnShieldNotFilled(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnShieldNotFilled");

	Params::U_Passive_Parent_C_OakPassiveOnShieldNotFilled_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnShieldRecharging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void U_Passive_Parent_C::OakPassiveOnShieldRecharging(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnShieldRecharging");

	Params::U_Passive_Parent_C_OakPassiveOnShieldRecharging_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnShieldFilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void U_Passive_Parent_C::OakPassiveOnShieldFilled(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnShieldFilled");

	Params::U_Passive_Parent_C_OakPassiveOnShieldFilled_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnShieldBroken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void U_Passive_Parent_C::OakPassiveOnShieldBroken(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnShieldBroken");

	Params::U_Passive_Parent_C_OakPassiveOnShieldBroken_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnTakeAnyDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReceivedDamageDetails      Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void U_Passive_Parent_C::OakPassiveOnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnTakeAnyDamage");

	Params::U_Passive_Parent_C_OakPassiveOnTakeAnyDamage_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnCausedDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void U_Passive_Parent_C::OakPassiveOnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnCausedDeath");

	Params::U_Passive_Parent_C_OakPassiveOnCausedDeath_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OakPassiveOnCausedAnyDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void U_Passive_Parent_C::OakPassiveOnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OakPassiveOnCausedAnyDamage");

	Params::U_Passive_Parent_C_OakPassiveOnCausedAnyDamage_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void U_Passive_Parent_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function _Passive_Parent._Passive_Parent_C.PrivateOnCausedDeath
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void U_Passive_Parent_C::PrivateOnCausedDeath(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "PrivateOnCausedDeath");

	Params::U_Passive_Parent_C_PrivateOnCausedDeath_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.Private_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Passive_Parent_C::Private_OnActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "Private_OnActionSkillActivated");

	Params::U_Passive_Parent_C_Private_OnActionSkillActivated_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.PrivateOnActionSkillCoolingDownChargeBased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Passive_Parent_C::PrivateOnActionSkillCoolingDownChargeBased(class UOakActionAbility* ActionAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "PrivateOnActionSkillCoolingDownChargeBased");

	Params::U_Passive_Parent_C_PrivateOnActionSkillCoolingDownChargeBased_Params Parms{};

	Parms.ActionAbility = ActionAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.PrivateOnActionSkillCoolingDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Passive_Parent_C::PrivateOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "PrivateOnActionSkillCoolingDown");

	Params::U_Passive_Parent_C_PrivateOnActionSkillCoolingDown_Params Parms{};

	Parms.ActionAbility = ActionAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.PrivateCheckActionSkillCoolingDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Passive_Parent_C::PrivateCheckActionSkillCoolingDown(class UOakActionAbility* ActionAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "PrivateCheckActionSkillCoolingDown");

	Params::U_Passive_Parent_C_PrivateCheckActionSkillCoolingDown_Params Parms{};

	Parms.ActionAbility = ActionAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.PrivateCausedElementalEffect
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Causer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void U_Passive_Parent_C::PrivateCausedElementalEffect(class AActor* Causer, struct FStatusEffectSpec& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "PrivateCausedElementalEffect");

	Params::U_Passive_Parent_C_PrivateCausedElementalEffect_Params Parms{};

	Parms.Causer = Causer;
	Parms.Spec = Spec;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _Passive_Parent._Passive_Parent_C.PrivateActivateKillSkills
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void U_Passive_Parent_C::PrivateActivateKillSkills()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "PrivateActivateKillSkills");



	UObject::ProcessEvent(Func, nullptr);

}


// Function _Passive_Parent._Passive_Parent_C.ExecuteUbergraph__Passive_Parent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// class UDamageComponent*            K2Node_CustomEvent_Damaged                                       (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         K2Node_CustomEvent_Details                                       (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate    (NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1   (NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// class UOakActionAbility*           K2Node_CustomEvent_ActionAbility3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_CustomEvent_ActionSkill                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate2   (NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakActionAbility*           K2Node_CustomEvent_ActionAbility2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           K2Node_CustomEvent_ActionAbility1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate3   (NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakActionAbility*           K2Node_CustomEvent_ActionAbility                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3         (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4         (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate6         (NoDestructor)
// class AActor*                      K2Node_CustomEvent_Causer                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_CustomEvent_Spec                                          (ConstParm, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate7         (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate8         (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate9         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate10        (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate11        (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate17                           (ZeroConstructor, NoDestructor)
// class UFightForYourLifeComponent*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate12        (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate18                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate19                           (ZeroConstructor, NoDestructor)
// class UFightForYourLifeComponent*  CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate13        (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate14        (NoDestructor)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate15        (NoDestructor)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void U_Passive_Parent_C::ExecuteUbergraph__Passive_Parent(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_BooleanOR_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UOakActionAbility* K2Node_CustomEvent_ActionAbility3, enum class Enum_ActionSkills K2Node_CustomEvent_ActionSkill, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, bool CallFunc_BooleanNOR_ReturnValue, class UOakActionAbility* K2Node_CustomEvent_ActionAbility2, class UOakActionAbility* K2Node_CustomEvent_ActionAbility1, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate3, bool Temp_bool_True_if_break_was_hit_Variable, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UOakActionAbility* K2Node_CustomEvent_ActionAbility, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate6, class AActor* K2Node_CustomEvent_Causer, const struct FStatusEffectSpec& K2Node_CustomEvent_Spec, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate7, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate8, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate10, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, class UFightForYourLifeComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, class UFightForYourLifeComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate13, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate14, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate15, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character1, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Passive_Parent_C", "ExecuteUbergraph__Passive_Parent");

	Params::U_Passive_Parent_C_ExecuteUbergraph__Passive_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_CustomEvent_Damaged = K2Node_CustomEvent_Damaged;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.K2Node_CustomEvent_ActionAbility3 = K2Node_CustomEvent_ActionAbility3;
	Parms.K2Node_CustomEvent_ActionSkill = K2Node_CustomEvent_ActionSkill;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate2;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;
	Parms.K2Node_CustomEvent_ActionAbility2 = K2Node_CustomEvent_ActionAbility2;
	Parms.K2Node_CustomEvent_ActionAbility1 = K2Node_CustomEvent_ActionAbility1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate3 = K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate3;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_ActionAbility = K2Node_CustomEvent_ActionAbility;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate6 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate6;
	Parms.K2Node_CustomEvent_Causer = K2Node_CustomEvent_Causer;
	Parms.K2Node_CustomEvent_Spec = K2Node_CustomEvent_Spec;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate7 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate7;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate8 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate8;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate9 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate9;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate10 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate10;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate11 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate11;
	Parms.K2Node_CreateDelegate_OutputDelegate17 = K2Node_CreateDelegate_OutputDelegate17;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate12 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate18 = K2Node_CreateDelegate_OutputDelegate18;
	Parms.K2Node_CreateDelegate_OutputDelegate19 = K2Node_CreateDelegate_OutputDelegate19;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate13 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate13;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate14 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate14;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate15 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate15;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character1 = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}


