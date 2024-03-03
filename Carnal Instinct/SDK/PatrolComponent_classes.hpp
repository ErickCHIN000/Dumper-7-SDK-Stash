#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0xBD - 0xB0)
// BlueprintGeneratedClass PatrolComponent.PatrolComponent_C
class UPatrolComponent_C : public UActorComponent
{
public:
	class ABP_PatrolPath_C*                      PatrolPath;                                        // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PointIndex;                                        // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReverseDirection;                                  // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPatrolComponent_C* GetDefaultObj();

	int32 GetLastSplineIndex(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void IsPatrolPathValid(bool* Result, bool CallFunc_IsValid_ReturnValue);
	struct FVector GetSplinePointLocation(int32 PointIndex, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue);
	void UpdatePatrolIndex(int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsClosedLoop_ReturnValue, bool CallFunc_IsClosedLoop_ReturnValue_1, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1);
};

}


