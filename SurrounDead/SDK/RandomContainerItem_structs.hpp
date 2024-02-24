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

// 0x60 (0x60 - 0x0)
// UserDefinedStruct RandomContainerItem.RandomContainerItem
struct FRandomContainerItem
{
public:
	class FName                                  ItemID_3_8C5E69274AB445604263E4A2B3091BAD;         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_DataTableType                   InDT_40_AE8E3C9D4522597217E91AB69DA2DC7A;          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B93[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SpawnChance_9_0A1811814580181DD09AE78500C25A28;    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_LootType                     LootType_43_0DB1C0D64934B38847E9F980AB71F051;      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RandomCountMin_17_2CF035DB43DEE23801AD29A29560BDA9; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RandomCountMax_18_C37B88104F52B02AA216B5912518580D; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_37_B46F3993454026F67AFD6D936119D0F6;         // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreferRotated__39_71AEF07C444B177A20CAF4A74260B9CD; // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B9A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PriceOverride_29_306CC4B441051ADD17999E8D00D06A7F; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDefaultAttachments>           InContainerItem_26_8B73BDAE473217274FE336B3D2EB2407; // 0x38(0x10)(Edit, BlueprintVisible)
	struct FS_RandomStatsConfig                  RandomStats_34_54BB3BF64CE6FC45D1F1C1AA417937A4;   // 0x48(0x14)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_B9E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


