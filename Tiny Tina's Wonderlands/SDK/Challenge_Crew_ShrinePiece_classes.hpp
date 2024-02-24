#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x370 - 0x359)
// BlueprintGeneratedClass Challenge_Crew_ShrinePiece.Challenge_Crew_ShrinePiece_C
class UChallenge_Crew_ShrinePiece_C : public UChallenge_Crew_Daffodil_C
{
public:
	uint8                                        Pad_1800[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	class UClass*                                ChallengeToComplete;                               // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UChallenge_Crew_ShrinePiece_C* GetDefaultObj();

	void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
	void ExecuteUbergraph_Challenge_Crew_ShrinePiece(int32 EntryPoint, class AGbxPlayerController* K2Node_Event_CompletedPlayer, bool CallFunc_IsValidClass_ReturnValue);
};

}


