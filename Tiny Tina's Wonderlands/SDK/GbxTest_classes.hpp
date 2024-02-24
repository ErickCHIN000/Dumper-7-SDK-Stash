#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// Class GbxTest.AssetTrait
class UAssetTrait : public UDataAsset
{
public:
	class UAssetTrait*                           TraitToWhitelist;                                  // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAssetTrait* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class GbxTest.AssetTraitMaterial
class UAssetTraitMaterial : public UAssetTrait
{
public:
	struct FOptionalBool                         UsedWithSkeletalMesh;                              // 0x38(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         UsedWithParticleSprites;                           // 0x3A(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         UsedWithBeamTrails;                                // 0x3C(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         UsedWithMeshParticles;                             // 0x3E(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         UsedWithStaticLighting;                            // 0x40(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         UsedWithMorphTargets;                              // 0x42(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         UsedWithSplineMesh;                                // 0x44(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         UsedWithLandscape;                                 // 0x46(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         UsedWithInstancedStaticMeshes;                     // 0x48(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         UsedWithClothing;                                  // 0x4A(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         HasPhysMatSet;                                     // 0x4C(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A[0x2];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAssetTraitMaterial* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class GbxTest.AssetTraitMesh
class UAssetTraitMesh : public UAssetTrait
{
public:
	struct FOptionalInt32                        LODMinCount;                                       // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        LODMaxCount;                                       // 0x40(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxTriangleCount;                                  // 0x48(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxVertexCount;                                    // 0x50(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinTexCoordCount;                                  // 0x58(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxTexCoordCount;                                  // 0x60(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinSectionCount;                                   // 0x68(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxSectionCount;                                   // 0x70(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinSocketCount;                                    // 0x78(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxSocketCount;                                    // 0x80(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         HasSockets;                                        // 0x88(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_66[0x6];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAssetTraitMesh* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class GbxTest.AssetTraitParticleSystem
class UAssetTraitParticleSystem : public UAssetTrait
{
public:
	struct FOptionalInt32                        MinEmitterCount;                                   // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxEmitterCount;                                   // 0x40(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinModuleCount;                                    // 0x48(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxModuleCount;                                    // 0x50(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinLODCount;                                       // 0x58(0x8)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxLODCount;                                       // 0x60(0x8)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalFloat                        MinLODDistanceCheckTime;                           // 0x68(0x8)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalFloat                        MaxLODDistanceCheckTime;                           // 0x70(0x8)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalFloat                        MinUpdateTime;                                     // 0x78(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalFloat                        MaxUpdateTime;                                     // 0x80(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalFloat                        MaxWarmupTime;                                     // 0x88(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinDataAnimTrailCount;                             // 0x90(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxDataAnimTrailCount;                             // 0x98(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinDataGPUSpritesCount;                            // 0xA0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxDataGPUSpritesCount;                            // 0xA8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinDataMeshCount;                                  // 0xB0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxDataMeshCount;                                  // 0xB8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinDataRibbonOrBeamCount;                          // 0xC0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxDataRibbonOrBeamCount;                          // 0xC8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalFloat                        MaxTemplateCost;                                   // 0xD0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         bHasDataAnimTrail;                                 // 0xD8(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         bHasDataGPUSprites;                                // 0xDA(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         bHasDataMesh;                                      // 0xDC(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         bHasDataRibbonOrBeam;                              // 0xDE(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxDrawCount;                                      // 0xE0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         bKillOnCompletedNotSet;                            // 0xE8(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_78[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOptionalFloat                        MinUnitScalar;                                     // 0xEC(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         bUseInverseSquaredFalloffSet;                      // 0xF4(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         bAllowInfiniteLifetimes;                           // 0xF6(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalFloat                        MaxLifetime;                                       // 0xF8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAssetTraitParticleSystem* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class GbxTest.AssetTraitSkeletalMesh
class UAssetTraitSkeletalMesh : public UAssetTraitMesh
{
public:

