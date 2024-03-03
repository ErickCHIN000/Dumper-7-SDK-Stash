#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x318 - 0x2E4)
// BlueprintGeneratedClass Ability_Player_Trap.Ability_Player_Trap_C
class AAbility_Player_Trap_C : public AAbility_Player_C
{
public:
	uint8                                        Pad_2774[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Range;                                             // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrapRadius;                                        // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageRadius;                                      // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxSurfaceAngle;                                   // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHeightDeviation;                                // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ActivationDelay;                                   // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_277C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound;                                             // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_Player_Trap_C* GetDefaultObj();

	void Pressed();
	void ReceiveTick(float DeltaSeconds);
	void Released();
	void UpdateEffect();
	void Effect();
	void PlaySound();
	void ExecuteUbergraph_Ability_Player_Trap(int32 EntryPoint, bool CallFunc_GetIsCasting_Result, bool CallFunc_GetIsPressed_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetIsCasting_Result_1, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_StartAbility_Result, bool CallFunc_GetIsCasting_Result_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float K2Node_Event_DeltaSeconds, class AAE_DamageTrap_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_GetEffectLocation_Location, const struct FVector& CallFunc_GetEffectLocation_Location_1, float CallFunc_GetDamage_ReturnValue, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, const struct FTransform& CallFunc_GetSurfaceTransform_Transform, const struct FVector& CallFunc_GetEffectLocation_Location_2);
};

}


