#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x23C - 0x220)
// BlueprintGeneratedClass BP_FireInstance_RVTCapture.BP_FireInstance_RVTCapture_C
class ABP_FireInstance_RVTCapture_C : public AActor
{
public:
	class UStaticMeshComponent*                  SceneCaptureTarget;                                // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProceduralMeshComponent*              ProceduralMesh;                                    // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Test;                                              // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FireInstance_RVTCapture_C* GetDefaultObj();

	void Capture(class UConcaveHullMesh* ConcaveHull, const TArray<int32>& Triangles, TArray<struct FLinearColor>& Temp_struct_Variable, TArray<struct FVector2D>& Temp_struct_Variable_1, TArray<struct FVector2D>& Temp_struct_Variable_2, TArray<struct FVector2D>& Temp_struct_Variable_3, TArray<struct FVector2D>& Temp_struct_Variable_4, TArray<struct FVector>& Temp_struct_Variable_5, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<struct FProcMeshTangent>& Temp_struct_Variable_6, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FVector& CallFunc_Vector_Up_ReturnValue, int32 CallFunc_Max_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Vector_One_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, const struct FVector& CallFunc_GetComponentBounds_Origin_1, const struct FVector& CallFunc_GetComponentBounds_BoxExtent_1, float CallFunc_GetComponentBounds_SphereRadius_1, float CallFunc_GetMaxElement_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, int32 CallFunc_Array_Add_ReturnValue);
	void UserConstructionScript(class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


