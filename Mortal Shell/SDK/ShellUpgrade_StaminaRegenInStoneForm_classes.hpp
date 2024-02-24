#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x51 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_StaminaRegenInStoneForm.ShellUpgrade_StaminaRegenInStoneForm_C
class UShellUpgrade_StaminaRegenInStoneForm_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bAdded;                                            // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UShellUpgrade_StaminaRegenInStoneForm_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnStoneFormEnterred();
	void OnStoneFormLeft();
	void ExecuteUbergraph_ShellUpgrade_StaminaRegenInStoneForm(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_3);
};

}


