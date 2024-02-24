#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x64 - 0x60)
// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Dormancy.BP_IcarusGOAPMotivation_Dormancy_C
class UBP_IcarusGOAPMotivation_Dormancy_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
	float                                        DeltaCost;                                         // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPMotivation_Dormancy_C* GetDefaultObj();

	bool UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, int32 UpdateRatePerMinute, int32 RetreatThreshold, float LastRetreatHealth, class FName RetreatLocationKey, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UIcarusStatContainer* CallFunc_GetAIStatContainer_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Fraction_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


