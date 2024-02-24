#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFuelType : uint8
{
	Default                        = 0,
	Water                          = 1,
	EFuelType_MAX                  = 2,
};

enum class EItemQuality : uint8
{
	Poor                           = 0,
	Common                         = 1,
	Uncommon                       = 2,
	Rare                           = 3,
	Epic                           = 4,
	Legendary                      = 5,
	Artifact                       = 6,
	Unique                         = 7,
	Count                          = 8,
	Invalid                        = 255,
	EItemQuality_MAX               = 256,
};

enum class EItemType : uint8
{
	Default                        = 0,
	WeaponRangedRifle              = 1,
	WeaponMelee                    = 2,
	Handheld                       = 3,
	ArmourTorso                    = 4,
	ArmourHeadwear                 = 5,
	ArmourLegwear                  = 6,
	Tool                           = 7,
	TooBigToHold                   = 8,
	WeaponRangedPistol             = 9,
	WeaponStaff                    = 10,
	Shield                         = 11,
	Lantern                        = 12,
	SpyGlass                       = 13,
	ResourceStrongbox              = 14,
	ResourceWood                   = 15,
	InventoryContainer             = 16,
	VisualMesh                     = 17,
	EItemType_MAX                  = 18,
};

enum class EItemSize : uint8
{
	None                           = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	EItemSize_MAX                  = 4,
};

