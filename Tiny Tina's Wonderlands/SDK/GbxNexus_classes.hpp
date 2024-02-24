#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xB0 - 0x28)
// Class GbxNexus.NexusAssetStore
class UNexusAssetStore : public UObject
{
public:
	uint8                                        Pad_53D[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNexusContentLoader*                   OwningLoader;                                      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_53F[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNexusAssetStore* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GbxNexus.NexusEditorObject
class UNexusEditorObject : public UObject
{
public:
	class UObject*                               TemporaryArchetype;                                // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsArchetype;                                      // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_54F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNexusEditorObject* GetDefaultObj();

};

// 0xA8 (0xD8 - 0x30)
// Class GbxNexus.NexusAssetManifest
class UNexusAssetManifest : public UDataAsset
{
public:
	struct FNexusSourceInfo                      BasicInformation;                                  // 0x30(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  AssetIdent;                                        // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdentPrefix;                                       // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FSoftObjectPath>  AssetMap;                                          // 0x78(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          RequiredLoadingContexts;                           // 0xC8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNexusAssetManifest* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxNexus.NexusAssetStoreCurve
class UNexusAssetStoreCurve : public UNexusAssetStore
{
public:

	static class UClass* StaticClass();
	static class UNexusAssetStoreCurve* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxNexus.NexusAssetStoreMaterial
class UNexusAssetStoreMaterial : public UNexusAssetStore
{
public:

	static class UClass* StaticClass();
	static class UNexusAssetStoreMaterial* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxNexus.NexusAssetStoreParticleSystem
class UNexusAssetStoreParticleSystem : public UNexusAssetStore
{
public:

	static class UClass* StaticClass();
	static class UNexusAssetStoreParticleSystem* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxNexus.NexusAssetStorePhysicalMaterial
class UNexusAssetStorePhysicalMaterial : public UNexusAssetStore
{
public:

	static class UClass* StaticClass();
	static class UNexusAssetStorePhysicalMaterial* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxNexus.NexusAssetStoreScriptStruct
class UNexusAssetStoreScriptStruct : public UNexusAssetStore
{
public:

	static class UClass* StaticClass();
	static class UNexusAssetStoreScriptStruct* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxNexus.NexusAssetStoreStaticMesh
class UNexusAssetStoreStaticMesh : public UNexusAssetStore
{
public:

	static class UClass* StaticClass();
	static class UNexusAssetStoreStaticMesh* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxNexus.NexusAssetStoreTexture
class UNexusAssetStoreTexture : public UNexusAssetStore
{
public:

	static class UClass* StaticClass();
	static class UNexusAssetStoreTexture* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxNexus.NexusAssetStoreUClass
class UNexusAssetStoreUClass : public UNexusAssetStore
{
public:

	static class UClass* StaticClass();
	static class UNexusAssetStoreUClass* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxNexus.NexusAssetStoreUObject
class UNexusAssetStoreUObject : public UNexusAssetStore
{
public:

	static class UClass* StaticClass();
	static class UNexusAssetStoreUObject* GetDefaultObj();

};

// 0x160 (0x188 - 0x28)
// Class GbxNexus.NexusConfigStore
class UNexusConfigStore : public UObject
{
public:
	uint8                                        Pad_5B2[0x150];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UNexusContentLoader*                   OwningLoader;                                      // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5B3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNexusConfigStore* GetDefaultObj();

};

// 0x60 (0x1E8 - 0x188)
// Class GbxNexus.NexusConfigStoreDeep
class UNexusConfigStoreDeep : public UNexusConfigStore
{
public:
	uint8                                        Pad_5BB[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNexusConfigStoreDeep* GetDefaultObj();

};

// 0x0 (0x1E8 - 0x1E8)
// Class GbxNexus.NexusConfigStorePath
class UNexusConfigStorePath : public UNexusConfigStoreDeep
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStorePath* GetDefaultObj();

};

// 0x0 (0x1E8 - 0x1E8)
// Class GbxNexus.NexusConfigStoreCredits
class UNexusConfigStoreCredits : public UNexusConfigStorePath
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreCredits* GetDefaultObj();

};

// 0x0 (0x1E8 - 0x1E8)
// Class GbxNexus.NexusConfigStoreMix
class UNexusConfigStoreMix : public UNexusConfigStoreDeep
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreMix* GetDefaultObj();

};

// 0x50 (0x1D8 - 0x188)
// Class GbxNexus.NexusConfigStoreFlat
class UNexusConfigStoreFlat : public UNexusConfigStore
{
public:
	uint8                                        Pad_5EC[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNexusConfigStoreFlat* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxNexus.NexusConfigStoreGeneric
class UNexusConfigStoreGeneric : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreGeneric* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxNexus.NexusConfigStoreGlobals
class UNexusConfigStoreGlobals : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreGlobals* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxNexus.NexusConfigStoreTestFlat
class UNexusConfigStoreTestFlat : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreTestFlat* GetDefaultObj();

};

// 0x0 (0x1E8 - 0x1E8)
// Class GbxNexus.NexusConfigStoreTestMix
class UNexusConfigStoreTestMix : public UNexusConfigStoreMix
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreTestMix* GetDefaultObj();

};

// 0x0 (0x1E8 - 0x1E8)
// Class GbxNexus.NexusConfigStoreTestPath
class UNexusConfigStoreTestPath : public UNexusConfigStorePath
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreTestPath* GetDefaultObj();

};

// 0x5B8 (0x5E0 - 0x28)
// Class GbxNexus.NexusContentLoader
class UNexusContentLoader : public UObject
{
public:
	uint8                                        Pad_61B[0xB8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNexusAssetStore*>              AssetTypes;                                        // 0xE0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_61F[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNexusConfigStore*>             ConfigTypes;                                       // 0x140(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_622[0x100];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoftClassPath>                AssetStores;                                       // 0x250(0x10)(Edit, ZeroConstructor, Config, NoClear, NativeAccessSpecifierPrivate)
	TArray<struct FSoftClassPath>                DevAssetStores;                                    // 0x260(0x10)(Edit, ZeroConstructor, Config, NoClear, NativeAccessSpecifierPrivate)
	TArray<struct FSoftClassPath>                ConfigStores;                                      // 0x270(0x10)(Edit, ZeroConstructor, Config, NoClear, NativeAccessSpecifierPrivate)
	TArray<struct FSoftClassPath>                DevConfigStores;                                   // 0x280(0x10)(Edit, ZeroConstructor, Config, NoClear, NativeAccessSpecifierPrivate)
	TArray<struct FSoftClassPath>                EditorConfigStores;                                // 0x290(0x10)(Edit, ZeroConstructor, Config, NoClear, NativeAccessSpecifierPrivate)
	uint8                                        Pad_628[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNexusLayerInfo>               LayerInfos;                                        // 0x2C0(0x10)(Edit, ZeroConstructor, Config, NoClear, NativeAccessSpecifierPrivate)
	uint8                                        Pad_62A[0x200];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FilterPresetsPath;                                 // 0x4D0(0x10)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_62B[0x100];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNexusContentLoader* GetDefaultObj();

};

}


