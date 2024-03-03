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

// 0x100 (0x100 - 0x0)
// UserDefinedStruct s_dlg_conversation_data.s_dlg_conversation_data
struct FS_dlg_conversation_data
{
public:
	class FName                                  Dlg_initial_branch_8_CE63FFE14C02CC1011591F8233BF46AE; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Dlg_loc_archive_id_36_C10375DD4171167ABF23618D5651C2EC; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Dlg_loc_archive_index_37_EE5AA1CD4CD2344D6C6DAE8633ADAC77; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_conversation_info              Dlg_info_40_CE503A0442D48060D84FE0880F64D018;      // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_branch_settings                Dlg_settings_44_7014967B42ED473CBDFC948B82CC2864;  // 0x30(0x98)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_conflicts                      Dlg_conflicts_43_D9AEAA614888212574CAEF90A4561A9D; // 0xC8(0x38)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


