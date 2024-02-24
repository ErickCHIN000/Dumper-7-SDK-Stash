#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPickupLootAttachmentMode : uint8
{
	Origin                         = 0,
	Center                         = 1,
	CenterAndScale                 = 2,
	CenterAndScaleUpOrDown         = 3,
	ScaleDown                      = 4,
	EPickupLootAttachmentMode_MAX  = 5,
};

enum class EPlayerDroppability : uint8
{
	EPD_CanDropAndSell             = 0,
	EPD_NoDrop                     = 1,
	EPD_NoDropOrSell               = 2,
	EPD_MAX                        = 3,
};

enum class EPickupActionType : uint8
{
	OnUseOrTouch                   = 0,
	OnUseOnly                      = 1,
	OnTouchOnly                    = 2,
	EPickupActionType_MAX          = 3,
};

enum class EInventoryAspectUsagePriority : uint8
{
	Default                        = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Ultra                          = 4,
	Legendary                      = 5,
	EInventoryAspectUsagePriority_MAX = 6,
};

enum class EAspectLevel : int32
{
	Uninitialized                  = 0,
	PresentationOnly               = 1,
	StatExtracting                 = 2,
	FullyInitialized               = 3,
	EAspectLevel_MAX               = 4,
};

enum class EInventoryConditionalDamageApplicationTarget : uint8
{
	Inventory                      = 0,
	InstigatorDamageCaused         = 1,
	InstigatorDamageReceived       = 2,
	EInventoryConditionalDamageApplicationTarget_MAX = 3,
};

enum class EAddInventoryItemFlags : uint8
{
	AutoEquip                      = 0,
	AddedByPickup                  = 1,
	AddedBySave                    = 2,
	MissionReward                  = 3,
	EAddInventoryItemFlags_MAX     = 4,
};

enum class EDropLifeSpanType : uint8
{
	DROP_VeryShortLived            = 0,
	DROP_ShortLived                = 1,
	DROP_LongLived                 = 2,
	DROP_LiveForever               = 3,
	DROP_LiveAsLongAsLevel         = 4,
	DROP_MAX                       = 5,
};

enum class EInventorySerialNumberState : uint8
{
	Empty                          = 0,
	Writing                        = 1,
	Full                           = 2,
	Reading                        = 3,
	Encrypted                      = 4,
	EInventorySerialNumberState_MAX = 5,
};

