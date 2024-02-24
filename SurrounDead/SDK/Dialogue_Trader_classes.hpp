#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x308 - 0x300)
// DialogueBlueprintGeneratedClass Dialogue_Trader.Dialogue_Trader_C
class UDialogue_Trader_C : public UDialogue
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UDialogue_Trader_C* GetDefaultObj();

	void ExecuteUbergraph_Dialogue_Trader(int32 EntryPoint);
};

}


