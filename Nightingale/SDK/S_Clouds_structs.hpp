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

// 0x1C (0x1C - 0x0)
// UserDefinedStruct S_Clouds.S_Clouds
struct FS_Clouds
{
public:
	enum class E_Cloud_Category                  CloudCategory_2_47C0FC00457859C61362CE842FB248D8;  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2493[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Cloud_5_B3FA8FDD4DB69015620C3284D714C578;          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRealmPlacementRequirement>    RealmPlacementRequirements_10_17536DAE4D8E587AC6CC00A9592811B8; // 0x8(0x10)(Edit, BlueprintVisible)
	int32                                        Heavy_Weather_13_550AC5E74CEDB914C119649472A43B38; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


