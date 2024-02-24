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

// 0x38 (0x38 - 0x0)
// UserDefinedStruct S_ReplicatedContainerInfo.S_ReplicatedContainerInfo
struct FS_ReplicatedContainerInfo
{
public:
	int32                                        ReplicationUID_2_EB27D09649B6E02591DCA98708B06332; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InContainerUID_19_D1504ED7438699C73EA046AD734E79BF; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Columns_4_1D84448048078D988999ABA138CE1809;        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Rows_6_78B4BC5B449017D63758E79844375AE9;           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ContainerIndex_22_9A211B86466A9D1C57E1FC839A5B0896; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1608[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_ContainerSlots>             ContainerSlots_13_97B5C4324E23EC5C1D899EA59CCDD3AC; // 0x18(0x10)(Edit, BlueprintVisible, SaveGame)
	TArray<struct FContainerPickupsInfo>         ContainerItems_16_16E3D87B4C0AC5D6C9C861B96B5ABA8B; // 0x28(0x10)(Edit, BlueprintVisible, SaveGame, ContainsInstancedReference)
};

}


