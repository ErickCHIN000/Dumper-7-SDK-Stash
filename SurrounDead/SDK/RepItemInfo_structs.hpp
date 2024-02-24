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

// 0x50 (0x50 - 0x0)
// UserDefinedStruct RepItemInfo.RepItemInfo
struct FRepItemInfo
{
public:
	class FName                                  ItemID_2_01CA27D84AF7D1014D9E2E83894C1848;         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_DataTableType                   DtRef_27_6EF2E9CD4C590B11BE4E93A3AE788CB7;         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count_8_DD79AF2A46126A338C8DCCB4616D91CD;          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ItemVec_13_4DB12E4E4F80730BD25ACFA6FA51AD0A;       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Weight_16_C6B7568A4E062D2AE81209916A32B4EB;        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Price_19_FEFE0D2A4561BAF04CE37D9BAE1D6EF7;         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Durability_22_A3557C454274D193D47AB9B71FB0C0CA;    // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_ItemStat>                   Stats_26_C770972746930CB80CC49AB7A6D19359;         // 0x40(0x10)(Edit, BlueprintVisible, SaveGame)
};

}


