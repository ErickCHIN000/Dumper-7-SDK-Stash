#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAsset
class UHoudiniAsset : public UObject
{
public:
	class FString                                AssetFileName;                                     // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                AssetBytes;                                        // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint32                                       AssetBytesCount;                                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAssetLimitedCommercial;                           // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAssetNonCommercial;                               // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAssetExpanded;                                    // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_130C[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAsset* GetDefaultObj();

};

// 0x8 (0x2A8 - 0x2A0)
// Class HoudiniEngineRuntime.HoudiniAssetActor
class AHoudiniAssetActor : public AActor
{
public:
	class UHoudiniAssetComponent*                HoudiniAssetComponent;                             // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AHoudiniAssetActor* GetDefaultObj();

};

// 0x558 (0xAD0 - 0x578)
// Class HoudiniEngineRuntime.HoudiniAssetComponent
class UHoudiniAssetComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_1324[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHoudiniAsset*                         HoudiniAsset;                                      // 0x580(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCookOnParameterChange;                            // 0x588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUploadTransformsToHoudiniEngine;                  // 0x589(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCookOnTransformChange;                            // 0x58A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCookOnAssetInputCook;                             // 0x58B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutputless;                                       // 0x58C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutputTemplateGeos;                               // 0x58D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseOutputNodes;                                   // 0x58E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1332[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        TemporaryCookFolder;                               // 0x590(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        BakeFolder;                                        // 0x5A0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniStaticMeshMethod          StaticMeshMethod;                                  // 0x5B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties;                    // 0x5B8(0x1E0)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FMeshBuildSettings                    StaticMeshBuildSettings;                           // 0x798(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideGlobalProxyStaticMeshSettings;            // 0x7E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableProxyStaticMeshOverride;                    // 0x7E1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableProxyStaticMeshRefinementByTimerOverride;   // 0x7E2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1346[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProxyMeshAutoRefineTimeoutSecondsOverride;         // 0x7E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride; // 0x7E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride; // 0x7E9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AssetID;                                           // 0x7EC(0x4)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                NodeIdsToCook;                                     // 0x7F0(0x10)(ZeroConstructor, Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected)
	TMap<int32, int32>                           OutputNodeCookCounts;                              // 0x800(0x50)(Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected)
	TSet<class UHoudiniAssetComponent*>          DownstreamHoudiniAssets;                           // 0x850(0x50)(ExportObject, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 ComponentGUID;                                     // 0x8A0(0x10)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 HapiGUID;                                          // 0x8B0(0x10)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                HapiAssetName;                                     // 0x8C0(0x10)(ZeroConstructor, DuplicateTransient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHoudiniAssetState                AssetState;                                        // 0x8D0(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHoudiniAssetState                DebugLastAssetState;                               // 0x8D1(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHoudiniAssetStateResult          AssetStateResult;                                  // 0x8D2(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1362[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LastComponentTransform;                            // 0x8E0(0x60)(DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       SubAssetIndex;                                     // 0x940(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AssetCookCount;                                    // 0x944(0x4)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasBeenLoaded;                                    // 0x948(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasBeenDuplicated;                                // 0x949(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingDelete;                                    // 0x94A(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRecookRequested;                                  // 0x94B(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRebuildRequested;                                 // 0x94C(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableCooking;                                    // 0x94D(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceNeedUpdate;                                  // 0x94E(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLastCookSuccess;                                  // 0x94F(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bParameterDefinitionUpdateNeeded;                  // 0x950(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBlueprintStructureModified;                       // 0x951(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBlueprintModified;                                // 0x952(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1379[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniParameter*>             Parameters;                                        // 0x958(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UHoudiniInput*>                 Inputs;                                            // 0x968(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UHoudiniOutput*>                Outputs;                                           // 0x978(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FHoudiniBakedOutput>           BakedOutputs;                                      // 0x988(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class AActor>>         UntrackedOutputs;                                  // 0x998(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UHoudiniHandleComponent*>       HandleComponents;                                  // 0x9A8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bHasComponentTransformChanged;                     // 0x9B8(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFullyLoaded;                                      // 0x9B9(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_138B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHoudiniPDGAssetLink*                  PDGAssetLink;                                      // 0x9C0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                          RefineMeshesTimer;                                 // 0x9C8(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_138E[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bNoProxyMeshNextCookRequested;                     // 0x9E8(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBakeAfterNextCook;                                // 0x9E9(0x1)(ZeroConstructor, DuplicateTransient, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHoudiniBakeAfterNextCook         BakeAfterNextCook;                                 // 0x9EA(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1398[0xAD];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCachedIsPreview;                                  // 0xA98(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_139A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastTickTime;                                      // 0xAA0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_139D[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetComponent* GetDefaultObj();

};

// 0x100 (0xBD0 - 0xAD0)
// Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{
public:
	uint8                                        Pad_13F2[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         FauxBPProperty;                                    // 0xB18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHoudiniAssetChanged;                              // 0xB19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUpdatedFromTemplate;                              // 0xB1A(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsInBlueprintEditor;                              // 0xB1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanDeleteHoudiniNodes;                            // 0xB1C(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasRegisteredComponentTemplate;                   // 0xB1D(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F8[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid> CachedOutputNodes;                                 // 0xB28(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<struct FGuid, struct FGuid>             CachedInputNodes;                                  // 0xB78(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_13FC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniAssetBlueprintComponent* GetDefaultObj();

	void SetToggleValueAt(const class FString& Name, bool Value, int32 Index);
	void SetFloatParameter(const class FString& Name, float Value, int32 Index);
	bool HasParameter(const class FString& Name);
};

// 0x0 (0x28 - 0x28)
// Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
class IHoudiniEngineCopyPropertiesInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IHoudiniEngineCopyPropertiesInterface* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class HoudiniEngineRuntime.HoudiniEngineEditorSettings
class UHoudiniEngineEditorSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UHoudiniEngineEditorSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HoudiniEngineRuntime.HoudiniHandleParameter
class UHoudiniHandleParameter : public UObject
{
public:
	class UHoudiniParameter*                     AssetParameter;                                    // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TupleIndex;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1424[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniHandleParameter* GetDefaultObj();

};

