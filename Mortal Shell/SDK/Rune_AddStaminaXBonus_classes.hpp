#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xE8 - 0xD9)
// BlueprintGeneratedClass Rune_AddStaminaXBonus.Rune_AddStaminaXBonus_C
class URune_AddStaminaXBonus_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_A1F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class URune_AddStaminaXBonus_C* GetDefaultObj();

	void Rune_Enable();
	void Rune_Disable();
	void ExecuteUbergraph_Rune_AddStaminaXBonus(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


