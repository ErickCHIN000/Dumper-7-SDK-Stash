#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFilterMode : uint8
{
	FILTER_Or                      = 0,
	FILTER_And                     = 1,
	FILTER_Not                     = 2,
	FILTER_MAX                     = 3,
};

enum class EPointCloudBoundsOption : uint8
{
	Compute                        = 0,
	Manual                         = 1,
	EPointCloudBoundsOption_MAX    = 2,
};

enum class EPointCloudPivotType : uint8
{
	Default                        = 0,
	WorldOrigin                    = 1,
	Center                         = 2,
	CenterMinZ                     = 3,
	EPointCloudPivotType_MAX       = 4,
};

enum class EPointCloudReportLevel : uint8
{
	Basic                          = 0,
	Properties                     = 1,
	Values                         = 2,
	EPointCloudReportLevel_MAX     = 3,
};

enum class EPointCloudReloadBehavior : uint8
{
	DontReload                     = 0,
	ReloadOnRun                    = 1,
	EPointCloudReloadBehavior_MAX  = 2,
};

enum class EPointCloudReportMode : uint8
{
	Invalid                        = 0,
	Report                         = 1,
	Execute                        = 2,
	ReportAndExecute               = 3,
	EPointCloudReportMode_MAX      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xB0 - 0x0)
// ScriptStruct PointCloud.PointCloudPoint
struct FPointCloudPoint
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Attributes;                                        // 0x60(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct PointCloud.CustomOverrides
struct FCustomOverrides
{
public:
	class UScriptStruct*                         StructClass;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F48[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstancedStruct                      StructInstance;                                    // 0x10(0x10)(Edit, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F4B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct PointCloud.SliceAndDiceManagedActorsHashInfo
struct FSliceAndDiceManagedActorsHashInfo
{
public:
	class FString                                Hash;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ParentHash;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ActorIndex;                                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ActorCount;                                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct PointCloud.PointCloudRuleData
struct FPointCloudRuleData
{
public:
	uint8                                        Pad_1F65[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                World;                                             // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F69[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomOverrides                      CustomOverrides;                                   // 0x20(0x28)(Edit, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UActorComponent>>   Components;                                        // 0x48(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          OverrideableProperties;                            // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FName>                          OverridenProperties;                               // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PointCloud.SliceAndDiceActorMapping
struct FSliceAndDiceActorMapping
{
public:
	TArray<TSoftObjectPtr<class AActor>>         Actors;                                            // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FActorInstanceHandle>          ActorHandles;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Statements;                                        // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PointCloud.SliceAndDiceManagedActorsEntry
struct FSliceAndDiceManagedActorsEntry
{
public:
	class FString                                ParentHash;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hash;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSliceAndDiceActorMapping>     ActorMappings;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


