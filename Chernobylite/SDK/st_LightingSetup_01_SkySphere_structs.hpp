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

// 0x84 (0x84 - 0x0)
// UserDefinedStruct st_LightingSetup_01_SkySphere.st_LightingSetup_01_SkySphere
struct FSt_LightingSetup_01_SkySphere
{
public:
	float                                        SunHeight_228_C98B9BEC40A0D976CC3B918AF9C0A66E;    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SunPositionFromDirectionalLight_283_930D3E504CE74763ACC4FB88F97B7DEF; // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_449[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SunBrightness_240_1D786E374724BAEE0F35FEAB6080AA15; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SunRadius_242_4222A6FC4BCA70C749F7ED802737C5EB;    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CloudSpeed_243_1C17227A492CC4C03EA185AD523387A3;   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CloudOpacity_244_A8F7F1F9449C4897B28E1C97FBDCEDD0; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CloudColor_277_D3DD98454B54A2312871C39D8798A50C;   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StarsBrightness_245_07F10CE04FE814D6F3C6BBB8CFD855A9; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColorsDeterminedBySunPosition_280_8E1B60CD4D4E240437CF28AFAF54FA00; // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          OverallColor_278_C5A2FE4E427510969132EA9783CD07EF; // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HorizonFalloff_256_1A4218DC41352B9B2DE9B68B514E2A61; // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HorizonColor_276_10703839469C34207C913DAFB3AB3E3B; // 0x44(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ZenithColor_275_F90729E84D6C3E0C96BC919D19D0645A;  // 0x54(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_465[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              ZenithTexture_279_9CEB54DA4245DB24BE014BAE8175EC0C; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZenithTextureOpacity_265_9EBD3E954AB70BB15B4ABC95C59E1410; // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZenithTextureRotation_268_D038C018439117F6DF41279743B85CF7; // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZenithTextureBrightness_270_3432181D4A2244894DC5C58E3F2E1747; // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZenithTextureDesaturation_272_8B9BEDD744DB436A539A32BBD9344BA3; // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZenithTextureExponent_274_8B5B6DA54C7C5D464A20D8A68C19E537; // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


