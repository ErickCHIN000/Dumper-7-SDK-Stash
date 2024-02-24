#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xE8 - 0xD9)
// BlueprintGeneratedClass Rune_Riposte_Crypt.Rune_Riposte_Crypt_C
class URune_Riposte_Crypt_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_A52[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class URune_Riposte_Crypt_C* GetDefaultObj();

	void Rune_Disable();
	void Rune_Enable();
	void SubOnRiposte();
	void UnsubOnRiposte();
	void OnRipWithType(enum class ERiposteTypes RiposteType, class ABaseCharacter_C* RipostedChar);
	void ExecuteUbergraph_Rune_Riposte_Crypt(int32 EntryPoint, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, float CallFunc_GetChanceForTier_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetChanceForTier_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_GetChanceForTier_ReturnValue_2, int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue, enum class ERiposteTypes K2Node_CustomEvent_RiposteType, class ABaseCharacter_C* K2Node_CustomEvent_RipostedChar, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_2, float CallFunc_RandomFloat_ReturnValue, float CallFunc_GetChanceForTier_ReturnValue_3, int32 CallFunc_GetValueForTier_RuneX_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetChanceForTier_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


