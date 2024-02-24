#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInterchangePipelineConfigurationDialogResult : uint8
{
	Cancel                         = 0,
	Import                         = 1,
	ImportAll                      = 2,
	EInterchangePipelineConfigurationDialogResult_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeFilePickerParameters
struct FInterchangeFilePickerParameters
{
public:
	bool                                         bAllowMultipleFiles;                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1656[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title;                                             // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FString                                DefaultPath;                                       // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeStackInfo
struct FInterchangeStackInfo
{
public:
	class FName                                  StackName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInterchangePipelineBase*>      Pipelines;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeTranslatorPipelines
struct FInterchangeTranslatorPipelines
{
public:
	TSoftClassPtr<class UInterchangeTranslatorBase> Translator;                                        // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               Pipelines;                                         // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct InterchangeEngine.InterchangePipelineStack
struct FInterchangePipelineStack
{
public:
	TArray<struct FSoftObjectPath>               Pipelines;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInterchangeTranslatorPipelines> PerTranslatorPipelines;                            // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeImportSettings
struct FInterchangeImportSettings
{
public:
	TMap<class FName, struct FInterchangePipelineStack> PipelineStacks;                                    // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
	class FName                                  DefaultPipelineStack;                              // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UInterchangePipelineConfigurationBase> PipelineConfigurationDialogClass;                  // 0x58(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPipelineStacksConfigurationDialog;            // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0x128 - 0x88)
// ScriptStruct InterchangeEngine.InterchangeContentImportSettings
struct FInterchangeContentImportSettings : public FInterchangeImportSettings
{
public:
	TMap<enum class EInterchangeTranslatorAssetType, class FName> DefaultPipelineStackOverride;                      // 0x88(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<enum class EInterchangeTranslatorAssetType, bool> ShowPipelineStacksConfigurationDialogOverride;     // 0xD8(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct InterchangeEngine.PropertyData
struct FPropertyData
{
public:
	uint8                                        Pad_169F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct InterchangeEngine.ImportAssetParameters
struct FImportAssetParameters
{
public:
	class UObject*                               ReimportAsset;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReimportSourceIndex;                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAutomated;                                      // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFollowRedirectors;                                // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoftObjectPath>               OverridePipelines;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnAssetDone;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BA[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnAssetsImportDone;                                // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C0[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnSceneObjectDone;                                 // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C5[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnSceneImportDone;                                 // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CA[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


