#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1400 - 0x13F8)
// BlueprintGeneratedClass NewLight_Dodger.NewLight_Dodger_C
class ANewLight_Dodger_C : public ANewLight_BaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x13F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ANewLight_Dodger_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_NewLight_Dodger(int32 EntryPoint);
};

}


