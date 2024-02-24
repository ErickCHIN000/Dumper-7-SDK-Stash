#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF2 (0x8E4 - 0x7F2)
// BlueprintGeneratedClass Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C
class AProj_VLA_PS_TaserTether_C : public AProj_Weapon_BaseProjectile_C
{
public:
	uint8                                        Pad_47F8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F8(0x8)(Transient, DuplicateTransient)
	class UWwiseAudioComponent*                  DefaultAudio;                                      // 0x800(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakTriggerComponent*                  OakTrigger;                                        // 0x808(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      ProximityRadius;                                   // 0x810(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Shock_FX;                                          // 0x818(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Attached;                                          // 0x820(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AttachedActor;                                     // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         OakCharacter;                                      // 0x830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOakStatusEffectManagerComponent*      HitEnemy_StatusEffectComp;                         // 0x838(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo_1;                                         // 0x840(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class AActor*>                        AttachedTargets;                                   // 0x8D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        MaxTargets;                                        // 0x8E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_VLA_PS_TaserTether_C* GetDefaultObj();

	void TriggerElementalPuddles(const struct FHitResult& Temp_struct_Variable, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue);
	void AttachBeam(class AActor* BeamTarget, class UClass* Data, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment1);
	void StopMovementEnableTrigger();
	void UserConstructionScript();
	void BPI_StartFuse();
	void BPI_Explode();
	void BPI_SetSimulatePhysics(bool PhysicsOn_);
	void BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector);
	void BPI_ResetHealth();
	void BPI_SetNavPainterEnabled(bool Enabled);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void OnExplode();
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether(class AActor* LeavingActor, bool bIsPlayer);
	void Destructible_Fractured(struct FVector& HitPoint, struct FVector& HitDetection);
	void BarrelExplode();
	void ExecuteUbergraph_Proj_VLA_PS_TaserTether(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_PhysicsOn_, const struct FVector& K2Node_Event_ThrowVector, float K2Node_Event_Force, const struct FRotator& K2Node_Event_RotatorForSpin, float K2Node_Event_FuseSpeedScale, const struct FVector& K2Node_Event_AdditiveVector, bool K2Node_Event_Enabled, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, int32 CallFunc_Array_Length_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_ComponentBoundEvent_TouchingActor, bool K2Node_ComponentBoundEvent_bIsPlayer1, class UActorComponent* K2Node_ComponentBoundEvent_ComponentTouched, class AActor* K2Node_ComponentBoundEvent_LeavingActor, bool K2Node_ComponentBoundEvent_bIsPlayer, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TScriptInterface<class IBPI_IO_Combat_Barrel_C> K2Node_DynamicCast_AsBPI_IO_Combat_Barrel, bool K2Node_DynamicCast_bSuccess, class ABP_ExplodingObject_C* K2Node_DynamicCast_AsBP_Exploding_Object, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_StickToTarget_Attached, bool CallFunc_StickToTarget_StuckToActor, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& K2Node_Event_HitPoint, const struct FVector& K2Node_Event_HitDetection, int32 CallFunc_Array_AddUnique_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
};

}