// 0x38 (0x2E0 - 0x2A8)
// Class HoudiniEngineRuntime.HoudiniHandleComponent
class UHoudiniHandleComponent : public USceneComponent
{
public:
	TArray<class UHoudiniHandleParameter*>       XformParms;                                        // 0x2A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UHoudiniHandleParameter*               RSTParm;                                           // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHoudiniHandleParameter*               RotOrderParm;                                      // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniHandleType                HandleType;                                        // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_144A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HandleName;                                        // 0x2D0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHoudiniHandleComponent* GetDefaultObj();

};

// 0x248 (0x270 - 0x28)
// Class HoudiniEngineRuntime.HoudiniInput
class UHoudiniInput : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Label;                                             // 0x38(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHoudiniInputType                 Type;                                              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHoudiniInputType                 PreviousType;                                      // 0x49(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1466[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AssetNodeId;                                       // 0x4C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InputNodeId;                                       // 0x50(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InputIndex;                                        // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ParmId;                                            // 0x58(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsObjectPathParameter;                            // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_146E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CreatedDataNodeIds;                                // 0x60(0x10)(ZeroConstructor, Transient, DuplicateTransient, NonTransactional, Protected, NativeAccessSpecifierProtected)
	bool                                         bHasChanged;                                       // 0x70(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNeedsToTriggerUpdate;                             // 0x71(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1478[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  CachedBounds;                                      // 0x78(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FString                                Help;                                              // 0xB0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHoudiniXformType                 KeepWorldTransform;                                // 0xC0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPackBeforeMerge;                                  // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bImportAsReference;                                // 0xC2(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bImportAsReferenceRotScaleEnabled;                 // 0xC3(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bImportAsReferenceBboxEnabled;                     // 0xC4(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bImportAsReferenceMaterialEnabled;                 // 0xC5(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExportLODs;                                       // 0xC6(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExportSockets;                                    // 0xC7(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPreferNaniteFallbackMesh;                         // 0xC8(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExportColliders;                                  // 0xC9(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExportMaterialParameters;                         // 0xCA(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDirectlyConnectHdas;                              // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExportOptionsMenuExpanded;                        // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bGeometryInputsMenuExpanded;                       // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLandscapeOptionsMenuExpanded;                     // 0xCE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWorldInputsMenuExpanded;                          // 0xCF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCurveInputsMenuExpanded;                          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCurvePointSelectionMenuExpanded;                  // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCurvePointSelectionUseAbsLocation;                // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCurvePointSelectionUseAbsRotation;                // 0xD3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCookOnCurveChanged;                               // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1497[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniInputObject*>           GeometryInputObjects;                              // 0xD8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bStaticMeshChanged;                                // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_149A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniInputObject*>           AssetInputObjects;                                 // 0xF0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bInputAssetConnectedInHoudini;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniInputObject*>           CurveInputObjects;                                 // 0x108(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        DefaultCurveOffset;                                // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAddRotAndScaleAttributesOnCurves;                 // 0x11C(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseLegacyInputCurves;                             // 0x11D(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14A9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniInputObject*>           LandscapeInputObjects;                             // 0x120(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bLandscapeHasExportTypeChanged;                    // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniInputObject*>           WorldInputObjects;                                 // 0x138(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        WorldInputBoundSelectorObjects;                    // 0x148(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsWorldInputBoundSelector;                        // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWorldInputBoundSelectorAutoUpdate;                // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14BB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UnrealSplineResolution;                            // 0x15C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UHoudiniInputObject*>           SkeletalInputObjects;                              // 0x160(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UHoudiniInputObject*>           GeometryCollectionInputObjects;                    // 0x170(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSet<class ULandscapeComponent*>             LandscapeSelectedComponents;                       // 0x180(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  InputNodesPendingDelete;                           // 0x1D0(0x50)(Transient, DuplicateTransient, NonTransactional, Protected, NativeAccessSpecifierProtected)
	TArray<class UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;                                // 0x220(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UHoudiniInputObject*>           LastUndoDeletedInputs;                             // 0x230(0x10)(ZeroConstructor, Transient, DuplicateTransient, NonTransactional, NativeAccessSpecifierPublic)
	bool                                         bUpdateInputLandscape;                             // 0x240(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniLandscapeExportType       LandscapeExportType;                               // 0x241(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLandscapeExportSelectionOnly;                     // 0x242(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLandscapeControlVisiblity;                        // 0x243(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLandscapeAutoSelectComponent;                     // 0x244(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLandscapeExportMaterials;                         // 0x245(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLandscapeExportLighting;                          // 0x246(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLandscapeExportNormalizedUVs;                     // 0x247(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLandscapeExportTileUVs;                           // 0x248(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLandscapeAutoSelectSplines;                       // 0x24A(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLandscapeSplinesExportOptionsMenuExpanded;        // 0x24B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLandscapeSplinesExportControlPoints;              // 0x24C(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLandscapeSplinesExportLeftRightCurves;            // 0x24D(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLandscapeSplinesExportSplineMeshComponents;       // 0x24E(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMergeSplineMeshComponents;                        // 0x24F(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHoudiniInputObjectSettings           InputSettings;                                     // 0x250(0x20)(NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHoudiniInput* GetDefaultObj();

};

// 0x1A8 (0x1D0 - 0x28)
// Class HoudiniEngineRuntime.HoudiniInputObject
class UHoudiniInputObject : public UObject
{
public:
	TSoftObjectPtr<class UObject>                InputObject;                                       // 0x28(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniInputObjectType           Type;                                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1524[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Guid;                                              // 0x54(0x10)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1527[0xA4];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasChanged;                                       // 0x108(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNeedsToTriggerUpdate;                             // 0x109(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTransformChanged;                                 // 0x10A(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_152C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        MaterialReferences;                                // 0x110(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FHoudiniInputObjectSettings           CachedInputSettings;                               // 0x120(0x20)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInputNodeHandleOverridesNodeIds;                  // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1537[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x150(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              UserInputRotator;                                  // 0x1B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        InputNodeId;                                       // 0x1C8(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        InputObjectNodeId;                                 // 0x1CC(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHoudiniInputObject* GetDefaultObj();

};

// 0x0 (0x1D0 - 0x1D0)
// Class HoudiniEngineRuntime.HoudiniInputStaticMesh
class UHoudiniInputStaticMesh : public UHoudiniInputObject
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputStaticMesh* GetDefaultObj();

};

