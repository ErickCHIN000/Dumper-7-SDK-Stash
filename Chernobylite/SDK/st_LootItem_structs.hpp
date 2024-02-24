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

// 0x31 (0x31 - 0x0)
// UserDefinedStruct st_LootItem.st_LootItem
struct FSt_LootItem
{
public:
	enum class Enum_ItemNames                    Item_2_7C6B59074A72BD13A808C38686B28991;           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Min_36_502F8C3A482A5CECC11E86922C3BD039;           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max_34_42391B2D452C92B6827FA6B997FA8C37;           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Chance_29_1F6D02964936AC1B5FDD3BAFD0C8DCA6;        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            RandomUpgradesDT_33_634A5A384D4495EC5F18778A6BE6B1C2; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   UpggradeToAdd_22_90C9727C4C716E3D6EADC0BC64F4169A; // 0x18(0x10)(Edit, BlueprintVisible, NoDestructor)
	float                                        RandomUpgradeChance_25_711C53A04FE34B3F1705F193D68E87D2; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RandomUpgradesToAdd_32_86ACC9714624B63B0387C89269758CA2; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseFloat_38_E3F4735445B60AF46B75A69C3A114C30;      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


