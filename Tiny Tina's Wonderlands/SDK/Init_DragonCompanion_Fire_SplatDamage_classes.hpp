#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_DragonCompanion_Fire_SplatDamage.Init_DragonCompanion_Fire_SplatDamage_C
class UInit_DragonCompanion_Fire_SplatDamage_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 FireBoltDamageCalc;                                // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_DragonCompanion_Fire_SplatDamage_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


