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

// 0x2E (0x2E - 0x0)
// UserDefinedStruct S_CreatureKnockbackData.S_CreatureKnockbackData
struct FS_CreatureKnockbackData
{
public:
	bool                                         bEnabled_49_F4373BE74299DAD1E83334A23F19BBC1;      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_232B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LaunchVelocity_40_45C4339349DA18C9F3E118B052F0DED5; // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverrideSpeed_38_680D14864D4B72EC832008AFF82DE18C; // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverrideElevation_45_972F78714CDCF8CB568455B08B191758; // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_232E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LaunchSpeedOverride_41_7727544F4971B507765877BA738938E5; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LaunchElevationOverride_42_5D2A0A72481D20474217299FBEB54604; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bXYVelOverride_46_93F4E2A8426D361079F662862E6C5DDA; // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bZVelOverride_47_B2A48E7C41BAB72F8128D78D7EBAD25C; // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