// 0x0 (0x1D0 - 0x1D0)
// Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputSkeletalMesh* GetDefaultObj();

};

// 0x0 (0x1D0 - 0x1D0)
// Class HoudiniEngineRuntime.HoudiniInputAnimation
class UHoudiniInputAnimation : public UHoudiniInputObject
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputAnimation* GetDefaultObj();

};

// 0x0 (0x1D0 - 0x1D0)
// Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
class UHoudiniInputGeometryCollection : public UHoudiniInputObject
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputGeometryCollection* GetDefaultObj();

};

// 0x68 (0x238 - 0x1D0)
// Class HoudiniEngineRuntime.HoudiniInputSceneComponent
class UHoudiniInputSceneComponent : public UHoudiniInputObject
{
public:
	struct FTransform                            ActorTransform;                                    // 0x1D0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHoudiniInputActor*                    ParentInputActor;                                  // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHoudiniInputSceneComponent* GetDefaultObj();

};

// 0x28 (0x260 - 0x238)
// Class HoudiniEngineRuntime.HoudiniInputMeshComponent
class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{
public:
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x238(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniInputMeshComponent* GetDefaultObj();

};

// 0x10 (0x270 - 0x260)
// Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{
public:
	TArray<struct FTransform>                    InstanceTransforms;                                // 0x260(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniInputInstancedMeshComponent* GetDefaultObj();

};

// 0x28 (0x260 - 0x238)
// Class HoudiniEngineRuntime.HoudiniInputSplineComponent
class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{
public:
	int32                                        NumberOfSplineControlPoints;                       // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SplineLength;                                      // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SplineResolution;                                  // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SplineClosed;                                      // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1624[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    SplineControlPoints;                               // 0x248(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1628[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputSplineComponent* GetDefaultObj();

};

// 0x8 (0x240 - 0x238)
// Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
{
public:
	uint8                                        Pad_1643[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputGeometryCollectionComponent* GetDefaultObj();

};

// 0x8 (0x240 - 0x238)
// Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
class UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
{
public:
	uint8                                        Pad_167F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputSkeletalMeshComponent* GetDefaultObj();

};

// 0x10 (0x1E0 - 0x1D0)
// Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{
public:
	enum class EHoudiniCurveType                 CurveType;                                         // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reversed;                                          // 0x1D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHoudiniSplineComponent*               CachedComponent;                                   // 0x1D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHoudiniInputHoudiniSplineComponent* GetDefaultObj();

};

// 0x18 (0x250 - 0x238)
// Class HoudiniEngineRuntime.HoudiniInputCameraComponent
class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{
public:
	float                                        FOV;                                               // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AspectRatio;                                       // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOrthographic;                                   // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OrthoWidth;                                        // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OrthoNearClipPlane;                                // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OrthoFarClipPlane;                                 // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniInputCameraComponent* GetDefaultObj();

};

// 0x10 (0x1E0 - 0x1D0)
// Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{
public:
	int32                                        AssetOutputIndex;                                  // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AssetID;                                           // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16D8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputHoudiniAsset* GetDefaultObj();

};

// 0x138 (0x308 - 0x1D0)
// Class HoudiniEngineRuntime.HoudiniInputActor
class UHoudiniInputActor : public UHoudiniInputObject
{
public:
	int32                                        SplinesMeshObjectNodeId;                           // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SplinesMeshNodeId;                                 // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EE[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniInputSceneComponent*>   ActorComponents;                                   // 0x278(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSet<TSoftObjectPtr<class UObject>>          ActorSceneComponents;                              // 0x288(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        LastUpdateNumComponentsAdded;                      // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LastUpdateNumComponentsRemoved;                    // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumSplineMeshComponents;                           // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 GeneratedSplinesMeshPackageGuid;                   // 0x2E4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           GeneratedSplinesMesh;                              // 0x2F8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsedMergeSplinesMeshAtLastTranslate;              // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16FF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputActor* GetDefaultObj();

};

// 0x58 (0x360 - 0x308)
// Class HoudiniEngineRuntime.HoudiniInputLevelInstance
class UHoudiniInputLevelInstance : public UHoudiniInputActor
{
public:
	TMap<TSoftObjectPtr<class AActor>, class UHoudiniInputObject*> TrackedActorObjects;                               // 0x308(0x50)(NativeAccessSpecifierPrivate)
	int32                                        NumActorsAddedLastUpdate;                          // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumActorsRemovedLastUpdate;                        // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHoudiniInputLevelInstance* GetDefaultObj();

};

// 0x8 (0x310 - 0x308)
// Class HoudiniEngineRuntime.HoudiniInputLandscape
class UHoudiniInputLandscape : public UHoudiniInputActor
{
public:
	int32                                        CachedNumLandscapeComponents;                      // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1736[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputLandscape* GetDefaultObj();

};

// 0x28 (0x330 - 0x308)
// Class HoudiniEngineRuntime.HoudiniInputBrush
class UHoudiniInputBrush : public UHoudiniInputActor
{
public:
	TArray<struct FHoudiniBrushInfo>             BrushesInfo;                                       // 0x308(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UModel*                                CombinedModel;                                     // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIgnoreInputObject;                                // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBrushType                        CachedInputBrushType;                              // 0x321(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1751[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputBrush* GetDefaultObj();

};

// 0x0 (0x1D0 - 0x1D0)
// Class HoudiniEngineRuntime.HoudiniInputDataTable
class UHoudiniInputDataTable : public UHoudiniInputObject
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputDataTable* GetDefaultObj();

};

// 0x0 (0x1D0 - 0x1D0)
// Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{
public:

	static class UClass* StaticClass();
	static class UHoudiniInputFoliageType_InstancedStaticMesh* GetDefaultObj();

};

// 0x70 (0x240 - 0x1D0)
// Class HoudiniEngineRuntime.HoudiniInputBlueprint
class UHoudiniInputBlueprint : public UHoudiniInputObject
{
public:
	TArray<class UHoudiniInputSceneComponent*>   BPComponents;                                      // 0x1D0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSet<TSoftObjectPtr<class UObject>>          BPSceneComponents;                                 // 0x1E0(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        LastUpdateNumComponentsAdded;                      // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LastUpdateNumComponentsRemoved;                    // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_179C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputBlueprint* GetDefaultObj();

};

