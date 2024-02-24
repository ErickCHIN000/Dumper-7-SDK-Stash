#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x54 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_StoneStompGlimpseBonus.ShellUpgrade_StoneStompGlimpseBonus_C
class UShellUpgrade_StoneStompGlimpseBonus_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Chance;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShellUpgrade_StoneStompGlimpseBonus_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnStoneStompBlast(bool bStarted);
	void ExecuteUbergraph_ShellUpgrade_StoneStompGlimpseBonus(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool K2Node_CustomEvent_bStarted, float K2Node_Select_Default, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


