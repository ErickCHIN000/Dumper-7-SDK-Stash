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

// 0x2C (0x2C - 0x0)
// UserDefinedStruct AdvancedEffectFeaturesNoCustomDepth.AdvancedEffectFeaturesNoCustomDepth
struct FAdvancedEffectFeaturesNoCustomDepth
{
public:
	enum class EBlendModes                       BlendMode_12_09737E6C44063CBE16D45A8896564C06;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            BlendMask_15_664A106449FD3C01747ABC9174124057;     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2DN                            BlendMaskScale_18_615A76A449B11B7912A0AEA82EB64EA5; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlendDistance_23_BD484C304DC4B8E69152DA879158606B; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlendDistanceSharpness_24_17B5A9EF45A85808BD4C3DB4D7A1BDE3; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlendDistanceInvert_26_BAA4896D4DB1D15370EB73ABA02CBF01; // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


