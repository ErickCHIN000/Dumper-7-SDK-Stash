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

// 0x188 (0x188 - 0x0)
// UserDefinedStruct s_quest_objective_data.s_quest_objective_data
struct FS_quest_objective_data
{
public:
	struct FS_quest_condition                    Objective_condition_63_29A6942B4E5815BB316BD9BA2220CD56; // 0x0(0x48)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                  Objective_name_7_A44E8C9041A9ED9D9307A4A0739B0992; // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Objective_description_9_B506E65748F4C98C00F36D961662AF4D; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_objective_mode               Objective_mode_44_702B24434BA8730E8571B7BFB9A17E12; // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Sub_objective_list_48_92628BB44292C456D7AFC4980430A1A7; // 0x60(0x10)(Edit, BlueprintVisible)
	struct FS_quest_marker                       Marker_info_51_242F5B3C4B841339F215389E196F76E5;   // 0x70(0xD)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_quest_event                        Objective_event_57_6C79691C4D063BB8FB51B4A31FEF97F8; // 0x80(0x25)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_20E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_quest_objective_result             Objective_result_21_8D001E174E0E75B7010701A1879CA8C2; // 0xA8(0xC0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_quest_objective_dynamic            Objective_dynamic_36_2E72E27A43E1FD7F6C35A480D967F653; // 0x168(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


