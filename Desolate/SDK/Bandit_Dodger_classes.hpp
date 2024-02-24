#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1408 - 0x1400)
// BlueprintGeneratedClass Bandit_Dodger.Bandit_Dodger_C
class ABandit_Dodger_C : public ABandit_BaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1400(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABandit_Dodger_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Bandit_Dodger(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


