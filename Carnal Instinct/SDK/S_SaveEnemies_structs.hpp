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

// 0x98 (0x98 - 0x0)
// UserDefinedStruct S_SaveEnemies.S_SaveEnemies
struct FS_SaveEnemies
{
public:
	class UClass*                                Enemy_2_A5CA909543359850C1D6E395B0B3C7FF;          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform_7_506810E94C55BF32C460E98F8C788922;      // 0x10(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                         IsInCombat_8_EBE575504F2AA25F01C531925798D762;     // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2744[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FF_Stat>                       Stats_12_D673BC6F4C3CF4ABF22ED7839644E66A;         // 0x48(0x10)(Edit, BlueprintVisible)
	TArray<class UDataTable*>                    AllDTItems_17_26407CEF4BD5ADD7D4E57485D16966E6;    // 0x58(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_SingleDTItem>               SingleDTItem_18_E2D2182D43DD2E6D69E9608F25FDBD0F;  // 0x68(0x10)(Edit, BlueprintVisible)
	class ABP_PatrolPath_C*                      PatrolPath_27_3C961E6C42F91328C5BBD5A5EFC68ECB;    // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PatrolPointIndex_30_D76E81D24E4C7425D23BB782D4C3014E; // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PatrolReverseDirection_33_D223B7694BDECA95365CEE82100B145D; // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2753[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnemyLevel_36_0AADB5A94FF471FA7A0BB1BA310E8CB2;    // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_levelRange                         LevelRange_42_A02C187F44E48210242B3E86D1C65593;    // 0x8C(0x9)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2756[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


