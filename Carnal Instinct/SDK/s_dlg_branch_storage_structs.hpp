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

// 0x40 (0x40 - 0x0)
// UserDefinedStruct s_dlg_branch_storage.s_dlg_branch_storage
struct FS_dlg_branch_storage
{
public:
	TArray<class FName>                          Reply_list_3_7FF980674C986E3A539F2DB5428394F1;     // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          Choice_list_5_57B3608A499E96F26FD703A2B8582CCE;    // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_dlg_reply_storage>          Reply_storage_8_5EE8ECA847E0ED83DDA4B7B979B995EA;  // 0x20(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_dlg_choice_storage>         Choice_storage_11_D24002ED49A8F80A85A56BBF023FE1F3; // 0x30(0x10)(Edit, BlueprintVisible)
};

}


