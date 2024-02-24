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

// 0x90 (0x90 - 0x0)
// UserDefinedStruct S_WeaponSwoosh.S_WeaponSwoosh
struct FS_WeaponSwoosh
{
public:
	float                                        VFX_FirstPerson_25_989AC6F143FE2FC337DD95B05D0B133C; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         SwooshEffect_20_7A78300E412AA5604561C89544CE5737;  // 0x8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLinearColor                          VFX_BaseColor_2_806860EC4039382491D0379C8EB2B11C;  // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          VFX_EmissiveColor_4_B80A07BE4EE7FF2DAFB8B9AA03815AC8; // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VFX_Gameplay_22_BEF71220401C8096B62B15A61F654565;  // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               VFX_BoxSize_7_4E9526024722AFC04256C8A1D842C6B7;    // 0x58(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VFX_LifetimeScale_14_737D9D5944E0ABB0344DB19FE324823F; // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VFX_IndexofRefraction_15_1D0750AF4AE8F2842BAFF7A7352AC05E; // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VFX_AshSpawnChance_27_02716D4F4930CC24D8E10C9DFBE93C21; // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VFX_DripsSpawnChance_29_FBCFFFF84B1C0992C30C179C54480ADC; // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VFX_ElectricalSparksSpawnChance_31_EBDDAB97442153414EC9FBA1369D2E60; // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VFX_EmbersSpawnChance_33_535453484AF2005E4CC19B8418896826; // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VFX_IceSpawnChance_35_72343ED0423AAF21DC5287949B07FADD; // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VFX_SporesSpawnChance_37_B49F08904D0611B58CC120B2E15C12EE; // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