// 0x8 (0x310 - 0x308)
// Class HoudiniEngineRuntime.HoudiniInputPackedLevelActor
class UHoudiniInputPackedLevelActor : public UHoudiniInputActor
{
public:
	class UHoudiniInputBlueprint*                BlueprintInputObject;                              // 0x308(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHoudiniInputPackedLevelActor* GetDefaultObj();

};

// 0x8 (0x310 - 0x308)
// Class HoudiniEngineRuntime.HoudiniInputLandscapeSplineActor
class UHoudiniInputLandscapeSplineActor : public UHoudiniInputActor
{
public:
	uint8                                        Pad_17FA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputLandscapeSplineActor* GetDefaultObj();

};

// 0x78 (0x2B0 - 0x238)
// Class HoudiniEngineRuntime.HoudiniInputLandscapeSplinesComponent
class UHoudiniInputLandscapeSplinesComponent : public UHoudiniInputSceneComponent
{
public:
	TArray<struct FHoudiniLandscapeSplineControlPointData> CachedControlPoints;                               // 0x238(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FHoudiniLandscapeSplineSegmentData> CachedSegments;                                    // 0x248(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<TSoftObjectPtr<class ULandscapeSplineControlPoint>, int32> ControlPointIdMap;                                 // 0x258(0x50)(Protected, NativeAccessSpecifierProtected)
	int32                                        NextControlPointId;                                // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1830[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputLandscapeSplinesComponent* GetDefaultObj();

};

// 0x100 (0x360 - 0x260)
// Class HoudiniEngineRuntime.HoudiniInputSplineMeshComponent
class UHoudiniInputSplineMeshComponent : public UHoudiniInputMeshComponent
{
public:
	struct FGuid                                 MeshPackageGuid;                                   // 0x260(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMesh*                           GeneratedMesh;                                     // 0x270(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESplineMeshAxis                   CachedForwardAxis;                                 // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1869[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSplineMeshParams                     CachedSplineParams;                                // 0x280(0xB0)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               CachedSplineUpDir;                                 // 0x330(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CachedSplineBoundaryMax;                           // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CachedSplineBoundaryMin;                           // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        CachedbSmoothInterpRollScale : 1;                  // Mask: 0x1, PropSize: 0x10x350(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1875[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniInputSplineMeshComponent* GetDefaultObj();

};

// 0x18 (0x2C0 - 0x2A8)
// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
class UHoudiniInstancedActorComponent : public USceneComponent
{
public:
	class UObject*                               InstancedObject;                                   // 0x2A8(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        InstancedActors;                                   // 0x2B0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHoudiniInstancedActorComponent* GetDefaultObj();

};

// 0x28 (0x2D0 - 0x2A8)
// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
public:
	TArray<class UStaticMeshComponent*>          Instances;                                         // 0x2A8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x2B8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPrivate)
	class UStaticMesh*                           InstancedMesh;                                     // 0x2C8(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHoudiniMeshSplitInstancerComponent* GetDefaultObj();

};

