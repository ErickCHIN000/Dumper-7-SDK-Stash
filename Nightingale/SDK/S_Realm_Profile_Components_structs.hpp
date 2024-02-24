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

// 0xE4 (0xE4 - 0x0)
// UserDefinedStruct S_Realm_Profile_Components.S_Realm_Profile_Components
struct FS_Realm_Profile_Components
{
public:
	enum class ETime_Dilation                    TimeDilation_42_C6C3E93A44D3596D96F604BBB8D3308A;  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2159[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DayBrightness_45_654194E84791EB5D6641B8B9B3491AC2; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExposureMinusDay_155_0EC08FBA424142E4815C008DAD565359; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NightBrightness_46_D21514134D435620E5E9FAACE1253D93; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExposureMinusNight_158_CFD8E7464A0BF78AFBFE3488F43C5444; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExposureMinusDawnDusk_175_25608EF14C49835B0E1061A5359C46F7; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Color_Category                  ColorCategory_11_4DD6654D4941469EAA271DA471F5EB45; // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_216C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Color_14_B48BAE0842000E0A04DD409322CF416F;         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ColorSaturation_22_736C8ABD4DFE5474CF7F639111B1263C; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_LUT_Category                    LUTMinusCategory_83_4668B2D04ABDC31FF63735B2648739B9; // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_217A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LUT_20_A60FFF6245828E23A241899121DA8007;           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LUTMinusSaturation_84_5134FEEF4685DCDD5D21F79EBE83E39A; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FogMinusDensity_152_B4E54E5D4C5365DE4EE86E9369F40650; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FogMinusOpacity_153_9C7123964B13908DB08811BE834CF4E8; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FogMinusHeight_81_AC964C83499F9997F5218CBDAD2D2B08; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FogMinusFalloff_154_E7A533114BCB6B35BAB1F4A0F6D848B8; // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FogMinusDensityMinusNight_169_02863F2643043934203DB1A2F2DCBDD7; // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FogMinusOpacityMinusNight_170_EB0DF16346A6BF1AFD0FCBBD083E672F; // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FogMinusHeightMinusNight_171_257407FC4E293A34ACDDEFBE0E979A9D; // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FogMinusFalloffMinusNight_172_934D60954EA943B2254005821767C9EB; // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtmosphereMinusDensity_85_7DDB4BEE43C68C26C89656B26BFCAAD7; // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtmosphereMinusHaze_90_AF94AC6346041256B78BF58AD16E7F45; // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtmosphereMinusBrightness_91_F6A12E6849DBE9BB9BE045B8A78B6687; // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtmosphereMinusViewDistance_92_EE22565C4144A859B5A9C4A9422BBE45; // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtmosphereMinusFalloff_93_5A7B36084A70CA227E9E7B923FDA8730; // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Cloud_Category                  CloudCategory_52_CC8EC003460576684AC48CAC6636DFBC; // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Cloud_95_289845B64C9122FDBFE5F4B175FC2D13;         // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Rain_Category                   RainType_96_92163CC14D2AD8D175D959BCBE95EA1F;      // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Seasons                         SeasonType_97_F0213D984D089528FA03D59599DC976C;    // 0x6D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Celestial_Category              CelestialCategory_54_A8724A1B431A80133EC36ABEED9D75C8; // 0x6E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21BB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MainCelestialColor_110_68D941AD4AD37504C41095B66A652788; // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MainMoonType_113_81F30D1641B30017365A14A8499F6AAC; // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MainMoonColors_115_A900C9F54CE02786D3ACE9BA6E0AAC23; // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MainMoonSaturation_117_87A4AC62487D1311AA059E8D1D8DD66D; // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MainMoonClouds_119_9E4D2CCD4D1EF5D15ED3D8A45F809BE3; // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SecondaryMoonAmount_121_0F5B45534DB94A057FA54F95B74071D9; // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SecondaryMoonType_141_5A1293AD46A2E031A768B89D686B49D1; // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MainNebulaType_125_DE24EFCC46610652C64BAAA457EBC3C4; // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SecondaryMoonAtmosphereColor_123_8ACF948B4481358CC2672595B013047C; // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SecondaryNebulaColor_127_7335A3FA49799DDBBA6320A014F8BEC0; // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SecondaryNebulaBrightness_129_76A40C864F6B3CF91176DDBA5F1863F3; // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RingOverride_132_CD93737E45B33AF1DE3AC7A601E16995; // 0x9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RingType_134_24659D8947CFA00501BBB9B93B5792B7;     // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RingColor_137_B0E107E34BEF475CE43413A6CECEFACF;    // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Aurora_139_A4EAA18D40D091C71CD02F98E45015FA;       // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Aurora                          AuroraType_138_777A6EBF432200953248FDB603829C36;   // 0xA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21EB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EBiomeID>                  AllowedBiomes_145_8C99A8CB459843A874C0CDA85E836F06; // 0xB0(0x10)(Edit, BlueprintVisible)
	struct FRealmInfluenceValues                 Minimum_Influence_105_CF2F07094294B96628C4DDAC6C7C4826; // 0xC0(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FRealmInfluenceValues                 Maximum_Influence_106_B5F560E9478FDE9A154BBCA71BC69A77; // 0xD0(0x10)(Edit, BlueprintVisible, NoDestructor)
	int32                                        Ferocity_144_3EB5A34144BC3623894570BA821DBCAE;     // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


