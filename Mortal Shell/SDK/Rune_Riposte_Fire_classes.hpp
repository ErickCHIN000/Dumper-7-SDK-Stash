#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xE8 - 0xD9)
// BlueprintGeneratedClass Rune_Riposte_Fire.Rune_Riposte_Fire_C
class URune_Riposte_Fire_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_233B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class URune_Riposte_Fire_C* GetDefaultObj();

	void Rune_Disable();
	void Rune_Enable();
	void ExecuteUbergraph_Rune_Riposte_Fire(int32 EntryPoint, float CallFunc_GetChanceForTier_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_SwitchName_CmpSuccess_1, float CallFunc_GetChanceForTier_ReturnValue_1, int32 CallFunc_GetValueForTier_RuneX_1, float CallFunc_GetChanceForTier_ReturnValue_2);
};

}