// 0x20 (0xAF0 - 0xAD0)
// Class HoudiniEngineRuntime.HoudiniNodeSyncComponent
class UHoudiniNodeSyncComponent : public UHoudiniAssetComponent
{
public:
	class FString                                FetchNodePath;                                     // 0xAD0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLiveSyncEnabled;                                  // 0xAE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18DB[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniNodeSyncComponent* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapePtr
class UHoudiniLandscapePtr : public UObject
{
public:
	TSoftObjectPtr<class ALandscapeProxy>        LandscapeSoftPtr;                                  // 0x28(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniLandscapeOutputBakeType   BakeType;                                          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1906[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EditLayerName;                                     // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1908[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniLandscapePtr* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapeTargetLayerOutput
class UHoudiniLandscapeTargetLayerOutput : public UObject
{
public:
	class ALandscape*                            Landscape;                                         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALandscapeProxy*                       LandscapeProxy;                                    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BakedEditLayer;                                    // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CookedEditLayer;                                   // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetLayer;                                       // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHoudiniExtents                       Extents;                                           // 0x68(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClearLayer;                                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreatedLandscape;                                 // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCookedLayerRequiresBaking;                        // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BakedLandscapeName;                                // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULandscapeLayerInfoObject*>     LayerInfoObjects;                                  // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                BakeFolder;                                        // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    MaterialInstance;                                  // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWriteLockedLayers;                                // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockLayer;                                        // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHoudiniGenericAttribute>      PropertyAttributes;                                // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniLandscapeTargetLayerOutput* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapeOutput
class UHoudiniLandscapeOutput : public UObject
{
public:
	class ALandscape*                            Landscape;                                         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BakedName;                                         // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHoudiniLandscapeTargetLayerOutput*> Layers;                                            // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bCreated;                                          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniLandscapeOutput* GetDefaultObj();

};

// 0x18 (0xE8 - 0xD0)
// Class HoudiniEngineRuntime.HoudiniLandscapeSplineTargetLayerOutput
class UHoudiniLandscapeSplineTargetLayerOutput : public UHoudiniLandscapeTargetLayerOutput
{
public:
	class FName                                  AfterEditLayer;                                    // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULandscapeSplineSegment*>       Segments;                                          // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniLandscapeSplineTargetLayerOutput* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniLandscapeSplinesOutput
class UHoudiniLandscapeSplinesOutput : public UObject
{
public:
	class ALandscape*                            Landscape;                                         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ALandscapeProxy*                       LandscapeProxy;                                    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ALandscapeSplineActor*                 LandscapeSplineActor;                              // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULandscapeSplinesComponent*            LandscapeSplinesComponent;                         // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, class UHoudiniLandscapeSplineTargetLayerOutput*> LayerOutputs;                                      // 0x48(0x50)(NativeAccessSpecifierPrivate)
	TArray<class ULandscapeSplineSegment*>       Segments;                                          // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class ULandscapeSplineControlPoint*>  ControlPoints;                                     // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHoudiniLandscapeSplinesOutput* GetDefaultObj();

};

// 0x228 (0x250 - 0x28)
// Class HoudiniEngineRuntime.HoudiniOutput
class UHoudiniOutput : public UObject
{
public:
	enum class EHoudiniOutputType                Type;                                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHoudiniGeoPartObject>         HoudiniGeoPartObjects;                             // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects;                                     // 0x40(0x50)(DuplicateTransient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs;                                  // 0x90(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class UMaterialInterface*> AssignementMaterials;                              // 0xE0(0x50)(Deprecated, Protected, NativeAccessSpecifierProtected)
	TMap<struct FHoudiniMaterialIdentifier, class UMaterialInterface*> AssignmentMaterialsById;                           // 0x130(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class UMaterialInterface*> ReplacementMaterials;                              // 0x180(0x50)(Deprecated, Protected, NativeAccessSpecifierProtected)
	TMap<struct FHoudiniMaterialIdentifier, class UMaterialInterface*> ReplacementMaterialsById;                          // 0x1D0(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLandscapeWorldComposition;                        // 0x224(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        HoudiniCreatedSocketActors;                        // 0x228(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        HoudiniAttachedSocketActors;                       // 0x238(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsEditableNode;                                   // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasEditableNodeBuilt;                             // 0x249(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsUpdating;                                       // 0x24A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanDeleteHoudiniNodes;                            // 0x24B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A25[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniOutput* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameter
class UHoudiniParameter : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Label;                                             // 0x38(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHoudiniParameterType             ParmType;                                          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       TupleSize;                                         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NodeId;                                            // 0x50(0x4)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ParmId;                                            // 0x54(0x4)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ParentParmId;                                      // 0x58(0x4)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ChildIndex;                                        // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsVisible;                                        // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsParentFolderVisible;                            // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDisabled;                                       // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasChanged;                                       // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNeedsToTriggerUpdate;                             // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDefault;                                        // 0x65(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsSpare;                                          // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bJoinNext;                                         // 0x67(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsChildOfMultiParm;                               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDirectChildOfMultiParm;                         // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingRevertToDefault;                           // 0x6A(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A8D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                TuplePendingRevertToDefault;                       // 0x70(0x10)(ZeroConstructor, DuplicateTransient, Protected, NativeAccessSpecifierProtected)
	class FString                                Help;                                              // 0x80(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       TagCount;                                          // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ValueIndex;                                        // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasExpression;                                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowExpression;                                   // 0x99(0x1)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A9A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ParamExpression;                                   // 0xA0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FString, class FString>           Tags;                                              // 0xB0(0x50)(Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoUpdate;                                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AA4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameter* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterButton
class UHoudiniParameterButton : public UHoudiniParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniParameterButton* GetDefaultObj();

};

// 0x28 (0x130 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
class UHoudiniParameterButtonStrip : public UHoudiniParameter
{
public:
	int32                                        Count;                                             // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Labels;                                            // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Values;                                            // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniParameterButtonStrip* GetDefaultObj();

};

// 0x70 (0x178 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterChoice
class UHoudiniParameterChoice : public UHoudiniParameter
{
public:
	int32                                        IntValue;                                          // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DefaultIntValue;                                   // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                StringValue;                                       // 0x110(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                DefaultStringValue;                                // 0x120(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        StringChoiceValues;                                // 0x130(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FString>                        StringChoiceLabels;                                // 0x140(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B4A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsChildOfRamp;                                    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                IntValuesArray;                                    // 0x168(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHoudiniParameterChoice* GetDefaultObj();

};

// 0x28 (0x130 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterColor
class UHoudiniParameterColor : public UHoudiniParameter
{
public:
	struct FLinearColor                          Color;                                             // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          DefaultColor;                                      // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsChildOfRamp;                                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B6D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterColor* GetDefaultObj();

};

// 0x38 (0x140 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFile
class UHoudiniParameterFile : public UHoudiniParameter
{
public:
	TArray<class FString>                        Values;                                            // 0x108(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FString>                        DefaultValues;                                     // 0x118(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FString                                Filters;                                           // 0x128(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsReadOnly;                                       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B8E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterFile* GetDefaultObj();

};

// 0x50 (0x158 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFloat
class UHoudiniParameterFloat : public UHoudiniParameter
{
public:
	TArray<float>                                Values;                                            // 0x108(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                DefaultValues;                                     // 0x118(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FString                                Unit;                                              // 0x128(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNoSwap;                                           // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasMin;                                           // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasMax;                                           // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasUIMin;                                         // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasUIMax;                                         // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsLogarithmic;                                    // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BC8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Min;                                               // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Max;                                               // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UIMin;                                             // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UIMax;                                             // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsChildOfRamp;                                    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BFE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterFloat* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFolder
class UHoudiniParameterFolder : public UHoudiniParameter
{
public:
	enum class EHoudiniFolderParameterType       FolderType;                                        // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bExpanded;                                         // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bChosen;                                           // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C1C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChildCounter;                                      // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsContentShown;                                   // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C1E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterFolder* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterFolderList
class UHoudiniParameterFolderList : public UHoudiniParameter
{
public:
	bool                                         bIsTabMenu;                                        // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTabsShown;                                      // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C47[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniParameterFolder*>       TabFolders;                                        // 0x110(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniParameterFolderList* GetDefaultObj();

};

// 0x48 (0x150 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterInt
class UHoudiniParameterInt : public UHoudiniParameter
{
public:
	TArray<int32>                                Values;                                            // 0x108(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                DefaultValues;                                     // 0x118(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FString                                Unit;                                              // 0x128(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasMin;                                           // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasMax;                                           // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasUIMin;                                         // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasUIMax;                                         // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsLogarithmic;                                    // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Min;                                               // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Max;                                               // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        UIMin;                                             // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        UIMax;                                             // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHoudiniParameterInt* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterLabel
class UHoudiniParameterLabel : public UHoudiniParameter
{
public:
	TArray<class FString>                        LabelStrings;                                      // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniParameterLabel* GetDefaultObj();

};

// 0x48 (0x150 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterMultiParm
class UHoudiniParameterMultiParm : public UHoudiniParameter
{
public:
	bool                                         bIsShown;                                          // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TemplateName;                                      // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiparmValue;                                    // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MultiParmInstanceNum;                              // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MultiParmInstanceLength;                           // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MultiParmInstanceCount;                            // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       InstanceStartOffset;                               // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray;                  // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        DefaultInstanceCount;                              // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterMultiParm* GetDefaultObj();

};

// 0x8 (0x110 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
class UHoudiniParameterOperatorPath : public UHoudiniParameter
{
public:
	TWeakObjectPtr<class UHoudiniInput>          HoudiniInput;                                      // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniParameterOperatorPath* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
class UHoudiniParameterRampModificationEvent : public UObject
{
public:
	bool                                         bIsInsertEvent;                                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsFloatRamp;                                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CD5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DeleteInstanceIndex;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InsertPosition;                                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InsertFloat;                                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InsertColor;                                       // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniRampInterpolationType     InsertInterpolation;                               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterRampModificationEvent* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
class UHoudiniParameterRampFloatPoint : public UObject
{
public:
	float                                        Position;                                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniRampInterpolationType     Interpolation;                                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InstanceIndex;                                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHoudiniParameterFloat*                PositionParentParm;                                // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHoudiniParameterFloat*                ValueParentParm;                                   // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHoudiniParameterChoice*               InterpolationParentParm;                           // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampFloatPoint* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
class UHoudiniParameterRampColorPoint : public UObject
{
public:
	float                                        Position;                                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniRampInterpolationType     Interpolation;                                     // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InstanceIndex;                                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHoudiniParameterFloat*                PositionParentParm;                                // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHoudiniParameterColor*                ValueParentParm;                                   // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHoudiniParameterChoice*               InterpolationParentParm;                           // 0x58(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampColorPoint* GetDefaultObj();

};

// 0x68 (0x1B8 - 0x150)
// Class HoudiniEngineRuntime.HoudiniParameterRampFloat
class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{
public:
	TArray<class UHoudiniParameterRampFloatPoint*> Points;                                            // 0x150(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UHoudiniParameterRampFloatPoint*> CachedPoints;                                      // 0x160(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<float>                                DefaultPositions;                                  // 0x170(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DefaultValues;                                     // 0x180(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                DefaultChoices;                                    // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumDefaultPoints;                                  // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCaching;                                          // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                // 0x1A8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampFloat* GetDefaultObj();

};

// 0x70 (0x1C0 - 0x150)
// Class HoudiniEngineRuntime.HoudiniParameterRampColor
class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{
public:
	TArray<class UHoudiniParameterRampColorPoint*> Points;                                            // 0x150(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bCaching;                                          // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniParameterRampColorPoint*> CachedPoints;                                      // 0x168(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<float>                                DefaultPositions;                                  // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  DefaultValues;                                     // 0x188(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                DefaultChoices;                                    // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumDefaultPoints;                                  // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D78[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                // 0x1B0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniParameterRampColor* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterSeparator
class UHoudiniParameterSeparator : public UHoudiniParameter
{
public:

