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

// 0x80 (0x80 - 0x0)
// UserDefinedStruct st_LightingSetup_01_ExponentialHeightFog.st_LightingSetup_01_ExponentialHeightFog
struct FSt_LightingSetup_01_ExponentialHeightFog
{
public:
	float                                        StandardFogDensity_223_F12621C94E813CF7BEB40A9B5A124615; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          StandardFogInscatteringColor_224_DF94623E4D378CEF381DA98E8D10D204; // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StandardFogHeightFalloff_225_E6C10CFB4AB03B18BBEFB19038FFE139; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StandardFogMaxOpacity_226_8D34CE8543484DB98A6049943339FB87; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StandardFogStartDistance_227_BFB6CD284E99EC9285117A8B02162B30; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StandardFogCutoffDistance_228_6B5561FF4EE87657E110F0A35EF718BD; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_180D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureCube*                          InscatteringTextureColorCubemap_243_1B55AE7F4E1EE3A3B57DE4AA438687EA; // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InscatteringTextureColorCubemapAngle_230_3DA5FD41476AB2B2049F6389EFE42D57; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          InscatteringTextureTint_231_9DE9D97D43FA0F902811209A863CA8C9; // 0x34(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InscatteringTextureFullyDirectionalColorDistance_232_7844151B49D420926461118AA892DE74; // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InscatteringTextureNonDirectionalColorDistance_233_44D3C33D4660EDE3CD6C8BBB7CDF74DB; // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DirectionalInscatteringExponent_234_89D04F604751CCFB277CC191FB4C0CED; // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DirectionalInscatteringStartDistance_235_58EEA982451C1EA6098EDF9B7C81BEDE; // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DirectionalInscatteringColor_236_93BAB27A42FBCBA7986BACB9BF1ABD29; // 0x54(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VolumetricFogScatteringDistribution_237_1EF0FEEA43D70C3A7836B6A51021F8E6; // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                VolumetricFogAlbedo_238_6A3E165C4ED7026EAA87E1B9B639D4DE; // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          VolumetricFogEmissive_239_CABF2F43400AE6A4EE4E5C8AB97C1E89; // 0x6C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VolumetricFogExtinctionScale_240_85F3DDDA44E34D241A9A4F8BF6E0C3EC; // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


