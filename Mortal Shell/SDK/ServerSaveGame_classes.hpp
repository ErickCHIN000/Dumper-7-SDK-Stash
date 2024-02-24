#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA40 (0xA68 - 0x28)
// BlueprintGeneratedClass ServerSaveGame.ServerSaveGame_C
class UServerSaveGame_C : public USaveGame
{
public:
	uint8                                        Pad_16F2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FServerSaveFile                       SaveGameFile;                                      // 0x30(0x270)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        PermStaminaBuff;                                   // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, bool>                      PermTreasureMap;                                   // 0x2A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          FasTravelWaifus;                                   // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        CurrentSecondaryRiposte;                           // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1700[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Cutscenes_Seen;                                    // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                          Tutorials_Unlocked;                                // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStruct_ShellDyes                     ShellDyes;                                         // 0x330(0x6)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_ShellsDyes_LockState          ShellsDyesLockState;                               // 0x336(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_170B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FName>               HadernShellAbilities;                              // 0x350(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class FText>               HadernShellAbilities_Text;                         // 0x3A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStruct_StormModeSave                 StormModeSaveFile;                                 // 0x3F0(0x458)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1710[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_ShellDyes                     ShellDyes_StormMode;                               // 0x850(0x6)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1717[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_StormModeRun_Data>     StormModeRunData;                                  // 0x858(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FDateTime, struct FStruct_Rune>  StormModeProgressRunes;                            // 0x868(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, int32>                     StormModeUpgrades_RankLvls;                        // 0x8B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, int32>                     DeflectStacks;                                     // 0x908(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, int32>                     RiposteStacks;                                     // 0x958(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, float>                     MU_Progress;                                       // 0x9A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShouldEnableSuperStoneForm;                        // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_172A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     MU_Progress_Tiers;                                 // 0xA00(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          StormModeLoreEntries;                              // 0xA50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  EquippedLute;                                      // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UServerSaveGame_C* GetDefaultObj();

};

}