	static class UClass* StaticClass();
	static class UHoudiniParameterSeparator* GetDefaultObj();

};

// 0x38 (0x140 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterString
class UHoudiniParameterString : public UHoudiniParameter
{
public:
	TArray<class FString>                        Values;                                            // 0x108(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FString>                        DefaultValues;                                     // 0x118(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       ChosenAssets;                                      // 0x128(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsAssetRef;                                       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D9F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniParameterString* GetDefaultObj();

};

// 0x20 (0x128 - 0x108)
// Class HoudiniEngineRuntime.HoudiniParameterToggle
class UHoudiniParameterToggle : public UHoudiniParameter
{
public:
	TArray<int32>                                Values;                                            // 0x108(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                DefaultValues;                                     // 0x118(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHoudiniParameterToggle* GetDefaultObj();

};

// 0x3C8 (0x3F0 - 0x28)
// Class HoudiniEngineRuntime.TOPNode
class UTOPNode : public UObject
{
public:
	int32                                        NodeId;                                            // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NodeName;                                          // 0x30(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NodePath;                                          // 0x40(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ParentName;                                        // 0x50(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorkResultParent;                                  // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTOPWorkResult>                WorkResult;                                        // 0x68(0x10)(ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoLoad;                                         // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPDGNodeState                     NodeState;                                         // 0x7A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCachedHaveNotLoadedWorkResults;                   // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCachedHaveLoadedWorkResults;                      // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasChildNodes;                                    // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FString>                          ClearedLandscapeLayers;                            // 0x80(0x50)(Deprecated, NativeAccessSpecifierPublic)
	struct FHoudiniClearedEditLayers             ClearedLayers;                                     // 0xD0(0x50)(NativeAccessSpecifierPublic)
	bool                                         bShow;                                             // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;                      // 0x128(0x50)(Protected, NativeAccessSpecifierProtected)
	struct FWorkItemTally                        WorkItemTally;                                     // 0x178(0x238)(Transient, NonTransactional, Protected, NativeAccessSpecifierProtected)
	struct FAggregatedWorkItemTally              AggregatedWorkItemTally;                           // 0x3B0(0x28)(Transient, NonTransactional, Protected, NativeAccessSpecifierProtected)
	bool                                         bHasReceivedCookCompleteEvent;                     // 0x3D8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutputActorOwner                     OutputActorOwner;                                  // 0x3E0(0x10)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTOPNode* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class HoudiniEngineRuntime.TOPNetwork
class UTOPNetwork : public UObject
{
public:
	int32                                        NodeId;                                            // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NodeName;                                          // 0x30(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NodePath;                                          // 0x40(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTOPNode*>                      AllTOPNodes;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        SelectedTOPIndex;                                  // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ParentName;                                        // 0x68(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowResults;                                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoLoadResults;                                  // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E27[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTOPNetwork* GetDefaultObj();

};

// 0x110 (0x138 - 0x28)
// Class HoudiniEngineRuntime.HoudiniPDGAssetLink
class UHoudiniPDGAssetLink : public UObject
{
public:
	class FString                                AssetName;                                         // 0x28(0x10)(ZeroConstructor, DuplicateTransient, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AssetNodePath;                                     // 0x38(0x10)(ZeroConstructor, DuplicateTransient, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AssetID;                                           // 0x48(0x4)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTOPNetwork*>                   AllTOPNetworks;                                    // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        SelectedTOPNetworkIndex;                           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPDGLinkState                     LinkState;                                         // 0x64(0x1)(ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCook;                                         // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTOPNodeFilter;                                 // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTOPOutputFilter;                               // 0x67(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TOPNodeFilter;                                     // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TOPOutputFilter;                                   // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumWorkItems;                                      // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAggregatedWorkItemTally              WorkItemTally;                                     // 0x90(0x28)(Transient, NonTransactional, NativeAccessSpecifierPublic)
	class FString                                OutputCachePath;                                   // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeedsUIRefresh;                                   // 0xC8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E61[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OutputParentActor;                                 // 0xD0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        BakeFolder;                                        // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E67[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumAttemptedNodeAutoBakes;                         // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumSuccessfulNodeAutoBakes;                        // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHoudiniPDGAssetLink* GetDefaultObj();

};

// 0x328 (0x350 - 0x28)
// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
class UHoudiniRuntimeSettings : public UObject
{
public:
	enum class EHoudiniRuntimeSettingsSessionType SessionType;                                       // 0x28(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ServerHost;                                        // 0x30(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerPort;                                        // 0x40(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ServerPipeName;                                    // 0x48(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartAutomaticServer;                             // 0x58(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutomaticServerTimeout;                            // 0x5C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSyncWithHoudiniCook;                              // 0x60(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCookUsingHoudiniTime;                             // 0x61(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSyncViewport;                                     // 0x62(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSyncHoudiniViewport;                              // 0x63(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSyncUnrealViewport;                               // 0x64(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowMultiAssetDialog;                             // 0x65(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferHdaMemoryCopyOverHdaSourceFile;             // 0x66(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPauseCookingOnStart;                              // 0x67(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplaySlateCookingNotifications;                 // 0x68(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DefaultTemporaryCookFolder;                        // 0x70(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultBakeFolder;                                 // 0x80(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableTheReferenceCountedInputSystem;             // 0x90(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MarshallingLandscapesUseDefaultUnrealScaling;      // 0x91(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MarshallingLandscapesUseFullResolution;            // 0x92(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MarshallingLandscapesForceMinMaxValues;            // 0x93(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MarshallingLandscapesForcedMinValue;               // 0x94(0x4)(Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MarshallingLandscapesForcedMaxValue;               // 0x98(0x4)(Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddRotAndScaleAttributesOnCurves;                 // 0x9C(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLegacyInputCurves;                             // 0x9D(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MarshallingSplineResolution;                       // 0xA0(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableProxyStaticMesh;                            // 0xA4(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDefaultMesh;                                  // 0xA5(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferNaniteFallbackMesh;                         // 0xA6(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableProxyStaticMeshRefinementByTimer;           // 0xA7(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProxyMeshAutoRefineTimeoutSeconds;                 // 0xA8(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableProxyStaticMeshRefinementOnPreSaveWorld;    // 0xAC(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableProxyStaticMeshRefinementOnPreBeginPIE;     // 0xAD(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EEC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDoubleSidedGeometry : 1;                          // Mask: 0x1, PropSize: 0x10xB0(0x1)(Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6A : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1EED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyInstance                         DefaultBodyInstance;                               // 0xC0(0x190)(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	enum class ECollisionTraceFlag               CollisionTraceFlag;                                // 0x250(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LightMapResolution;                                // 0x254(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LpvBiasMultiplier;                                 // 0x258(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GeneratedDistanceFieldResolutionScale;             // 0x25C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWalkableSlopeOverride                WalkableSlopeOverride;                             // 0x260(0x10)(Edit, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        LightMapCoordinateIndex;                           // 0x270(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaximumStreamingTexelRatio : 1;                // Mask: 0x1, PropSize: 0x10x274(0x1)(Edit, Config, GlobalConfig, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6C : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StreamingDistanceMultiplier;                       // 0x278(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFoliageType_InstancedStaticMesh*      FoliageDefaultSettings;                            // 0x280(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x288(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bUseFullPrecisionUVs;                              // 0x298(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SrcLightmapIndex;                                  // 0x29C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DstLightmapIndex;                                  // 0x2A0(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLightmapResolution;                             // 0x2A4(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveDegenerates;                                // 0x2A8(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag;                           // 0x2A9(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag;                              // 0x2AA(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag;                             // 0x2AB(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMikkTSpace;                                    // 0x2AC(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBuildAdjacencyBuffer;                             // 0x2AD(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bComputeWeightedNormals : 1;                       // Mask: 0x1, PropSize: 0x10x2AE(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBuildReversedIndexBuffer : 1;                     // Mask: 0x2, PropSize: 0x10x2AE(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseHighPrecisionTangentBasis : 1;                 // Mask: 0x4, PropSize: 0x10x2AE(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6E : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F42[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceFieldResolutionScale;                      // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateDistanceFieldAsIfTwoSided : 1;            // Mask: 0x1, PropSize: 0x10x2B4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportFaceRemap : 1;                             // Mask: 0x2, PropSize: 0x10x2B4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_70 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	bool                                         bPDGAsyncCommandletImportEnabled;                  // 0x2B5(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F63[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        HoudiniToolsSearchPath;                            // 0x2B8(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	bool                                         bUseCustomHoudiniLocation;                         // 0x2C8(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        CustomHoudiniLocation;                             // 0x2D0(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniExecutableType            HoudiniExecutable;                                 // 0x2E0(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        CustomHoudiniHomeLocation;                         // 0x2E8(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CookingThreadStackSize;                            // 0x2F8(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HoudiniEnvironmentFiles;                           // 0x300(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OtlSearchPath;                                     // 0x310(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DsoSearchPath;                                     // 0x320(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImageDsoSearchPath;                                // 0x330(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AudioDsoSearchPath;                                // 0x340(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniRuntimeSettings* GetDefaultObj();

};

// 0x328 (0x5D0 - 0x2A8)
// Class HoudiniEngineRuntime.HoudiniSplineComponent
class UHoudiniSplineComponent : public USceneComponent
{
public:
	uint8                                        Pad_1FE3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    CurvePoints;                                       // 0x2B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector3d>                     DisplayPoints;                                     // 0x2C0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                DisplayPointIndexDivider;                          // 0x2D0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                HoudiniSplineName;                                 // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosed;                                           // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReversed;                                         // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurveOrder;                                        // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHoudiniSplineVisible;                           // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniCurveType                 CurveType;                                         // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0x2FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization;                   // 0x2FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOutputCurve;                                    // 0x2FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCookOnCurveChanged;                               // 0x2FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLegacyInputCurve;                               // 0x2FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2004[0x2B1];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasChanged;                                       // 0x5B0(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bNeedsToTriggerUpdate;                             // 0x5B1(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsInputCurve;                                     // 0x5B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsEditableOutputCurve;                            // 0x5B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NodeId;                                            // 0x5B4(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                PartName;                                          // 0x5B8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2010[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniSplineComponent* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class HoudiniEngineRuntime.HoudiniStaticMesh
class UHoudiniStaticMesh : public UObject
{
public:
	bool                                         bHasNormals;                                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasTangents;                                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasColors;                                        // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2504[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       NumUVLayers;                                       // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasPerFaceMaterials;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_250B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector3f>                     VertexPositions;                                   // 0x38(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FIntVector>                    TriangleIndices;                                   // 0x48(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FColor>                        VertexInstanceColors;                              // 0x58(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector3f>                     VertexInstanceNormals;                             // 0x68(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector3f>                     VertexInstanceUTangents;                           // 0x78(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector3f>                     VertexInstanceVTangents;                           // 0x88(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector2f>                     VertexInstanceUVs;                                 // 0x98(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                MaterialIDsPerTriangle;                            // 0xA8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FStaticMaterial>               StaticMaterials;                                   // 0xB8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHoudiniStaticMesh* GetDefaultObj();

