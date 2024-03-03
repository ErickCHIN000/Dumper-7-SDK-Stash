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

// 0x158 (0x158 - 0x0)
// UserDefinedStruct s_quest_data.s_quest_data
struct FS_quest_data
{
public:
	struct FS_quest_condition                    Quest_condition_49_7E02C5AD437EC171310DD799A7B522CC; // 0x0(0x48)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_quest_info                         Quest_info_46_5972944C4AAF75EFA24E698BA812FE07;    // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest_name_7_F4CC1AD5493EDD7C98298BA85DDE1BED;     // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest_description_9_DFBBB7384E270671CC12D7BB315F64D7; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest_objective_12_EE94DDDB4E739859CD84028E5FAFE299; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_quest_type                   Quest_type_24_B09200154B988E1339620A8D6D997F8B;    // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1213[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Quest_notify_34_DBB70ADD45DD3E6625617D96F129F3CA;  // 0x78(0x10)(Edit, BlueprintVisible)
	struct FS_quest_event                        Quest_event_39_136ACF674B65623AB6578CA51FE8F0F3;   // 0x88(0x25)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1222[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_quest_result                       Quest_result_27_589827F34AC3DCB7F0099BBF801DCADF;  // 0xB0(0xA8)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


