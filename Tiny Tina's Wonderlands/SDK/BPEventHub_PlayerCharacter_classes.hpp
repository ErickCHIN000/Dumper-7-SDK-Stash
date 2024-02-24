#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x230 (0x268 - 0x38)
// BlueprintGeneratedClass BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C
class UBPEventHub_PlayerCharacter_C : public UOakPlayerAbilityEventHub
{
public:
	UMulticastDelegateProperty_                  SkillEvent_OnActionSkillActivated;                 // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  SkillEvent_OnActionSkillReadied;                   // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  SkillEvent_OnActionSkillCoolingDown;               // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Necromancer_LichSpawned;                // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Necromancer_LichDespawned;              // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Necromancer_LichCausedDeath;            // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Ranger_MushroomCompanion_RevivedPlayer; // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Barbarian_SlassImpact;                  // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Rogue_LivingBlade_Spawn;                // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Necromancer_Passive_15_Activation;      // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Necromancer_Passive_15_Deactivation;    // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Ranger_MushroomSpawned;                 // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Ranger_MushroomDespawned;               // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Ranger_Mushroom_TauntActivation;        // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Ranger_Mushroom_TauntDeactivation;      // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  SkillEvent_ActivateKillSkills;                     // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnSummonedUnitDeath;                               // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnMeleeAttackEnd;                                  // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_GunMage_PolymorphedTarget;              // 0x158(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_GunMage_PolymorphEnded;                 // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_GunMage_PolymorphFailed;                // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Necromancer_LichSpellCast;              // 0x188(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_GunMage_PolymorphCastSpell;             // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Necromancer_EnchantmentCompDamage_Activate; // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Necromancer_EnchantmentCompDamage_Deactivate; // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  GearEvent_BodyArmor_HeadOfTheSnake_DurationExtend; // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Rogue_OnEnteredStealth;                 // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Rogue_OnExitedStealth;                  // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Shaman_01_Spawn;                        // 0x1F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Shaman_02_Spawn;                        // 0x208(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Shaman_02_Drain_Start;                  // 0x218(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Shaman_02_Drain_End;                    // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Ranger_Cryonado_Failed;                 // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Shaman_02_Spawned;                      // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  ClassEvent_Shaman_01_SpawnFX;                      // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBPEventHub_PlayerCharacter_C* GetDefaultObj();

	void ClassEvent_Shaman_01_SpawnFX__DelegateSignature();
	void ClassEvent_Shaman_02_Spawned__DelegateSignature(class AActor* Totem);
	void ClassEvent_Ranger_Cryonado_Failed__DelegateSignature();
	void ClassEvent_Shaman_02_Drain_End__DelegateSignature();
	void ClassEvent_Shaman_02_Drain_Start__DelegateSignature();
	void ClassEvent_Shaman_02_Spawn__DelegateSignature();
	void ClassEvent_Shaman_01_Spawn__DelegateSignature();
	void ClassEvent_Rogue_OnExitedStealth__DelegateSignature(class AOakCharacter_Player* PlayerCharacter);
	void ClassEvent_Rogue_OnEnteredStealth__DelegateSignature(class AOakCharacter_Player* PlayerCharacter);
	void GearEvent_BodyArmor_HeadOfTheSnake_DurationExtend__DelegateSignature(float DurationExtensionPercent);
	void ClassEvent_Necromancer_EnchantmentCompDamage_Deactivate__DelegateSignature();
	void ClassEvent_Necromancer_EnchantmentCompDamage_Activate__DelegateSignature();
	void ClassEvent_GunMage_PolymorphCastSpell__DelegateSignature(bool FirstCast, bool CastFromGunMage);
	void ClassEvent_Necromancer_LichSpellCast__DelegateSignature();
	void ClassEvent_GunMage_PolymorphFailed__DelegateSignature();
	void ClassEvent_GunMage_PolymorphEnded__DelegateSignature(class AActor* PolymorphedTarget, bool KilledTarget, class AActor* PolymorphDrone);
	void ClassEvent_GunMage_PolymorphedTarget__DelegateSignature(class AActor* PolymorphedActor, bool WasImmune, class AActor* PolymorphDrone);
	void OnMeleeAttackEnd__DelegateSignature();
	void OnSummonedUnitDeath__DelegateSignature(class AActor* Actor);
	void SkillEvent_ActivateKillSkills__DelegateSignature();
	void ClassEvent_Ranger_Mushroom_TauntDeactivation__DelegateSignature();
	void ClassEvent_Ranger_Mushroom_TauntActivation__DelegateSignature();
	void ClassEvent_Ranger_MushroomDespawned__DelegateSignature();
	void ClassEvent_Ranger_MushroomSpawned__DelegateSignature();
	void ClassEvent_Necromancer_Passive_15_Deactivation__DelegateSignature();
	void ClassEvent_Necromancer_Passive_15_Activation__DelegateSignature();
	void ClassEvent_Rogue_LivingBlade_Spawn__DelegateSignature();
	void ClassEvent_Barbarian_SlassImpact__DelegateSignature();
	void ClassEvent_Ranger_MushroomCompanion_RevivedPlayer__DelegateSignature(class AActor* Revived_By);
	void ClassEvent_Necromancer_LichCausedDeath__DelegateSignature(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ClassEvent_Necromancer_LichDespawned__DelegateSignature();
	void ClassEvent_Necromancer_LichSpawned__DelegateSignature();
	void SkillEvent_OnActionSkillCoolingDown__DelegateSignature(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void SkillEvent_OnActionSkillReadied__DelegateSignature(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void SkillEvent_OnActionSkillActivated__DelegateSignature(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
};

}


