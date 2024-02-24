#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x34 - 0x30)
// BlueprintGeneratedClass Init_Gun_Splat_Damage.Init_Gun_Splat_Damage_C
class UInit_Gun_Splat_Damage_C : public UAttributeInitializer
{
public:
	float                                        SplatScalar;                                       // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInit_Gun_Splat_Damage_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


