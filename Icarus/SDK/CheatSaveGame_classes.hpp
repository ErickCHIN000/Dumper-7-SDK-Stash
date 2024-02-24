#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// BlueprintGeneratedClass CheatSaveGame.CheatSaveGame_C
class UCheatSaveGame_C : public USaveGame
{
public:
	TArray<struct FSerializedGrid>               Grids;                                             // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FString                                SaveName;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FSerializedActorWithInventories> SerializedActorsWithInventories;                   // 0x48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCheatSaveGame_C* GetDefaultObj();

};

}


