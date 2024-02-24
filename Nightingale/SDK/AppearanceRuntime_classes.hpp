#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x100 - 0xF8)
// Class AppearanceRuntime.AppearanceComponent
class UAppearanceComponent : public UPersistentDataComponent
{
public:
	uint8                                        Pad_E6B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAppearanceComponent* GetDefaultObj();

	void SendAllPropertyEvents();
	void PopulateAppearanceFromMetadata(TMap<class FString, class FString>& MetaData);
	void GetAppearanceMetadata(TMap<class FString, class FString>* OutMetadata);
};

// 0x0 (0x28 - 0x28)
// Class AppearanceRuntime.CharacterFaceMorphInterface
class ICharacterFaceMorphInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICharacterFaceMorphInterface* GetDefaultObj();

	void SetCharacterEyeScale(float& Scale);
	void SetCharacterEyeOffset(struct FVector& Offset);
	void SetCharacterBodyType(enum class EBodyType Type);
};

// 0x158 (0x1A0 - 0x48)
// Class AppearanceRuntime.HairDataAsset
class UHairDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	struct FHairData                             Data;                                              // 0x48(0x158)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHairDataAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AppearanceRuntime.HairDataReferenceFunctionLibrary
class UHairDataReferenceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHairDataReferenceFunctionLibrary* GetDefaultObj();

	void TryGetHairData(struct FHairDataReference& Reference, struct FHairData* OutData, enum class EGetResult* OutBranches);
	bool NotEqual_FHairDataReference(struct FHairDataReference& A, struct FHairDataReference& B);
	struct FHairDataReference MakeFromDataAsset(TSoftObjectPtr<class UHairDataAsset>& Asset, enum class EHairAssetType Type);
	bool IsValid(struct FHairDataReference& Reference);
	TSoftObjectPtr<class UHairDataAsset> GetSoftObjectFromReference(struct FHairDataReference& HairDataReference);
	struct FGuid GetHairDataId(struct FHairDataReference& Reference);
	void GetAllHairReferences(enum class EHairAssetType Type, TArray<struct FHairDataReference>* OutReferences);
	bool EqualEqual_FHairDataReference(struct FHairDataReference& A, struct FHairDataReference& B);
};

// 0x20 (0x68 - 0x48)
// Class AppearanceRuntime.VoiceSetDataAsset
class UVoiceSetDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	struct FVoiceSetData                         Data;                                              // 0x48(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVoiceSetDataAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary
class UVoiceSetDataReferenceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVoiceSetDataReferenceFunctionLibrary* GetDefaultObj();

	void TryGetVoiceSetData(struct FVoiceSetDataReference& Reference, struct FVoiceSetData* OutData, enum class EGetResult* OutBranches);
	bool NotEqual_FVoiceSetDataReference(struct FVoiceSetDataReference& A, struct FVoiceSetDataReference& B);
	struct FVoiceSetDataReference MakeFromDataAsset(TSoftObjectPtr<class UVoiceSetDataAsset>& Asset);
	bool IsValid(struct FVoiceSetDataReference& Reference);
	struct FGuid GetUID(struct FVoiceSetDataReference& Reference);
	void GetAllVoiceSetDataReferences(TArray<struct FVoiceSetDataReference>* OutReferences);
	bool EqualEqual_FVoiceSetDataReference(struct FVoiceSetDataReference& A, struct FVoiceSetDataReference& B);
};

}


