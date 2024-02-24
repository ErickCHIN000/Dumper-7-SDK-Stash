#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x790 - 0x770)
// BlueprintGeneratedClass Proj_KotC_AS3_BreathAttack.Proj_KotC_AS3_BreathAttack_C
class AProj_KotC_AS3_BreathAttack_C : public AOakProjectile_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x770(0x8)(Transient, DuplicateTransient)
	class UGbxParticleSystemComponent*           FireBreath3rd;                                     // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxProjectileMovementComponent*       GbxProjectileMovement;                             // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_KotC_AS3_BreathAttack_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void CreateFireSplat();
	void ExecuteUbergraph_Proj_KotC_AS3_BreathAttack(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, const struct FHitResult& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue3, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_SpawnActorAsync_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


