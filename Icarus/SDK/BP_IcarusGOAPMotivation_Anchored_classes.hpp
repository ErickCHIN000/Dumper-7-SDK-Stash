#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x64 - 0x60)
// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Anchored.BP_IcarusGOAPMotivation_Anchored_C
class UBP_IcarusGOAPMotivation_Anchored_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
	float                                        DeltaCostUpdate;                                   // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPMotivation_Anchored_C* GetDefaultObj();

	bool UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, float ReductionPerSecond, class FName AnchorPointKey, float AnchorDistance, const TArray<class AActor*>& NearbyNPCs, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, float CallFunc_Fraction_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Square_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetValueAsObject_ReturnValue, int32 CallFunc_GetStat_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetSquaredDistanceTo_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


