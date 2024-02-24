#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x818 - 0x748)
// BlueprintGeneratedClass OakProj_Spell_GelSphere.OakProj_Spell_GelSphere_C
class AOakProj_Spell_GelSphere_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x748(0x8)(Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxProjectileMovementComponent*       GbxProjectileMovement;                             // 0x760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  WwiseAudio;                                        // 0x768(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         RepBounceRight;                                    // 0x770(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SpellHitInfo;                                      // 0x778(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         bTryToSpawnSplatAgain;                             // 0x808(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BounceDegree;                                      // 0x80C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_ProjImp;                                     // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AOakProj_Spell_GelSphere_C* GetDefaultObj();

	void UserConstructionScript();
	void GbxAsyncRequest_Failed_E732B0D0400C2EB229129CBFF52257E0(class AActor* Actor, int32 InstanceIndex);
	void GbxAsyncRequest_Spawned_E732B0D0400C2EB229129CBFF52257E0(class AActor* Actor, int32 InstanceIndex);
	void ReceiveBeginPlay();
	void OnExplode();
	void TryToSpawnSlpatAgain();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void SetUpdatedVelocity();
	void OnHitWorld(struct FHitResult& Hit);
	void OnHitEnemy(struct FHitResult& Hit);
	void OnHitDamagableObject(struct FHitResult& Hit);
	void ResetGate();
	void OnLastBounce(struct FHitResult& ImpactResult);
	void ExecuteUbergraph_OakProj_Spell_GelSphere(int32 EntryPoint, class AActor* K2Node_CustomEvent_Actor1, int32 K2Node_CustomEvent_InstanceIndex1, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, bool Temp_bool_Variable, bool Temp_bool_Variable1, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable2, const struct FRotator& Temp_struct_Variable, const struct FRotator& Temp_struct_Variable1, bool Temp_bool_Variable3, float Temp_float_Variable2, float Temp_float_Variable3, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsAlive_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float K2Node_Select_Default, const struct FTransform& CallFunc_TransformSplat_SplatTransform, const struct FTransform& K2Node_Select1_Default, bool CallFunc_Not_PreBool_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit3, bool CallFunc_RandomBool_ReturnValue, const struct FHitResult& K2Node_Event_Hit2, const struct FHitResult& K2Node_Event_Hit1, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue1, const struct FHitResult& K2Node_Event_Hit, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue, const struct FAttributeInitializationData& K2Node_MakeStruct_AttributeInitializationData, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue1, bool Temp_bool_IsClosed_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest1, int32 CallFunc_SpawnActorAsync_ReturnValue1, bool CallFunc_BreakHitResult_bBlockingHit2, bool CallFunc_BreakHitResult_bInitialOverlap2, float CallFunc_BreakHitResult_Time2, float CallFunc_BreakHitResult_Distance2, const struct FVector& CallFunc_BreakHitResult_Location2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint2, const struct FVector& CallFunc_BreakHitResult_Normal2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat2, class AActor* CallFunc_BreakHitResult_HitActor2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent2, class FName CallFunc_BreakHitResult_HitBoneName2, int32 CallFunc_BreakHitResult_HitItem2, int32 CallFunc_BreakHitResult_FaceIndex2, const struct FVector& CallFunc_BreakHitResult_TraceStart2, const struct FVector& CallFunc_BreakHitResult_TraceEnd2, const struct FVector& CallFunc_GetReflectionVector_ReturnValue, const struct FRotator& K2Node_Select2_Default, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, float K2Node_Select3_Default, const struct FHitResult& K2Node_Event_ImpactResult, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
};

}


