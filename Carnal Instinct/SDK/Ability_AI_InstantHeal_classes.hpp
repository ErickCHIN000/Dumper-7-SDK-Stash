#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x300 - 0x2E0)
// BlueprintGeneratedClass Ability_AI_InstantHeal.Ability_AI_InstantHeal_C
class AAbility_AI_InstantHeal_C : public AAbility_AI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                       HealParticle;                                      // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealAmount;                                        // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2432[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound;                                             // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_AI_InstantHeal_C* GetDefaultObj();

	void Heal(const struct FVector& L_AdjustedLocation);
	void SpawnParticle();
	void Effect();
	void Released();
	void PlaySound();
	void ExecuteUbergraph_Ability_AI_InstantHeal(int32 EntryPoint, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_StartAbility_Result, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


