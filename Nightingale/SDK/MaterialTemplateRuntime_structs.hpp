#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct MaterialTemplateRuntime.GeneratedMaterialDependencyInfo
struct FGeneratedMaterialDependencyInfo
{
public:
	TSoftObjectPtr<class UMaterialInstance>      OriginInstance;                                    // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstance>      PermutationInstance;                               // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x148 - 0x0)
// ScriptStruct MaterialTemplateRuntime.MaterialTemplateGenerated
struct FMaterialTemplateGenerated
{
public:
	TSoftObjectPtr<class UMaterial>              GeneratedMaterial;                                 // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInstance>> GeneratedMaterialInstances;                        // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     MaterialInstanceNameToIndexMap;                    // 0x38(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class UMaterialInstance>, int32> ChildMaterialInstanceToUniqueHashMap;              // 0x88(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class UMaterialInstance>, struct FGeneratedMaterialDependencyInfo> GeneratedMaterialInstanceToDependencyInfoMap;      // 0xD8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGuid                                 BaseMaterialGuid;                                  // 0x128(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MaterialFunctionGuid;                              // 0x138(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MaterialTemplateRuntime.MaterialTemplateFunction
struct FMaterialTemplateFunction
{
public:
	TSoftObjectPtr<class UMaterialFunction>      MaterialFunction;                                  // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IntensityParameterName;                            // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MaterialTemplateRuntime.MaterialTemplateBase
struct FMaterialTemplateBase
{
public:
	TSoftObjectPtr<class UMaterial>              BaseMaterial;                                      // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


