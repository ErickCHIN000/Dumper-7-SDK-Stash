#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x240 - 0x238)
// BlueprintGeneratedClass Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C
class UChallenge_Mission_Side_Main_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UChallenge_Mission_Side_Main_C* GetDefaultObj();

	void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
	void ExecuteUbergraph_Challenge_Mission_Side_Main(int32 EntryPoint, class AGbxPlayerController* K2Node_Event_CompletedPlayer);
};

}


