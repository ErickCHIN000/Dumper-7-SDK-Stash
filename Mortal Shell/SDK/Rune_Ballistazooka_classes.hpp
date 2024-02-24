#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xE8 - 0xD9)
// BlueprintGeneratedClass Rune_Ballistazooka.Rune_Ballistazooka_C
class URune_Ballistazooka_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_2518[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class URune_Ballistazooka_C* GetDefaultObj();

	float GetXValue(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetX_Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Disable();
	void Rune_Enable();
	void ExecuteUbergraph_Rune_Ballistazooka(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetX_Value_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_GetX_Value_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, float CallFunc_GetX_Value_ReturnValue_2, float CallFunc_GetX_Value_ReturnValue_3, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetXValue_ReturnValue, bool K2Node_SwitchName_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, float CallFunc_GetX_Value_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, float CallFunc_GetXValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, float CallFunc_GetX_Value_ReturnValue_5, float CallFunc_GetXValue_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, float CallFunc_GetX_Value_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_18, float CallFunc_GetXValue_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_19);
};

}