	void SetVertexPosition(uint32 InVertexIndex, struct FVector3f& InPosition);
	void SetTriangleVertexVTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FVector3f& InVTangent);
	void SetTriangleVertexUV(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, uint8 InUVLayer, struct FVector2f& InUV);
	void SetTriangleVertexUTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FVector3f& InUTangent);
	void SetTriangleVertexNormal(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FVector3f& InNormal);
	void SetTriangleVertexIndices(uint32 InTriangleIndex, struct FIntVector& InTriangleVertexIndices);
	void SetTriangleVertexColor(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FColor& InColor);
	void SetTriangleMaterialID(uint32 InTriangleIndex, int32 InMaterialID);
	void SetStaticMaterial(uint32 InMaterialIndex, struct FStaticMaterial& InStaticMaterial);
	void SetNumUVLayers(uint32 InNumUVLayers);
	void SetNumStaticMaterials(uint32 InNumStaticMaterials);
	void SetHasTangents(bool bInHasTangents);
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);
	void SetHasNormals(bool bInHasNormals);
	void SetHasColors(bool bInHasColors);
	void Optimize();
	bool IsValid(bool bInSkipVertexIndicesCheck);
	void Initialize(uint32 InNumVertices, uint32 InNumTriangles, uint32 InNumUVLayers, uint32 InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);
	bool HasTangents();
	bool HasPerFaceMaterials();
	bool HasNormals();
	bool HasColors();
	TArray<struct FVector3f> GetVertexPositions();
	TArray<struct FVector3f> GetVertexInstanceVTangents();
	TArray<struct FVector2f> GetVertexInstanceUVs();
	TArray<struct FVector3f> GetVertexInstanceUTangents();
	TArray<struct FVector3f> GetVertexInstanceNormals();
	TArray<struct FColor> GetVertexInstanceColors();
	TArray<struct FIntVector> GetTriangleIndices();
	TArray<struct FStaticMaterial> GetStaticMaterials();
	uint32 GetNumVertices();
	uint32 GetNumVertexInstances();
	uint32 GetNumUVLayers();
	uint32 GetNumTriangles();
	uint32 GetNumStaticMaterials();
	int32 GetMaterialIndex(class FName InMaterialSlotName);
	TArray<int32> GetMaterialIDsPerTriangle();
	class UMaterialInterface* GetMaterial(int32 InMaterialIndex);
	void CalculateTangents(bool bInComputeWeightedNormals);
	void CalculateNormals(bool bInComputeWeightedNormals);
	struct FBox CalcBounds();
	uint32 AddStaticMaterial(struct FStaticMaterial& InStaticMaterial);
};

// 0x50 (0x600 - 0x5B0)
// Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
class UHoudiniStaticMeshComponent : public UMeshComponent
{
public:
	class UHoudiniStaticMesh*                    Mesh;                                              // 0x5B0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBox                                  LocalBounds;                                       // 0x5B8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bHoudiniIconVisible;                               // 0x5F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2630[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniStaticMeshComponent* GetDefaultObj();

