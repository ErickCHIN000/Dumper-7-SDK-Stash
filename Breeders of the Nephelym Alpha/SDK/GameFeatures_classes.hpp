#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GameFeatures.GameFeatureAction
class UGameFeatureAction : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameFeatureAction* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class GameFeatures.GameFeatureAction_AddCheats
class UGameFeatureAction_AddCheats : public UGameFeatureAction
{
public:
	TArray<TSubclassOf<class UCheatManagerExtension>> CheatManagers;                                     // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_155[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCheatManagerExtension*>        SpawnedCheatManagers;                              // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameFeatureAction_AddCheats* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class GameFeatures.GameFeatureAction_AddComponents
class UGameFeatureAction_AddComponents : public UGameFeatureAction
{
public:
	TArray<struct FGameFeatureComponentEntry>    ComponentList;                                     // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFeatureAction_AddComponents* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameFeatures.GameFeatureAction_DataRegistry
class UGameFeatureAction_DataRegistry : public UGameFeatureAction
{
public:
	TArray<TSoftObjectPtr<class UDataRegistry>>  RegistriesToAdd;                                   // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameFeatureAction_DataRegistry* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameFeatures.GameFeatureAction_DataRegistrySource
class UGameFeatureAction_DataRegistrySource : public UGameFeatureAction
{
public:
	TArray<struct FDataRegistrySourceToAdd>      SourcesToAdd;                                      // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameFeatureAction_DataRegistrySource* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GameFeatures.GameFeatureData
class UGameFeatureData : public UPrimaryDataAsset
{
public:
	TArray<class UGameFeatureAction*>            Actions;                                           // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPrimaryAssetTypeInfo>         PrimaryAssetTypesToScan;                           // 0x40(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameFeatureData* GetDefaultObj();

};

// 0x130 (0x158 - 0x28)
// Class GameFeatures.GameFeaturePluginStateMachine
class UGameFeaturePluginStateMachine : public UObject
{
public:
	uint8                                        Pad_17A[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameFeaturePluginStateMachineProperties StateProperties;                                   // 0x48(0x70)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17B[0xA0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFeaturePluginStateMachine* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameFeatures.GameFeaturesProjectPolicies
class UGameFeaturesProjectPolicies : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameFeaturesProjectPolicies* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameFeatures.DefaultGameFeaturesProjectPolicies
class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies
{
public:

	static class UClass* StaticClass();
	static class UDefaultGameFeaturesProjectPolicies* GetDefaultObj();

};

// 0xC0 (0xF0 - 0x30)
// Class GameFeatures.GameFeaturesSubsystem
class UGameFeaturesSubsystem : public UEngineSubsystem
{
public:
	TMap<class FString, class UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;                    // 0x30(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_193[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameFeatureStateChangeObserver*> Observers;                                         // 0xD0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UGameFeaturesProjectPolicies*          GameSpecificPolicies;                              // 0xE0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_195[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFeaturesSubsystem* GetDefaultObj();

};

// 0x48 (0x80 - 0x38)
// Class GameFeatures.GameFeaturesSubsystemSettings
class UGameFeaturesSubsystemSettings : public UDeveloperSettings
{
public:
	struct FSoftClassPath                        GameFeaturesManagerClassName;                      // 0x38(0x18)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        DisabledPlugins;                                   // 0x50(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        AdditionalPluginMetadataKeys;                      // 0x60(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                BuiltInGameFeaturePluginsFolder;                   // 0x70(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameFeaturesSubsystemSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameFeatures.GameFeatureStateChangeObserver
class UGameFeatureStateChangeObserver : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameFeatureStateChangeObserver* GetDefaultObj();

};

}


