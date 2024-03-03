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

// 0x7B (0x7B - 0x0)
// UserDefinedStruct S_TargetIndicator.S_TargetIndicator
struct FS_TargetIndicator
{
public:
	class AActor*                                Actor_2_682E9C644F04CB795156808B68C8967D;          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_TargetIndicatorComponent_C*        TargetIndicator_5_B8BD1301495A30BB13C7C59B7AF01270; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            IndicatorTexture_9_6051A3054311B67A3D69569E66134404; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           IndicatorColor_14_0F831C4B4EF68C3544334695ED7BF8AC; // 0x18(0x28)(Edit, BlueprintVisible)
	bool                                         ShowDistance_16_F72B0F484C23E49997E902B2CB1E6C01;  // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C94[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           DistanceTextColor_19_2D59BB064E4EEA625C50CF9A72376482; // 0x48(0x28)(Edit, BlueprintVisible)
	bool                                         ShowOffScreen_22_B9DA9D1749C9EE3D8823509CE4D2F308; // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowAtDistance_24_812178274F743E5720AB12AFB7BB1488; // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C9E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceToShow_27_7343687B4A4B6B65E216B1AEE288730F; // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeIcon_30_150B7ABE47C0B9CC5E4439A6CA473931;    // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HideAtDistance_32_93609D4345FB0B72F890E2B73901A017; // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowIndicatorHeight_35_0CB7F0D349D36C4DF0F71686ACE135AD; // 0x7A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


