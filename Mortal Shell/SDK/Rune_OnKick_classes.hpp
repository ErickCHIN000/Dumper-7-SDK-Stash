#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xE8 - 0xD9)
// BlueprintGeneratedClass Rune_OnKick.Rune_OnKick_C
class URune_OnKick_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_F05[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class URune_OnKick_C* GetDefaultObj();

	float GetXValue(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetX_Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Enable();
	void Rune_Disable();
	void ExecuteUbergraph_Rune_OnKick(int32 EntryPoint, float CallFunc_GetX_Value_ReturnValue, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetXValue_ReturnValue, bool K2Node_SwitchName_CmpSuccess_1, float CallFunc_GetX_Value_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetXValue_ReturnValue_1);
};

}


