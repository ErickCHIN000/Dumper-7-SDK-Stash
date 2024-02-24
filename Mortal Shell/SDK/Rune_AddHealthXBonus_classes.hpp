#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xE8 - 0xD9)
// BlueprintGeneratedClass Rune_AddHealthXBonus.Rune_AddHealthXBonus_C
class URune_AddHealthXBonus_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_2313[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class URune_AddHealthXBonus_C* GetDefaultObj();

	void Rune_Enable();
	void Rune_Disable();
	void ExecuteUbergraph_Rune_AddHealthXBonus(int32 EntryPoint, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


