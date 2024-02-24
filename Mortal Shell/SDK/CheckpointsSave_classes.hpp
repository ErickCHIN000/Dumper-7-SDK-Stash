#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x188 - 0x28)
// BlueprintGeneratedClass CheckpointsSave.CheckpointsSave_C
class UCheckpointsSave_C : public USaveGame
{
public:
	TMap<class FName, class FName>               Checkpoints;                                       // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               DeathStatueLocation;                               // 0x78(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EssencesOnLastDeath;                               // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       ArmorOnDeath;                                      // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2109[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DeathStatueLevelName;                              // 0x8C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_210C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseSnapshot                         PlayerPoseOnDeath;                                 // 0x98(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class Enum_ShellDye                     DyeOnDeath;                                        // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2116[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_StormModeCheckpointSave       StormModeCheckpoint;                               // 0xD8(0xA9)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2118[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCheckpointsSave_C* GetDefaultObj();

};

}


