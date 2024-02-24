#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_AkEventDistanceCheck.BPFL_AkEventDistanceCheck_C
class UBPFL_AkEventDistanceCheck_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_AkEventDistanceCheck_C* GetDefaultObj();

	void AkEventDistanceCheck(class USceneComponent* Target, const struct FVector& TargetVector_Optional_, class UAkAudioEvent* AkEvent, double AttenuationScalingFactor, class UObject* __WorldContext, bool* InRange, const struct FVector& TargetLocation, class UAkAudioEvent* AkEventCache, double AttenuationScalingFactorCache, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualExactly_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, float CallFunc_GetMaxAttenuationRadius_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, float CallFunc_GetMaxAttenuationRadius_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


