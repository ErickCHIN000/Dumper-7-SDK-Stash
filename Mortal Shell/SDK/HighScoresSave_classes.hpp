#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass HighScoresSave.HighScoresSave_C
class UHighScoresSave_C : public USaveGame
{
public:
	TArray<struct FHighScoreStruct>              HighScores;                                        // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHighScoresSave_C* GetDefaultObj();

};

}