	static class UClass* StaticClass();
	static class UAssetTraitSkeletalMesh* GetDefaultObj();

};

// 0x48 (0xD8 - 0x90)
// Class GbxTest.AssetTraitStaticMesh
class UAssetTraitStaticMesh : public UAssetTraitMesh
{
public:
	struct FOptionalInt32                        MinPrimitiveCount;                                 // 0x90(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxPrimitiveCount;                                 // 0x98(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinLightmapResolution;                             // 0xA0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxLightMapResolution;                             // 0xA8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinLightMapIndex;                                  // 0xB0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxLightMapIndex;                                  // 0xB8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalLODGroup                     LODGroup;                                          // 0xC0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         CastShadow;                                        // 0xD0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         EnableCollision;                                   // 0xD2(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_81[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAssetTraitStaticMesh* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class GbxTest.AssetTraitTexture
class UAssetTraitTexture : public UAssetTrait
{
public:
	struct FOptionalTextureCompressionMethod     CompressionMethod;                                 // 0x38(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalTextureLODGroup              LODGroup;                                          // 0x48(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MinLODBias;                                        // 0x58(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalInt32                        MaxLODBias;                                        // 0x60(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         HasAlpha;                                          // 0x68(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptionalBool                         HassRGB;                                           // 0x6A(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_86[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAssetTraitTexture* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GbxTest.AutomationMenuHelper
class UAutomationMenuHelper : public UObject
{
public:
	uint8                                        Pad_B1[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAutomationMenuHelper* GetDefaultObj();

	void PrevPage();
	class FName PageName();
	int32 NumPages();
	void NextPage();
	void NextFocus(enum class EAutomationUIDirection Direction);
	class FName MenuName();
	bool HasOpenMenu();
	class FName FocusName();
	struct FAutomationMenuFocusInfo FocusInfo();
	int32 CurrentDepth();
	class UAutomationMenuHelper* CreateAutomationMenuHelper(class AGbxPlayerController* PlayerController, bool SimulateAllInputs);
	void BackOut();
	void ActuateFocus(enum class EAutomationUIAction Action);
};

// 0x0 (0x28 - 0x28)
// Class GbxTest.AutomationUILibrary
class UAutomationUILibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAutomationUILibrary* GetDefaultObj();

	void ForceDisableTutorials(bool ForceDisable);
};

// 0x0 (0x80 - 0x80)
// Class GbxTest.GbxTestContentAuditCommandlet
class UGbxTestContentAuditCommandlet : public UCommandlet
{
public:

	static class UClass* StaticClass();
	static class UGbxTestContentAuditCommandlet* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class GbxTest.GbxTestJiraCommandlet
class UGbxTestJiraCommandlet : public UCommandlet
{
public:

	static class UClass* StaticClass();
	static class UGbxTestJiraCommandlet* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class GbxTest.GbxTestContentAuditSettings
class UGbxTestContentAuditSettings : public UObject
{
public:
	TArray<class FString>                        BlacklistDirectories;                              // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        WhitelistDirectories;                              // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                AssetsToBeReplacedCollection;                      // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AssetsToBeDeletedCollection;                       // 0x58(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TestMapDirectories;                                // 0x68(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxTestContentAuditSettings* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class GbxTest.GbxTestParticleMaterialAuditCommandlet
class UGbxTestParticleMaterialAuditCommandlet : public UCommandlet
{
public:

	static class UClass* StaticClass();
	static class UGbxTestParticleMaterialAuditCommandlet* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GbxTest.GbxTestSettings
class UGbxTestSettings : public UObject
{
public:
	TArray<class FString>                        TestContentPaths;                                  // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxTestSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxTest.PerfMapCapture
class UPerfMapCapture : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPerfMapCapture* GetDefaultObj();

	void SavePerfMapCapturesFromConfiguration(class UWorld* World, const class FString& Path, const struct FMapParameters& Configuration, const struct FLatentActionInfo& LatentInfo);
	bool SavePerfMapCaptures(class UObject* World, const class FString& Path, float Density, bool bLighting, bool bSpecular, float Gamma, int32 Width, int32 Height, float VolumeX, float VolumeY, float VolumeZ, const class FString& OutputPattern);
};

// 0x10 (0x38 - 0x28)
// Class GbxTest.PerformanceSnapshotCollector
class UPerformanceSnapshotCollector : public UBlueprintFunctionLibrary
{
public:
	uint8                                        Pad_E0[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPerformanceSnapshotCollector* GetDefaultObj();

	void ResetSnapshotProviders();
	class UPerformanceSnapshotCollector* CreatePerformanceSnapshotCollector(const class FString& StatSection, enum class ESnapshotExecOutput* ExecOut);
	void CollectSnapshot(class UObject* WorldContextObject, const class FString& ReportContext, const struct FLatentActionInfo& LatentInfo);
	void CollectProbeSnapshot(class UObject* WorldContextObject, const class FString& ReportContext, struct FGbxProbeId& ProbeId, const class FString& Test, TArray<struct FGbxProbeExtraData>& ExtraDataArray, const struct FLatentActionInfo& LatentInfo);
};

// 0x80 (0xA8 - 0x28)
// Class GbxTest.MatcherFunctionality
class UMatcherFunctionality : public UObject
{
public:
	uint8                                        Pad_103[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMatcherFunctionality* GetDefaultObj();

	int32 Size();
	bool Ready();
	class FString GetSuffix();
	class FString GetPrefix();
	int32 GetPosition(int32 Start);
	class FString GetMatch(int32 Index);
	int32 GetLength();
	class FString GetAtIndex(int32 Index);
	bool Empty();
};

// 0x28 (0x50 - 0x28)
// Class GbxTest.RegexFunctionality
class URegexFunctionality : public UObject
{
public:
	struct FRegex                                Regex;                                             // 0x28(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URegexFunctionality* GetDefaultObj();

