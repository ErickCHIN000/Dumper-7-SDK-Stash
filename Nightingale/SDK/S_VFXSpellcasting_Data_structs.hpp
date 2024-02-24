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

// 0x103 (0x103 - 0x0)
// UserDefinedStruct S_VFXSpellcasting_Data.S_VFXSpellcasting_Data
struct FS_VFXSpellcasting_Data
{
public:
	class FName                                  SourceBoneName_5_690BAC904CD47DD06FACA0AE152FBDAA; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TargetBoneName_6_A1A0677E406B99F5920DD9BA72211971; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LocationOffset_9_62FBD3D44486496C2587D59EB0D50ADB; // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RotationOffset_12_3B2056D744FECF61FBFD97A22266A091; // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                          VFXBaseColour_15_E3BBDC6B4CC0BAA21E09BDA3912D6E4B; // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          VFXEmissiveColour_17_C629534C4DF556147BDD82B6EB1EF0CD; // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VFXBoxSize_20_58ECDAEE418BF82835599FBA60354BDF;    // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFXLifetimeScale_23_B469D85D4DBA43373AA8A3B4BA6DCEFB; // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFXIndexOfRefraction_25_376AD2E744C42BAED267C38D53B6B095; // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         MagicEffect_28_ADD37699414FD74BA144BD98BFB95D92;   // 0x88(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         VFX_Gameplay_62_25147FC8489843F508C81EBBAF318F60;  // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VFX_AshSpawnChance_63_178AE8034257742673C4638A32B1C403; // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_DripsSpawnChance_64_481FDE0B4553892DD1A58DB1616462CF; // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_ElectricalSparksSpawnChance_65_C3C4F9914317DE81239428AAF687A7A7; // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_EmbersSpawnChance_66_97E0878A43289D9BE0EF5DA99EB907DC; // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_IceSpawnChance_67_3F69994444EC056EA3EBA29C149674AA; // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SporesSpawnChance_68_FD2F014F49419345CB6A11AC549DEF2C; // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_ScaleFirstPerson_75_16F424D942222690055F268813342B1F; // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_ScaleThirdPerson_76_BE9825264F1466AAE298F485FB0DF602; // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_GrowTime_70_B38F778F448C1251CF7389B8CF8ED2B5;  // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PrintDebug_60_B1322C454EE6E233E61C5B8B451CD4AA;    // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseTargetBone_59_5EAAE940447E36B394DB2BA28F5B19B0; // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMeshSource_58_E968548F4C3756D5372A159CE9BAEE3B; // 0x102(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


