#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x120 - 0x28)
// BlueprintGeneratedClass MapState.MapState_C
class UMapState_C : public USaveGame
{
public:
	TMap<class FName, struct FMapSaveState>      AllMapSaveStates;                                  // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FMapSaveState>      AllMapSaveStates_StormMode;                        // 0x78(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, float>                     RespawningItems;                                   // 0xC8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimespan                             RespawningItems_TimeSpan;                          // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMapState_C* GetDefaultObj();

};

}


