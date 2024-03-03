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

// 0xF8 (0xF8 - 0x0)
// UserDefinedStruct s_quest_sub_objective_data.s_quest_sub_objective_data
struct FS_quest_sub_objective_data
{
public:
	class FName                                  Sub_objective_name_2_8F2D45EC4ED8B77A8D45268A73194781; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Sub_objective_description_4_F0178B1A41C3FA83AEFC4BBEE8321392; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Sub_objective_length_7_DCE4E9444F309089570DF9A04E1FB441; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_optional_10_333173914D40385D90423CA6E3E9BA42;   // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_quest_marker                       Marker_info_24_E6AC036D438D51F3E2E5D6A44A6EAE44;   // 0x18(0xD)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_quest_objective_result             Sub_objective_result_17_958C89DE4F65D77F07F8E6A565A4F270; // 0x28(0xC0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_quest_sub_objective_dynamic        Sub_objective_dynamic_16_44509D1B4E07798A74E7FCAAFEEF1857; // 0xE8(0xD)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20DE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


