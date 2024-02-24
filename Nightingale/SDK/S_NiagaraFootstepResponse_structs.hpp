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

// 0xE2 (0xE2 - 0x0)
// UserDefinedStruct S_NiagaraFootstepResponse.S_NiagaraFootstepResponse
struct FS_NiagaraFootstepResponse
{
public:
	TSoftObjectPtr<class UNiagaraSystem>         FootstepEffect_66_063BEC014FDA120EA8959B8C2B0C86A6; // 0x0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         FootprintEffect_70_6755F0EF4ECDA71A114A8484A917BC24; // 0x28(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         StickToSource_67_C4447D534FE2184ED06AF184EEFA6ED5; // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          VFX_ColorOverride_36_16E96BED41587484DDE4BFA4E775F16A; // 0x54(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VFX_Scale_17_02CABA9541B733CC1B78018CC507CC06;     // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_DebrisSpawnChance_19_0E3BBCC44A2D8F69A6E471820737CA34; // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_DustSpawnChance_21_647BE2A4415AEA61559130AADA576573; // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SparksSpawnChance_23_73066169462479E2D0831EAAEBADF52C; // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SplintersSpawnChance_25_7375381F420DA1A8185BE3A43EE75170; // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_VegSpawnChance_37_CFA128D94800CB58E280D79CCCAF0AA2; // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_DebrisWetSpawnChance_40_33FC847E406CB491E945449023BD7942; // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_LiquidTranslucency_42_C56B2A9644753D70718EF5852BDFB642; // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_RipplesSpawnChance_44_4DDE20204576474E7CA0EF9ED5177793; // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SplashSpawnChance_46_EB784B7D4BC5E17AEEF62B89080C48FC; // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SloshSpawnChance_83_264245D74CB29A8F9E7602B5B819979A; // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_ShockwaveSpawnChance_63_C6FD85964A951048DA28FDB0EE62C10D; // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SmokeSpawnChance_62_E166DDD04164650BCC248E9AA64500E1; // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SampleRVTColor_86_5C974CE14650E7FACF55A48AC3A3F82A; // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_DecalSpawnChance_89_5E6125ED40441B94DBC51E9040CE45A6; // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFootprintDecalSurface            VFX_DecalSurfaceSelect_95_3AC2EEB04A138732D54C00A61F298880; // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFootprintDecalShape              VFX_DecalShapeSelect_97_481D020F43D643B0440645AF6C88C3A1; // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


