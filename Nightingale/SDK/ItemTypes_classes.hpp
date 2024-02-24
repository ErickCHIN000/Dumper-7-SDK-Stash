#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x58 - 0x48)
// Class ItemTypes.CharacteristicDataAsset
class UCharacteristicDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	TArray<struct FCharacteristicData>           TieredData;                                        // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCharacteristicDataAsset* GetDefaultObj();

};

// 0x0 (0x2A0 - 0x2A0)
// Class ItemTypes.Item
class AItem : public AActor
{
public:

	static class UClass* StaticClass();
	static class AItem* GetDefaultObj();

};

// 0xB0 (0xF8 - 0x48)
// Class ItemTypes.ItemAttributeModifierAsset
class UItemAttributeModifierAsset : public UUniquelyIdentifiableDataAsset
{
public:
	struct FItemAttributeModifierData            Data;                                              // 0x48(0xB0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UItemAttributeModifierAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ItemTypes.ItemSubtypeObject
class UItemSubtypeObject : public UObject
{
public:

	static class UClass* StaticClass();
	static class UItemSubtypeObject* GetDefaultObj();

};

// 0xD8 (0x120 - 0x48)
// Class ItemTypes.ItemDataAsset
class UItemDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	struct FItemData                             Data;                                              // 0x48(0xD8)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UItemDataAsset* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class ItemTypes.ObjectWrapper_ItemDataReference
class UObjectWrapper_ItemDataReference : public UObject
{
public:
	uint8                                        Pad_C60[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemDataReference;                                 // 0x30(0x80)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UObjectWrapper_ItemDataReference* GetDefaultObj();

};

// 0x28 (0x70 - 0x48)
// Class ItemTypes.ItemPerkArchetypeDataAsset
class UItemPerkArchetypeDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	struct FItemPerkArchetypeData                Data;                                              // 0x48(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UItemPerkArchetypeDataAsset* GetDefaultObj();

};

// 0xB0 (0xF8 - 0x48)
// Class ItemTypes.ItemPerkDataAsset
class UItemPerkDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	struct FItemPerkData                         Data;                                              // 0x48(0xB0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UItemPerkDataAsset* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class ItemTypes.ItemPresentationDataAsset
class UItemPresentationDataAsset : public UDataAsset
{
public:

	static class UClass* StaticClass();
	static class UItemPresentationDataAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ItemTypes.ItemTypeReferenceInterface
class IItemTypeReferenceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IItemTypeReferenceInterface* GetDefaultObj();

};

// 0xC8 (0x110 - 0x48)
// Class ItemTypes.ResourceCustomizationDataAsset
class UResourceCustomizationDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	struct FResourceCustomizationData            Data;                                              // 0x48(0xB8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMaterialCustomizationTieredOverrides> TieredOverrides;                                   // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UResourceCustomizationDataAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ItemTypes.ResourceCustomizationDataFunctionLibrary
class UResourceCustomizationDataFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UResourceCustomizationDataFunctionLibrary* GetDefaultObj();

	void TryGetResourceCustomizationData(struct FResourceCustomizationDataReference& Reference, struct FResourceCustomizationData* OutData, enum class EGetResult* OutBranches);
	bool NotEqual_FItemDataReference(struct FResourceCustomizationDataReference& A, struct FResourceCustomizationDataReference& B);
	bool IsValid(struct FResourceCustomizationDataReference& Reference);
	bool EqualEqual_FItemDataReference(struct FResourceCustomizationDataReference& A, struct FResourceCustomizationDataReference& B);
};

// 0x0 (0x28 - 0x28)
// Class ItemTypes.ResourceCustomizationType
class UResourceCustomizationType : public UObject
{
public:

	static class UClass* StaticClass();
	static class UResourceCustomizationType* GetDefaultObj();

};

}


