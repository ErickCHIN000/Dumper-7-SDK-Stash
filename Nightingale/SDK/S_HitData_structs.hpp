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

// 0xA1 (0xA1 - 0x0)
// UserDefinedStruct S_HitData.S_HitData
struct FS_HitData
{
public:
	struct FVector                               Location_4_6E377F2F4910AA23DDC001A96E52DA69;       // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Direction_5_495A280241500FE1FC3A36AA783D1B85;      // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Strength_20_7869DD7043CFE87EAB2EEDA3D886893F;      // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F81[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Origin_21_636F93724158F01D083132872E783C94;        // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Radius_22_C3E772B2476AAC7053AD3FBA614613E1;        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F86[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  InteractionTags_26_8F13FB1041DB0C2D7C5DF88C1A3ED5BB; // 0x58(0x10)(Edit, BlueprintVisible)
	struct FVector                               Normal_29_E80EC5EE4BD90BCF6C92B5B190C323C2;        // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactNormal_31_A31ECC7C4DEC212EB6865A80B371880C;  // 0x80(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     WeaponPhysMat_34_3FCCFFA4429D522DADEC1D98340D5C40; // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_PhysicalStrikeType              StrikeType_37_CDA866E6414012643601EB86AD25E12E;    // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


