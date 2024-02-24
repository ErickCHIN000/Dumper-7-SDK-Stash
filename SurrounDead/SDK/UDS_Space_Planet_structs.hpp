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

// 0x250 (0x250 - 0x0)
// UserDefinedStruct UDS_Space_Planet.UDS_Space_Planet
struct FUDS_Space_Planet
{
public:
	enum class EUDS_Space_Parent                 Parent_2_0E1A37CE4AF01519A9BCE6ACA2CD1137;         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RelativeRotation_5_6AB46E784AAA14769695A882EB23223E; // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       Scale_9_D8C257DF48AA1AA6FF92B0BADA269EDB;          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             ColorTexture_30_2BBB70D24D2BDD9AD355609B4FF9B21B;  // 0x28(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLinearColor                          ColorTextureTint_123_F088C5B64DFD1D20EEC23CBC27966B9C; // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             NormalMap_33_A9266AE648B84654F7C9B9849CFA3E7C;     // 0x60(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                       NormalMapStrength_36_6F822CA84FCDEF589CED9595F668D77A; // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DarkSideTint_40_83860D2D4EEEF7086AB3AFB09CF1DCCC;  // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LightSideTint_42_0EF08CD645E27CABBE7DBD8E7471F04B; // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TerminatorThickness_58_E6DC59F2417BA23BB1BAA5BF464BF621; // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TerminatorPower_60_249814CB4B2F0A60E458FEA89132D36E; // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TerminatorOffset_62_E26446874807C179E62DC3A3D511938F; // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TerminatorTint_44_8A6F729743E618D4CBE093BDCA99CD01; // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUDS_Planet_Lightsource           LightVector_105_71AFA5654C1A2915EF2F6F9636985F79;  // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CustomLightVector_108_A1E02E374DF47067FFF4BB83AD035BC4; // 0xE0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Glow_116_6BBE205A4CB7B5A1555103A09A90E0F7;         // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GlowColor_117_D644808A49C9F262468CD988D1087F09;    // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GlowScale_120_20ADA5B346CD968A0904D284F1D968B0;    // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RenderAtmosphere_47_8FA38C394C66F95149E4269D6A13E9DE; // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AtmosphereStrength_50_0D33B16248764FF3CEBC98B70F026998; // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AtmosphereThickness_52_0C2D526D4C6E998A929F2D9A2B3FE30B; // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AtmosphereColor_55_39F94C30482BE08919CDB1BE025A7DC8; // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             EmissiveTexture_66_5312AAA94E7A901D5F46D6AC848F943F; // 0x140(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLinearColor                          EmissiveLightSideTint_73_969799654B9C1754BDE425B229EA063E; // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EmissiveDarkSideTint_74_EBFDD1104CC20ADAE943EC913D1977B2; // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RenderRing_78_1DDEF5604EC914832AB31CA1327D2947;    // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1408[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RingPitch_80_56F5E8E14589B8624F3C7B9951D4C8D1;     // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RingRoll_82_091721764596A286D8F56C92EFB17435;      // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RingDistance_84_8E87B9394476970597D7A8B81A055C39;  // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RingWidth_86_324627CE43F44BEFA03D019FC1E0FF8F;     // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             RingTexture_92_B962AC934EE0E4617A29BE9F710F32EF;   // 0x1B0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLinearColor                          RingTintColor_95_4F6B04E54C74C020B0C009971EB24538; // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RingOpacity_98_6F398376468F51CF8289D9AA39638D49;   // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RingShadowBrightness_100_82A5108141E68184387C0CBDA39F37D6; // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RingShadowSoftness_102_B53027E540B8F2E6C7744D90958C1B85; // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             MeshDeformTexture_126_B7DC215A433430E4AD89459B331BC0CE; // 0x200(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                       MeshDeformStrength_129_CBDEB487415F39784E41DBB95BE8F4B1; // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MeshDeformCenterLevel_135_D94322934BFA5C635C0D2BA54E37A086; // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MeshDeformTextureOffset_132_F11E46C5458E2C4E5B3ABB8E3C2E6B45; // 0x238(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


