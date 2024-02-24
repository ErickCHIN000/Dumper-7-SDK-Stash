#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1F0 (0x1F0 - 0x0)
// UserDefinedStruct S_BPSpawnerData.S_BPSpawnerData
struct FS_BPSpawnerData
{
public:
	bool                                         DebugMode_40_293CF6AC48EB22A118BF50A8B7C7CF41;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   AICSpawnerData_5_B7F5017548B3BD002C74CDAB94EAA76B; // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 AddedTags_2_E75DBD2043B4A99E25AAE5BD0DCE3084;      // 0x18(0x20)(Edit, BlueprintVisible)
	struct FS_SpawningData                       Spawning_22_2823F2B64D945B8C7CBE299F4E256506;      // 0x38(0x148)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                        InCombatTimeout_9_EF203C1046B7522ED9F5F4859C6BEFD6; // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DenTag_12_0CF8F3B54C3373DB516187AD41FD3BDD;        // 0x184(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_HomeActorSpawnData>         HomeActors_19_0A8ED87946968440020FC7B4F83A476F;    // 0x190(0x10)(Edit, BlueprintVisible)
	struct FDataTableRowHandle                   UIData_32_B2B931744F13DF1E453EAD95FE07B7E4;        // 0x1A0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_FarCreatureAudioData               AudioData_43_1AF2C7ED4DD61D302D47879C355B1305;     // 0x1B0(0x38)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UNWXSquadConfigData*                   SquadData_54_FCC0791347F04A4008F078A2E2C32C06;     // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}


