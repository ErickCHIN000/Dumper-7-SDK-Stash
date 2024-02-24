#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x398 - 0x388)
// BlueprintGeneratedClass BP_Wraith_Crypt_Icicle_Cathedral.BP_Wraith_Crypt_Icicle_Cathedral_C
class ABP_Wraith_Crypt_Icicle_Cathedral_C : public ABP_Wraith_Crypt_Icicle_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                       Decal1;                                            // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Wraith_Crypt_Icicle_Cathedral_C* GetDefaultObj();

	void GetHitResults(class AActor* Actor, TArray<struct FHitResult>* Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, TArray<struct FHitResult>& K2Node_MakeArray_Array);
	void UserConstructionScript(bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1);
	void BreakIcicleAndStatusEffectPlayer();
	void SpikesFinished();
	void SpawnExplosionEmitters();
	void Break_Icicle_and_Status_Effect_Enemy();
	void SpawnAndDestroyDestructible();
	void ExecuteUbergraph_BP_Wraith_Crypt_Icicle_Cathedral(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_BooleanOR_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_ApplyDamage_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ACathedralStatue_V2_DM_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_ApplyDamage_ReturnValue_1, TArray<struct FHitResult>& CallFunc_GetHitResults_Array, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1);
};

}


