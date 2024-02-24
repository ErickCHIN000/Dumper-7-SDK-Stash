#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x90 - 0x81)
// BlueprintGeneratedClass IEft_HealOnDmgBlock.IEft_HealOnDmgBlock_C
class UIEft_HealOnDmgBlock_C : public UBPItemEffectDmgBlockedBase_C
{
public:
	uint8                                        Pad_FF0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UIEft_HealOnDmgBlock_C* GetDefaultObj();

	void OnDamageBlocked(class AActor* SourceActor, float Amount);
	void ExecuteUbergraph_IEft_HealOnDmgBlock(int32 EntryPoint, float CallFunc_SelectFloat_ReturnValue, class AActor* K2Node_Event_SourceActor, float K2Node_Event_Amount, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


