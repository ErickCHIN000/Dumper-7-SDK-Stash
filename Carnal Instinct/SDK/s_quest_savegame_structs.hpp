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

// 0x1A0 (0x1A0 - 0x0)
// UserDefinedStruct s_quest_savegame.s_quest_savegame
struct FS_quest_savegame
{
public:
	bool                                         Quest_active_24_FC9E239D44E95D7A25DC4889FEA1AAEE;  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_526[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Quest_unique_id_5_4FEC4D9142927F903338519E5C9B6CE8; // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest_data_id_4_C1F573464F7E898B33BC539DB65A9CB5;  // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_quest_result                 Quest_status_8_5A4640C14F28E5430B90B1ABA4735A26;   // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_quest_data                         Quest_data_11_99E98F0444C4B937C7D613A798A826FD;    // 0x18(0x158)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                          Description_list_15_50A66CF6418587D7B817C09C5B84E239; // 0x170(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          Objective_list_17_D6B866824A2B6535F26FC088AF274CB5; // 0x180(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_quest_objective_data>       Objective_data_20_5B0AE56E452625E20894D58DD330A5BE; // 0x190(0x10)(Edit, BlueprintVisible)
};

}


