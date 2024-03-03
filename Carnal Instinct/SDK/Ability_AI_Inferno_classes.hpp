#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x300 - 0x2E0)
// BlueprintGeneratedClass Ability_AI_Inferno.Ability_AI_Inferno_C
class AAbility_AI_Inferno_C : public AAbility_AI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                       HitParticle;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Radius;                                            // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Range;                                             // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound;                                             // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_AI_Inferno_C* GetDefaultObj();

	void Released();
	void SpawnParticle();
	void Effect();
	void PlaySound();
	void ExecuteUbergraph_Ability_AI_Inferno(int32 EntryPoint, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, bool CallFunc_StartAbility_Result, float CallFunc_PlayAbilityMontage_Duration, const struct FVector& CallFunc_GetEffectLocation_Location, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_GetDamage_ReturnValue, class AAE_DamageSphere_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_GetSurfacePredictedTargetTransform_Result, const struct FVector& CallFunc_GetEffectLocation_Location_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_GetEffectLocation_Location_2);
};

}


