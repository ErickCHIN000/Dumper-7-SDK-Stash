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

// 0xA8 (0xA8 - 0x0)
// UserDefinedStruct S_GeneralSettings.S_GeneralSettings
struct FS_GeneralSettings
{
public:
	bool                                         UseGeneralSettings_1_34451C7C4409593AED51F3B3E745EC23; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseAudioReaction_8_10D65367410D004C11F2298C0904D830; // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A31[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_ReactSettings>              AudioReactions_9_9F68933146B06EA6F5D62EB5E5822ACC; // 0x8(0x10)(Edit, BlueprintVisible)
	bool                                         UseSightReactions_13_7B8E557842E4006DA471D6B8FD8DD197; // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_ReactSettings>              SightReactions_17_FC023EA447F72317482A669D75BF2D42; // 0x20(0x10)(Edit, BlueprintVisible)
	bool                                         UseDamageReactions_43_651510D34745B3E71DFBA898CC66E10E; // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_ReactSettings>              DamageReactions_47_0171D092410A910D027CCF8E4DBF0ADD; // 0x38(0x10)(Edit, BlueprintVisible)
	bool                                         UseAimedFocusReactions_21_3FB701744BFF4A199FA8E0BC1B56F96F; // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AimedFocusRequiresSight_24_304EB221463960ADCDB9B283F7EA2C17; // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A44[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_ReactSettings>              AimedFocusReactions_28_B5A136154388B5E2D151B884544FCA8D; // 0x50(0x10)(Edit, BlueprintVisible)
	bool                                         StopMovementInTransitions_39_8824967345143DE490031A998B1ADF76; // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AnimStartEnd                       AnimationBehaviourTransitions_34_940A69AD4E3A01C4C46A72AF087872AD; // 0x68(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_AudioStartEnd                      AudioBehaviourTransitions_40_FE92B55C4D0108CEB4801D9BA35D4E08; // 0x88(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


