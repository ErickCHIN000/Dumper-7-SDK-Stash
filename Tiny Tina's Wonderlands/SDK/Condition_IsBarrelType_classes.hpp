#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x8C - 0x88)
// BlueprintGeneratedClass Condition_IsBarrelType.Condition_IsBarrelType_C
class UCondition_IsBarrelType_C : public UGbxCondition_Blueprint
{
public:
	int32                                        BarrelTypeToCompare;                               // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCondition_IsBarrelType_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


