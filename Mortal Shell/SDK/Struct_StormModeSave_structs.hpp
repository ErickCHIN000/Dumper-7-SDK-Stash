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

// 0x458 (0x458 - 0x0)
// UserDefinedStruct Struct_StormModeSave.Struct_StormModeSave
struct FStruct_StormModeSave
{
public:
	enum class Enum_StormModeProgress            Progress_StormMode_50_8C558CDA431A77BDD1943BB06E947A2B; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_223C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryItem>                Inventory_StormMode_3_830ACFBB4136D23BE6DB3882D489124C; // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class EArmorTypes                       SelectedShell_StormMode_7_1B2B778745D9BB411488C5B003D53801; // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       SelectedWeapon_StormMode_10_CA5A9EB945370A9A958C6EA1B5862A63; // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_224B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedRiposte_StormMode_47_59FC10A3439D564A864ACE9B504C2405; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentMainLevel_StormMode_13_1AEA35E7482F22C88E7823AB36DFF469; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentSubLevel_StormMode_15_6182E1464224F7B1838C39AD3F0B0967; // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentCheckpoint_StormMode_17_E948384B40299427941869A7182D8CCE; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2253[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CurrentCheckpointTransform_StormMode_20_65D29013415713DAF85F969DF9B22AC3; // 0x40(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TArray<class FName>                          UnlockedItems_StormMode_25_60B3659F4F4923E615B9D5AFD96F417E; // 0x70(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<class FName, int32>                     Familiarity_StormMode_29_D5F7492D495D731B72EADDA26109F530; // 0x80(0x50)(Edit, BlueprintVisible)
	TMap<class FName, int32>                     NamedInts_StormMode_31_CF554F674F568B81370C968E9EF1459F; // 0xD0(0x50)(Edit, BlueprintVisible)
	TMap<class FName, float>                     NamedFloats_StormMode_34_D041B2F34F090E490AB35282B2919448; // 0x120(0x50)(Edit, BlueprintVisible)
	TMap<class FName, class FName>               NamedNames_StormMode_43_63747D3A42C5FC11B8FC81905AE0896A; // 0x170(0x50)(Edit, BlueprintVisible)
	TArray<int32>                                QuickSlots_StormMode_38_FE704A7E4F86B3752D7C9F8EFF3E3FF5; // 0x1C0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FStruct_Rune>                  Runes_All_54_73C5B35E441CA4191FBC9BB7A0242D97;     // 0x1D0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<class FName, struct FStruct_Rune>       SlotsStatus_59_905710E2447D5BBC07029D81CA72C27F;   // 0x1E0(0x50)(Edit, BlueprintVisible)
	TMap<class FName, struct FStruct_Rune>       SlotsMisc_61_BF610A27481F384904888AA69A9C507D;     // 0x230(0x50)(Edit, BlueprintVisible)
	TArray<class FName>                          Runes_IDs_64_581576F043138AB3FDF688B24F444426;     // 0x280(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<enum class Enum_Rune_Category_Randomizer, int32> Runes_Progress_70_014F1B92470BB6EA037B65804AFB625F; // 0x290(0x50)(Edit, BlueprintVisible)
	bool                                         ShouldRestorePlayerTransform_72_536796294A758B1095C3AFBB9161B5DD; // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_227C[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PlayerTransform_75_68B4B97243F05B5C324720AD26A99FCE; // 0x2F0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TMap<enum class Enum_StormModeArea, enum class Enum_StormModeAreaState> StormModeEntrancesState_93_ACB74060406A6127E3CE49BA279D084F; // 0x320(0x50)(Edit, BlueprintVisible)
	TMap<enum class Enum_StormModeProgress, int32> StormModeAreasProgress_94_A6DB5449475E1DE09EF3CD85F6AF3E57; // 0x370(0x50)(Edit, BlueprintVisible)
	int32                                        MaxHealth_89_747BF7B7416D17384FCE89AC1280800B;     // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentHealth_92_599234284B5E969F845B2DA560E8A1EC; // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class Enum_StormModeProgress, enum class Enum_StormModeGlandData> StormModeGlandData_99_C0B30F1546F2B16357B7E1894988CFF8; // 0x3C8(0x50)(Edit, BlueprintVisible)
	struct FStruct_StormModeSeeds                StormModeSeeds_102_091A58D641AD6938AADE0E9D690CB466; // 0x418(0x28)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             StormMode_TotalPlaytime_105_A98D8A174C5FF07D7E00C88D8F9DF388; // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             StormMode_SaveDateTime_107_835BB67E4FA83865916BFFBF48DED61B; // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             StormMode_RunPlaytime_110_5F0A8E264FC3A888B659B588C0AC6592; // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}


