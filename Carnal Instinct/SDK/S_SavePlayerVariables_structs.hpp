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

// 0xF0 (0xF0 - 0x0)
// UserDefinedStruct S_SavePlayerVariables.S_SavePlayerVariables
struct FS_SavePlayerVariables
{
public:
	bool                                         IsInCombat_1_75F58ACD44BDEDE5ED3D7682C1062422;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_CombatType                      CombatType_4_FE355AE649B348FDFBC5298AE89A90E5;     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALS_Stance                       Stance_7_A9E581A5429B5E5AAA1C89ABE329A1BB;         // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_149E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkylightIntesnity_11_81258C3A433D4E37903F8EB1006F2F33; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Ismale_13_42323F3B4DDBDA11A2648895116C1B5E;        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_skinTint                           SkinTint_16_16BACE0542FF7787BBFD00AE7433F3E6;      // 0x10(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        SkinTintINdex_19_763213C9427A8A18803AA091EF180501; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Meshcheck                       Mesh_22_568961724BCFF51B3D44CC935A3661A9;          // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level_25_D295C2D74275EA3DE03C168A70188747;         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentXp_28_B83605F04BCF524231F117BCE3FC2D7C;     // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeofDay_31_097D27204A1880E439B8348298465BC2;     // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimateTimeofDay_35_5395AC0145071896719F6792B9D09E9F; // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_MorphTargets>               Morphs_39_3567A57A483BBACCEE4AEB8D641BEA1A;        // 0x48(0x10)(Edit, BlueprintVisible)
	bool                                         RespawnatCamp_41_34DFBB614DB639899F8DCC99A3DB7BB1; // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FS_bodySystem>    BodyUnlocks_48_C6DF391545E2469998AD2089555CC1C5;   // 0x60(0x50)(Edit, BlueprintVisible)
	bool                                         FirstLaunch_50_F27A25E14388E584B0A9AA8759C7A1DB;   // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CarnalInstinct_53_FC074B8F464C0B7240FA6C93F440F3B5; // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CIXp_56_21AF6D0D485467F0E997B5A20E698E8D;          // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorParameterValue                 PiercingInfo_61_886CD4224161E4275FBC248D939BE16B;  // 0xBC(0x30)(Edit, BlueprintVisible, NoDestructor)
	float                                        PiercingScalar_64_E70222574634CAEC34A3F98D419744BE; // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


