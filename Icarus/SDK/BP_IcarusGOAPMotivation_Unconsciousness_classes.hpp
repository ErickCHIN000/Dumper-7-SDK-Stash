#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x6C - 0x60)
// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Unconsciousness.BP_IcarusGOAPMotivation_Unconsciousness_C
class UBP_IcarusGOAPMotivation_Unconsciousness_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
	int32                                        Count;                                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delta;                                             // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DecreasePerMinute;                                 // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPMotivation_Unconsciousness_C* GetDefaultObj();

	bool UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, bool BeingTranquilized, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, float CallFunc_Abs_ReturnValue, class UIcarusStatContainer* CallFunc_GetAIStatContainer_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_HasModifierState_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Fraction_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
};

}


