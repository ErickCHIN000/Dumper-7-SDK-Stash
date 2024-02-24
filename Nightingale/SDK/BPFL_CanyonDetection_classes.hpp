#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_CanyonDetection.BPFL_CanyonDetection_C
class UBPFL_CanyonDetection_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_CanyonDetection_C* GetDefaultObj();

	void Scan_for_Canyon(class AActor* Actor, class UObject* __WorldContext, double* CanyonValue, double HitDistances, int32 HitCount, double MinDistance, double MaxDistance, const TArray<struct FVector>& Heights, const TArray<double>& Angles, const TArray<enum class EObjectTypeQuery>& TraceObjects, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, double CallFunc_Conv_IntToDouble_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_GetForwardVector_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<double>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_NormalizeToRange_ReturnValue, int32 Temp_int_Variable, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, TArray<struct FVector>& K2Node_MakeArray_Array_2, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AInstancedFoliageActor* K2Node_DynamicCast_AsInstanced_Foliage_Actor, bool K2Node_DynamicCast_bSuccess, class ALandscape* K2Node_DynamicCast_AsLandscape, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
};

}