	bool RegexSearch(struct FRegex& Regex, class UMatcherFunctionality* Matcher, const class FString& Input);
	class FString RegexRepleace(struct FRegex& Regex, const class FString& Input, const class FString& Repleacement);
	bool RegexMatch2(struct FRegex& Regex, class UMatcherFunctionality* Matcher, const class FString& Input);
	bool RegexMatch(struct FRegex& Regex, const class FString& Input);
	void FindAll(const struct FRegex& Regex, const class FString& String, TArray<class FString>* Return);
	void Assign2(struct FRegex& Regex, const class FString& Pattern, enum class ESyntaxOption Flags);
	void Assign(struct FRegex& Regex, const class FString& Pattern);
};

// 0x10 (0x40 - 0x30)
// Class GbxTest.GbxTestHierarchicalCommands
class UGbxTestHierarchicalCommands : public UDataAsset
{
public:
	TArray<struct FGbxTestHierarchicalCommandL1> Commands;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxTestHierarchicalCommands* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxTest.TestLibrary
class UTestLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTestLibrary* GetDefaultObj();

	void TakeScreenshot(const class FString& CustomFilename, const struct FVector2D& OverrideResolution, bool ShowUI, bool AddUniqueSuffix);
	TArray<class FString> SortStrings(const TArray<class FString>& Values, bool Descending);
	TArray<class UObject*> SortObjectsByName(const TArray<class UObject*>& Values, bool Descending);
	TArray<int32> SortIntegers(const TArray<int32>& Values, bool Descending);
	TArray<float> SortFloats(const TArray<float>& Values, bool Descending);
	void SimulateInputKey(class APlayerController*& PlayerController, const struct FKey& Key, enum class EInputEvent EVENTTYPE, float AmountDepressed);
	void SimulateInputAxis(class APlayerController*& PlayerController, const struct FKey& Key, float Delta, float InterpTime, const struct FLatentActionInfo& LatentInfo);
	void RemoveItemFromCollection(const class FString& CollectionName, const class FString& ObjectName);
	void RemoveArrayFromCollection(const class FString& CollectionName, TArray<class FString>& ObjectNames);
	bool ReadFromIni(const class FString& Section, const class FString& Key, TArray<class FString>* Values);
	void MoveItemCollection(const class FString& FromCollection, const class FString& ToCollection, const class FString& ObjectName);
	void MoveArrayCollection(const class FString& FromCollection, const class FString& ToCollection, TArray<class FString>& ObjectNames);
	void LoadBlueprintAsset(const class FString& Path, class UObject** Object);
	void LoadAsset(const class FString& Path, class UObject** Object);
	bool IsEditorSession();
	bool IsAssetInCollectionEx(const class FString& CollectionName, enum class ECollectionType CollectionType, const class FString& ObjectName);
	bool IsAssetInCollection(const class FString& CollectionName, const class FString& ObjectName);
	class UWorld* GetWorldForActor(class AActor* Actor);
	void GetTestDriversFromStrings(TArray<class FString>& Strings, TArray<TSubclassOf<class AActor>>* TestDrivers, class FString* UndiscoveredItems);
	void GetReferencedBlueprintClasses(class UObject* Object, class UClass* Class, TArray<class UClass*>* Classes);
	void GetObjectTags(TArray<struct FObjectTag>* ObjectTags, class UObject* Asset);
	void GetAssetPath(class UObject* Asset, class FString* AssetPath);
	void GetAssetName(const class FString& AssetPath, class FString* AssetName);
	void FilterDiscoveredAssets(TArray<class FString>& InPathNames, TArray<class FString>& InPrettyNames, TArray<class FString>* OutPathNames, TArray<class FString>* OutPrettyNames, const class FString& AssetNamePrefix, const class FString& AssetNamePostfix, const class FString& AssetNameContains, const class FString& AssetPathContains);
	void DiscoverAssets(TArray<class FString>* PathNames, TArray<class FString>* PrettyNames, const TArray<class FString>& Directories, const TArray<class UClass*>& Classes, const TArray<class UClass*>& ExcludeRecursiveClasses, bool bRecursiveDirectories, bool bRecursiveClasses);
	class FString CreateLocalCollection(const class FString& CollectionName, const class FString& ParentName);
	bool ContainsSubPath(const class FString& Path, const class FString& SubPath);
	bool ContainsObjectTag(TArray<struct FObjectTag>& ObjectTags, const class FString& Category, const class FString& Name, bool bExactCategory, bool bCaseSensitiveCategory, bool bExactName, bool bCaseSensitiveName);
	bool CollectionExistsEx(const class FString& CollectionName, enum class ECollectionType CollectionType);
	bool CollectionExists(const class FString& CollectionName);
	void AddItemToCollection(const class FString& CollectionName, const class FString& ObjectName);
	void AddArrayToCollection(const class FString& CollectionName, TArray<class FString>& ObjectNames);
};

// 0x0 (0x28 - 0x28)
// Class GbxTest.TestLibraryContent
class UTestLibraryContent : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTestLibraryContent* GetDefaultObj();

