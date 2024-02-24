#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x4C - 0x3B)
// BlueprintGeneratedClass BuffAttackBonusUntilNextHit.BuffAttackBonusUntilNextHit_C
class UBuffAttackBonusUntilNextHit_C : public UBuffObject_C
{
public:
	uint8                                        Pad_2C51[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        AttackDamageAmount;                                // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBuffAttackBonusUntilNextHit_C* GetDefaultObj();

	void OnBuffStart();
	void OnBuffEnd(bool bInterrupted);
	void OnBuffedActorHitsTarget();
	void ExecuteUbergraph_BuffAttackBonusUntilNextHit(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bInterrupted, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


