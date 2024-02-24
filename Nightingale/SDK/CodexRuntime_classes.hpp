#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2D0 - 0x2A0)
// Class CodexRuntime.CodexActor
class ACodexActor : public AActor
{
public:
	uint8                                        Pad_A25[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCodexComponent*                       CodexComponent;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  CodexStaticMeshComponent;                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           CodexStaticMesh;                                   // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCodexAssetReference                  CodexAssetReference;                               // 0x2C0(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACodexActor* GetDefaultObj();

	bool ShouldShowHopeEcho();
};

// 0x0 (0x28 - 0x28)
// Class CodexRuntime.CodexAssetReferenceFunctionLibrary
class UCodexAssetReferenceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCodexAssetReferenceFunctionLibrary* GetDefaultObj();

	bool IsValidCodexReference(struct FCodexAssetReference& CodexReference);
	void GetCodexReferenceCardImage(struct FCodexAssetReference& CodexReference, bool* bFoundValidImage, TSoftObjectPtr<class UTexture2D>* OutCardImage);
	void GetCodexAssetUniqueId(class UCodexBaseDataAsset* CodexAsset, struct FGuid* OutUniqueID);
	bool AreCodexReferencesEqual(struct FCodexAssetReference& A, struct FCodexAssetReference& B, bool bExactMatch);
};

// 0x40 (0xE0 - 0xA0)
// Class CodexRuntime.CodexComponent
class UCodexComponent : public UActorComponent
{
public:
	uint8                                        Pad_B17[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCodexInstanceIDReplicated;                       // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FCodexAssetReference                  CodexAssetReference;                               // 0xC0(0x10)(Net, SaveGame, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGuid                                 CodexInstanceID;                                   // 0xD0(0x10)(Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCodexComponent* GetDefaultObj();

	void OnRep_CodexInstanceIDReplicated();
};

// 0x0 (0x28 - 0x28)
// Class CodexRuntime.CodexComponentInterface
class ICodexComponentInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICodexComponentInterface* GetDefaultObj();

	void UnbindEventFrom_OnCodexInstanceIDReplicated(FDelegateProperty_& Event);
	void SetCodexAssetReference(struct FCodexAssetReference& InCodexAssetReference);
	void GetCodexComponentID(struct FGuid* OutID);
	struct FCodexAssetReference GetCodexAssetReference();
	void BindEventTo_OnCodexInstanceIDReplicated(FDelegateProperty_& Event);
};

// 0xE0 (0x128 - 0x48)
// Class CodexRuntime.CodexBaseDataAsset
class UCodexBaseDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	enum class ECodexTemplate                    CodexTemplate;                                     // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECodexNotificationType            CodexNotificationType;                             // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B87[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URequirement*                          Requirements;                                      // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             CardImage;                                         // 0x58(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Surtitle;                                          // 0x80(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x98(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Subtitle;                                          // 0xB0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  AdditionalText;                                    // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FCodexSubentry>                Subentries;                                        // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UTexture2D>>     CodexImages;                                       // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         GrantedByDefault;                                  // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B94[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 FilterTags;                                        // 0x108(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCodexBaseDataAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CodexRuntime.CodexExperienceStateIDEnumerator
class UCodexExperienceStateIDEnumerator : public UExperienceStateDefinitionSource
{
public:

	static class UClass* StaticClass();
	static class UCodexExperienceStateIDEnumerator* GetDefaultObj();

};

// 0x18 (0x2B8 - 0x2A0)
// Class CodexRuntime.CodexProxy
class ACodexProxy : public AActor
{
public:
	struct FCodexAssetReference                  CodexAssetReference;                               // 0x2A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  CodexStaticMeshComponent;                          // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACodexProxy* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class CodexRuntime.CodexServerWorldSubsystem
class UCodexServerWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_BB8[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCodexServerWorldSubsystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CodexRuntime.CodexTelemetryFunctionLibrary
class UCodexTelemetryFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCodexTelemetryFunctionLibrary* GetDefaultObj();

};

// 0x238 (0x2F0 - 0xB8)
// Class CodexRuntime.CodexTrackerComponent
class UCodexTrackerComponent : public UDelayedRegistrationComponent
{
public:
	uint8                                        Pad_BF7[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCodexEntryArraySerializer            GrantedCodices;                                    // 0x100(0x188)(Net, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BFB[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPersistentDataHelper*                 PersistentDataHelper;                              // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BFC[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCodexTrackerComponent* GetDefaultObj();

	void Server_GrantCodexEntry(struct FGuid& CodexInstanceID, struct FCodexAssetReference& CodexAssetReference);
};

// 0x0 (0x28 - 0x28)
// Class CodexRuntime.CodexTrackerInterface
class ICodexTrackerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICodexTrackerInterface* GetDefaultObj();

	void UnbindEventFrom_OnCodexUpdated(FDelegateProperty_& Event);
	void UnbindEventFrom_OnCodexGranted(FDelegateProperty_& Event);
	void HasUnlockedAnySubentry(class UCodexBaseDataAsset* CodexDataAsset, bool* OutUnlocked);
	void GrantCodexEntry(struct FGuid& CodexInstanceID, struct FCodexAssetReference& CodexAssetReference);
	void GetUnlockedSubentryTags(class UCodexBaseDataAsset* CodexDataAsset, struct FGameplayTagContainer* OutUnlockedSubentryTags);
	bool GetCodexEntry(class UCodexBaseDataAsset* CodexDataAsset, struct FCodexEntry* OutCodexEntry);
	bool CanGrantCodex(struct FGuid& CodexInstanceID, struct FCodexAssetReference& CodexAssetReference);
	void BindEventTo_OnCodexUpdated(FDelegateProperty_& Event);
	void BindEventTo_OnCodexGranted(FDelegateProperty_& Event);
};

}