enum class EAddressCardType : uint8
{
	Deployment                     = 0,
	Named                          = 1,
	Respite                        = 2,
	EAddressCardType_MAX           = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ItemTypes.InstanceData_Traits
struct FInstanceData_Traits
{
public:
	struct FGameplayTagContainer                 Traits;                                            // 0x0(0x20)(BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
};

// 0x38 (0x80 - 0x48)
// ScriptStruct ItemTypes.TechniqueDataHandle
struct FTechniqueDataHandle : public FUniquelyIdentifiableAssetReference
{
public:
	struct FGuid                                 UniqueAssetId;                                     // 0x48(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       DataAssetPath;                                     // 0x58(0x20)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D9B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ItemTypes.InstanceData_SpellTechniques
struct FInstanceData_SpellTechniques
{
public:
	int32                                        ActiveTechniqueIndex;                              // 0x0(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTechniqueDataHandle>          ItemSpellTechniqueHandles;                         // 0x8(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x38 (0x80 - 0x48)
// ScriptStruct ItemTypes.ItemDataReference
struct FItemDataReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FSoftObjectPath                       DataAssetPath;                                     // 0x48(0x20)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AssetUID;                                          // 0x68(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DAE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x90 - 0x48)
// ScriptStruct ItemTypes.CharacteristicDataReference
struct FCharacteristicDataReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FSoftObjectPath                       DataAssetPath;                                     // 0x48(0x20)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AssetUID;                                          // 0x68(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Level;                                             // 0x78(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DB1[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ItemTypes.RegionCustomizationInstanceData
struct FRegionCustomizationInstanceData
{
public:
	struct FItemDataReference                    ItemDataReference;                                 // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacteristicDataReference          CharacteristicReference;                           // 0x80(0x90)(BlueprintVisible, BlueprintReadOnly, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ItemTypes.InstanceData_RegionCustomization
struct FInstanceData_RegionCustomization
{
public:
	TArray<struct FRegionCustomizationInstanceData> MaterialRegionData;                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FRegionCustomizationInstanceData> MetalRegionData;                                   // 0x10(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FRegionCustomizationInstanceData> GemRegionData;                                     // 0x20(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ItemTypes.InstanceData_Quality
struct FInstanceData_Quality
{
public:
	enum class EItemQuality                      Quality;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x80 - 0x48)
// ScriptStruct ItemTypes.ItemPerkDataReference
struct FItemPerkDataReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FSoftObjectPath                       DataAssetPath;                                     // 0x48(0x20)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 AssetUID;                                          // 0x68(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DDB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ItemTypes.InstanceData_Perks
struct FInstanceData_Perks
{
public:
	TArray<struct FItemPerkDataReference>        ItemPerkReferences;                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ItemTypes.InstanceData_Fuel
struct FInstanceData_Fuel
{
public:
	float                                        CurrentFuel;                                       // 0x0(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ItemTypes.InstanceData_Durability
struct FInstanceData_Durability
{
public:
	float                                        CurrentDurability;                                 // 0x0(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x70 - 0x48)
// ScriptStruct ItemTypes.ResourceCustomizationDataReference
struct FResourceCustomizationDataReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FGuid                                 AssetUID;                                          // 0x48(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Level;                                             // 0x58(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DF7[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ItemTypes.InstanceData_CustomizationOverrides
struct FInstanceData_CustomizationOverrides
{
public:
	TArray<struct FResourceCustomizationDataReference> MaterialRegionData;                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ItemTypes.InstanceData_CrafterName
struct FInstanceData_CrafterName
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ItemTypes.InstanceData_CharacteristicInfo
struct FInstanceData_CharacteristicInfo
{
public:
	struct FCharacteristicDataReference          PrimaryCharacteristic;                             // 0x0(0x90)(Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PrimaryCharacteristicLevel;                        // 0x90(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E06[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacteristicDataReference>  AdditionalCharacteristics;                         // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<uint8>                                AdditionalCharacteristicsLevels;                   // 0xA8(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E0A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x80 - 0x48)
// ScriptStruct ItemTypes.ItemAttributeModifierReference
struct FItemAttributeModifierReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FSoftObjectPath                       DataAssetPath;                                     // 0x48(0x20)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AssetUID;                                          // 0x68(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E19[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ItemTypes.InstancedItemAttributeModifier
struct FInstancedItemAttributeModifier
{
public:
	struct FItemAttributeModifierReference       ModifierReference;                                 // 0x0(0x80)(Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E26[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ItemTypes.InstanceData_AttributeModifiers
struct FInstanceData_AttributeModifiers
{
public:
	TArray<struct FInstancedItemAttributeModifier> Modifiers;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FInstancedItemAttributeModifier> AdditionalModifiers;                               // 0x10(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ItemTypes.InstanceData_AmmoClip
struct FInstanceData_AmmoClip
{
public:
	struct FItemDataReference                    LoadedAmmoType;                                    // 0x0(0x80)(BlueprintVisible, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoadedAmmoCount;                                   // 0x80(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3F[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ItemTypes.InstanceData_AddressCard
struct FInstanceData_AddressCard
{
public:
	enum class EAddressCardType                  AddressType;                                       // 0x0(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E51[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AddressValue;                                      // 0x8(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        RespitePlayerIds;                                  // 0x18(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	uint8                                        Biome;                                             // 0x28(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RealmPowerLevel;                                   // 0x2C(0x4)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ItemTypes.CharacteristicData
struct FCharacteristicData
{
public:
	class FText                                  BaseDisplayName;                                   // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPowerLevel                           PowerLevel;                                        // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E66[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TraitTags;                                         // 0x60(0x20)(Edit, NativeAccessSpecifierPublic)
	TMap<struct FGameplayAttribute, int32>       ModifierValues;                                    // 0x80(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UResourceCustomizationType*            CustomizationData;                                 // 0xD0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ItemTypes.CharacteristicAndQuality
struct FCharacteristicAndQuality
{
public:
	struct FCharacteristicDataReference          CharacteristicRef;                                 // 0x0(0x90)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemQuality                      Quality;                                           // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6F[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ItemTypes.ItemInstanceDurabilityData
struct FItemInstanceDurabilityData
{
public:
	float                                        CurrentDurability;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDurability;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedDurability;                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNearBreaking;                                   // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBroken;                                         // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7E[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ItemTypes.ItemInstanceFuelData
struct FItemInstanceFuelData
{
public:
	float                                        CurrentFuel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFuel;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedFuel;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFuelType                         FuelType;                                          // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ItemTypes.ItemAttributeModifierData
struct FItemAttributeModifierData
{
public:
	class FText                                  BaseDisplayName;                                   // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)
	TMap<struct FGameplayAttribute, int32>       Modifiers;                                         // 0x60(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ItemTypes.ItemData
struct FItemData
{
public:
	class FString                                DevName;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DevDescription;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemType                         ItemType;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxStackCount;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AItem>                   ItemActor;                                         // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UISortingTags;                                     // 0x50(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UItemPresentationDataAsset> PresentationData;                                  // 0x70(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPowerLevel                           BasePowerLevel;                                    // 0x98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UItemSubtypeObject*>            SubTypes;                                          // 0xA0(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ItemTypeTag;                                       // 0xB0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 Tags;                                              // 0xB8(0x20)(Edit, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ItemTypes.ItemPerkArchetypeData
struct FItemPerkArchetypeData
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ItemTypes.ItemPerkData
struct FItemPerkData
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x58(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UItemPerkArchetypeDataAsset> PerkArchetypeData;                                 // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   PerkEffects;                                       // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ItemTypes.AnimalCustomizationValues
struct FAnimalCustomizationValues : public FTableRowBase
{
public:
	float                                        GradientIndex;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseIndex;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MarkingsIndex;                                     // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct ItemTypes.ResourceCustomizationData
struct FResourceCustomizationData
{
public:
	TSoftObjectPtr<class UTexture2D>             NMR;                                               // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MaterialType;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Pattern;                                           // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatternRotation;                                   // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Tint1;                                             // 0x68(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Tint2;                                             // 0x78(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   AnimalValues;                                      // 0x88(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Iridescence;                                       // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   MetalValue;                                        // 0xA8(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ItemTypes.MaterialCustomizationTieredOverrides
struct FMaterialCustomizationTieredOverrides
{
public:
	bool                                         bOverrideNMR;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             NMR;                                               // 0x8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideMaterialType;                             // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          MaterialType;                                      // 0x34(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridePattern;                                  // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F04[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Pattern;                                           // 0x48(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridePatternRotation;                          // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F07[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PatternRotation;                                   // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideTint1;                                    // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Tint1;                                             // 0x80(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideTint2;                                    // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F13[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Tint2;                                             // 0x98(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideIridescence;                              // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F19[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Iridescence;                                       // 0xAC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ItemTypes.ResourceCustomizationData_Loaded
struct FResourceCustomizationData_Loaded
{
public:
	class UTexture2D*                            NMR;                                               // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MaterialType;                                      // 0x8(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Pattern;                                           // 0x18(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatternRotation;                                   // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Tint1;                                             // 0x28(0x10)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Tint2;                                             // 0x38(0x10)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   AnimalValues;                                      // 0x48(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Iridescence;                                       // 0x58(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   MetalValue;                                        // 0x68(0x10)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