	void SetMesh(class UHoudiniStaticMesh* InMesh);
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible);
	void NotifyMeshUpdated();
	bool IsHoudiniIconVisible();
	class UHoudiniStaticMesh* GetMesh();
};

// 0x88 (0xB0 - 0x28)
// Class HoudiniEngineRuntime.HoudiniToolData
class UHoudiniToolData : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tooltip;                                           // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHImageData                           IconImageData;                                     // 0x48(0x30)(NativeAccessSpecifierPublic)
	struct FFilePath                             IconSourcePath;                                    // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HelpURL;                                           // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniToolType                  Type;                                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DefaultTool;                                       // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniToolSelectionType         SelectionType;                                     // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2725[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFilePath                             SourceAssetPath;                                   // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHoudiniToolData* GetDefaultObj();

	bool SaveToJSONFile(const class FString& JsonFilePath);
	bool PopulateFromJSONFile(const class FString& JsonFilePath);
	bool PopulateFromJSONData(const class FString& JSONData);
	bool ConvertToJSONData(class FString* JSONData);
};

// 0x68 (0x90 - 0x28)
// Class HoudiniEngineRuntime.HoudiniToolsPackageAsset
class UHoudiniToolsPackageAsset : public UObject
{
public:
	TMap<class FString, struct FCategoryRules>   Categories;                                        // 0x28(0x50)(Edit, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        ExternalPackageDir;                                // 0x78(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReimportPackageDescription;                       // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportPackageDescription;                         // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReimportToolsDescription;                         // 0x8A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportToolsDescription;                           // 0x8B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2775[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniToolsPackageAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HoudiniEngineRuntime.HoudiniAssetStateEvents
class IHoudiniAssetStateEvents : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IHoudiniAssetStateEvents* GetDefaultObj();

};

}


