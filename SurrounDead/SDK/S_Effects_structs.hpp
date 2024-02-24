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

// 0x81 (0x81 - 0x0)
// UserDefinedStruct S_Effects.S_Effects
struct FS_Effects
{
public:
	bool                                         IsEnabled_18_5F5859E6449CA2118889C29B812D8161;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETriggerMethod                    TriggerMethod_50_78811DED4A74E896F3726B82ADFE2980; // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2187[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpecificPercentValue_13_5C754BFC45B9763D27A6A9AB9187390F; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             EffectScale_61_63D82B6D464CD3CCEC1B078074C08549;   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             EffectTranslation_62_B2FC126540FD38111139ECA600383ADB; // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             EffectShear_60_AAC8D1A74D4F67E95F82FE9EB0D3581A;   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectAngle_67_9654D26045ED5561CC56AC9DF3981F59;   // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEffectLayer                      EffectLayer_22_3309B47F49D95F295EC24789EAAF4815;   // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEffectType                       EffectType_78_DA737BD8465723F56B6C5DAFC5F147B5;    // 0x3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21A8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumParticles_70_F3941F714B9C03FD09B052B91754A004;  // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CustomEffectTexture_37_071362A64918FCBA33D4FF85BB9ABA70; // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EffectColor_49_B8696A40425D278129557CB171157594;   // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlaybackSpeed_63_895E2BF0490600F327E6D3A40CD1FF43; // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ParticleSpread_77_91AAD9984A826CA627C0E894AAE3D287; // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AddRotationtoParticles_76_244A1C394C00164B10A2AB9E13ED2914; // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundEffect_81_D5F6F19D40A0B92BB0598E8C416B50E0;   // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        SoundVolumeMultiplier_85_6B4801114C18FDBC28D92AABF034AFE0; // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DecayTime_88_B89D47A944D4AEE43F918889E359E9D2;     // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseStretchedParticle_90_1C1A4D3543806DE1B5BD93909DA565BB; // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


