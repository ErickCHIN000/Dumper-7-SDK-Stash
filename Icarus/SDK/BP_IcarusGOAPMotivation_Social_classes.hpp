#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x68 - 0x60)
// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Social.BP_IcarusGOAPMotivation_Social_C
class UBP_IcarusGOAPMotivation_Social_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
	float                                        IncreasePerSecond;                                 // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delta;                                             // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPMotivation_Social_C* GetDefaultObj();

	bool UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue);
};

}


