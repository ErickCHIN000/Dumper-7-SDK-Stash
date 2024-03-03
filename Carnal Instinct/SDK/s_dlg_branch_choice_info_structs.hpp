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

// 0x114 (0x114 - 0x0)
// UserDefinedStruct s_dlg_branch_choice_info.s_dlg_branch_choice_info
struct FS_dlg_branch_choice_info
{
public:
	struct FS_dlg_condition                      Choice_condition_53_5B82292042042E6A93DD34B4C4E53D81; // 0x0(0x48)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                  Choice_id_2_8F4B38D44B6F2145D5B842B6DA8C90A8;      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Choice_line_34_C0858C974B7D6937004E81A5103A9E3A;   // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_choice_type              Choice_type_47_72E72CBE4B22B8CEE0F056BCA76544A5;   // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_choice_status            Choice_status_50_C836D1764CD194829FC662BB4B23A422; // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_choice_settings                Choice_settings_56_BF1BFB9842CBEA775F619298E7DC0A59; // 0x5C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_reply                   Reply_info_39_AB1155874277AA63E92EC8B4A3172628;    // 0x68(0xA0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_widget_choice                  Widget_info_37_5C8427FF4A09615B823E4CBDBD2A0DAD;   // 0x108(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


