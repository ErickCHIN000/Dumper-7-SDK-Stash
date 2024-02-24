#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0xEC - 0xD9)
// BlueprintGeneratedClass Rune_OnLastChance.Rune_OnLastChance_C
class URune_OnLastChance_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_8AA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DeltaMultiplier;                                   // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_OnLastChance_C* GetDefaultObj();

	void LastChanceEffect_Disable(bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetChance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetChance_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	void LastChanceEffect_Enable(float CallFunc_GetChance_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetChance_ReturnValue_1, float CallFunc_GetXValue_ReturnValue, float CallFunc_GetChance_ReturnValue_2, float CallFunc_GetChanceForTier_ReturnValue, float CallFunc_GetChance_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetChance_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess);
	float GetXValue(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetChance(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Enable();
	void OnLastChance();
	void Rune_Disable();
	void ExecuteUbergraph_Rune_OnLastChance(int32 EntryPoint);
};

}


