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
// UserDefinedStruct HabMovementStateStruct.HabMovementStateStruct
struct FHabMovementStateStruct
{
public:
	struct FVector                               Location_8_9FD90F534E7D39B96FA124AAA07F138F;       // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity_5_8D16932E491120A4997B52ACF0C54572;       // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DesiredDirection_17_C653E35A4DFB81ECF9BCF0BD7EAF7FDF; // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Using6DOFMovement_14_A7FA209F456144F916B5A19AEFAED95C; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TouchingSurface_13_2E3A8BF049F76690EAFD54AA10DB3C5A; // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B7E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentTime_21_51B33F9F43DB039E41DF4EA45C6E4B12;   // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


