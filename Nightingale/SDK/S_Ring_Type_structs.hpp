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

// 0x30 (0x30 - 0x0)
// UserDefinedStruct S_Ring_Type.S_Ring_Type
struct FS_Ring_Type
{
public:
	double                                       RingScale_8_210CEE414B63ECD2F909D6901EEAA2E7;      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RingOffset_9_D1E66B8E4009740B53E32D9A0A9964CC;     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RingColor1_10_1FDF2F6F444B9788289A52B2E405E7AF;    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RingColor2_11_53DF5DDB4C7151B680A0C49B0A909E1E;    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RingColor3_12_8F4116CF41282754BDF7DC8ACC0AE9B4;    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRealmPlacementRequirement>    Realm_Placement_Requirement_18_F245B9C944B49D7A5AAB2686327D2B8A; // 0x20(0x10)(Edit, BlueprintVisible)
};

}


