#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x798 - 0x790)
// BlueprintGeneratedClass BP_ZombieBossHorde_SmallMilitary.BP_ZombieBossHorde_SmallMilitary_C
class ABP_ZombieBossHorde_SmallMilitary_C : public ABP_ZombieBoss_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ZombieBossHorde_SmallMilitary_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Event_PlayerDead();
	void ExecuteUbergraph_BP_ZombieBossHorde_SmallMilitary(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character);
};

}


