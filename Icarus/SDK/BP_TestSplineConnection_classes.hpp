#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x240 - 0x220)
// BlueprintGeneratedClass BP_TestSplineConnection.BP_TestSplineConnection_C
class ABP_TestSplineConnection_C : public AActor
{
public:
	class USplineComponent*                      Spline;                                            // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartPoint;                                        // 0x228(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               EndPoint;                                          // 0x234(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TestSplineConnection_C* GetDefaultObj();

	void Create(const TArray<struct FVector>& SplinePoints, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& Temp_struct_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, int32 CallFunc_FCeil_ReturnValue, TArray<class USplineMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class USplineMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable_2, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FVector& CallFunc_GetTangentAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetTangentAtSplinePoint_ReturnValue_1, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue_1, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2);
	void UserConstructionScript();
};

}


