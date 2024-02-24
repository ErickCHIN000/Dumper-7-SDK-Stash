#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xE8 - 0xD9)
// BlueprintGeneratedClass Rune_DeductStaminaInsteadOfHP.Rune_DeductStaminaInsteadOfHP_C
class URune_DeductStaminaInsteadOfHP_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_1EB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class URune_DeductStaminaInsteadOfHP_C* GetDefaultObj();

	float GetXValue(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetChance(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Enable();
	void Rune_Disable();
	void ExecuteUbergraph_Rune_DeductStaminaInsteadOfHP(int32 EntryPoint, float CallFunc_GetXValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetChance_ReturnValue, float CallFunc_GetXValue_ReturnValue_1, float CallFunc_GetChance_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
};

}


