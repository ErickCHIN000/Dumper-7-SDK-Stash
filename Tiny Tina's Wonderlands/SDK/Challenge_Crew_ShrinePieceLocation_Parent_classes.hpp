#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x368 - 0x359)
// BlueprintGeneratedClass Challenge_Crew_ShrinePieceLocation_Parent.Challenge_Crew_ShrinePieceLocation_Parent_C
class UChallenge_Crew_ShrinePieceLocation_Parent_C : public UChallenge_Crew_Daffodil_C
{
public:
	uint8                                        Pad_10E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UChallenge_Crew_ShrinePieceLocation_Parent_C* GetDefaultObj();

	void ExecuteUbergraph_Challenge_Crew_ShrinePieceLocation_Parent(int32 EntryPoint);
};

}


