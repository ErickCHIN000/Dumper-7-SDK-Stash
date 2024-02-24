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

// 0x138 (0x138 - 0x0)
// UserDefinedStruct S_RangedAbilityResponses.S_RangedAbilityResponses
struct FS_RangedAbilityResponses
{
public:
	struct FLinearColor                          VFX_BaseColor_2_C19F546B4D6C43341868319D36F82258;  // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          VFX_EmissiveColor_4_7F6EF3F84BBC9625FF1A4EB2A1390C89; // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          VFX_SmokeColor_6_2626D25F4A17088A146CAFB6DF707408; // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_LifetimeScale_11_CBF0E9554BA0590AB6AC9E9ACFEC78C1; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_Scale_13_34F337334B8E65CF29C3B1B33EA244C7;     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SpreadScale_15_E8B25E1F4AE1735020D7448FC7657C2C; // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_VelScale_17_6B27589848B9C74D0FC4BEB6A05B472A;  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_DebrisSpawnChance_19_1E74351D43EDB2E4788EC2B9BE917D5F; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_DustSpawnChance_21_0A3147DF402D10BAC5754888667973C2; // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SmokeSpawnChance_23_D150949945D2DD07298F41A147C7277F; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SparksSpawnChance_25_3555DFB8459042E64A4AE4A992BAECA9; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ApplyVFXDataForMuzzleFlashEffect_43_182D1C4648CCCB0F936D62A3207527F1; // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2566[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         MuzzleFlashEffect_28_D2682E3D44B03F20E84483B351751DFF; // 0x78(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         ApplyVFXDataForFlightEffect_41_71D447244900D624F110F7B4426D3A1E; // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_256D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         FlightEffect_32_CA18DA204C6A438D82F443912E2BC2CA;  // 0xA8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         ApplyVFXDataForFizzleEffect_42_7927AA8549DBD7EED2CBEAB3A3B4F4C5; // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2578[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         FizzleEffect_34_C949F88949FB39B55C5850A6BC4B54B3;  // 0xD8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLinearColor                          VFX_CoolColor_46_98B2E40E43D246A970D87791068581DC; // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_FireSpawnChance_50_44FE319D4523F932B7837FB5C08AABD6; // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_FrostSpawnChance_52_78085B844793C16C97E00FA9360280CF; // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_MarbleType_54_2981E32A480A99160DDF309E061AAD23; // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_SplashSpawnChance_56_2022852D4E2D1DB41CB0C7B4C504EFCB; // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFX_MetalSpawnChance_59_618AC8784346FE85EF99A6B07F4FF441; // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


