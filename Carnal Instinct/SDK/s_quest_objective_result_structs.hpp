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

// 0xC0 (0xC0 - 0x0)
// UserDefinedStruct s_quest_objective_result.s_quest_objective_result
struct FS_quest_objective_result
{
public:
	struct FS_quest_condition                    Result_condition_53_8B36B64643735EEC11B072B6B447EF26; // 0x0(0x48)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                  Success_description_57_7A416566472583B8464831A125D3B634; // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Fail_description_59_A8DCDAEF49E39682E6F09086CE02D06D; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Success_next_objective_2_67D3B971468DC1E57B2D5690BA9E56AD; // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Fail_next_objective_4_9B8A88D8495B62696ADC5CA99663F1DF; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_quest_result                 Success_quest_result_32_3745C0E54F84B7950FD65B9860025C42; // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_quest_result                 Fail_quest_result_33_00CAF0BE490E010FCA1030A4719D7917; // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_quest_event                        Success_event_43_6223061A43B5FFAADBB1EDBDD335EF05; // 0x70(0x25)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_18AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_quest_event                        Fail_event_44_6BB8033A4C08E1CAD2526D860F9F82EF;    // 0x98(0x25)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_18AF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


