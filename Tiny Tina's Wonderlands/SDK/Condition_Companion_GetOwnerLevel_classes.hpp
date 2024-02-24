#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xB8 - 0x88)
// BlueprintGeneratedClass Condition_Companion_GetOwnerLevel.Condition_Companion_GetOwnerLevel_C
class UCondition_Companion_GetOwnerLevel_C : public UGbxCondition_Blueprint
{
public:
	struct FDataTableValueHandle                 Method;                                            // 0x88(0x18)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableValueHandle                 Level;                                             // 0xA0(0x18)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UCondition_Companion_GetOwnerLevel_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, enum class ECompare LocalMethod, int32 LocalLevel, int32 MyLevel, enum class ECompare Temp_byte_Variable, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, enum class ECompare Temp_byte_Variable1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, enum class ECompare Temp_byte_Variable2, int32 CallFunc_FTrunc_ReturnValue, enum class ECompare Temp_byte_Variable3, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_FTrunc_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue2, enum class ECompare Temp_byte_Variable4, enum class ECompare Temp_byte_Variable5, int32 Temp_int_Variable, enum class ECompare K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


