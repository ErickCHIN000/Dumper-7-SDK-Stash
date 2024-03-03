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

// 0xA8 (0xA8 - 0x0)
// UserDefinedStruct s_quest_result.s_quest_result
struct FS_quest_result
{
public:
	struct FS_quest_condition                    Result_condition_29_6ACE4DAB43CA77F7FFE016AE001C9B64; // 0x0(0x48)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                  Success_description_2_B520601A4C0AA2158BE95C83F4C1F392; // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Fail_description_4_AFF875234FCFB10194E7CAA6A10BFF58; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_quest_event                        Success_event_15_09A6725F47AA7FD51489069FB2FB26D7; // 0x58(0x25)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_14F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_quest_event                        Fail_event_16_57114E3C49983571462B3A8771996CC3;    // 0x80(0x25)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_14F6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


