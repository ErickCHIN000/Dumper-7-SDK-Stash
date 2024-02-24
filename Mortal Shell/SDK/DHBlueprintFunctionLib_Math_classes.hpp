#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass DHBlueprintFunctionLib_Math.DHBlueprintFunctionLib_Math_C
class UDHBlueprintFunctionLib_Math_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDHBlueprintFunctionLib_Math_C* GetDefaultObj();

	void WrapIndexAround(int32 Number, int32 MaxNumber, class UObject* __WorldContext, int32* Out, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1);
	void DirectionTo2D(class AActor* From, class AActor* To, class UObject* __WorldContext, struct FVector* Dir, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


