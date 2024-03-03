#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x300 - 0x2E4)
// BlueprintGeneratedClass BP_Magic_Sekh.BP_Magic_Sekh_C
class ABP_Magic_Sekh_C : public AAbility_Player_C
{
public:
	uint8                                        Pad_1E49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                       Particle;                                          // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound;                                             // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Magic_Sekh_C* GetDefaultObj();

	void SpawnParticle();
	void UpdateEffect();
	void SpawnDamageSphere(float Radius, float ForwardDirectionOffset);
	void Released();
	void Effect();
	void PlaySound(const struct FVector& Location);
	void SpawnLingeringParticle();
	void ExecuteUbergraph_BP_Magic_Sekh(int32 EntryPoint, bool Temp_bool_Variable, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, class AActor* CallFunc_GetOwner_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_CustomEvent_Radius, float K2Node_CustomEvent_ForwardDirectionOffset, const struct FVector& CallFunc_MakeVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_GetDamage_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, bool CallFunc_StartAbility_Result, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAE_DamageSphere_Sekh_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& CallFunc_GetLastMovementInputVector_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, const struct FVector& K2Node_Select_Default, class AActor* CallFunc_GetOwner_ReturnValue_2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, TScriptInterface<class II_AbilityComponent_C> K2Node_DynamicCast_AsI_Ability_Component, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_CanCastAbility_Result, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_FindGroundLocation_GroundLocation, const struct FVector& CallFunc_FindGroundLocation_Normal, bool CallFunc_FindGroundLocation_Result, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_GetIsCasting_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1);
};

}


