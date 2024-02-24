#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPrefabricatorPivotPosition : uint8
{
	ExtremeLeft                    = 0,
	ExtremeRight                   = 1,
	Center                         = 2,
	EPrefabricatorPivotPosition_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct PrefabricatorRuntime.PrefabricatorPropertyAssetMapping
struct FPrefabricatorPropertyAssetMapping
{
public:
	struct FSoftObjectPath                       AssetReference;                                    // 0x0(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AssetClassName;                                    // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AssetObjectPath;                                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseQuotes;                                        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct PrefabricatorRuntime.PrefabricatorComponentData
struct FPrefabricatorComponentData
{
public:
	struct FTransform                            RelativeTransform;                                 // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ComponentName;                                     // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPrefabricatorProperty*>        Properties;                                        // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct PrefabricatorRuntime.PrefabricatorActorData
struct FPrefabricatorActorData
{
public:
	struct FGuid                                 PrefabItemID;                                      // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            RelativeTransform;                                 // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClassPath;                                         // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                        ClassPathRef;                                      // 0x80(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPrefabricatorProperty*>        Properties;                                        // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPrefabricatorComponentData>   Components;                                        // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PrefabricatorRuntime.PrefabricatorAssetCollectionItem
struct FPrefabricatorAssetCollectionItem
{
public:
	TSoftObjectPtr<class UPrefabricatorAsset>    PrefabAsset;                                       // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


