#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x264 - 0x230)
// BlueprintGeneratedClass BP_SplineActor.BP_SplineActor_C
class ABP_SplineActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Preview_Mesh;                                      // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      Spline;                                            // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_preview_goat;                                 // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BB7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Preview_Location;                                  // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGAlternativeGoatDataAsset*           Preview_alt_goat;                                  // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ground_trace_distance;                             // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SplineActor_C* GetDefaultObj();

	void UserConstructionScript(const struct FVector& Last_spline_point_location, bool CallFunc_GetIsPIE_ReturnValue, bool CallFunc_GetIsEditor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetSplineLength_ReturnValue_1, const struct FRotator& CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue_2, TSubclassOf<class UAnimInstance> CallFunc_GetAnimBlueprint_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_CapsuleTraceSingle_OutHit, bool CallFunc_CapsuleTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
	void SetAllPointsToClosestDownHit();
	void ExecuteUbergraph_BP_SplineActor(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
};

}


