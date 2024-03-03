#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x80 - 0x28)
// BlueprintGeneratedClass Meta_SaveGame.Meta_SaveGame_C
class UMeta_SaveGame_C : public USaveGame
{
public:
	TMap<class FString, struct FS_SaveSlotDetails> SlotNames;                                         // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class E_AutosaveTimer                   AutosaveFrequency;                                 // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SlotSuffix;                                        // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMeta_SaveGame_C* GetDefaultObj();

};

}


