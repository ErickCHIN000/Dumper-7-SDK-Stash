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

// 0x68 (0x68 - 0x0)
// UserDefinedStruct Struct_StormModeRun_Data.Struct_StormModeRun_Data
struct FStruct_StormModeRun_Data
{
public:
	int32                                        Attempt_7_439D0E18446BE79ECC28A088C94FFE90;        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Seed_5_114DC91E4A354A15C9CFCBA38492E512;           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             Playtime_2_142CAD294B1F4F0091511D849F6510F4;       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       SelectedShell_10_3D3024E34CABE0AAD859C6AF589FE0E9; // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       SelectedWeapon_14_C68E38A9493F29AD3C6058A38F8BC57B; // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BDB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RunesObtained_18_3B64B59E4D5229977EFCD2987FDE2A43; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FDateTime, struct FStruct_Rune>  ProgressRunes_23_270DDD62461E2E3DF3C04E9B7573CFAB; // 0x18(0x50)(Edit, BlueprintVisible)
};

}


