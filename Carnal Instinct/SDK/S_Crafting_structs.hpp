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

// 0x30 (0x30 - 0x0)
// UserDefinedStruct S_Crafting.S_Crafting
struct FS_Crafting
{
public:
	struct FS_SingleDTItem                       CraftableItem_2_3309B2104225D58CACC352A8D3D8FE34;  // 0x0(0x14)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_152B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_SingleDTItem>               RequiredItems_5_90494C2A4DACABCEA9FA2C97F7DBBC6F;  // 0x18(0x10)(Edit, BlueprintVisible)
	int32                                        RequiredLevel_8_6E5DF89D4EC10EA0DCE052A624483252;  // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GoldCost_12_591CC2AA472F6FD8446FCDAB0EFE441A;      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


