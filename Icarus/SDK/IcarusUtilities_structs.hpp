#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPanningDirection : uint8
{
	Horizontal                     = 0,
	Vertical                       = 1,
	Both                           = 2,
	EPanningDirection_MAX          = 3,
};

enum class EValid : uint8
{
	Valid                          = 0,
	NotValid                       = 1,
	EValid_MAX                     = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x10 - 0x10)
// ScriptStruct IcarusUtilities.RowEnum
struct FRowEnum : public FIntEnum
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IcarusUtilities.RowHandle
struct FRowHandle : public FRowHandleInternal
{
public:
	TWeakObjectPtr<class UIcarusDataTable>       DataTablePtr;                                      // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RowName;                                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DataTableName;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct IcarusUtilities.IcarusTableRowBase
struct FIcarusTableRowBase : public FTableRowBase
{
public:
	TArray<class UObject*>                       CachedHardReferences;                              // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct IcarusUtilities.FeatureLevelsRowHandle
struct FFeatureLevelsRowHandle : public FRowHandle
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IcarusUtilities.MultiRowHandle
struct FMultiRowHandle
{
public:
	uint8                                        Pad_1942[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RowName;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x80 (0x98 - 0x18)
// ScriptStruct IcarusUtilities.FeatureLevelData
struct FFeatureLevelData : public FIcarusTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ShortName;                                         // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableForCook;                                    // 0x90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableForShip;                                    // 0x91(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableForPreview;                                 // 0x92(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1971[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IcarusUtilities.FeatureLevelsEnum
struct FFeatureLevelsEnum : public FRowEnum
{
public:
};

// 0x80 (0x88 - 0x8)
// ScriptStruct IcarusUtilities.RowMetadata
struct FRowMetadata : public FTableRowBase
{
public:
	struct FFeatureLevelsRowHandle               RequiredFeatureLevel;                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDeprecated;                                     // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1994[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Notes;                                             // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>             ExtraMetadata;                                     // 0x38(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

}


