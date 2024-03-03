#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass T_IsStatBelow.T_IsStatBelow_C
class UT_IsStatBelow_C : public UBTDecorator_BlueprintBase
{
public:
	enum class E_StatType                        Stat;                                              // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_226[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Percent;                                           // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UT_IsStatBelow_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class UExtendedStatComponent_C* L_StatComponent, float CallFunc_GetMaxValue_Value, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCurrentValue_CurrentValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UExtendedStatComponent_C* CallFunc_GetExtendedStatComponent_Comp, bool CallFunc_Less_FloatFloat_ReturnValue);
};

}


