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

// 0x18 (0x18 - 0x0)
// UserDefinedStruct Struct_NPC_ProfilesList.Struct_NPC_ProfilesList
struct FStruct_NPC_ProfilesList
{
public:
	bool                                         UseTimeofDay_1_ACF6D31949E47732A58FC5B8D4948F79;   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_NPC_Profile>           ProfileList_18_7D5B857A4A7344BDC6D54489BE2C8786;   // 0x8(0x10)(Edit, BlueprintVisible)
};

}


