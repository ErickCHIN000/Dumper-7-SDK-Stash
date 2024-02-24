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

// 0x60 (0x60 - 0x0)
// UserDefinedStruct S_Color_Master.S_Color_Master
struct FS_Color_Master
{
public:
	int32                                        SunColor_2_F0E687574A8C4C4A3F62269613B475F7;       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RayleighColor_4_3C8A05CE4EDF5E55F480F793C5F5A350;  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SkyLumianceColor_8_28B6648B46238C3E5E589AA030DEB938; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FogColor_10_4549A4CE422C6399154064A0F1B32573;      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MieColor_6_0EADCF864F829FC8628842833D4BB11F;       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ColorSaturation_25_EE372D2B46230D2F94266AAD7FC63303; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Cloud_Albedo_32_D4CA7FF4415831F7308239B6A075D111;  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Clouds_Saturation_33_410667694B5515E5F0BBBCAAD3DE4C6B; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ColorCorrection_18_3A3D7B9F40CD30E3B47D5AA54B0B35E4; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CelestialIntensity_35_A7949E0D403075A74C5AEDA4FA311B0A; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CelestialType_12_09C47EB342A0C4AE8B3BEE846D573DAB; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CelestialColorMain_41_312CBDC74ED565D8D257C49405B3C7CA; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CelestialColor1_46_FC263961431CA6CF27E1D6A34C9B0735; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CelestialColor2_39_AFAA049B481D8BF94E482D91F3C735E7; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CelestialColor3_40_2A535100457B3101C5BD0CABC5C3B148; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SecondaryMoonAmount_43_12E019CB47ED7E0BDA7E88AE61B9BB60; // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SecondaryCelestialColors_16_490E1F3749E51448B649F1BBBEBFCDDE; // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Ring_Toggle_27_8014343845E650A562081696E3A00AAC;   // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Ring_Type_29_060E701549CC32E87828DD9246B3CCF5;     // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRealmPlacementRequirement>    RealmPlacementRequirements_22_752EDDC24CE0BA1D6528A9A52B057220; // 0x50(0x10)(Edit, BlueprintVisible)
};

}


