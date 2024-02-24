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

// 0x148 (0x148 - 0x0)
// UserDefinedStruct S_SpawningData.S_SpawningData
struct FS_SpawningData
{
public:
	TArray<TSoftClassPtr<class ABP_CreatureBase_C>> DefaultCreatureClasses_31_69C2283C4871D391730C1C9D84F6B848; // 0x0(0x10)(Edit, BlueprintVisible)
	TMap<TSoftClassPtr<class ABP_CreatureBase_C>, int32> RequiredCreatureClasses_30_DBFA596246815AE5E43CC69579759C42; // 0x10(0x50)(Edit, BlueprintVisible)
	int32                                        MinCreatures_5_0305A4144000840E715085BDF2E4B432;   // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxCreatures_7_47E4D7EA453EF54430D66A8E668AB15C;   // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseReserveCreatures_38_79206B37467E52505DF78AB74A0C1743; // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutomaticSpawn_13_4AE8B6D946096A2DA6BC2ABA083DB9E7; // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59EC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutomaticSpawnDelay_35_4E0D58CC4A7AAE3DB2CEF5BA369F33E2; // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyWhenAllCreaturesDestroyed_41_C1D2E9524003FC112F73109D8915FEA6; // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UClass*, struct FS_CreatureWeaponOverride> WeaponOverrides_46_C2C8B8DF48EA8722D60925B931C722E0; // 0x78(0x50)(Edit, BlueprintVisible)
	TArray<struct FS_SpawnerCreatureGrant>       CreatureGrants_50_375F5230459FBBA071C87BBF24796D0C; // 0xC8(0x10)(Edit, BlueprintVisible)
	class UEnvQuery*                             SpawningQuery_53_86A4AE14435DD2B9B7B356B3E6DC5457; // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, float>                     CustomValueMap_59_95BE62E544EBC9789914419F1BD6C6D7; // 0xE0(0x50)(Edit, BlueprintVisible)
	float                                        SpawnerTimeout_62_4B1F188246067A4DD7FF7D98A041864B; // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           CustomRowHandles_67_146282CE47B05A9598AE639F36AB35FF; // 0x138(0x10)(Edit, BlueprintVisible)
};

}


