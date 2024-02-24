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

// 0xAD (0xAD - 0x0)
// UserDefinedStruct Struct_Rune_LevelUpDetails.Struct_Rune_LevelUpDetails
struct FStruct_Rune_LevelUpDetails
{
public:
	class FName                                  Rune_ID_13_7ACDF5D1407782CA77E6D99D8AAB850C;       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class Enum_Rune_Tier, struct FVector2D> Rune_LevelUp_X_5_F83FED7B48F59D46133A23A92D90A4B7; // 0x8(0x50)(Edit, BlueprintVisible)
	TMap<enum class Enum_Rune_Tier, struct FVector2D> Rune_LevelUp_X_7_6B577D384F09D4C80B71A1987C6379F0; // 0x58(0x50)(Edit, BlueprintVisible)
	int32                                        X_Max_22_C295B57A4C17F02D2B0D95A014B13EDF;         // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KeepXValueFromPreviousTier_24_2769F6B641B016C9E7169685AE9EA713; // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


