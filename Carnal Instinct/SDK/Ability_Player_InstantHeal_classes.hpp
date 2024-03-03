#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x310 - 0x2E4)
// BlueprintGeneratedClass Ability_Player_InstantHeal.Ability_Player_InstantHeal_C
class AAbility_Player_InstantHeal_C : public AAbility_Player_C
{
public:
	uint8                                        Pad_2694[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        HealAmount;                                        // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_269A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UExtendedStatComponent_C*              HealthComponent;                                   // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       HealCastParticle;                                  // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound;                                             // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_Player_InstantHeal_C* GetDefaultObj();

	void SpawnParticle();
	void ReceiveBeginPlay();
	void Heal();
	void Released();
	void Effect();
	void PlaySound();
	void ExecuteUbergraph_Ability_Player_InstantHeal(int32 EntryPoint, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, bool CallFunc_IsValid_ReturnValue, float CallFunc_PlayAbilityMontage_Duration, class AActor* CallFunc_GetOwner_ReturnValue, class UExtendedStatComponent_C* CallFunc_GetExtendedStatComponent_Comp, bool CallFunc_StartAbility_Result, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


