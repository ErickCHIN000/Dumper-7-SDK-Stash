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

// 0xE8 (0xE8 - 0x0)
// UserDefinedStruct s_dlg_reply_entry.s_dlg_reply_entry
struct FS_dlg_reply_entry
{
public:
	struct FS_dlg_reply_info                     Reply_base_59_5A76127549E170FDB09774909A66B83E;    // 0x0(0xD4)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_1563[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_dlg_reply_info>             Sub_replies_58_5CA44D814A1131595D6853858DB2316D;   // 0xD8(0x10)(Edit, BlueprintVisible)
};

}


