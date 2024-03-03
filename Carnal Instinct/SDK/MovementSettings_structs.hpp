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
// UserDefinedStruct MovementSettings.MovementSettings
struct FMovementSettings
{
public:
	float                                        WalkSpeed_40_9AD737B14B8BC378F924E890E018B5B0;     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RunSpeed_39_7397773A4A46B563F765429BD6A2DDE8;      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SprintSpeed_38_6123675A40931BD70D4CF18D9A2A1C4C;   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CAA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          MovementCurve_51_FDDCE64149CA0F8A553745BEA0FEE53E; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           RotationRateCurve_52_73FA146B4B31FF205DE8E1BBFA8800F6; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


