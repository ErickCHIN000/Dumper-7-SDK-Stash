#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass Init_PracticalFocus_CritChanceScalar.Init_PracticalFocus_CritChanceScalar_C
class UInit_PracticalFocus_CritChanceScalar_C : public UAttributeInitializer
{
public:
	struct FDataTableRowHandle                   ScalarHandle;                                      // 0x30(0x10)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_PracticalFocus_CritChanceScalar_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueFromAttributeDefinedRow_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


