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

// 0x30 (0x30 - 0x0)
// UserDefinedStruct Struct_RandomLootTable.Struct_RandomLootTable
struct FStruct_RandomLootTable
{
public:
	int32                                        Default_14_4189D9DA42C2B912FC25209E8C353A26;       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2299[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_RandomLootOdds>        DropCount_15_A4643C45437ECBC97BC6629ECC66F6B6;     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	class FText                                  Comment_13_11E6C8E8493E0A73AF9B35891E7CE111;       // 0x18(0x18)(Edit, BlueprintVisible)
};

}