	class UTexture* LoadAssetTexture(const class FString& ObjectPath);
	class UStaticMesh* LoadAssetStaticMesh(const class FString& ObjectPath);
	class USkeletalMesh* LoadAssetSkeletalMesh(const class FString& ObjectPath);
	class UParticleSystem* LoadAssetParticleSystem(const class FString& ObjectPath);
	class UMaterial* LoadAssetMaterial(const class FString& ObjectPath);
	void GetTestInfoTexture(class UTexture* Asset, struct FTestInfoTexture* Info);
	void GetTestInfoStaticMeshLOD(class UStaticMesh* Asset, int32 LODIndex, struct FTestInfoMeshLOD* Info);
	void GetTestInfoStaticMesh(class UStaticMesh* Asset, struct FTestInfoMeshLODSummary* LODSummary, struct FTestInfoMesh* Mesh, struct FTestInfoStaticMesh* StaticMesh);
	void GetTestInfoSkeletalMeshLOD(class USkeletalMesh* Asset, int32 LODIndex, struct FTestInfoMeshLOD* Info);
	void GetTestInfoSkeletalMesh(class USkeletalMesh* Asset, struct FTestInfoMeshLODSummary* LODSummary, struct FTestInfoMesh* Mesh, struct FTestInfoSkeletalMesh* SkeletalMesh);
	void GetTestInfoParticleSystem(class UParticleSystem* Asset, struct FTestInfoParticleSystem* Info);
	void GetTestInfoParticleEmitter(class UParticleSystem* Asset, int32 EmitterIndex, struct FTestInfoParticleEmitter* Info);
	void GetTestInfoMaterial(class UMaterial* Asset, struct FTestInfoMaterial* Info);
	void GetAllPersistentGameMaps(TArray<class FString>* OutMapNames, bool ShortNamesOnly);
	TArray<class FString> ContentAuditSingleObject(class UObject* Asset);
};

// 0x0 (0x28 - 0x28)
// Class GbxTest.TestLibraryPerformance
class UTestLibraryPerformance : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTestLibraryPerformance* GetDefaultObj();

	void WaitForFrames(class UObject* WorldContextObject, int32 NumFrames, const struct FLatentActionInfo& LatentInfo);
	void GenerateLevelGrid(TArray<struct FVector>* GridLocations, class APawn* Pawn, float GridSize, bool bWalkableOnly);
};

// 0x0 (0x28 - 0x28)
// Class GbxTest.TestLibrarySimulation
class UTestLibrarySimulation : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTestLibrarySimulation* GetDefaultObj();

