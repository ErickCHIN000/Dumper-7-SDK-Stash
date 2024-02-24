#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x278 - 0x220)
// BlueprintGeneratedClass BP_PatrollingSpline.BP_PatrollingSpline_C
class ABP_PatrollingSpline_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard_End;                                     // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard_Start;                                   // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      Spline;                                            // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Root;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Distance;                                          // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClosedLoop;                                        // 0x24C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1014[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Spacing;                                           // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SplinePoints;                                      // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       Points;                                            // 0x258(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLinearColor                          Color_Unselected;                                  // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PatrollingSpline_C* GetDefaultObj();

	void SetBillboard_End(int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void SetBillboard_Start(const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void GetAllSplinePoints(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void UserConstructionScript();
	void ResetSpline();
	void ShowPoints();
	void MakePointsLinear();
	void MakePointsCurved();
	void ExecuteUbergraph_BP_PatrollingSpline(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_4, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_5, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
};

}


