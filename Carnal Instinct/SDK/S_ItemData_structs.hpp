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

// 0xE8 (0xE8 - 0x0)
// UserDefinedStruct S_ItemData.S_ItemData
struct FS_ItemData
{
public:
	enum class E_ItemType                        Type_20_46F425174147767C8A0DABAC6AB31026;          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ItemRarity                      Rarity_21_925D14C8414CF93F2305D7A6D5188495;        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ItemSlot                        Slot_34_D8E166834B91EEF8631726AE76BDFFE0;          // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponCategory                  WeaponCategory_39_F862F0E742062EF3F2F6C3822F799E82; // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_InventoryPanels                 InventoryPanel_52_96E1E48142B8DF84E6AB2989D90EC434; // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_256D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Class_35_339B4ECA4D896DDB8D92099B3B29B95E;         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Image_24_0BFBCCB74A964213E6912595DBFE1DEE;         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_25_131A428548E5C72EF9A9C5B7F3185A4B;         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2571[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDesc                           Description_30_659254E247E96937F7F0DDA49BE2F2C6;   // 0x20(0x58)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_ItemStats                          Stats_31_2451FE194DC5527BC46DFBA506040144;         // 0x78(0x2C)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_2574[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemStacks                         Stacks_32_C4392D6D420300E25C35A48F37C35AFD;        // 0xA8(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemUse                            Use_49_3A1430C74327D32652648098D1731522;           // 0xB0(0x3)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2576[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                UnlockedAbility_42_2B59689849279E0751DBF2B5D10D4842; // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ArrowClass_46_EC4EB0C24FFF041752080AB873689596;    // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ObjectiveID_58_ADD5708B491C1540CDE92BB3AE473BE4;   // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	enum class E_Meshcheck                       MeshCheck_61_D0844680433C1F18DA5671929C7FFD3D;     // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2578[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ConsumableAction_64_231E19644BF457D48DA67597159DF4F9; // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