	void TestIntInRangeFromPlayMap(int32& Value, int32 Min, int32 Max, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void TestIntCompareFromPlayMap(int32& Value, int32 Other, enum class ECompare Comparison, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void TestFloatInRangeFromPlayMap(float& Value, float Min, float Max, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void TestFloatCompareFromPlayMap(float& Value, float Other, enum class ECompare Comparison, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage, float Tolerance);
	void TestBoolIsTrueFromPlayMap(bool& Value, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void TestBoolIsFalseFromPlayMap(bool& Value, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void StopPlayTest();
	void SimulatePlayerInput(class UObject* WorldContextObject, class APlayerController*& PlayerController, TArray<struct FGbxTestInputAction>& InputDescription, float PreDelay, float PostDelay, const struct FLatentActionInfo& LatentInfo);
	void SetReportContext(class UObject* WorldContextObject, TArray<struct FGbxProbeId>& AssetContexts);
	bool SetReceiveBackgroundInput(class APlayerController*& PlayerController, bool AllowBackgroundInput);
	void ResetTestTimeout();
	void ReportResultFromPlayMap(bool bSucceeded, const class FString& IssueCategory, const class FString& IssueMessage, const struct FGbxProbeId& AssetContext, enum class ETestIssueType FailedIssueType);
	void ReportIssueFromPlayMap(enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void PushWorldContext(class UObject* WorldContextObject);
	void PushAssetContext(const struct FGbxProbeId& ID);
	void PopWorldContext();
	void PopAssetContext(const struct FGbxProbeId& ID);
	bool IsPlayMapRunning();
	bool IsHLQNoClipEnabled(class APlayerController*& PlayerController);
	bool IsGodEnabled(class APlayerController*& PlayerController);
	bool IsGhostEnabled(class APlayerController*& PlayerController);
	bool IsDemiGodEnabled(class APlayerController*& PlayerController);
	class UTestPolicySimulation* GetPolicyForPlayMap();
	bool CanReceiveBackgroundInput(class APlayerController*& PlayerController);
};

// 0x0 (0x80 - 0x80)
// Class GbxTest.GbxTestPlanCommandlet
class UGbxTestPlanCommandlet : public UCommandlet
{
public:

	static class UClass* StaticClass();
	static class UGbxTestPlanCommandlet* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class GbxTest.TestPolicy
class UTestPolicy : public UObject
{
public:
	enum class EDiscovery                        DiscoveryMethod;                                   // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UGbxTestHierarchicalCommands> HierarchicalCommands;                              // 0x30(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Contact;                                           // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxTestPlan                      TestPlan;                                          // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EB[0x47];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTestPolicy* GetDefaultObj();

	void TestIntInRange(int32& Value, int32 Min, int32 Max, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void TestIntCompare(int32& Value, int32 Other, enum class ECompare Comparison, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void TestFloatInRange(float& Value, float Min, float Max, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void TestFloatCompare(float& Value, float Other, enum class ECompare Comparison, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage, float Tolerance);
	void TestBoolIsTrue(bool& Value, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void TestBoolIsFalse(bool& Value, enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void TestAssetTraits(class UObject* Asset);
	void TestAssetAudit(class UObject* Asset);
	void SetReportContext(class UObject* WorldContextObject, TArray<struct FGbxProbeId>& AssetContexts);
	void ReportResult(bool bSucceeded, const class FString& IssueCategory, const class FString& IssueMessage, const struct FGbxProbeId& AssetContext, enum class ETestIssueType FailedIssueType);
	void ReportIssue(enum class ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
	void PushAssetContext(const struct FGbxProbeId& ID);
	void PopAssetContext(const struct FGbxProbeId& ID);
	void OnRunTestCommand(const class FString& TestCommand);
	void OnGetTestCommands(TArray<class FString>* TestCommands, TArray<class FString>* PrettyNames);
	void ClearSavedTestCommand();
};

// 0x0 (0xB0 - 0xB0)
// Class GbxTest.TestPolicyContent
class UTestPolicyContent : public UTestPolicy
{
public:

	static class UClass* StaticClass();
	static class UTestPolicyContent* GetDefaultObj();

	void OnValidForImport(class UObject* ImportObject, bool* Result);
};

// 0x90 (0x140 - 0xB0)
// Class GbxTest.TestPolicySimulation
class UTestPolicySimulation : public UTestPolicy
{
public:
	uint8                                        Pad_67C[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTestPolicySimulation* GetDefaultObj();

	void StopPlay();
	void RunTestDrivers(TArray<TSubclassOf<class AActor>>& TestDrivers, float Timeout, float TimeLimit);
	void PlayTestMap(const class FString& MapName, TArray<TSubclassOf<class AActor>>& TestDrivers, float Timeout, float TimeLimit, bool bLoadMapOnce, bool bLoadMapIfNotLoaded);
	void PlayMap(const class FString& MapName, TArray<TSubclassOf<class AActor>>& TestDrivers, float Timeout, float TimeLimit);
	void OnMapTraveled(class UWorld* NewWorld);
	void IntendToMapTravel(bool WillMapTravel);
	void AddTestDriver(TSubclassOf<class AActor> TestDriver);
};

}


