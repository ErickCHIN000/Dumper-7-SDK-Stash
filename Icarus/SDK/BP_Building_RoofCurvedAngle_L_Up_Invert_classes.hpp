#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xBE0 - 0xBE0)
// BlueprintGeneratedClass BP_Building_RoofCurvedAngle_L_Up_Invert.BP_Building_RoofCurvedAngle_L_Up_Invert_C
class ABP_Building_RoofCurvedAngle_L_Up_Invert_C : public ABP_Building_InvRoofCorner_C
{
public:

	static class UClass* StaticClass();
	static class ABP_Building_RoofCurvedAngle_L_Up_Invert_C* GetDefaultObj();

	void GetBlockingBypass(class UClass* BuildingClass, TArray<struct FVectorPair>& BlockingPreRotate, const struct FTransform& GridSpaceTransform, TArray<struct FVectorPair>* BypassBlocking, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVectorPair& K2Node_MakeStruct_VectorPair, const struct FRotator& CallFunc_MakeRotator_ReturnValue, TArray<struct FVectorPair>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, TArray<struct FVectorPair>& CallFunc_GetBlockingBypass_BypassBlocking, TArray<struct FVectorPair>& K2Node_MakeArray_Array_1, bool CallFunc_ClassIsChildOf_ReturnValue);
};

}


