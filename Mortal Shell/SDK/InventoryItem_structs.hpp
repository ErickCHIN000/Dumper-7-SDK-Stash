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

// 0x132 (0x132 - 0x0)
// UserDefinedStruct InventoryItem.InventoryItem
struct FInventoryItem
{
public:
	class FName                                  ID_35_21A6C172469948671FD3CB8A1BBED0DB;            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Icon_13_6A9B3C3C4B178D114C8AE3A67A83CDA7;          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Name_124_933A963C4D9FCA5BB44069830C37A98D;         // 0x10(0x18)(Edit, BlueprintVisible)
	enum class EItemQuality                      Quality_39_CBD1FAA54940E088B192D7A42622FDA0;       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemType                         ItemType_86_6F65BDF74AF3950358D25783E49E9C6F;      // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_0[0x2];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Amount_104_5BD0F40343BC83E7582405A59DEF24E8;       // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStackable_49_6C7D21E34F4CA74A677416A1E92DD137;   // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1[0x3];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxStackSize_105_457804EE421C991C4D20ADA6928E4B40; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDroppable_47_FD6A8C9B486540A3AFA8CFA34BD27F3E;   // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            WorldMesh_162_E41FA2844987FED80FF57DAB57051117;    // 0x40(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>          EquipmentMesh_163_4E1AEEC647C20D2E61E81B8072609EB4; // 0x68(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class EquipmentType                     EquipmentType_103_6050B8874D5938BD737D84BCECFFC3F3; // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EquipmentSlotType                 EquipmentSlot_85_2DD3EC7D4ADC51E425F2C4BEB9CB572A; // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3[0x2];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Damage_73_2F6ECE6C4E9C2E4A991E0FA4B2A0544A;        // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsIdentified_107_644823CA41BE3BA8156D2FB63424658C; // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemClass_111_F32BDB714283DDCEF62C88B67225C929;    // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                WeaponCode_114_5D50CA6D4D52AAF9AE87FF9651F46921;   // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsUnlockable_116_E4DE068749E286BB098270ABC96575F7; // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemEffectOnPlayer               ItemEffectOnPlayer_119_010A053348524F508E9BD7A5D89FE707; // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LostOnDeath__132_3750C8124EA702BD05C6A784EF1D14C7; // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsKeyItem__134_29D406104EF575721FF2ECAC2A46465F;   // 0xBB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemConsumeAnimToPlay            Animation_Type_To_Play_When_Consumed_146_C41527C645BA8F02DD94EFABB277571A; // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5[0x3];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description_123_6401C2E54D42B389986DF1B8B3D024AF;  // 0xC0(0x18)(Edit, BlueprintVisible)
	int32                                        Times_Used_To_Unlock_EffectDescription_155_1149E4D5493A54A47B3667BADC15E85C; // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  EffectDescription_149_9862957349FBA66A83CB0C91156E4BA3; // 0xE0(0x18)(Edit, BlueprintVisible)
	int32                                        Times_Used_To_Unlock_Extended_Description_142_40A62AE34AD11E74DB48309E2D28166D; // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Extended_Description_139_0DF3F63546AECD63E468769E52AB0DC3; // 0x100(0x18)(Edit, BlueprintVisible)
	class FText                                  EffectDescriptionWithFamiliarity_152_C195D34A4139D3AAD83EB2A2E92112B4; // 0x118(0x18)(Edit, BlueprintVisible)
	bool                                         bUsableInDarkForm_159_F1C94C78468CD4FF30BC67B71F21A276; // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUsableFromMenu_161_0198A20B4908FACF1468ACA25BA79370; // 0x131(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


