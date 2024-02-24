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

// 0x20 (0x20 - 0x0)
// UserDefinedStruct S_Color_Table_Master.S_Color_Table_Master
struct FS_Color_Table_Master
{
public:
	int32                                        ColorTablePreset_2_4FEB0430493B9AA982E0899364F2C343; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C76[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRealmPlacementRequirement>    RealmPlacementRequirements_8_2E0F9D694F0121ED5A55DCB4FA14608D; // 0x8(0x10)(Edit, BlueprintVisible)
	class UDataTable*                            DataTable_11_FBED1EBC4E1271E59B11A6B89E62AFB1;     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}


