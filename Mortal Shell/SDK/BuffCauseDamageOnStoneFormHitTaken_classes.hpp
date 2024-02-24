#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x48 - 0x3B)
// BlueprintGeneratedClass BuffCauseDamageOnStoneFormHitTaken.BuffCauseDamageOnStoneFormHitTaken_C
class UBuffCauseDamageOnStoneFormHitTaken_C : public UBuffObject_C
{
public:
	uint8                                        Pad_2CA8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBuffCauseDamageOnStoneFormHitTaken_C* GetDefaultObj();

	void OnBuffStart();
	void OnBuffEnd(bool bInterrupted);
	void OnLeftStoneForm();
	void OnDmgBlocked(class AActor* SourceActor, float Amount);
	void ExecuteUbergraph_BuffCauseDamageOnStoneFormHitTaken(int32 EntryPoint, class AActor* K2Node_CustomEvent_SourceActor, float K2Node_CustomEvent_Amount, float CallFunc_Multiply_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_bInterrupted, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base_1, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, float CallFunc_ApplyDamage_ReturnValue);
};

}


