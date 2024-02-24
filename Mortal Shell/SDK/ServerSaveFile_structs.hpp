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

// 0x270 (0x270 - 0x0)
// UserDefinedStruct ServerSaveFile.ServerSaveFile
struct FServerSaveFile
{
public:
	TArray<struct FInventoryItem>                InventoryItems_3_A146AD914BF14E66B6512E99EACB9BB1; // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        PlayerMaxHealth_7_329129454F2E3E21AAC8A2A0554AEBE1; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayerHealth_10_8A7C53074574CB028179E4A3CBA8C345;  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          KnownItems_14_426E6AE54694B3CBC60D5DAD28780578;    // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         DoveIntoDepths__16_A16A2B4C41BFC234AD0CBCA2F1200A21; // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_219F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalPlayerDeaths_19_3F1ADF634C3F62BBD1BEC4B7DF4B0301; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentSigils_24_2E099C5947CED394774A53956BB241B6; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalSigils_25_E9C987D84BA8B4752C726C982A423911;   // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          UnlockedItems_30_E385A84642E33591BBE2D8BF7D33AE75; // 0x38(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                        CurrentDamageModifier_33_A8A7D8C942720CA45CE0FD88292027AA; // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentMainLevel_48_037CD6504A2A11B6F2E4FC8E26154A74; // 0x4C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentSubLevel_44_54E4981C4761519D9BBDF0B45CF83071; // 0x54(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentCheckpointID_45_7299E3054CA9B8B2E1684EACD57BBE8E; // 0x5C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21B5[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CurrentCheckpointTransform_43_118407E848CAFE646BD93B90E22BA554; // 0x70(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CurrentArmor_52_FD68A1274CE72174ED820694641B57C2;  // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BallistazookaAmmo_55_3EE113DA48E131A86A2DFFB26F60D8F3; // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21C2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PlayerCharTransform_58_58FE495741E9A0781C8EF8B68D78C718; // 0xB0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                         bShouldRestorePlayerTransform_61_1F919CE3431C676E924C1892239A3D45; // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HadernDefeatedCounter_64_5C6FF28B4AD1B4E61DF0C5A17E9BB230; // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerDeathStatueUsedCounter_67_AB6D290345536982E2EB93B982821F1F; // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShellDeteriorationCounter_71_0C00A9274832268CE0DA27B03CD854E7; // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CombatTestUnlockedDoors_76_B1DF604F40637B023E54748DF2233260; // 0xF0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<class FName, int32>                     NamedInts_82_CB032F6F45A54ED7B3582AB3AF6AC3F2;     // 0x100(0x50)(Edit, BlueprintVisible)
	TMap<class FName, int32>                     ItemFamiliarity_87_1EF143AB43726DA0F57AFAAF411B3058; // 0x150(0x50)(Edit, BlueprintVisible)
	TArray<int32>                                QuickAccessItems_92_CD92D5CF41472FA1F388A1A17CC79E4C; // 0x1A0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class EArmorTypes                       LastShellEquipped_95_12765EBA46B61A6E2661D6AD49FE2C2F; // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2210[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NewGamePlusLevel_98_0DCE90C549CCEE82E941888FFD7D0984; // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasRenouncedShells__100_132BDF80400BD3F6AF38E590569866F0; // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2214[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             TotalPlaytime_103_37326C374B5795E274B573BA6270ACFE; // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             SaveDateTime_105_93806A064FCFF80D9094F1A392EDCD60; // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, float>                     NamedFloats_112_9E2DFEA949C9819F56808EA73155D23F;  // 0x1D0(0x50)(Edit, BlueprintVisible)
	TMap<class FName, class FName>               NamedNames_117_E45DA6E447369D803C301C8BDAD9C07A;   // 0x220(0x50)(Edit, BlueprintVisible)
};

}


