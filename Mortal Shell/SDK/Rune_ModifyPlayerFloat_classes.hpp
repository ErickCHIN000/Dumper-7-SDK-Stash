#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0xF4 - 0xD9)
// BlueprintGeneratedClass Rune_ModifyPlayerFloat.Rune_ModifyPlayerFloat_C
class URune_ModifyPlayerFloat_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_1E73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  PlayerFloat;                                       // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaMultiplier;                                   // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_ModifyPlayerFloat_C* GetDefaultObj();

	void RemoveFrozenResistance(float CallFunc_Divide_FloatFloat_ReturnValue);
	void AddFrozenResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void RemoveFireResistance(float CallFunc_Divide_FloatFloat_ReturnValue);
	void AddFireResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void RemoveHeavyAttackResistance(float CallFunc_Divide_FloatFloat_ReturnValue);
	void AddHeavyAttackResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void RemoveFallResistance(float CallFunc_Divide_FloatFloat_ReturnValue);
	void AddFallResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void RemovePoisonResistance(float CallFunc_Divide_FloatFloat_ReturnValue);
	void AddPoisonResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void RemoveHealingRuneEffect(float CallFunc_Multiply_FloatFloat_ReturnValue);
	void AddHealingRuneEffect();
	void RemoveKnockDownResistance(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void AddKnockDownResistance(float CallFunc_Divide_FloatFloat_ReturnValue);
	void Runes_Stat(bool K2Node_SwitchName_CmpSuccess);
	void Runes_Misc_Remove(bool K2Node_SwitchName_CmpSuccess);
	void RemoveFloatSimple(float CallFunc_GetDelta_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void Runes_Misc_Add(bool K2Node_SwitchName_CmpSuccess);
	void Runes_WeaponGeneric(bool K2Node_SwitchName_CmpSuccess);
	void Runes_Harden(bool K2Node_SwitchName_CmpSuccess);
	void Runes_Roll(bool K2Node_SwitchName_CmpSuccess);
	void Runes_Dodge(bool K2Node_SwitchName_CmpSuccess);
	void ModifyFloatSimple(class FName PlayerFloat, float DeltaMultiplier, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_GetDelta_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void RemoveBaseDamageBoost(float CallFunc_Multiply_FloatFloat_ReturnValue);
	void AddBaseDamageBoost();
	void RemoveTarDropBoost(float CallFunc_Multiply_FloatFloat_ReturnValue);
	void AddTarDropBoost();
	void RemoveMovementSpeedBoost(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	void AddMovementSpeedBoost();
	float GetDelta(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Enable();
	void Rune_Disable();
	void ExecuteUbergraph_Rune_ModifyPlayerFloat(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


