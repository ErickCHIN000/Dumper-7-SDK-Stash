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
// UserDefinedStruct s_dlg_conflicts.s_dlg_conflicts
struct FS_dlg_conflicts
{
public:
	int32                                        Conflict_priority_31_A30E532F45232786B3F8628B7C10F0A7; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Ignore_data_25_D612D75F48FC33BE75A96AAEF8157E9B;   // 0x8(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          block_data_26_58F2B9234A4C64C36E554B8E48B7FBDA;    // 0x18(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          Finish_data_27_54C63B3D47D2135EBE8D1AB9D3C09F0D;   // 0x28(0x10)(Edit, BlueprintVisible)
};

}


