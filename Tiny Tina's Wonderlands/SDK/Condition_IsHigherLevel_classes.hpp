#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass Condition_IsHigherLevel.Condition_IsHigherLevel_C
class UCondition_IsHigherLevel_C : public UGbxCondition_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UCondition_IsHigherLevel_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_DynamicCast_AsActor1, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_GetEffectiveLevelDifference_OutLevelDifference, bool CallFunc_GetEffectiveLevelDifference_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


