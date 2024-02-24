#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x125 (0x355 - 0x230)
// BlueprintGeneratedClass BP_Tornado.BP_Tornado_C
class ABP_Tornado_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraShakeSourceComponent*           CameraShakeSource;                                 // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGForceFeedbackComponent*             GGForceFeedback;                                   // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Tornado_AC;                                        // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              TornadoParticle;                                   // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       BallerinaPlacement3;                               // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       BallerinaPlacement2;                               // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       BallerinaPlacement1;                               // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGRadialForceComponent*               GGRadialForce3;                                    // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGRadialForceComponent*               GGRadialForce2;                                    // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGRadialForceComponent*               GGRadialForce1;                                    // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGRadialForceComponent*               GGRadialForce;                                     // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleUpAndBlendVFXTimeline_AlphaStartup_A3AD3D0745B690BB2F8FB79DEB3B0F9D; // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleUpAndBlendVFXTimeline__Direction_A3AD3D0745B690BB2F8FB79DEB3B0F9D; // 0x2A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_108F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleUpAndBlendVFXTimeline;                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ButterflyEffect_Ballerina_C*> BallerinaArray;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, ExposeOnSpawn)
	struct FVector                               MinTargetLocation;                                 // 0x2C0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MaxTargetLocation;                                 // 0x2CC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastLocation;                                      // 0x2D8(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EndTargetLocation;                                 // 0x2E4(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CurrentTargetLocation;                             // 0x2F0(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetMeshScale;                                   // 0x2FC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InterpSpeed;                                       // 0x308(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TornadoMovementSpeed;                              // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ImpactPointZ;                                      // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SignificanceRange;                                 // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartupDuration;                                   // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CreatedFirstTimeSequencePlayrate;                  // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachBallerinas;                                  // 0x320(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         TornadoStarted;                                    // 0x321(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         CreatedFirstTime;                                  // 0x322(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_10B2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGLevelSequenceActor*                 FirstTimeSequence;                                 // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             TornadoStartSound;                                 // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TornadoTargetThreshold;                            // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TornadoTargetThresholdSqrd;                        // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AGGGoat*>                       GoatsCurrentlyBeingLaunched;                       // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        LookForGoatsRadius;                                // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldCheckIfGoatsAreNear;                         // 0x354(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Tornado_C* GetDefaultObj();

	struct FVector GetSignificanceLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	float GetSignificanceRange();
	void OnRep_ShouldCheckIfGoatsAreNear();
	void IsTornadoCloseToTarget(bool* CloseEnough, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void SetNewTornadoLocation(const struct FVector& CallFunc_GetNewTornadoLocation_NewLocation);
	void SetRadialForcesActive(bool NewActive);
	void AttachBallerinasToTornado(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, TArray<class USceneComponent*>& K2Node_MakeArray_Array, class ABP_ButterflyEffect_Ballerina_C* CallFunc_Array_Get_Item, class USceneComponent* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetNewTornadoLocation(struct FVector* NewLocation, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void OnRep_TornadoStarted(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class ABP_ButterflyEffect_Ballerina_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_ButterflyEffect_Ballerina_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void OnRep_AttachBallerinas();
	struct FVector GetTargetLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void UserConstructionScript(float CallFunc_Square_ReturnValue);
	void ScaleUpAndBlendVFXTimeline__FinishedFunc();
	void ScaleUpAndBlendVFXTimeline__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OpenGate();
	void CloseGate();
	void StartTornado();
	void DeactivateByRange();
	void ActivateByRange();
	void GainedSignificance();
	void LostSignificance();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SpawnTornadoStartup();
	void EventFinished();
	void StartupSeqFinished();
	void FirstTimeSequenceFinished();
	void BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void PlayTornadoSound();
	void PlayTornadoStartSound();
	void SpawnSphereTrace();
	void RemoveGoatFromLaunchList(class AGGGoat* Goat);
	void CheckIfGoatsAreNearTornado();
	void StartGoatIsNearCheck();
	void StopTornado();
	void ResetDoOnce();
	void ExecuteUbergraph_BP_Tornado(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue_1, TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_IsClosed_Variable_1, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, TArray<struct FHitResult>& CallFunc_LineTraceMulti_OutHits, bool CallFunc_LineTraceMulti_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ALandscape* K2Node_DynamicCast_AsLandscape, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool Temp_bool_IsClosed_Variable_2, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsTornadoCloseToTarget_CloseEnough, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_IsValid_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& Temp_object_Variable_1, class AGGGoat* K2Node_CustomEvent_Goat, bool CallFunc_Array_RemoveItem_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_Less_IntInt_ReturnValue_1, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTransform& Temp_struct_Variable, class UBP_Tornado_LaunchGoatComponent_C* CallFunc_AddComponent_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, const struct FVector& CallFunc_VLerp_ReturnValue);
};

}


