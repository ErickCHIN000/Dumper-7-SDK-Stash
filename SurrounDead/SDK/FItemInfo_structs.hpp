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

// 0x1D9 (0x1D9 - 0x0)
// UserDefinedStruct FItemInfo.FItemInfo
struct FFItemInfo
{
public:
	class FName                                  ItemID_107_1737366145EEBA44086DB6ACE0E9C90F;       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        UniqueServerID_83_19E6C8FE42B778BAE918F79F1D85AE2A; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EJSItemType                       Type_12_E22AD1CB453807664569C7949C6F4AB9;          // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlotRarity                       Rarity_38_07F066D7469AAC458F4C5EAE38A3404D;        // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanStack_5_C8C8CA994713D5823B06DDB479DDA7A1;       // 0xE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_182C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxStack_8_4ABF8FB44B55528999A71A9403501AF2;       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_182E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              InventoryImage_122_E628F1D64A229DE1FEB2E4A836A2A062; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              EquipImage_121_34EC19E34B706C766FAA758EFC9FDDC5;   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SlotDimension_19_F030B0224A638DF8046DFBA1A9F61992; // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Count_22_BFF3027A4FD5D984887F16B0B821DF3E;         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1834[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Weight_30_E433C36F456EFAB514CBEDAADFB5327D;        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Durability_137_1FFC60434A9D9E3199B21CAD34725488;   // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxDurability_138_B52F04AF405ADDB0E93D399D08A857E5; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DamageReduction_170_D8D5CA1E46DB9FB30D2000BFB2DA15A6; // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             ConsumeSound_154_9DCDEFDF45CB9EA4F8DD6F945D247220; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       HungerConsumeValue_161_D2AC94E343042C4434D5DEA2DB244F1F; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ThirstConsumeValue_164_3A67B10E4B7F5F1D18B4DF8D9FA71B40; // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HealthConsumeValue_165_B891DB044724BAB16B8D56BD1608F716; // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RadiationConsumeValue_166_6F73764D43BDE8C127D4C0856ED9762B; // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EnergyConsumeValue_167_D1CEF21248493BBBA2AE4DBB99DD9810; // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          RemoveEffects_178_5B94B60D47FC371C28E506B1F81B102D; // 0x90(0x10)(Edit, BlueprintVisible)
	double                                       Price_57_4C5179914BEF1256A839BC82633708AA;         // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Name_25_93E2656145FAF7132466958620A18F32;          // 0xA8(0x18)(Edit, BlueprintVisible)
	class FText                                  DisplayName_86_2237A1B6401F88D046C1FFB42F1AE9E1;   // 0xC0(0x18)(Edit, BlueprintVisible)
	class FText                                  Description_27_45B737B141296650099E5D8976095DA0;   // 0xD8(0x18)(Edit, BlueprintVisible)
	class USoundCue*                             DragSound_53_319DAD62494F43F830CF478CE95AED88;     // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             DropSound_54_F650CD1C4D08B863C42B87A31E1B6B21;     // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsContainer__63_3AD174BB4850528B424E14A0C4C8572B;  // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCapacityContainer__188_F36CB4214531EE0A281F92B9FD1F0CAA; // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1864[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Container_Dimension_65_6D47220C4F2046154883BABEAB9FD1E8; // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EJSItemType>               ContainerSupportedItems_62_F265E89F42E4E8297D366D9210B5C2C7; // 0x118(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          ContainerOnlySupportedIDs_143_6C43851D43640AF0030953920C18596C; // 0x128(0x10)(Edit, BlueprintVisible)
	bool                                         OpenContainerOnDoubleClick__67_68B91ADA4ECCFD7451C90F9CC7FC8C88; // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotated__59_F26C07E6426F46EEC5E69AA45599BE1A;      // 0x139(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1877[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ActorClass_70_77A75A04464A96A5A5D68DB6F2799286;    // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SpecialContainerWidget_100_5352E1BC43874D84D3B55FA48815DAA5; // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           SpecialContainerRef_103_7EA1683D4FDD0D5BA6B8758A430EC4BE; // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         AddSpecialContainerToInspector_142_BDF0AD834C1DC3EA0434E58E3FB094CB; // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1880[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector2D>                     SpecialContainersDimentions_118_1C8E6CB641CFF5761E89E5AD622315A4; // 0x160(0x10)(Edit, BlueprintVisible)
	TArray<enum class EJigContextMenu>           ContextMenuOptions_132_FCFE7D8B4DFC53B3B3F63F84D8369629; // 0x170(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_ItemStat>                   ItemStats_150_C8AE8E0246895AC10A90C9A920F6924C;    // 0x180(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_CustomItemStat>             CustomItemStats_181_A95DCF12440B37A9BDD7A08A54EACAB4; // 0x190(0x10)(Edit, BlueprintVisible)
	struct FS_Buildables                         BuildableInfo_173_A4C3AEC042ED1DDE0600888180CB0C20; // 0x1A0(0x38)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	enum class E_DataTableType                   DataTableRef_151_A7EA1E9840AD592F445E1DA473381D6E; // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


