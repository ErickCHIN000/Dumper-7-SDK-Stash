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
// UserDefinedStruct s_genderblend.s_genderblend
struct FS_genderblend
{
public:
	enum class E_PlayerNPC                       Character_27_7AF4D7784B5D078CA4CBC595FE3138ED;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         IntroAnimation_9_863DB08D49452A0D9F599BBDB8523529; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           SexBlendspace_10_33B5D8B34C019144242E17AB96251FF7; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimSequence*>                 ClimaxAnimation_21_C3312D174326F2BF2259FE933A9A245B; // 0x18(0x10)(Edit, BlueprintVisible)
	class UBlendSpace*                           RestingBlendspace_16_A96105E24920ACF0190F659212F43259; // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


