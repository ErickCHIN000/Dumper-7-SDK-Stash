#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x8C - 0x88)
// BlueprintGeneratedClass Condition_PumpAction.Condition_PumpAction_C
class UCondition_PumpAction_C : public UGbxCondition_Blueprint
{
public:
	int32                                        PumpAction_Type;                                   // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCondition_PumpAction_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ABPWeap_Jakobs_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_Jakobs_Base_Weapon, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


