#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x168 (0x388 - 0x220)
// BlueprintGeneratedClass BP_Wraith_Crypt_Icicle.BP_Wraith_Crypt_Icicle_C
class ABP_Wraith_Crypt_Icicle_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     CollisionCapsule;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Ice_crypt_dash;                                    // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Freeze_TimeDilation_Alpha_155D493041D0ED832072459F47607B6B; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Freeze_TimeDilation__Direction_155D493041D0ED832072459F47607B6B; // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Freeze_TimeDilation;                      // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveRagdollUp_Lerp_E1CDF77146A71C7ADF6AD98ADCD13B5D; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveRagdollUp_Height_E1CDF77146A71C7ADF6AD98ADCD13B5D; // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveRagdollUp__Direction_E1CDF77146A71C7ADF6AD98ADCD13B5D; // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    MoveRagdollUp;                                     // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveUp_Height_07E652C04C1E91AC133BAB8758F21885;    // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveUp__Direction_07E652C04C1E91AC133BAB8758F21885; // 0x27C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    MoveUp;                                            // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Mesh;                                              // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PreShakeLocation;                                  // 0x28C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ShakeVector;                                       // 0x298(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RagdollInitialLocation;                            // 0x2A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MeshInitialLocation;                               // 0x2B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABarbarous_C*                          StabbedCharacter;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasDetachedFromShell;                              // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F5B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              BloodParticleSystem;                               // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StoneFormed;                                       // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Wraith_Crypt_CastSpell_C*          Spell;                                             // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasHitByIcicle_;                                  // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DestroyImmediatelyOnBreak_;                        // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F70[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OtherActor;                                        // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     OtherEnemy;                                        // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0x300(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_Wraith_Crypt_Icicle_C* GetDefaultObj();

	void DebugIcicleFreeze(const class FString& String, float CallFunc_GetGameTimeInSeconds_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	float RandomDelay(float CallFunc_RandomFloatInRange_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void UserConstructionScript(bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2);
	void MoveUp__FinishedFunc();
	void MoveUp__UpdateFunc();
	void MoveRagdollUp__FinishedFunc();
	void MoveRagdollUp__UpdateFunc();
	void Timeline_Freeze_TimeDilation__FinishedFunc();
	void Timeline_Freeze_TimeDilation__UpdateFunc();
	void SpikesFinished();
	void StopIcicleInitialMovement();
	void SpawnAndDestroyDestructible();
	void Break_Icicle_and_Status_Effect_Enemy();
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void DestroyIcicleOnHIt();
	void BndEvt__CollisionCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void StopMovingRagdollUp();
	void OnDetachFromShell();
	void ReceiveBeginPlay();
	void BreakIcicleAndStatusEffectPlayer();
	void ExecuteUbergraph_BP_Wraith_Crypt_Icicle(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_WraithSpell_DestructibleIcicle_C* CallFunc_FinishSpawningActor_ReturnValue, class UDestructibleMesh* CallFunc_GetDestructibleMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_RandomDelay_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AActor* CallFunc_GetParentActor_ReturnValue, class ABP_Wraith_Crypt_CastSpell_C* K2Node_DynamicCast_AsBP_Wraith_Crypt_Cast_Spell, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_ApplyDamage_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_3, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USword_AnimBP2v3_C* K2Node_DynamicCast_AsSword_Anim_BP2v_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, const struct FVector& CallFunc_MakeVector_ReturnValue_4, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_5, float CallFunc_ApplyDamage_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2);
};

}


