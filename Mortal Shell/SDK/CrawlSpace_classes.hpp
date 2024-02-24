#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x269 - 0x220)
// BlueprintGeneratedClass CrawlSpace.CrawlSpace_C
class ACrawlSpace_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       MoveThisForTheCameraPlacementNotTheCamera2;        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  EndExitCam;                                        // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  StartExitCam;                                      // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       MoveThisForTheCameraPlacementNotTheCamera1;        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  CrawlSpaceEnd;                                     // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  CrawlSpaceStart;                                   // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      Spline;                                            // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOppositeEndDisabled_;                            // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ACrawlSpace_C* GetDefaultObj();

	void SetCapTexts(class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace, bool K2Node_DynamicCast_bSuccess, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace_1, bool K2Node_DynamicCast_bSuccess_1);
	void SetExitCameraReferences(class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace, bool K2Node_DynamicCast_bSuccess, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace_1, bool K2Node_DynamicCast_bSuccess_1);
	void PlaceEndUsableActorAtRightLocation(const struct FRotator& CallFunc_GetRotationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, const struct FRotator& CallFunc_GetRotationAtSplinePoint_ReturnValue_1, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue_1, const struct FVector& CallFunc_GetUpVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace_1, bool K2Node_DynamicCast_bSuccess_1, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1);
	void UserConstructionScript(const struct FTransform& Temp_struct_Variable, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, class AUsable_Crawlspace_C* K2Node_DynamicCast_AsUsable_Crawlspace_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_CrawlSpace(int32 EntryPoint);
};

}


