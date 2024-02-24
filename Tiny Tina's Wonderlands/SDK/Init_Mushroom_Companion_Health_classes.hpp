#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x3C - 0x38)
// BlueprintGeneratedClass Init_Mushroom_Companion_Health.Init_Mushroom_Companion_Health_C
class UInit_Mushroom_Companion_Health_C : public UInit_Companion_Health_C
{
public:
	float                                        MushroomHealthScalar;                              // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInit_Mushroom_Companion_Health_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_CalculateAttributeInitialValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


