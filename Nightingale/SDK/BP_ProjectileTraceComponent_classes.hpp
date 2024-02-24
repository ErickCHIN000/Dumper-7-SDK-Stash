#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F0 (0x290 - 0xA0)
// BlueprintGeneratedClass BP_ProjectileTraceComponent.BP_ProjectileTraceComponent_C
class UBP_ProjectileTraceComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               TraceHitVelocity;                                  // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       TraceTimeToImpact;                                 // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       TraceHalfHeight;                                   // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TraceInterval;                                     // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TraceTimer;                                        // 0xD8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FHitResult                            TraceHitResult;                                    // 0xE0(0xE8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay)
	class AActor*                                Projectile;                                        // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       TraceRadius;                                       // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceOffset;                                       // 0x1D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class UClass*>                          TraceHitClasses;                                   // 0x1F0(0x50)(Edit, BlueprintVisible)
	TArray<class AActor*>                        TraceIgnoreActors;                                 // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FGameplayTagContainer                 TraceIgnoreTags;                                   // 0x250(0x20)(Edit, BlueprintVisible)
	bool                                         UseMultiTrace;                                     // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TrackHitActors;                                    // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FirstTraceComplete;                                // 0x272(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C90[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LastTraceEndLocation;                              // 0x278(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ProjectileTraceComponent_C* GetDefaultObj();

	void OnTraceReady(TScriptInterface<class IBPI_ProjectileTrace_C> K2Node_DynamicCast_AsBPI_Projectile_Trace, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_TraceOffset_TraceOffset, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	void OnProjectileImpactDetected(bool CallFunc_Greater_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void StartTrackingHitActors();
	void ClearTrackedHitActors();
	void CheckHitActorValid(class AActor* HitActor, bool* HitActorValid, class AActor* LHitActor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UNWXAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UClass*>& CallFunc_Set_ToArray_Result, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRep_TraceOffset();
	void Initialize(TScriptInterface<class IBPI_ProjectileTrace_C> K2Node_DynamicCast_AsBPI_Projectile_Trace, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_ProjectileTrace_C> K2Node_DynamicCast_AsBPI_Projectile_Trace_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsReadyToTrace_IsReady, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue);
	void InitIgnoreActors(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_ProjectileTrace_C> K2Node_DynamicCast_AsBPI_Projectile_Trace, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_TraceIgnoreActors_TraceIgnoreActors);
	void TraceProjectile(const struct FVector& OffsetActorLocation, const struct FVector& RotatedTraceOffset, const struct FHitResult& LTraceHit, class AActor* LHitActor, const struct FVector& TraceEndL, const struct FVector& TraceVelocityL, const struct FVector& TraceStartL, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_StopTrace_bSuccess, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, TScriptInterface<class IBPI_ProjectileTrace_C> K2Node_DynamicCast_AsBPI_Projectile_Trace, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldHideOnFirstCollision_ShouldStopTrace, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FLinearColor& Temp_struct_Variable, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& Temp_struct_Variable_1, int32 CallFunc_Array_Add_ReturnValue, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool CallFunc_CheckHitActorValid_HitActorValid, TArray<struct FHitResult>& CallFunc_NWXCapsuleTraceMulti_OutHits, bool CallFunc_NWXCapsuleTraceMulti_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_NWXCapsuleTraceSingle_OutHit, bool CallFunc_NWXCapsuleTraceSingle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_NWXCapsuleTraceMulti_HalfHeight_ImplicitCast, float CallFunc_NWXCapsuleTraceMulti_Radius_ImplicitCast, float CallFunc_NWXCapsuleTraceSingle_HalfHeight_ImplicitCast, float CallFunc_NWXCapsuleTraceSingle_Radius_ImplicitCast);
	void StopTrace(bool* bSuccess, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void StartTrace(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void TraceTick();
	void ReceiveBeginPlay();
	void ImpactDetected();
	void ExecuteUbergraph_BP_ProjectileTraceComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_ProjectileTrace_C> K2Node_DynamicCast_AsBPI_Projectile_Trace, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TraceImpactDetected_bSuccess);
};

}


