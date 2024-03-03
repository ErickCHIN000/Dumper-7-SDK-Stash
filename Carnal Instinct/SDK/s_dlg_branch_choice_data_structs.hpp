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

// 0x1B8 (0x1B8 - 0x0)
// UserDefinedStruct s_dlg_branch_choice_data.s_dlg_branch_choice_data
struct FS_dlg_branch_choice_data
{
public:
	struct FS_dlg_cinematic_info                 Cinematic_info_49_59F931EC4A742438FD7CB5AF9CA3989F; // 0x0(0x28)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FS_dlg_camera_info                    Camera_info_61_F913CF6F4FE280E119FE619703021697;   // 0x28(0x40)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_shared                         Shared_start_72_5CBEB8A646C88D18F5B3AABF74231E2F;  // 0x68(0x40)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_shared                         Shared_end_73_2D93F3C54D5889777325259ECD7DCEE1;    // 0xA8(0x40)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_branch_choice_settings         Choice_settings_71_3F1DD59743755D70D96B74B76F06F893; // 0xE8(0xB0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FS_dlg_widget_info>            Widgets_info_70_07B28BE2406CB9FA35F07A9C71C3A9B4;  // 0x198(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_dlg_branch_choice_info>     Choice_list_45_D93917C347B3C2E3D25BD699DA5033BF;   // 0x1A8(0x10)(Edit, BlueprintVisible)
};

}


