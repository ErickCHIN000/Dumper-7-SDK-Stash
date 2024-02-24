#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_Melee_FrozenMultiplier.Init_Melee_FrozenMultiplier_C
class UInit_Melee_FrozenMultiplier_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 FrozenDamageMultiplierHandle;                      // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Melee_FrozenMultiplier_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


