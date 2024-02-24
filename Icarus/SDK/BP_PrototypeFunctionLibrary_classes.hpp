#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_PrototypeFunctionLibrary.BP_PrototypeFunctionLibrary_C
class UBP_PrototypeFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_PrototypeFunctionLibrary_C* GetDefaultObj();

	void DebugLineText(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& Color, float Duration, float Thickness, const class FString& Text, class UObject* __WorldContext, bool Temp_bool_Variable, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float K2Node_Select_Default);
	void DebugSphereText(const struct FVector& Center, float Radius, int32 Segments, const struct FLinearColor& Color, float Duration, float Thickness, const class FString& Text, class UObject* __WorldContext, bool Temp_bool_Variable, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void GetSplineDistanceAtLocation(class USplineComponent* Spline, const struct FVector& Location, class UObject* __WorldContext, float* Distance, float CallFunc_FindInputKeyClosestToWorldLocation_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1);
};

}


