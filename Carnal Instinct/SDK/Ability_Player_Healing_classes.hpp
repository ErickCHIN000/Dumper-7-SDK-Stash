#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x320 - 0x2E4)
// BlueprintGeneratedClass Ability_Player_Healing.Ability_Player_Healing_C
class AAbility_Player_Healing_C : public AAbility_Player_C
{
public:
	uint8                                        Pad_C3C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Particle;                                          // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EffectEnabled;                                     // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C46[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HealAmount;                                        // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExtendedStatComponent_C*              HealthComponent;                                   // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       HealingParticle;                                   // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SoundComponent;                                    // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound;                                             // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_Player_Healing_C* GetDefaultObj();

	void AttemptToCast(bool* Result, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_StartAbility_Result);
	void AttempToCastEvent();
	void ClearAttemptToCastTimer();
	void SpawnParticle();
	void DeactivateParticle();
	void ReceiveTick(float DeltaSeconds);
	void Heal();
	void Pressed();
	void ReceiveBeginPlay();
	void Released();
	void Effect();
	void Ended(enum class E_AbilityEndResult Result);
	void PlaySound();
	void StopSound();
	void ExecuteUbergraph_Ability_Player_Healing(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_AttemptToCast_Result, bool CallFunc_AttemptToCast_Result_1, float K2Node_Event_DeltaSeconds, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetIsCasting_Result, class AActor* CallFunc_GetOwner_ReturnValue, class UExtendedStatComponent_C* CallFunc_GetExtendedStatComponent_Comp, enum class E_AbilityEndResult K2Node_Event_Result, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* CallFunc_GetAbilityMontage_Montage_1, float CallFunc_PlayAbilityMontage_Duration_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


