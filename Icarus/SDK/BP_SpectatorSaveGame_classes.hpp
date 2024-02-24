#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x298 (0x2C0 - 0x28)
// BlueprintGeneratedClass BP_SpectatorSaveGame.BP_SpectatorSaveGame_C
class UBP_SpectatorSaveGame_C : public USaveGame
{
public:
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset1;                                           // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset2;                                           // 0x78(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset3;                                           // 0xC8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset5;                                           // 0x118(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset4;                                           // 0x168(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset6;                                           // 0x1B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset7;                                           // 0x208(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset8;                                           // 0x258(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	int32                                        Index;                                             // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          PresetNames;                                       // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)

	static class UClass* StaticClass();
	static class UBP_SpectatorSaveGame_C* GetDefaultObj();

	void SetPresetName(class FText PresetName, int32 Index, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	class FText GetPresetName(int32 Index, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Array_Get_Item);
	void SetPreset(int32 Index, TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset, bool K2Node_SwitchInteger_CmpSuccess);
	TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> GetPreset(int32 Index, int32 Temp_int_Variable, TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> K2Node_Select_Default);
};

}


