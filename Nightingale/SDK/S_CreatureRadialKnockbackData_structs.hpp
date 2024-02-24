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

// 0x3A (0x3A - 0x0)
// UserDefinedStruct S_CreatureRadialKnockbackData.S_CreatureRadialKnockbackData
struct FS_CreatureRadialKnockbackData
{
public:
	bool                                         bEnabled_51_809FFE304D73244DE2A0F5BEC14D3878;      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RadialSourceLocation_35_D6BBA5614D13AFAF11C1EF979C84FF9A; // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LaunchSpeed_49_7727544F4971B507765877BA738938E5;   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LaunchElevation_48_5D2A0A72481D20474217299FBEB54604; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RadialScalingRadius_36_BCD1935E49D56A83408FD3A57BD916BB; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           RadialScalingFalloffCurve_37_0EA1ACED402003F5FF11738357FE84D4; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bXYVelOverride_46_93F4E2A8426D361079F662862E6C5DDA; // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bZVelOverride_47_B2A48E7C41BAB72F8128D78D7EBAD25C; // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


