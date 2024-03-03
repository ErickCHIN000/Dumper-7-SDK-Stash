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

// 0x20 (0x20 - 0x0)
// UserDefinedStruct s_quest_objective_dynamic.s_quest_objective_dynamic
struct FS_quest_objective_dynamic
{
public:
	class FName                                  Objective_id_5_820BCE8F49E4DE4F687BC69A4396331B;   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_quest_result                 Objective_result_7_142CD68C4A3157E27D267C9B120DBCC5; // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1008[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_quest_sub_objective_data>   Sub_objectives_11_1E96587647B421F169D8C0A38D21660C; // 0x10(0x10)(Edit, BlueprintVisible)
};

}


