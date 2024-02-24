#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x8C - 0x88)
// BlueprintGeneratedClass Condition_IsAboveHealthPercent.Condition_IsAboveHealthPercent_C
class UCondition_IsAboveHealthPercent_C : public UGbxCondition_Blueprint
{
public:
	float                                        HealthPercentage;                                  // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCondition_IsAboveHealthPercent_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, bool UsesPools, float MaxHealth, float CurrentHealth, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, float CallFunc_GetCurrentHealthPercent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UGameResourceData* Temp_object_Variable, class UGameResourceData* Temp_object_Variable1, class UGameResourceData* Temp_object_Variable2, int32 Temp_int_Variable1, class UGameResourceData* K2Node_Select_Default, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1);
};

}


