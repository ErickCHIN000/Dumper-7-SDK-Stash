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

// 0x118 (0x118 - 0x0)
// UserDefinedStruct s_bodySystem.s_bodySystem
struct FS_bodySystem
{
public:
	class FString                                ID_3_365456FD4AB7A5566CA7458C8DE4D392;             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	enum class E_UnlockType                      Type_9_5AFC90ED486FE48C5E8AC1AA22F1BDC2;           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2720[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Thumbnail_32_4F6CE5EC412F44324CC0EF889E4077F5;     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Item_12_BAA5B9EA4387609A39A808B11777640A;          // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor)
	class FText                                  Name_39_72130AE942EAD403C01ECC986CDAAE11;          // 0x30(0x18)(Edit, BlueprintVisible)
	class FText                                  Description_25_38DC0085421BDFF1529A2282BB32D540;   // 0x48(0x18)(Edit, BlueprintVisible)
	bool                                         GenderRelevant_15_2C06C1CF4B87CDAB9310259D5D695974; // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_mf                              Gender_18_41E8491B49DBE5DAEE7C64ABB2799FE7;        // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2724[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   OtherGenderEntry_44_F29109D04533A5B456EFCD9AD237F38F; // 0x68(0x10)(Edit, BlueprintVisible, NoDestructor)
	class UTexture2D*                            SpeciesSymbol_34_EF33776A4EFB9DB202D3419CF12DAF17; // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Quote_38_4D7F4E3B4583264FCE5F5EBBC00466EB;         // 0x80(0x18)(Edit, BlueprintVisible)
	struct FS_MorphTargets                       Morph_49_E6E2BD134DD7DCB7469EF08BF012484D;         // 0x98(0x34)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_2727[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialParameterCollection*          MPCName_63_C052497949349D8DEC3D0198C0839E36;       // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVectorParameterValue>         MPCParameters_53_05FC07B6434958EFCB0678B959AC1161; // 0xD8(0x10)(Edit, BlueprintVisible)
	bool                                         Unlocked_42_9E58336447A6AAE6909D0DB337D03BF4;      // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Selected_46_F85627AC49541364A5975E89FC819BF6;      // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Default_65_82D4D9044AD0E4BB35730A87C4A6C8AE;       // 0xEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2729[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           FormLink_60_78AAE4604298CB71E33C9380052E7D9C;      // 0xF0(0x10)(Edit, BlueprintVisible)
	bool                                         IgnoreItem_67_7D933AB04CD75CC783561881E5491E11;    // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_unlockedby                      UnlockedBY_75_132B6FDC4F379BA10F6BAE8858CB4815;    // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2730[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UnlockText_73_362622874CAF8E136777ECA40290CD9C;    // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};

}


