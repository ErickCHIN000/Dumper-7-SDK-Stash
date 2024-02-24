#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_InsightRing_StackCount.Init_InsightRing_StackCount_C
class UInit_InsightRing_StackCount_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 DmgPerStackHandle;                                 // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_InsightRing_StackCount_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, int32 StatusCount, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


