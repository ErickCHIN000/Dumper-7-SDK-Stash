#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x7A4 - 0x748)
// BlueprintGeneratedClass OakProj_Spell_ThreadOfFate_Child.OakProj_Spell_ThreadOfFate_Child_C
class AOakProj_Spell_ThreadOfFate_Child_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x748(0x8)(Transient, DuplicateTransient)
	class UDrunkenWaveMovementComponent*         DrunkenWaveMovement3;                              // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDrunkenWaveMovementComponent*         DrunkenWaveMovement2;                              // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDrunkenWaveMovementComponent*         DrunkenWaveMovement1;                              // 0x760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDrunkenWaveMovementComponent*         DrunkenWaveMovement;                               // 0x768(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxProjectileMovementComponent*       GbxProjectileMovement;                             // 0x770(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileHomingComponent*            ProjectileHoming;                                  // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AOakProj_Spell_ThreadOfFate_C*         ParentProjectile;                                  // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ChargeLevel;                                       // 0x798(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bLinkedHasImpacted;                                // 0x79C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FBC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxTargetOffset;                                   // 0x7A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AOakProj_Spell_ThreadOfFate_Child_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_RandomBool_ReturnValue);
	void OnExplode();
	void ReceiveBeginPlay();
	void UpdateHomingTarget();
	void ExecuteUbergraph_OakProj_Spell_ThreadOfFate_Child(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLightBeamQueryData& K2Node_MakeStruct_LightBeamQueryData, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCompanionTargetingSocket_Socket, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_GetDistanceBetweenVectors_Distance, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1);
};

}


