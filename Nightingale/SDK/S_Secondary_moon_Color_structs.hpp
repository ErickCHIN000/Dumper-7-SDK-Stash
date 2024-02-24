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

// 0x28 (0x28 - 0x0)
// UserDefinedStruct S_Secondary_moon_Color.S_Secondary_moon_Color
struct FS_Secondary_moon_Color
{
public:
	int32                                        Moon_Type_11_D3A02999459E78EF1E91A18012E94970;     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Moon_Color_Row_12_FA074D7C40D5B12DCA3AE581DBAAF9B5; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Moon_Saturation_13_5B8B095B4E69320A495F789CD2CA897C; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MoonAtmosphereColor_14_24770CAD43AACBD227442F86E0C6CF07; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MoonCloudIndex_16_CF80315A44935DBC9D5BF69FBAE7C180; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRealmPlacementRequirement>    Realm_Placement_Requirement_20_0409EAEC4A8D8906AB5FC0A0C6A605B3; // 0x18(0x10)(Edit, BlueprintVisible)
};

}


