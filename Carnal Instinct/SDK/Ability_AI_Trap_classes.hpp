#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x308 - 0x2E0)
// BlueprintGeneratedClass Ability_AI_Trap.Ability_AI_Trap_C
class AAbility_AI_Trap_C : public AAbility_AI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TrapRadius;                                        // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageRadius;                                      // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ActivationDelay;                                   // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Range;                                             // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2455[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound;                                             // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_AI_Trap_C* GetDefaultObj();

	void SpawnTrap();
	void Released();
	void Effect();
	void PlaySound();
	void ExecuteUbergraph_Ability_AI_Trap(int32 EntryPoint, bool CallFunc_StartAbility_Result, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_GetDamage_ReturnValue, class AAE_DamageTrap_C* CallFunc_FinishSpawningActor_ReturnValue, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, const struct FVector& CallFunc_GetEffectLocation_Location, float CallFunc_PlayAbilityMontage_Duration, const struct FVector& CallFunc_GetEffectLocation_Location_1, const struct FTransform& CallFunc_GetSurfaceTargetTransform_Result);
};

}


