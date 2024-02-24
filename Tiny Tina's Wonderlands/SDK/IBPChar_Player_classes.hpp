#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IBPChar_Player.IBPChar_Player_C
class IIBPChar_Player_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIBPChar_Player_C* GetDefaultObj();

	void GetPlayerCharacterEventHub(class UBPEventHub_PlayerCharacter_C** Res);
	void Audio_PlayAbilitySoundOnPlayer(bool IsLocalOnly, class UWwiseEvent* WwiseEvent);
	void Audio_Player_Knight_HammerWindup();
	void SetActionSkillWeaponVisibility3rd(bool Enable);
	void SetActionSkillWeaponVisibility1st(bool Enable);
	void Audio_Player_Knight_HammerSlam();
	void Audio_Player_Knight_Smite_Exp(const struct FVector& Location);
	void Audio_Player_Ranger_AimedShot_Intensify(float Intensity);
	void Audio_Player_Ranger_AimedShot_End();
	void Audio_Player_Ranger_AimedShot_Activate();
	void Audio_Player_GroundSlam_Impact();
	void Audio_Player_GroundSlam_Buildup();
	void SetAntiqueGreatbowAttribute(bool Enable, bool* Res);
	void Audio_Player_Melee_Killed(class UWwiseEvent* WwiseEvent);
	void Audio_Player_Melee_Ringout(class UWwiseEvent* RingoutAudio, bool IsCritical, class UWwiseEvent* CriticalAudio);
	void Audio_Player_Knight_HammerToss_Catch();
	void Audio_Player_Knight_HammerToss_Recall();
	void Audio_Player_Knight_HammerToss_Throw();
	void Audio_Player_Knight_HammerToss_Activate();
	void Audio_Player_Knight_FireBreath_Stop();
	void Audio_Player_Knight_FireBreath_Start();
	void Audio_Player_GunMage_Polymorph_Crush();
	void Audio_Player_GunMage_Polymorph_Activate();
	void Audio_Player_Rogue_Stealth_Stop();
	void Audio_Player_Rogue_Stealth_Activate();
	void Audio_Player_Shared_Skill_Damage(const struct FVector& ActorLocation, class UWwiseEvent* WwiseEvent);
	void Audio_Player_Rogue_LivingBlade_Move();
	void Audio_Player_Rogue_LivingBlade_Activate();
	void Audio_Player_Ranger_CryoNado_Activate();
	void Audio_Player_Ranger_CalledShot_Fire();
	void Audio_Player_Ranger_CalledShot_Draw();
	void Audio_Player_Ranger_CalledShot_Activate();
	void Audio_Player_Necro_Sacrifice_Exp();
	void Audio_Player_Necro_Reaper_Invulnerable();
	void Audio_Player_Necro_Reaper_Stop();
	void Audio_Player_Necro_Reaper_Start();
	void Audio_Player_Necro_Sacrifice_Cast();
	void Audio_Player_Barbarian_BloodSacrifice();
	void Audio_Player_Barbarian_Rage_Stop();
	void Audio_Player_Barbarian_Rage_Start();
	void Audio_Player_Barbarian_Slass_Impact();
	void Audio_Player_Barbarian_Slass_Swing();
	void Audio_Player_Barbarian_Slass_Jump();
	void Audio_Player_Barbarian_Whirlwind_Stop(bool Interrupt);
	void Audio_Player_Barbarian_Whirlwind_Start();
	void SetPlayerWandVisibility(bool Enable, bool RightHandWand, bool* Res);
	void GetPlayerClasses(enum class EOakPlayerClass* Primary, enum class EOakPlayerClass* Secondary);
	void GetSecondaryPlayerClass(enum class EOakPlayerClass* Res);
	void GetPrimaryPlayerClass(enum class EOakPlayerClass* Res);
	void SpawnPlayerParticleSystemAtLocationMulticast(class UParticleSystem* EmitterTemplate, const struct FTransform& EmitterTransform, class UParticleSystemComponent** Res);
	void GetActionSkillWeapons(class UGbxSkeletalMeshComponent** Action_Skill_Weapon_1st, class UGbxSkeletalMeshComponent** Action_Skill_Weapon_3rd);
	void SetActionSkillWeaponVisibility(bool Enabled);
	void SetActionSkillWeaponMesh(class USkeletalMesh* SkeletalMesh);
	void GetGameInstance(bool* Res);
	void GetTotalCompanionsAndSummonedUnits(int32* Res);
	void GetTotalSummonedUnits(int32* Res);
	void GetTotalCompanions(int32* Res);
	void GetClassFeat(enum class EOakPlayerClass Class, class UGbxAbility** Res);
	void HasPlayerClass(enum class EOakPlayerClass Class, bool* Res);
};

}


