#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x390 (0x630 - 0x2A0)
// Class ItemRuntime.EquippableItem
class AEquippableItem : public AItem
{
public:
	uint8                                        Pad_D7C[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bInvisibleState;                                   // 0x2B0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D7F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       SecondaryItem;                                     // 0x2B8(0x8)(BlueprintVisible, Net, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsSecondaryItem;                                  // 0x2C0(0x1)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D83[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBasicAwaiter*                         EquippableItemAwaiter;                             // 0x2C8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ALightweightAttachedItem*              LightweightItem;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D87[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x2E0(0x2F0)(BlueprintVisible, Net, RepNotify, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UCurveTable*                           DefaultWearProfile;                                // 0x5D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, class FName>       AttachSocketMap;                                   // 0x5D8(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                         bIsTwoHanded;                                      // 0x628(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D90[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AEquippableItem* GetDefaultObj();

	void SetInvisibleState(bool bNewState);
	bool RequiresLightweightItem();
	void OnRep_ItemEntry();
	void OnRep_bInvisibleState();
	void OnItemEntryUpdated(struct FInventoryEntry& OldEntry);
	void OnInvisibleStateChanged();
	void OnInventoryEntryUpdated(struct FInventoryEntry& UpdatedEntry);
	bool IsTwoHanded();
	bool IsEquipped();
	class USkeletalMeshComponent* GetRootMesh();
	enum class EItemType GetItemType();
	void GetItemID(struct FItemDataReference* OutItemReference);
	struct FInventoryEntry GetInventoryEntry();
	struct FGuid GetInstanceID();
	struct FGameplayTag GetEquippedTag();
	class FName GetAttachSocket();
	void ClearItemEffectsFromActor(class AActor* Actor);
	void AddEffects();
};

// 0x0 (0x28 - 0x28)
// Class ItemRuntime.EquippableItemUtilityInterface
class IEquippableItemUtilityInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEquippableItemUtilityInterface* GetDefaultObj();

	void DestroyEquippedItem(class AEquippableItem* Item, int32 NumToDestroy, bool bDestroyAll);
};

// 0x0 (0x28 - 0x28)
// Class ItemRuntime.ItemConstraintBehavior
class UItemConstraintBehavior : public UObject
{
public:

	static class UClass* StaticClass();
	static class UItemConstraintBehavior* GetDefaultObj();

	bool IsConstraintMet(struct FInventoryEntry& Entry);
};

// 0xB8 (0x100 - 0x48)
// Class ItemRuntime.ItemConstraintDataAsset
class UItemConstraintDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	class UItemConstraintPresentationDataAsset*  PresentationData;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseItemPresentationData;                          // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUseItemPresentationData;                       // 0x51(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E31[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemConstraintBehavior*               Behavior;                                          // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultItemReference;                     // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E37[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    DefaultItemReference;                              // 0x70(0x80)(Edit, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UItemInstanceData*>             DefaultInstancedData;                              // 0xF0(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UItemConstraintDataAsset* GetDefaultObj();

};

// 0x88 (0xB8 - 0x30)
// Class ItemRuntime.ItemConstraintPresentationDataAsset
class UItemConstraintPresentationDataAsset : public UDataAsset
{
public:
	struct FItemConstraintPresentationData       Data;                                              // 0x30(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UItemConstraintPresentationDataAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ItemRuntime.ItemDataAssetRegistryFunctionLibrary
class UItemDataAssetRegistryFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UItemDataAssetRegistryFunctionLibrary* GetDefaultObj();

	TArray<struct FItemDataReference> GetAllItemReferences();
	void GetAllItemReferenceObjects(TArray<class UObjectWrapper_ItemDataReference*>* OutItemReferenceWrappers);
};

// 0x0 (0x28 - 0x28)
// Class ItemRuntime.ItemDataReferenceFunctionLibrary
class UItemDataReferenceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UItemDataReferenceFunctionLibrary* GetDefaultObj();

	void TryGetItemData(struct FItemDataReference& ItemReference, struct FItemData* ItemData, enum class EGetResult* Branches);
	bool NotEqual_FItemDataReference(struct FItemDataReference& A, struct FItemDataReference& B);
	struct FItemDataReference MakeItemReferfenceFromDataAsset(TSoftObjectPtr<class UItemDataAsset>& Asset);
	bool IsValid(struct FItemDataReference& ItemReference);
	struct FGuid GetID(struct FItemDataReference& ItemReference);
	bool EqualEqual_FItemDataReference(struct FItemDataReference& A, struct FItemDataReference& B);
};

// 0x0 (0x28 - 0x28)
// Class ItemRuntime.ItemInstanceData
class UItemInstanceData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UItemInstanceData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ItemRuntime.ItemPerkFunctionLibrary
class UItemPerkFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UItemPerkFunctionLibrary* GetDefaultObj();

	void TryGetItemPerkData(struct FItemPerkDataReference& Reference, struct FItemPerkData* OutData, enum class EGetResult* OutBranches);
	bool NotEqual_FItemPerkDataReference(struct FItemPerkDataReference& A, struct FItemPerkDataReference& B);
	bool IsValid(struct FItemPerkDataReference& Reference);
	TSoftObjectPtr<class UItemPerkArchetypeDataAsset> GetPerkArchetypeData(struct FItemPerkDataReference& Reference);
	TSoftObjectPtr<class UTexture2D> GetIcon(struct FItemPerkDataReference& Reference);
	class FText GetDisplayName(struct FItemPerkDataReference& Reference);
	TArray<struct FItemPerkDataReference> GetAllItemPerkReferences();
	bool EqualEqual_FItemPerkDataReference(struct FItemPerkDataReference& A, struct FItemPerkDataReference& B);
	void CreatePerkDataAsset(const class FString& AssetName, const class FString& DirectoryPath, enum class EGetResult* Branches, class UItemPerkDataAsset** OutNewItemPerk);
};

// 0x0 (0x28 - 0x28)
// Class ItemRuntime.ItemsGenericReplicatedDataFunctionLibrary
class UItemsGenericReplicatedDataFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UItemsGenericReplicatedDataFunctionLibrary* GetDefaultObj();

	void GetGenericReplicatedDataAsItemDataReference(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* bHasItemDataReference, struct FItemDataReference* ItemDataReference);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromItemDataReference(struct FItemDataReference& ItemDataReference);
};

// 0x8 (0x2A8 - 0x2A0)
// Class ItemRuntime.LightweightAttachedItem
class ALightweightAttachedItem : public AActor
{
public:
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ALightweightAttachedItem* GetDefaultObj();

};

}


