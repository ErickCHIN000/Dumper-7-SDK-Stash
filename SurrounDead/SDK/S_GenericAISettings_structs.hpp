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

// 0x171 (0x171 - 0x0)
// UserDefinedStruct S_GenericAISettings.S_GenericAISettings
struct FS_GenericAISettings
{
public:
	bool                                         UseGeneralSettings_32_6A0BCE09431CD1D11E78E6B7C16B7861; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseAudioReactionSettings_17_AC9F7411404780F54A4C5D8F8F7A4F4A; // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DD4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, enum class E_StimuliReaction> AudioReaction_12_3A45C6DE4FCB3C3E9A196FA39426A915; // 0x8(0x50)(Edit, BlueprintVisible)
	bool                                         UseSightReactionSettings_19_7CB58FA34CEB32F7352022BF60269826; // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DDE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, enum class E_StimuliReaction> SightReactions_24_04A41A7F4A066FADE635A0BEA073C012; // 0x60(0x50)(Edit, BlueprintVisible)
	bool                                         UseAimedReactions_50_E12984A945CE40555DD85A9A05D847B7; // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AimedFocusRequiresSight_52_608D2CC84EABA7877936CAB49A9D09AD; // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DE7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, enum class E_StimuliReaction> AimedFocusReactionSettings_46_FA275B1E47294E4C747585BCD87A9C4C; // 0xB8(0x50)(Edit, BlueprintVisible)
	bool                                         IsReactionTemp_26_8CE38C3E4866076BAD956FBF67B86739; // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DF4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TempTime_29_FECC46BD4E7279E3D4166588792D5303;      // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundCue*>                     AudioReactions_41_C11CB89343680758598383ACBFDB9E50; // 0x110(0x10)(Edit, BlueprintVisible)
	TArray<class UAnimMontage*>                  AnimReactions_40_229C1FB5485B00B5C0AC14B99350FB43; // 0x120(0x10)(Edit, BlueprintVisible)
	struct FS_AudioStartEnd                      AudioTransitions_2_B02F53AC4C75B0AD693D4D8C4FC0617B; // 0x130(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_AnimStartEnd                       AnimationTransitions_5_AB0389CE4DE5DA576CF8848BBE8ADA44; // 0x150(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         StopMovementInTransition_15_48F51DFB4FB0AE61BCCF44B7F8FCD836; // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


