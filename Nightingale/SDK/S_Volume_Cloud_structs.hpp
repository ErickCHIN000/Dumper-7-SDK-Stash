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

// 0xAC (0xAC - 0x0)
// UserDefinedStruct S_Volume_Cloud.S_Volume_Cloud
struct FS_Volume_Cloud
{
public:
	float                                        Brightness_49_6BE787004A847CFE3A6529BBCAE453C7;    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Clouds_Coverage_44_D839A87B47D270A07EA3FAA9B0ED9958; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Cloud_Coverage__135_7AC69D76425FEC50796278A85F1C6543; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Macro_Variation__129_EF3BCE8D4D9C63090402EC9CEA3EA587; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Cloud_Brightness__132_676030994B181C5A288F2C99594A43AC; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Layer_Height_Scale_45_C1E760C34BF9810C4F99F8949085DBE3; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Bottom_Altitude_46_EBD0A5434D151DD901F154B26BFA7391; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Base_Cloud_Scale_51_D8E433994907048B10D73DABCA1C86C9; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sub_Noise_Scale_53_057C6D834A7EB7F218488F8F9385918D; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        High_Frequency_Noise_Layer_55_FC50316745B3126A0850C199329FFE48; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Extinction_Scale_Top_57_A1C612054898D9ED2346129FB6AA677B; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Extinction_Scale_Bottom_59_A91211D64D4453CEEA326198A1D83EBA; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        View_Sample_Cloud_Scale_61_E0AB34E246D925EE2E60D19D976E262F; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shadow_Sample_Scale_63_B2B5A85144B03CB782979B9493FF91A1; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shadow_Tracing_Distance_65_8979419A481525A7A3CF03A3CDD1EB20; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENoiseType                        Volumetric_Cloud_Noise_Type_125_C81EA4194E2624ED5E7F1ABDE5F06D89; // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D42[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Base_Cloud_Mip_Level_67_2A79A24B45028B91B1FA8D9C61FDBC95; // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Macro_Variation_69_26385AE64A1CC508CFBA82BCEBB78639; // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Macro_Scale_71_055A59C94973E1FE1E5BA4A6A4AABE83;   // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Volumetric_CLoud_Scale_73_3E52287B46CAA17A756AAD8FE2CC5066; // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Two_Layers_76_AFA441C3417C963AE348F68FB174D751;    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Layer_2_Density_Scale_79_EF3FD1884F2626EC414B3FAF7242962B; // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Layer_2_Extinction_Scale_81_6B992C7F401F05C995C4AEA5EB5EB246; // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Layer_2_Cloud_Scale_84_F150751247A7EC7C229EA5800AEA9A3E; // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Layer_2_Mip_Offset_91_4965C85D454066683A2FF0AE7E7F9266; // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_between_Layers_92_9CCAC85640A30D9822E867BD0E626FDA; // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_To_Sample_Max_Count_119_7BBB098147EE073A674F5FA4A5E466C7; // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CLoud_Direction_95_2CE0EE5446639CB0D70F398444FF4963; // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tracing_Max_Start_Distance_99_2330909348D172B09BB0498A49F714F0; // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tracing_Max_Distance_100_DEABCA8E443C62D19E623E8F0E47E5E0; // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Multiscattering_intensity_102_1402BC9E4E5EB6C2616716BBFCDBC1A8; // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Multiscattering_Eccentricity_107_8FA13A1B439CE196473A0D8ECABF5907; // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Multiscattering_Occlusion_Factor_108_E834DE1246F43ACFFA05E28A7084951C; // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sub_Noise_Erosion_110_F284B01648C81ED2F19348850478F5C5; // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cloud_Speed_112_DE3617C541E51F448299669C30E327BB;  // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Phase_G_114_03439794495AB2ED34F932B87577F969;      // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Phase_G2_116_DC8AE47F4B5AC875A99D709327BA4D86;     // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Reflection_Sample_Count_118_90A0BA5447964B0660DC1DB1B29992B5; // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReflectionShadowSampleCountScale_122_FF4BB8C44E39D9F892F71C86050789A9; // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


