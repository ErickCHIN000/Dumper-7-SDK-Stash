#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_Kotc21_SplatDamage.Init_Kotc21_SplatDamage_C
class UInit_Kotc21_SplatDamage_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 Kotc21DamageCalcRow;                               // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Kotc21_SplatDamage_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetDataTableValueFromHandle_ReturnValue);
};

}


