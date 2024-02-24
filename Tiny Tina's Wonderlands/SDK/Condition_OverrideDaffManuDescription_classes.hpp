#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x90 - 0x88)
// BlueprintGeneratedClass Condition_OverrideDaffManuDescription.Condition_OverrideDaffManuDescription_C
class UCondition_OverrideDaffManuDescription_C : public UGbxCondition_Blueprint
{
public:
	float                                        ManuOverride;                                      // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DaffManuOverride;                                  // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCondition_OverrideDaffManuDescription_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ABPWeap_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_Base_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
};

}


