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

// 0x34 (0x34 - 0x0)
// UserDefinedStruct AdvancedEffectFeatures.AdvancedEffectFeatures
struct FAdvancedEffectFeatures
{
public:
	enum class EBlendModes                       BlendMode_12_09737E6C44063CBE16D45A8896564C06;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5;     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2DN                            BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlendDistance_33_7594D9DD4D782916B58945895B32667E; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlendDistanceSharpness_35_6A828E614037A27B69EE71A96FC5821D; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlendDistanceInvert_37_D287DE844826F2359AAFE3858976F62A; // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CustomDepth_1_CCA4E6DA4D5BFFF130E4238E20DDB1B8;    // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         StencilBuffer_15_EA46BAF04C25E4D2EA4796B4C92C5FE6; // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D83[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StencilMask_18_BF959A7242C50326D3AE65A973C5A5B1;   // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


