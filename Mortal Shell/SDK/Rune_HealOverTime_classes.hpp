#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0xF4 - 0xD9)
// BlueprintGeneratedClass Rune_HealOverTime.Rune_HealOverTime_C
class URune_HealOverTime_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_1ECE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          Timer_Heal;                                        // 0xE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHealthToRefill;                                 // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_HealOverTime_C* GetDefaultObj();

	float GetMaxHealthRecharge(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Enable();
	void Rune_Disable();
	void HealOverTime();
	void ExecuteUbergraph_Rune_HealOverTime(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetMaxHealthRecharge_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
};

}


