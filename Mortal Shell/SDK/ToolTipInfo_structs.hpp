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

// 0xB4 (0xB4 - 0x0)
// UserDefinedStruct ToolTipInfo.ToolTipInfo
struct FToolTipInfo
{
public:
	class UTexture2D*                            Icon_13_6A9B3C3C4B178D114C8AE3A67A83CDA7;          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Name_105_933A963C4D9FCA5BB44069830C37A98D;         // 0x8(0x18)(Edit, BlueprintVisible)
	class FText                                  Description_106_6401C2E54D42B389986DF1B8B3D024AF;  // 0x20(0x18)(Edit, BlueprintVisible)
	enum class EItemQuality                      Quality_39_CBD1FAA54940E088B192D7A42622FDA0;       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemType                         ItemType_86_6F65BDF74AF3950358D25783E49E9C6F;      // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStackable_49_6C7D21E34F4CA74A677416A1E92DD137;   // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_224E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxStackSize_104_457804EE421C991C4D20ADA6928E4B40; // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Health_89_7A92BB9849607E4E74D73193717EFE6F;        // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration_92_C8D2DE5F49BD64574F3A298FB9A41761;      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EquipmentType                     EquipmentType_103_6050B8874D5938BD737D84BCECFFC3F3; // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EquipmentSlotType                 EquipmentSlot_85_2DD3EC7D4ADC51E425F2C4BEB9CB572A; // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2257[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Damage_73_2F6ECE6C4E9C2E4A991E0FA4B2A0544A;        // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Armor_74_8C97FE2445A8E6E5BEE3E09093ED761A;         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Strength_75_0501B0854829642FFD33308F0CA4BA8A;      // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Dexterity_76_EA2FB9DA4D578697BB9EBEB68971CF74;     // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Intelligence_77_9022AF064DCBC523BF2829A8B9E7771B;  // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Resolve_109_A3A14CD54970557CF03B50BB78B085AE;      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Familiarity_112_8E9F87D24A820095AF7EE69960F119CF;  // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  EffectDescription_115_35A4A13446CDAEE9A2E1DC8B3DEE2B6C; // 0x68(0x18)(Edit, BlueprintVisible)
	class FText                                  ExtendedDescription_117_CEA3C9F54F5A2B1FF6FFB7ACC8E3DACF; // 0x80(0x18)(Edit, BlueprintVisible)
	class FText                                  EffectDescriptionWithFamiliarity_119_4E508F4C4839568A6BF0B5973A7B43C9; // 0x98(0x18)(Edit, BlueprintVisible)
	int32                                        TimesUsedToUnlockEffectDescription_122_44C9B6F243EF86FC5CCABCB2B6522A26; // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


