#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass GameModeUtilInterface.GameModeUtilInterface_C
class IGameModeUtilInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameModeUtilInterface_C* GetDefaultObj();

	void GameModeUtils_PrevLuteMusic();
	void GameModeUtils_NextLuteMusic();
	bool GameModeUtils_GetArbNameForLevelFromSaveGame(class FName LevelName, class FName ArbName);
	void GameModeUtils_IsAbritraryNameInSet(class FName Name, bool* bIsInSet);
	void GameModeUtils_RemoveAbritraryNameFromChangedSet(class FName Name, bool* bSuccessful);
	void GameModeUtils_AddAbritraryNameToChangedSet(class FName Name);
	void GameModeUtils_ToggleFog();
	void GameModeUtils_SaveMapState();
};

}