enum class EPickupFlyToAlignmentType : int32
{
	Spin                           = 0,
	TargetFacing                   = 1,
	EPickupFlyToAlignmentType_MAX  = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct GbxInventory.InventoryListEntryHandle
struct FInventoryListEntryHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GbxInventory.ItemPoolInfo
struct FItemPoolInfo
{
public:
	class UItemPoolData*                         ItemPool;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          PoolProbability;                                   // 0x8(0x38)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          NumberOfTimesToSelectFromThisPool;                 // 0x40(0x38)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UItemPoolPartSelectionOverrideData*> PartSelectionOverrides;                            // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxInventory.SelectedInventoryInfo
struct FSelectedInventoryInfo
{
public:
	class UInventoryData*                        InventoryData;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryBalanceData*                 InventoryBalanceData;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UManufacturerData*                     ManufacturerData;                                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameStage;                                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1059[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActorPartSelectionOverrideData       PartSelectionOverrideData;                         // 0x20(0x10)(NativeAccessSpecifierPublic)
	struct FActorPartTypeSelectionOverrideData   GenericPartSelectionOverrideData;                  // 0x30(0x18)(NativeAccessSpecifierPublic)
	bool                                         bCompileUIStats;                                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105F[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GbxInventory.InventoryBalanceStateInitializationData
struct FInventoryBalanceStateInitializationData
{
public:
	int32                                        GameStage;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1066[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryData*                        InventoryData;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryBalanceData*                 InventoryBalanceData;                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UManufacturerData*                     ManufacturerData;                                  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInventoryPartData*>            PartList;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class UInventoryGenericPartData*>     GenericPartList;                                   // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<uint8>                                AdditionalData;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UInventoryCustomizationPartData*> CustomizationPartList;                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        ReRollCount;                                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1082[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverpowerLevel;                                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxInventory.InventorySaveGameData
struct FInventorySaveGameData
{
public:
	TArray<uint8>                                EncryptedSerialNumber;                             // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FInventoryBalanceStateInitializationData DevelopmentSaveData;                               // 0x10(0x68)(Edit, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_1090[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x6C (0x78 - 0xC)
// ScriptStruct GbxInventory.InventoryListEntry
struct FInventoryListEntry : public FFastArraySerializerItem
{
public:
	struct FInventoryListEntryHandle             Handle;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryCategoryData*                BaseCategoryDefinition;                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          MaxQuantity;                                       // 0x20(0x38)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                StoredActor;                                       // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerDroppability               PlayerDroppability;                                // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B2[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxInventory.ItemPoolCollection
struct FItemPoolCollection
{
public:
	TArray<struct FItemPoolInfo>                 ItemPools;                                         // 0x0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UItemPoolListData*>             ItemPoolLists;                                     // 0x10(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxInventory.MaterialParameterData
struct FMaterialParameterData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxInventory.RuntimeGenericPartListData
struct FRuntimeGenericPartListData
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          Weight;                                            // 0x8(0x38)(NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct FWeightedActorPartData>        PartList;                                          // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10FC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct GbxInventory.InventoryManufacturerBalanceData
struct FInventoryManufacturerBalanceData
{
public:
	class UManufacturerData*                     ManufacturerData;                                  // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAttributeInitializationData          ManufacturerWeight;                                // 0x8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGameStageGradeWeightData             GameStageWeight;                                   // 0x40(0x70)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	class UItemPoolPartSelectionOverrideData*    PartSelectionOverrideData;                         // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxInventory.InventoryPrimitiveSectionAspectSetData
struct FInventoryPrimitiveSectionAspectSetData
{
public:
	class UInventoryMaterialAspectData*          PrimaryMaterialAspect;                             // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInventoryMaterialAspectData*>  MaterialAspects;                                   // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxInventory.InventoryPrimitiveAspectSetData
struct FInventoryPrimitiveAspectSetData
{
public:
	class FName                                  PrimitiveComponentName;                            // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PrimitiveComponentTag;                             // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInventoryPrimitiveSectionAspectSetData> SectionAspectSetList;                              // 0x10(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxInventory.InventoryConditionalDamageAspectInfo
struct FInventoryConditionalDamageAspectInfo
{
public:
	class UConditionalDamageModifier*            ConditionalModifier;                               // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseInventoryForDamageValueContext;                // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInventoryConditionalDamageApplicationTarget ApplicationTarget;                                 // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x40 - 0x40)
// ScriptStruct GbxInventory.InventoryGenericPartExpansionListData
struct FInventoryGenericPartExpansionListData : public FActorPartListData
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxInventory.InventoryReplicationData
struct FInventoryReplicationData
{
public:
	uint8                                        Pad_1152[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxInventory.InventoryItemPickupClientSpawnData
struct FInventoryItemPickupClientSpawnData
{
public:
	bool                                         bSpawnDefaultPickupActor;                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryReplicationData             BalanceData;                                       // 0x8(0x10)(NativeAccessSpecifierPublic)
	struct FReplicatedUIStatCollectionData       UIStats;                                           // 0x18(0x10)(NativeAccessSpecifierPublic)
	int32                                        MonetaryValue;                                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InventoryScoreValue;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxInventory.InventorySelectionTracker
struct FInventorySelectionTracker
{
public:
	int32                                        SelectedIndex;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TrackQuantity;                                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1171[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryListEntryHandle             SelectedHandle;                                    // 0x8(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0xC8 - 0xB0)
// ScriptStruct GbxInventory.InventoryListContainer
struct FInventoryListContainer : public FFastArraySerializer
{
public:
	TArray<struct FInventoryListEntry>           Items;                                             // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_117A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxInventory.InventoryListEntryUIData
struct FInventoryListEntryUIData
{
public:
	uint8                                        Pad_1184[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxInventory.InventoryCategorySaveData
struct FInventoryCategorySaveData
{
public:
	class UInventoryCategoryData*                BaseCategoryDefinition;                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxInventory.RarityMaterialData
struct FRarityMaterialData
{
public:
	class UInventoryRarityData*                  Rarity;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GbxInventory.MaterialFontParameterData
struct FMaterialFontParameterData : public FMaterialParameterData
{
public:
	class UFont*                                 Font;                                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FontPage;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct GbxInventory.MaterialTextureAssetParameterData
struct FMaterialTextureAssetParameterData : public FMaterialParameterData
{
public:
	TSoftObjectPtr<class UTexture>               Texture;                                           // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GbxInventory.MaterialTextureParameterData
struct FMaterialTextureParameterData : public FMaterialParameterData
{
public:
	class UTexture*                              Texture;                                           // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GbxInventory.MaterialScalarParameterData
struct FMaterialScalarParameterData : public FMaterialParameterData
{
public:
	float                                        Scalar;                                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GbxInventory.MaterialVectorParameterData
struct FMaterialVectorParameterData : public FMaterialParameterData
{
public:
	struct FLinearColor                          Vector;                                            // 0x8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxInventory.ConditionalInventoryParticleEmitter
struct FConditionalInventoryParticleEmitter
{
public:
	class UGbxCondition*                         EnableCondition;                                   // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          EmitterNames;                                      // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x80 - 0x40)
// ScriptStruct GbxInventory.InventoryGenericPartListData
struct FInventoryGenericPartListData : public FActorPartListData
{
public:
	bool                                         bUseWeight;                                        // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          Weight;                                            // 0x48(0x38)(Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x0 (0x40 - 0x40)
// ScriptStruct GbxInventory.ActorPartListExpansionData
struct FActorPartListExpansionData : public FActorPartListData
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxInventory.InventorySerialNumber
struct FInventorySerialNumber
{
public:
	enum class EInventorySerialNumberState       State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Buffer;                                            // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint32                                       RunningCounter;                                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11D7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GbxInventory.BalancedInventoryInfo
struct FBalancedInventoryInfo
{
public:
	class UItemPoolData*                         ItemPoolData;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UInventoryBalanceData>  InventoryBalanceData;                              // 0x8(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryBalanceData*                 ResolvedInventoryBalanceData;                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          Weight;                                            // 0x38(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxInventory.ItemPoolPartSelectionPartTypeOverrideData
struct FItemPoolPartSelectionPartTypeOverrideData
{
public:
	uint8                                        PartType;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActorPartData*>                PreferredParts;                                    // 0x8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxInventory.PoolSocketAttachmentInfo
struct FPoolSocketAttachmentInfo
{
public:
	class UItemPoolData*                         ItemPool;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AttachmentPointName;                               // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          Weight;                                            // 0x10(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxInventory.LootAttachmentInfo
struct FLootAttachmentInfo
{
public:
	class UItemPoolData*                         ItemPool;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AttachmentPointName;                               // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          Probability;                                       // 0x10(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPoolSocketAttachmentInfo>     OverrideAttachmentList;                            // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxInventory.LootConfigurationInfo
struct FLootConfigurationInfo
{
public:
	class FName                                  ConfigurationName;                                 // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAttributeInitializer>     LootGameStageVarianceFormula;                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          Weight;                                            // 0x10(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FLootAttachmentInfo>           ItemAttachments;                                   // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxInventory.ManufacturerGradeData
struct FManufacturerGradeData
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


