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

// 0x90 (0x90 - 0x0)
// UserDefinedStruct ContainerPickupsInfo.ContainerPickupsInfo
struct FContainerPickupsInfo
{
public:
	int32                                        UniqueServerID_17_C49AE0DA449ACAE3BE4633A263303B68; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsContainer_14_0198F62E4F1B93DD8B4D6E92B7E3EA45;   // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ContainerDimension_28_232D13A9468B596AE3CE01B69CB32CD6; // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRepItemInfo                          ItemInfo_25_937A083B4BD3D9B590E0A69C76A4F6F7;      // 0x18(0x50)(Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash)
	int32                                        ContainerMotherID_12_33D59C5047C31FF0367835AAF5ABE05D; // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SlotIndex_6_8ED1F34A4AF1D565616883B80192E3DD;      // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotated_9_3CFE5D9342A81FB1FF17DEB7B491CE56;        // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InContainerIndex_31_A61F5C3A47C8E761BA5CF0ADA1DF9FDE; // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PickupRef_20_A3E97763428AC84AF4DBB8A56CFAC657;     // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, SaveGame, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_SubContainerInfo>           SubContainers_35_9B8F8C174A191BE2B5DAE19C1EB3FAAE; // 0x80(0x10)(Edit, BlueprintVisible, SaveGame)
};

}


