#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA0 - 0x88)
// BlueprintGeneratedClass Condition_IsCompanionWithinDistanceOfOwner.Condition_IsCompanionWithinDistanceOfOwner_C
class UCondition_IsCompanionWithinDistanceOfOwner_C : public UGbxCondition_Blueprint
{
public:
	struct FDataTableValueHandle                 MaxDistanceHandle;                                 // 0x88(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UCondition_IsCompanionWithinDistanceOfOwner_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}


