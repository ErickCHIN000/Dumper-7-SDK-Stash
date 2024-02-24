#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7 (0x8F - 0x88)
// BlueprintGeneratedClass Condition_CoV_RepairStyle.Condition_CoV_RepairStyle_C
class UCondition_CoV_RepairStyle_C : public UGbxCondition_Blueprint
{
public:
	int32                                        RepairStyle;                                       // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        StarterType;                                       // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        BarrelType;                                        // 0x8D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseBarrel_;                                        // 0x8E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCondition_CoV_RepairStyle_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ABPWeap_COV_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_COV_Base_Weapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetRepairStyle_Param, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


