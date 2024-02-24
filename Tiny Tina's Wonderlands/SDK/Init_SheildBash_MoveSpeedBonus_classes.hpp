#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_SheildBash_MoveSpeedBonus.Init_SheildBash_MoveSpeedBonus_C
class UInit_SheildBash_MoveSpeedBonus_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 MoveSpeedBonusHandle;                              // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_SheildBash_MoveSpeedBonus_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}


