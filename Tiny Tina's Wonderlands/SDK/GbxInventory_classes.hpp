#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// Class GbxInventory.InventoryAspectData
class UInventoryAspectData : public UGbxDataAsset
{
public:
	enum class EInventoryAspectUsagePriority     Priority;                                          // 0x30(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5FA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInventoryAspectData* GetDefaultObj();

	void K2_OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
	void K2_OnApplyAspect(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
	class FString K2_GetFriendlyDescription();
	void K2_CloneAppearance(class AActor* CloneActor, class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
};

// 0x188 (0x360 - 0x1D8)
// Class GbxInventory.InventoryBalanceStateComponent
class UInventoryBalanceStateComponent : public UBalanceStateComponent
{
public:
	struct FInventoryReplicationData             PackedReplicationData;                             // 0x1D8(0x10)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryNamePartData*>        NamePartList;                                      // 0x1E8(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	float                                        MonetaryValueModifierTotal;                        // 0x1F8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MonetaryValue;                                     // 0x1FC(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InventoryScoreModifierTotal;                       // 0x200(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InventoryScoreValue;                               // 0x204(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryData*                        InventoryData;                                     // 0x208(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryBalanceData*                 InventoryBalanceData;                              // 0x210(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UManufacturerData*                     ManufacturerData;                                  // 0x218(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInventoryPartData*>            PartList;                                          // 0x220(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryGenericPartData*>     GenericPartList;                                   // 0x230(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<uint8>                                AdditionalData;                                    // 0x240(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryCustomizationPartData*> CustomizationPartList;                             // 0x250(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	uint8                                        ReRollCount;                                       // 0x260(0x1)(Edit, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_731[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverpowerLevel;                                    // 0x264(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DisplayName;                                       // 0x268(0x18)(Edit, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryAspectData*>          GenericAspects;                                    // 0x280(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	class UGestaltData*                          GestaltData;                                       // 0x290(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          GestaltMeshPartNames;                              // 0x298(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGbxAttributeModifierHandle>   InstigatorAttributeModifiers;                      // 0x2A8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FInventoryPrimitiveAspectSetData> PrimitiveAspectSetList;                            // 0x2B8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryConditionalDamageAspectData*> ConditionalDamageAspectList;                       // 0x2C8(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryAttributeEffectsAspectData*> AttributeEffectsAspectList;                        // 0x2D8(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryParticleAspectData*>  ParticleAspects;                                   // 0x2E8(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	struct FCachedUIStatCollectionData           UIStats;                                           // 0x2F8(0x10)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FReplicatedUIStatCollectionData       ReplicatedUIStats;                                 // 0x308(0x10)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_743[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInventoryMaterialAspectTextureAssetStreamer*> InventoryMaterialAspectTextureAssetStreamers;      // 0x320(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_744[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAspectLevel                      ReplicatedAspectLevel;                             // 0x344(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_746[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInventoryBalanceStateComponent* GetDefaultObj();

	void PostBeginPlay();
	void OnRep_ReplicatedUIStats();
	void OnRep_AspectLevel();
	void NotifyUnequipped(class APawn* OldInstigator);
	void NotifyEquipped(class APawn* NewInstigator);
	void NotifyAttached(class APawn* Instigator);
	TSubclassOf<class UGbxDamageType> K2_GetDamageType();
	bool IsManufactureredBy(class UManufacturerData* Manufacturer);
	bool IsBeingReRolled();
	uint8 GetReRollCount();
	TArray<class UInventoryPartData*> GetPartList();
	int32 GetOverpowerLevel();
	int32 GetMonetaryValue();
	class UManufacturerData* GetManufacturer();
	int32 GetInventoryScoreValue();
	class UParticleSystem* GetInventoryRarityLootBeamOverride();
	float GetInventoryRarityLootBeamHeight();
	class UWwiseEvent* GetInventoryRarityLootAudioStinger();
	enum class EDropLifeSpanType GetInventoryRarityLifeSpanType();
	float GetInventoryRarityLifeSpan();
	class FString GetInventoryRarityFrameName();
	class FText GetInventoryRarityDisplayName();
	class UInventoryRarityData* GetInventoryRarityData();
	struct FLinearColor GetInventoryRarityColorOutline();
	struct FLinearColor GetInventoryRarityColorFX();
	bool GetInventoryDisplayRarityOutline();
	class UInventoryData* GetInventoryData();
	class UInventoryBalanceData* GetInventoryBalanceData();
	TArray<class UInventoryGenericPartData*> GetGenericPartList();
	class FText GetDisplayName();
	TSubclassOf<class UGbxDamageType> GetDamageType();
	TArray<class UInventoryCustomizationPartData*> GetCustomizationPartList();
	void CloneAppearance(class AActor* DestActor, class USceneComponent* ParentComp, bool bAbsoluteScale);
	void ApplyPhysicalAspects();
	void ApplyGestaltMeshPartNames();
};

// 0x8 (0x38 - 0x30)
// Class GbxInventory.InventoryNamingStrategyData
class UInventoryNamingStrategyData : public UGbxDataAsset
{
public:
	bool                                         bUseGenericPrefixes;                               // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_761[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInventoryNamingStrategyData* GetDefaultObj();

};

// 0xD0 (0x168 - 0x98)
// Class GbxInventory.InventoryBalanceData
class UInventoryBalanceData : public UActorPartSelectionData
{
public:
	uint8                                        Pad_76F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UInventoryBalanceStateComponent> InventoryBalanceStateClass;                        // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryBalanceData*                 BaseBalanceData;                                   // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryData*                        InventoryData;                                     // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryRarityData*                  RarityData;                                        // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FInventoryManufacturerBalanceData> Manufacturers;                                     // 0xC0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FRuntimeGenericPartListData           RuntimeGenericPartList;                            // 0xD0(0x58)(Protected, NativeAccessSpecifierProtected)
	uint8                                        bIsGearBuildable : 1;                              // Mask: 0x1, PropSize: 0x10x128(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_2F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_775[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGearBuilderCategoryData*              GearBuilderCategory;                               // 0x130(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxNumPrefixes;                                    // 0x138(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxNumSuffixes;                                    // 0x13C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinNamingPriority;                                 // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxNamingPriority;                                 // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDownloadableInventorySetData*         DlcInventorySetData;                               // 0x148(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMigratedToActorPartSelectionData;                 // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_783[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 AssetGuid;                                         // 0x154(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisableVisibilityAndCollision : 1;                // Mask: 0x1, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_784[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInventoryBalanceData* GetDefaultObj();

};

// 0x2E0 (0x310 - 0x30)
// Class GbxInventory.InventoryData
class UInventoryData : public UGbxDataAsset
{
public:
	uint8                                        Pad_794[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bInventoryNameIsFullName : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_31 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_795[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  InventoryName;                                     // 0x40(0x18)(Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryNamePartData*>        PrefixPartList;                                    // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryNamePartData*>        TitlePartList;                                     // 0x68(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryNamePartData*>        SuffixPartList;                                    // 0x78(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	class UInventoryNamingStrategyData*          NamingStrategy;                                    // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AActor>                    InventoryActorClass;                               // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAttributeEffectData>          InventoryAttributeEffects;                         // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<struct FInstigatorAttributeEffectData> InstigatorAttributeEffects;                        // 0xA8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryAspectData*>          AspectList;                                        // 0xB8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryAspectData*>          StandaloneAspectList;                              // 0xC8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	bool                                         bDisplayNameInInteractionHeader;                   // 0xD8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsesItemCard;                                     // 0xD9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemCardTypeFrameName;                             // 0xE0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxCondition*>                 OnUseConstraints;                                  // 0xF0(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUsesPlayerLevelRequirement;                       // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUIStatPriorityData>           UIStats;                                           // 0x108(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGuid                                 AssetGuid;                                         // 0x118(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           PickupSound;                                       // 0x128(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           PickupEquipSound;                                  // 0x130(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         SpottedCalloutCondition;                           // 0x138(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogEvent*                          SpottedCallout;                                    // 0x140(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           PickupImpact;                                      // 0x148(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           EquipUISound;                                      // 0x150(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           DropUISound;                                       // 0x158(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AInventoryItemPickup>      InventoryItemPickupClass;                          // 0x160(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateActorInPickup;                           // 0x168(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSharedByPickups;                                  // 0x169(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustMatchGameStageToShare;                        // 0x16A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B7[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PickupFlyToTarget;                                 // 0x170(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          PickupHiddenBones;                                 // 0x178(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideRotationInShop;                           // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RotationInShop;                                    // 0x18C(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideTranslationInShop;                        // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TranslationInShop;                                 // 0x19C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideScaleInShop;                              // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ScaleInShop;                                       // 0x1AC(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         RotationOverrideCondition;                         // 0x1B8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ConditionalRotationInContainer;                    // 0x1C0(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideRotationInContainer;                      // 0x1CC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RotationInContainer;                               // 0x1D0(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bCanBeHolsteredOnBody : 1;                         // Mask: 0x1, PropSize: 0x10x1DC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanShowHolsteredInFirstPerson : 1;                // Mask: 0x2, PropSize: 0x10x1DC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_34 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7CD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DefaultHolsterSocketName;                          // 0x1E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryCategoryData*                InventoryCategory;                                 // 0x1E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerDroppability               PlayerDroppability;                                // 0x1F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SizeInInventory;                                   // 0x1F1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportsOverpowerLevel;                           // 0x1F2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D2[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          MonetaryValue;                                     // 0x1F8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIgnoreShopPriceMarkup;                            // 0x230(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCalculatePriceInShopUsingPlayerAsContext;         // 0x231(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseMonetaryValueModifier;                         // 0x234(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesInventoryScore;                               // 0x238(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               AssociatedCustomizationData;                       // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ThumbnailTransform;                                // 0x250(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ItemInspectInitialTransform;                       // 0x280(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ItemInspectInitialTransform_Vertical;              // 0x2B0(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ItemInspectInitialTransform_4way;                  // 0x2E0(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInventoryData* GetDefaultObj();

	void EnumeratePickupFlyToTargets(TArray<class FName>* Targets);
};

// 0x20 (0x330 - 0x310)
// Class GbxInventory.InventoryData_Simple
class UInventoryData_Simple : public UInventoryData
{
public:
	TSubclassOf<class UInventoryBalanceStateComponent> InventoryBalanceStateClass;                        // 0x310(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UManufacturerData*                     ManufacturerData;                                  // 0x318(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryRarityData*                  RarityData;                                        // 0x320(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryBalanceData*                 BalanceData;                                       // 0x328(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryData_Simple* GetDefaultObj();

};

// 0x208 (0x380 - 0x178)
// Class GbxInventory.InventoryListComponent
class UInventoryListComponent : public UActorComponent
{
public:
	struct FInventoryListContainer               InventoryList;                                     // 0x178(0xC8)(Net, Protected, NativeAccessSpecifierProtected)
	int32                                        InventoryCapacityUsed;                             // 0x240(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_950[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UInventoryCategoryData*, struct FInventorySelectionTracker> SelectedIndexs;                                    // 0x248(0x50)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UClass*                                DroppedPickupClass;                                // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanPickupOnTouch;                                 // 0x2A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_953[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeInteger                  MaxInventoryItems;                                 // 0x2A4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_956[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnInventoryItemAdded;                              // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInventoryItemRemoved;                            // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInventoryItemUpdated;                            // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInventoryItemActorReplaced;                      // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInventoryItemQuantityUpdated;                    // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInventoryItemPickedUp;                           // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAddedToInventory_Internal;                       // 0x338(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPreAddToFullInventory_Internal;                  // 0x348(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRemovingFromInventory_Internal;                  // 0x358(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPreDropInventoryActor_Internal;                  // 0x368(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_964[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInventoryListComponent* GetDefaultObj();

	int32 SizeInInventory(class AInventoryItemPickup* PickupToTest);
	void ServerTransferItem(struct FInventoryListEntryHandle& InventoryItemHandle, class AActor* DestinationActor, int32 Quantity);
	void ServerSetItemUIFlags(struct FInventoryListEntryHandle& Handle, uint8 Flags, uint8 FlagsMask);
	void ServerSetItemsUIFlags(class UInventoryCategoryData* Category, uint8 Flags, uint8 FlagsMask);
	void ServerRemoveItem(struct FInventoryListEntryHandle& InventoryItemHandle);
	void ServerRemoveCustomizationPartFromInventoryActor(struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part);
	void ServerDropItem(struct FInventoryListEntryHandle& InventoryItemHandle, struct FVector& InitialLocation, struct FRotator& InitialRotation);
	void ServerConsumeItem(struct FInventoryListEntryHandle& InventoryItemHandle, int32 Quantity);
	void ServerAddCustomizationPartToInventoryActor(struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part);
	bool IsInventoryFull();
	bool HasActorInList(class AActor* ItemActor);
	class AActor* GetStoredInventoryActor(struct FInventoryListEntryHandle& InventoryItemHandle);
	void GetSelectedItemQuantity(class UInventoryCategoryData* ChildTypeToGet, int32* Quantity, int32* MaxQuantity);
	int32 GetMaxInventoryItems();
	bool GetItem(struct FInventoryListEntryHandle& InventoryItemHandle, struct FInventoryListEntry* ListEntry);
	class FText GetInventoryListEntryDisplayName(struct FInventoryListEntry* ListEntry);
	class FText GetInventoryListEntryDisplayDescription(struct FInventoryListEntry* ListEntry);
	int32 GetInventoryItemCount();
	void GetInventoryHandlesOfType(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList);
	class FText GetInventoryDisplayName(class AActor* InventoryActor);
	class FText GetInventoryDisplayDescription(class AActor* InventoryActor);
	void GetCategoryOnlyInventoryHandles(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList);
	int32 GetCategoryItemQuantity(class UInventoryCategoryData* ItemCategory);
	class AActor* GetAndConsumeSelected(class UInventoryCategoryData* TypeToConsume, int32 Quantity);
	class AActor* GetAndConsumeItem(struct FInventoryListEntryHandle& InventoryItemHandle, int32 Quantity);
	void ClearInventory(bool DestroyInventory);
	bool CanUseSelected(class UInventoryCategoryData* ChildTypeToUse, int32 Quantity);
	bool CanSwapItemForPickup(class AActor* Item, class AInventoryItemPickup* Pickup);
	void AddOrUpdateCategoryOnly(class UInventoryCategoryData* ItemCategory, int32 Quantity);
	struct FInventoryListEntryHandle AddItemFromPickup(class AInventoryItemPickup* PickupActor);
	struct FInventoryListEntryHandle AddExternalItemEx(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int32 Quantity, int32 Flags, bool bConditionalDestroyActor, int32 DesiredSlot, bool bBypassInventoryFull, uint8 UIDataFlags);
	struct FInventoryListEntryHandle AddExternalItem(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int32 Quantity, bool AddedByPickup, bool bAutoEquip, bool bConditionalDestroyActor, int32 DesiredSlot, bool bBypassInventoryFull, uint8 UIDataFlags);
	bool AddCategory(class UInventoryCategoryData* ItemCategory, bool TrackQuantity);
};

// 0x0 (0x88 - 0x88)
// Class GbxInventory.DownloadableInventorySetData
class UDownloadableInventorySetData : public UDownloadableContentData
{
public:

	static class UClass* StaticClass();
	static class UDownloadableInventorySetData* GetDefaultObj();

};

// 0x20 (0x1C8 - 0x1A8)
// Class GbxInventory.InventoryCustomizationPartData
class UInventoryCustomizationPartData : public UGbxCustomizationData
{
public:
	uint8                                        Pad_983[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 AssetGuid;                                         // 0x1B0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShouldRemovePartWhenDropped;                      // 0x1C0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_987[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInventoryCustomizationPartData* GetDefaultObj();

};

// 0x1A0 (0x5F8 - 0x458)
// Class GbxInventory.InventoryItemPickup
class AInventoryItemPickup : public AActor
{
public:
	class UWwiseEvent*                           PickupAudioEvent;                                  // 0x458(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           CompletePickupAudioEvent;                          // 0x460(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DestroyOnPickup;                                   // 0x468(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UseFailBumpUpVelocity;                             // 0x46C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UseFailBumpBaseRotation;                           // 0x470(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PickedUpBy;                                        // 0x478(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  PickupMesh;                                        // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                PickupSkelMesh;                                    // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystemComponent*>      PickupActorParticles;                              // 0x490(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class USphereComponent*>              PickupActorSpheres;                                // 0x4A0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x4B0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanOnlyBePickedUpByOwnerController : 1;           // Mask: 0x1, PropSize: 0x10x4B4(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHighDetail : 1;                                   // Mask: 0x2, PropSize: 0x10x4B4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSharedWithAllPlayers : 1;                         // Mask: 0x4, PropSize: 0x10x4B4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSharedPlayersMustBeOnFriendlyTeam : 1;            // Mask: 0x8, PropSize: 0x10x4B4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReplicatePickupActor : 1;                         // Mask: 0x10, PropSize: 0x10x4B4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        StaticPickup : 1;                                  // Mask: 0x20, PropSize: 0x10x4B4(0x1)(Edit, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseInventoryDataPickupActionType : 1;             // Mask: 0x40, PropSize: 0x10x4B4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_57 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A02[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    DefaultPickupActorClass;                           // 0x4B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDrawDistance;                                   // 0x4C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPickupActionType                 DefaultPickupActionType;                           // 0x4C4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPickupActionType                 StaticPickupActionType;                            // 0x4C5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A05[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         CanBeTouchedCondition;                             // 0x4C8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryCategoryData*                PickupCategory;                                    // 0x4D0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickupSpawnUnpaused;                             // 0x4D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickupSpawnActive;                               // 0x4E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickupIsActive;                                  // 0x4F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickedUp;                                        // 0x508(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                               StaticLocation;                                    // 0x518(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              StaticRotation;                                    // 0x524(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         NotAddedToInventory;                               // 0x530(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PickupSphereRadius;                                // 0x534(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PickupSphereRadiusHideScale;                       // 0x538(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USphereComponent*                      PickupSphereComponent;                             // 0x540(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryData*                        AssociatedInventoryData;                           // 0x548(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  OverrideErrorText;                                 // 0x550(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	bool                                         PlacedPickup;                                      // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryBalanceStateComponent*       CachedInventoryBalanceComponent;                   // 0x570(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                PickupActor;                                       // 0x578(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                ReplicatedPickupActor;                             // 0x580(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FInventoryItemPickupClientSpawnData   PickupActorClientSpawnData;                        // 0x588(0x30)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        bPickupSpawnPaused : 1;                            // Mask: 0x1, PropSize: 0x10x5B8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsActive : 1;                                     // Mask: 0x2, PropSize: 0x10x5B8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_58 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A12[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantizeNormal             BumpAngularDir;                                    // 0x5BC(0xC)(Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A14[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAction>                LootSpawnAction;                                   // 0x5E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                RepLootSpawnAction;                                // 0x5F0(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AInventoryItemPickup* GetDefaultObj();

	void WaitForBalanceState();
	void SetCanOnlyBePickedUpByOwner(bool bNewCanOnlyBePickedUpByOwnerController, class AController* OwnerController);
	void ResetBumpOnPickupFail();
	void OnUsedBy(struct FUseEvent& UseEvent);
	void OnRespawnEvent();
	void OnRep_RepLootSpawnAction();
	void OnRep_PickupActorClientSpawnData();
	void OnRep_PickupActor();
	void OnRep_PickedUpBy();
	void OnRep_IsActive();
	void OnRep_BumpAngularDir();
	void OnPickedUpEvent(class AActor* WasPickedUpBy);
	void OnLookedAtByPlayer(class APlayerController* InstigatingPlayer, bool bCanInteractWith, const struct FVector& NewUsableComponentImpactPoint, float NewUsableDistanceAway);
	bool IsPickupInitialized();
	void GiveInventoryToUser(class AActor* Other, bool bAutoEquip, int32 DesiredSlot);
	class UMeshComponent* GetMeshComponent();
	class UParticleSystem* GetInventoryRarityLootBeamOverride();
	class UWwiseEvent* GetInventoryRarityLootAudioStinger();
	enum class EDropLifeSpanType GetInventoryRarityLifeSpanType();
	struct FLinearColor GetInventoryRarityColorOutline();
	struct FLinearColor GetInventoryRarityColorFX();
	bool GetInventoryDisplayRarityOutline();
	class UInventoryBalanceStateComponent* GetInventoryBalanceStateComponent();
	void DeactivatePickup();
	bool CanBePickedUp(class AActor* Other, bool UsedByOther, bool bUseHeld, bool bForMassPickup);
	void ActivatePickup();
	void ActivateAfterSpawnDelay();
};

// 0x78 (0x670 - 0x5F8)
// Class GbxInventory.DroppedInventoryItemPickup
class ADroppedInventoryItemPickup : public AInventoryItemPickup
{
public:
	float                                        LinearDamping;                                     // 0x5F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NextImpactDistanceThreshold;                       // 0x5FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NextImpactTimeThreshold;                           // 0x600(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ImpactVelocityThreshold;                           // 0x604(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultVelocity;                                   // 0x608(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector_NetQuantize10                 DefaultAngularVelocity;                            // 0x60C(0xC)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InitialMassScale;                                  // 0x618(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DroppedQuantity;                                   // 0x61C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ShrinkLifeSpan;                                    // 0x620(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A49[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDroppedFromPlayerInventory;                       // 0x630(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4B[0x3F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ADroppedInventoryItemPickup* GetDefaultObj();

	void OnRep_ShrinkLifeSpan();
	void OnRep_InitialMassScale();
	void OnRep_DroppedQuantity();
	void OnPickupHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnPhysicsWake(class UPrimitiveComponent* WakingComponent, class FName BoneName);
	void OnPhysicsSleep(class UPrimitiveComponent* WakingComponent, class FName BoneName);
};

// 0x150 (0x280 - 0x130)
// Class GbxInventory.InventoryPartData
class UInventoryPartData : public UActorPartData
{
public:
	uint8                                        Pad_A57[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          MonetaryValueModifier;                             // 0x138(0x38)(Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          InventoryScoreModifier;                            // 0x170(0x38)(Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryNamePartData*>        PrefixPartList;                                    // 0x1A8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryNamePartData*>        TitlePartList;                                     // 0x1B8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryNamePartData*>        SuffixPartList;                                    // 0x1C8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	class FName                                  InventoryNamingTag;                                // 0x1D8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAttributeEffectData>          InventoryAttributeEffects;                         // 0x1E0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<struct FInstigatorAttributeEffectData> InstigatorAttributeEffects;                        // 0x1F0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<struct FUIStatPriorityData>           UIStats;                                           // 0x200(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	bool                                         bAvailableForPartInspection;                       // 0x210(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUIStatData_Text*>              PartInspectionTitleOverride;                       // 0x218(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	class UUIStatData_Text*                      PartInspectionDescription;                         // 0x228(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHideStatsForPartInspection;                       // 0x230(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A60[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInventoryAspectData*>          AspectList;                                        // 0x238(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class FString                                GearBuilderDescription;                            // 0x248(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldIgnorePartBoundsForPickupAttachment;        // 0x258(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A65[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ExcludedGestaltMeshPartNamesForItemInspectionAndThumbnailBounds; // 0x260(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 AssetGuid;                                         // 0x270(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryPartData* GetDefaultObj();

	struct FAttributeInitializationData GetMonetaryValueModifier();
};

// 0x28 (0x2A8 - 0x280)
// Class GbxInventory.InventoryGenericPartData
class UInventoryGenericPartData : public UInventoryPartData
{
public:
	bool                                         bOverridePartSelection;                            // 0x280(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A67[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Tags;                                              // 0x288(0x20)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryGenericPartData* GetDefaultObj();

};

// 0x140 (0x170 - 0x30)
// Class GbxInventory.InventoryRarityData
class UInventoryRarityData : public UGbxDataAsset
{
public:
	struct FLinearColor                          RarityColorFX;                                     // 0x30(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          RarityColorOutline;                                // 0x40(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        RarityOutlineDepthStencilValue;                    // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         DisplayRarityOutline;                              // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AEE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RarityFrameName;                                   // 0x58(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RarityIdentifier;                                  // 0x68(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EDropLifeSpanType                 RarityLifeSpanType;                                // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  RarityDisplayname;                                 // 0x80(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	int32                                        RaritySortValue;                                   // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       RarityLootBeamOverride;                            // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       RarityLootBeamForInventoryWithFoilParts;           // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       RarityLootBeamForInventoryWithOverpowerLevel;      // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       RarityLootBeamForInventoryWithFoilPartsAndOverpowerLevel; // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RarityLootBeamHeight;                              // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AFE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ItemScoreRarityModifier;                           // 0xC8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UWwiseEvent*                           RarityLootAudioStinger;                            // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWwiseEvent*                           RarityLootAudioStingerForInventoryWithOverpowerLevel; // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          MonetaryValueModifier;                             // 0x110(0x38)(Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UGameStatData>          OnPickedUpStat;                                    // 0x148(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryRarityData* GetDefaultObj();

	int32 GetRaritySortValue();
	int32 GetRarityOutlineDepthStencilValue();
	class UParticleSystem* GetRarityLootBeamOverride(bool bInventoryHasAFoilPart, bool bInventoryHasOverpowerLevel);
	float GetRarityLootBeamHeight();
	class UWwiseEvent* GetRarityLootAudioStinger(bool bInventoryHasOverpowerLevel);
	enum class EDropLifeSpanType GetRarityLifeSpanType();
	float GetRarityLifeSpan();
	class FString GetRarityIdentifier();
	class FString GetRarityFrameName();
	class FText GetRarityDisplayName();
	struct FLinearColor GetRarityColorOutline();
	struct FLinearColor GetRarityColorFX();
	struct FAttributeInitializationData GetItemScoreRarityModifier();
	bool GetDisplayRarityOutline();
};

// 0xA0 (0x218 - 0x178)
// Class GbxInventory.LootableComponent
class ULootableComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  OnPickupAttached;                                  // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickupDetached;                                  // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAllPickupsDetached;                              // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class ULootableBalanceData*                  BalanceData;                                       // 0x1A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InitialDropLootMassScale;                          // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPickupLootAttachmentMode         LootAttachmentMode;                                // 0x1B4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B6A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UGbxAction>>        LootSpawnActions;                                  // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bForceSpawnedLootToHaveInfiniteLifespan;           // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B6D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               UseOverrideBoxExtents;                             // 0x1CC(0xC)(Edit, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideUseWithBox;                               // 0x1D8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B75[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLootConfigurationInfo>        LootConfigurations;                                // 0x1E0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class ADroppedInventoryItemPickup*>   AttachedLoot;                                      // 0x1F0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class ULootableBalanceData*                  LootableBalanceDataOverride;                       // 0x200(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                BalanceContextOverride;                            // 0x208(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B7E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULootableComponent* GetDefaultObj();

	void SpawnAndDropLoot(class FName* SelectedConfigurationName);
	void SpawnAndAttachLoot(class FName* SelectedConfigurationName);
	void SetBalanceContextOverride(class AActor* NewOverrideContext, bool bOnlyUseForGameStage);
	void InitializeLootConfigurations(class ULootableBalanceData* LootableBalanceData);
	TArray<class ADroppedInventoryItemPickup*> GetAttachedPickups();
	void ActivateAttachedLoot();
};

// 0xE0 (0x110 - 0x30)
// Class GbxInventory.ManufacturerData
class UManufacturerData : public UGbxDataAsset
{
public:
	uint8                                        Pad_B8F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          MinGameStage;                                      // 0x38(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          MaxGameStage;                                      // 0x70(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FText                                  ManufacturerName;                                  // 0xA8(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  Blurb;                                             // 0xC0(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<class UUIStatData*>                   UIStats;                                           // 0xD8(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 AssetGuid;                                         // 0xE8(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ManufacturerLogoFrameName;                         // 0xF8(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDialogEnumValue*                      ManufacturerDialogEnumValue;                       // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UManufacturerData* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxInventory.ItemPoolListInterface
class UItemPoolListInterface : public UGbxDataAsset
{
public:
	TArray<class UItemPoolPartSelectionOverrideData*> PartSelectionOverrides;                            // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UItemPoolListInterface* GetDefaultObj();

};

// 0x88 (0xC8 - 0x40)
// Class GbxInventory.ItemPoolData
class UItemPoolData : public UItemPoolListInterface
{
public:
	uint8                                        Pad_BA6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBalancedInventoryInfo>        BalancedItems;                                     // 0x48(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bSupportsGameStageVariance;                        // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BA9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          Quantity;                                          // 0x60(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UGbxAttributeData*                     MinGameStageRequirement;                           // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxAttributeData*                     MaxGameStageRequirement;                           // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UItemPoolExpansionData*>        Expansions;                                        // 0xA8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 AssetGuid;                                         // 0xB8(0x10)(DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UItemPoolData* GetDefaultObj();

};

// 0x80 (0xB8 - 0x38)
// Class GbxInventory.InventoryMaterialAspectData
class UInventoryMaterialAspectData : public UInventoryAspectData
{
public:
	class FName                                  PrimitiveComponentName;                            // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PrimitiveComponentTag;                             // 0x40(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SectionIndex;                                      // 0x48(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BBD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x50(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FRarityMaterialData>           RaritySpecificMaterials;                           // 0x58(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMaterialVectorParameterData>  VectorParameters;                                  // 0x68(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMaterialScalarParameterData>  ScalarParameters;                                  // 0x78(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMaterialTextureParameterData> TextureParameters;                                 // 0x88(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMaterialTextureAssetParameterData> TextureAssetParameters;                            // 0x98(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMaterialFontParameterData>    FontParameters;                                    // 0xA8(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryMaterialAspectData* GetDefaultObj();

};

// 0x80 (0xF8 - 0x78)
// Class GbxInventory.InventoryPartSetData
class UInventoryPartSetData : public UActorPartSetData
{
public:
	struct FInventoryGenericPartListData         GenericParts;                                      // 0x78(0x80)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryPartSetData* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class GbxInventory.InventoryAttributeEffectsAspectData
class UInventoryAttributeEffectsAspectData : public UInventoryAspectData
{
public:
	struct FGameplayTagContainer                 ComparisonTags;                                    // 0x38(0x20)(Edit, BlueprintReadOnly, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	bool                                         bResetAttributes;                                  // 0x58(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BDF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAttributeEffectData>          InventoryAttributeEffects;                         // 0x60(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryAttributeEffectsAspectData* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class GbxInventory.GbxCondition_InventoryRarityComparison
class UGbxCondition_InventoryRarityComparison : public UGbxCondition
{
public:
	enum class EConditionComparisonOperatorType  Operator;                                          // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BED[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryRarityData*                  ReferenceRarity;                                   // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxCondition_InventoryRarityComparison* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxInventory.GearBuilderCategoryData
class UGearBuilderCategoryData : public UGbxDataAsset
{
public:
	class FName                                  CategoryName;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGearBuilderCategoryData* GetDefaultObj();

};

// 0x188 (0x288 - 0x100)
// Class GbxInventory.GearBuilderWidget
class UGearBuilderWidget : public UWidget
{
public:
	class UGearBuilderDebugMenu*                 OwnerMenu;                                         // 0x100(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BFE[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryBalanceStateInitializationData GearData;                                          // 0x128(0x68)(Transient, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                SelectedItem;                                      // 0x190(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C02[0xF0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGearBuilderWidget* GetDefaultObj();

};

// 0x8 (0x300 - 0x2F8)
// Class GbxInventory.GearBuilderDebugMenu
class UGearBuilderDebugMenu : public UGbxDebugMenuSubmenu
{
public:
	class UGearBuilderWidget*                    GearBuilder;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGearBuilderDebugMenu* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class GbxInventory.InventoryBalanceCollectionData
class UInventoryBalanceCollectionData : public UGbxDataAsset
{
public:
	class UInventoryBalanceCollectionData*       ParentCollection;                                  // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UInventoryBalanceData>> InventoryBalanceList;                              // 0x38(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UInventoryBalanceData*>         RuntimeInventoryBalanceList;                       // 0x48(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryBalanceCollectionData* GetDefaultObj();

};

// 0x0 (0x168 - 0x168)
// Class GbxInventory.InventoryBalanceData_Generated
class UInventoryBalanceData_Generated : public UInventoryBalanceData
{
public:

	static class UClass* StaticClass();
	static class UInventoryBalanceData_Generated* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxInventory.InventoryBlueprintLibrary
class UInventoryBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UInventoryBlueprintLibrary* GetDefaultObj();

	TArray<class UInventoryGenericPartData*> GetPossibleGenericParts(class UInventoryBalanceStateComponent* InventoryBalanceState, struct FGameplayTagContainer& Tags, bool bMustHaveAllTags, bool bExcludeCurrentlySelectedParts);
	class UInventoryBalanceStateComponent* GetInventoryBalanceState(class AActor* INVENTORY);
	class AActor* CreateInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, struct FInventoryBalanceStateInitializationData& InitData);
	class AActor* CloneInventory(class AActor* SourceInventory);
	class AActor* BuildInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, const struct FInventoryBalanceStateInitializationData& InitData);
};

// 0x78 (0xB0 - 0x38)
// Class GbxInventory.InventoryCategoryData
class UInventoryCategoryData : public UGbxInventoryCategoryData
{
public:
	bool                                         NotAddedToInventory;                               // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPickupActionType                 PickupActionType;                                  // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SharedWithAllPlayers;                              // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSharedPlayersMustBeOnFriendlyTeam;                // 0x3B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLevelSyncPickupCurrency;                          // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ManualActivation;                                  // 0x3D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMaxValue;                                      // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBB[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          MaxValue;                                          // 0x40(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  CategoryDisplayName;                               // 0x78(0x18)(Edit, NativeAccessSpecifierPublic)
	class FName                                  CategoryIdent;                                     // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanInspectItem;                                   // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanInspectManufacturer;                           // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanInspectElementalEffects;                       // 0x9A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanInspectParts;                                  // 0x9B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanChangeSkins;                                   // 0x9C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEquipAudioFromWeaponType;                      // 0x9D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotUseCosmeticLabelInBackpackCells;             // 0x9E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC7[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EquipAudioEventName;                               // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSaveGameQuantityChangeThrottling;           // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInventoryCategoryData* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GbxInventory.InventoryConditionalDamageAspectData
class UInventoryConditionalDamageAspectData : public UInventoryAspectData
{
public:
	TArray<struct FInventoryConditionalDamageAspectInfo> DamageConditionals;                                // 0x38(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInventoryConditionalDamageAspectData* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class GbxInventory.InventoryExcludersExpansionData
class UInventoryExcludersExpansionData : public UGbxDataAsset
{
public:
	class UGbxCondition*                         ExpansionCondition;                                // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInventoryPartData*>            TargetParts;                                       // 0x38(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryPartData*>            Excluders;                                         // 0x48(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UInventoryPartData*>            Dependencies;                                      // 0x58(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryExcludersExpansionData* GetDefaultObj();

	void EnumeratePossibleExcluders(TArray<class UActorPartData*>* OutPartList);
	void EnumeratePossibleDependencies(TArray<class UActorPartData*>* OutPartList);
};

// 0x50 (0x80 - 0x30)
// Class GbxInventory.InventoryGenericPartExpansionData
class UInventoryGenericPartExpansionData : public UGbxDataAsset
{
public:
	class UGbxCondition*                         ExpansionCondition;                                // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryBalanceCollectionData*       InventoryBalanceCollection;                        // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FInventoryGenericPartExpansionListData GenericParts;                                      // 0x40(0x40)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryGenericPartExpansionData* GetDefaultObj();

	void EnumeratePartListForPartType(uint8 PartType, TArray<class UActorPartData*>* OutPartList);
};

// 0x20 (0x48 - 0x28)
// Class GbxInventory.InventoryMaterialAspectTextureAssetStreamer
class UInventoryMaterialAspectTextureAssetStreamer : public UObject
{
public:
	uint8                                        Pad_D41[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInventoryMaterialAspectTextureAssetStreamer* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class GbxInventory.InventoryModuleSettings
class UInventoryModuleSettings : public UObject
{
public:
	TSoftClassPtr<class ADroppedInventoryItemPickup> DefaultDroppedPickupBlueprint;                     // 0x28(0x28)(Edit, Config, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VeryShortLivedDropLifeSpan;                        // 0x50(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ShortLivedDropLifeSpan;                            // 0x54(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LongLivedDropLifeSpan;                             // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PickupShrinkDuration;                              // 0x5C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ResetBumpOnPickupFailDelay;                        // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D62[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          PickupFlyToTargets;                                // 0x68(0x10)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryModuleSettings* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class GbxInventory.InventoryNamePartData
class UInventoryNamePartData : public UGbxDataAsset
{
public:
	class FText                                  PartName;                                          // 0x30(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        Priority;                                          // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D7A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         Condition;                                         // 0x50(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinExperienceLevel;                                // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxExperienceLevel;                                // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryNamePartData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxInventory.InventoryOwnerInterface
class IInventoryOwnerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInventoryOwnerInterface* GetDefaultObj();

	void AttachedItemPickedUp(class AInventoryItemPickup* InventoryItemPickedUp, class AActor* PickedUpBy);
};

// 0x40 (0x78 - 0x38)
// Class GbxInventory.InventoryParticleAspectData
class UInventoryParticleAspectData : public UInventoryAspectData
{
public:
	class UParticleSystem*                       ParticleSystem;                                    // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ComponentName;                                     // 0x40(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeTranslation;                               // 0x50(0xC)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x5C(0xC)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConditionalInventoryParticleEmitter> ConditionalEmitters;                               // 0x68(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInventoryParticleAspectData* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class GbxInventory.InventoryPartSetExpansionData
class UInventoryPartSetExpansionData : public UGbxDataAsset
{
public:
	class UGbxCondition*                         ExpansionCondition;                                // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInventoryPartSetData*                 InventoryPartSet;                                  // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnum*                                 PartTypeEnum;                                      // 0x40(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FActorPartListExpansionData>   PartLists;                                         // 0x48(0x10)(Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInventoryPartSetExpansionData* GetDefaultObj();

	void EnumeratePartListForPartType(uint8 PartType, TArray<class UActorPartData*>* OutPartList);
};

// 0x0 (0x28 - 0x28)
// Class GbxInventory.InventorySerialNumberAssetInterface
class IInventorySerialNumberAssetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInventorySerialNumberAssetInterface* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class GbxInventory.InventorySerialNumberDatabase
class UInventorySerialNumberDatabase : public UObject
{
public:
	TArray<TSoftClassPtr<class UObject>>         AssetClasses;                                      // 0x28(0x10)(ZeroConstructor, Config, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_EAC[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInventorySerialNumberDatabase* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxInventory.ItemPoolExpansionData
class UItemPoolExpansionData : public UGbxDataAsset
{
public:
	class UItemPoolData*                         ItemPoolToExpand;                                  // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBalancedInventoryInfo>        BalancedItems;                                     // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UItemPoolExpansionData* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class GbxInventory.ItemPoolListData
class UItemPoolListData : public UItemPoolListInterface
{
public:
	TArray<class UItemPoolListData*>             ItemPoolIncludedLists;                             // 0x40(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FItemPoolInfo>                 ItemPools;                                         // 0x50(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UItemPoolListData* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxInventory.ItemPoolPartSelectionOverrideData
class UItemPoolPartSelectionOverrideData : public UGbxDataAsset
{
public:
	TSubclassOf<class UInventoryPartSetData>     PartSetClass;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnum*                                 PartTypeEnum;                                      // 0x38(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FItemPoolPartSelectionPartTypeOverrideData> PartTypeOverrides;                                 // 0x40(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UItemPoolPartSelectionOverrideData* GetDefaultObj();

	void EnumerateInventoryParts(uint8 PartType, TArray<class UActorPartData*>* OutPartList);
};

// 0x40 (0x70 - 0x30)
// Class GbxInventory.LootableBalanceData
class ULootableBalanceData : public UGbxDataAsset
{
public:
	uint8                                        Pad_F3E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLootConfigurationInfo>        DefaultLoot;                                       // 0x38(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ULootListData*>                 DefaultIncludedLootLists;                          // 0x48(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UAttributeInitializer>     DefaultLootGameStageVarianceFormula;               // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 AssetGuid;                                         // 0x60(0x10)(DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ULootableBalanceData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxInventory.LootFunctionLibrary
class ULootFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULootFunctionLibrary* GetDefaultObj();

	void SpawnItemsRaw(class UObject* WorldContextObject, TArray<class UItemPoolListData*>& ItemPoolLists, TArray<struct FItemPoolInfo>& ExtraItemPools, int32 GameStage, const struct FVector& Location, const struct FRotator& Rotation, float InitialVelocity);
};

// 0x10 (0x40 - 0x30)
// Class GbxInventory.LootListData
class ULootListData : public UGbxDataAsset
{
public:
	TArray<struct FLootConfigurationInfo>        LootData;                                          // 0x30(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULootListData* GetDefaultObj();

};

// 0x30 (0x488 - 0x458)
// Class GbxInventory.PickupableMeshActor
class APickupableMeshActor : public AActor
{
public:
	uint8                                        Pad_FCA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxActionComponent*                   ActionComponent;                                   // 0x460(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FCB[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APickupableMeshActor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxInventory.PickupFlyToAbleInterface
class IPickupFlyToAbleInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPickupFlyToAbleInterface* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class GbxInventory.PickupFlyToData
class UPickupFlyToData : public UGbxDataAsset
{
public:
	float                                        MaxLifetime;                                       // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetThreshold;                                   // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableSpinSpeedRange : 1;                         // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableLinearSpeedRange : 1;                       // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableTargetRotationSpeedRange : 1;               // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_95 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1002[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              SpinSpeed;                                         // 0x3C(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MaxSpinSpeed;                                      // 0x48(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LinearSpeed;                                       // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLinearSpeed;                                    // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearAcceleration;                                // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TerminalLinearSpeed;                               // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetRotationSpeed;                               // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTargetRotationSpeed;                            // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_101C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           TargetScaleByDistanceCurve;                        // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetScaleByDistanceBlendInSpeed;                 // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1023[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           ArcCurve;                                          // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcCompletePercent;                                // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1026[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPickupFlyToData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxInventory.PickupFlyToTargetInterface
class IPickupFlyToTargetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPickupFlyToTargetInterface* GetDefaultObj();

};

}


