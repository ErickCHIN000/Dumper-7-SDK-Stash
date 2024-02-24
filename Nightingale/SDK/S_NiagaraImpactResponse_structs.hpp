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

// 0x128 (0x128 - 0x0)
// UserDefinedStruct S_NiagaraImpactResponse.S_NiagaraImpactResponse
struct FS_NiagaraImpactResponse
{
public:
	TSoftObjectPtr<class UNiagaraSystem>         ImpactEffect_47_063BEC014FDA120EA8959B8C2B0C86A6;  // 0x0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class E_AngleOfIncidence                AngleOfIncidence_32_E3CAF6494E05D9B6886885817DEE94ED; // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StickToTarget_35_C4447D534FE2184ED06AF184EEFA6ED5; // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          VFX_ColorOverride_36_16E96BED41587484DDE4BFA4E775F16A; // 0x2C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VFX_Scale_17_02CABA9541B733CC1B78018CC507CC06;     // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_DebrisSpawnChance_19_0E3BBCC44A2D8F69A6E471820737CA34; // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_DustSpawnChance_21_647BE2A4415AEA61559130AADA576573; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SparksSpawnChance_23_73066169462479E2D0831EAAEBADF52C; // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SplintersSpawnChance_25_7375381F420DA1A8185BE3A43EE75170; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_VegSpawnChance_37_CFA128D94800CB58E280D79CCCAF0AA2; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_DebrisWetSpawnChance_40_33FC847E406CB491E945449023BD7942; // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_LiquidTranslucency_42_C56B2A9644753D70718EF5852BDFB642; // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_RipplesSpawnChance_44_4DDE20204576474E7CA0EF9ED5177793; // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SplashSpawnChance_46_EB784B7D4BC5E17AEEF62B89080C48FC; // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          VFX_EmissiveColor_51_1A349C2148D9C8EE0F5F9389C0D6B836; // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          VFX_SmokeColor_53_9772BA434C72D0047DAFABA2ED5A091D; // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_FireSpawnChance_56_614440AA4817533317F46FB7D3F0FBC0; // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_FlashSpawnChance_64_862B4CE34036C0ECAAE506BF0B3DBE73; // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_ShockwaveSpawnChance_63_C6FD85964A951048DA28FDB0EE62C10D; // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SmokeSpawnChance_62_E166DDD04164650BCC248E9AA64500E1; // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_CeramicSpawnChance_68_BFFD1C494D574E26ACBD41A7D979CD0E; // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_GlassSpawnChance_70_CACCED3A4C12E91CEBE52B9F3E50D679; // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SampleRVTColor_73_B74D07E24149E21F364A9A8BF264DA7E; // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SplatSpawnChance_76_B9464DF5451B9209F2E8F2AABE95DB55; // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_VelocityForward_78_8D26A2814617D67BB98CC5AB2168C85B; // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SpreadScale_87_FC52CB234964B3C8146BDB85DEAB706E; // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_DecalSpawnChance_90_B4C0CCA343E1ED1CF2CE708581839349; // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        VFX_DecalSelect_95_BE8A5E524D5364B4840387A9E4AB6F11; // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VFX_FrostSpawnChance_98_D9F9929C497039056B6FA28C9E3D233C; // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_ArcsSpawnChance_100_37EB349C4B9E926DF01784ABAA8FDC9A; // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_BloodSpawnChance_105_C27430AE48CFA2812899B1A00E4211A4; // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


