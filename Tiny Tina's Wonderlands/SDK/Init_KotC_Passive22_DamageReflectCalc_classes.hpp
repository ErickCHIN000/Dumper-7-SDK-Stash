#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x50 - 0x30)
// BlueprintGeneratedClass Init_KotC_Passive22_DamageReflectCalc.Init_KotC_Passive22_DamageReflectCalc_C
class UInit_KotC_Passive22_DamageReflectCalc_C : public UAttributeInitializer
{
public:
	class UGbxAttributeData*                     PassiveAttribute;                                  // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 PassiveScalar;                                     // 0x38(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_KotC_Passive22_DamageReflectCalc_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, float CallFunc_CalculateAttributeInitialValue_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


