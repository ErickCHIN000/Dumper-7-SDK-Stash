#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C
class UBPF_AudioFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPF_AudioFunctionLibrary_C* GetDefaultObj();

	void GetDistanceFromEmitterToListener(class UWwiseAudioComponent* AudioComponent, class UObject* __WorldContext, float* RTPCValue, float CallFunc_GetMaxAttenuationRadius_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetClosestListenerLocation_ClosestLocation, bool CallFunc_GetClosestListenerLocation_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void SetRandomVariation(class UWwiseAudioComponent* TargetWwiseComponent, class UObject* __WorldContext, float CallFunc_RandomFloat_ReturnValue);
	void GetDistanceBetweenVectors(const struct FVector& Vector_1, const struct FVector& Vector_2, class UObject* __WorldContext, float* Distance, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Square_ReturnValue, float CallFunc_Square_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Square_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Sqrt_ReturnValue);
};

}


