#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5 (0x8D - 0x88)
// BlueprintGeneratedClass Condition_ScopeEmitterEnabledRarity.Condition_ScopeEmitterEnabledRarity_C
class UCondition_ScopeEmitterEnabledRarity_C : public UGbxCondition_Blueprint
{
public:
	bool                                         Common;                                            // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Uncommon;                                          // 0x89(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Rare;                                              // 0x8A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Epic;                                              // 0x8B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AboveEpic;                                         // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCondition_ScopeEmitterEnabledRarity_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AWeapon* CallFunc_GetWeapon_ReturnValue, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, class UInventoryRarityData* CallFunc_GetInventoryRarityData_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue7);
};

}


