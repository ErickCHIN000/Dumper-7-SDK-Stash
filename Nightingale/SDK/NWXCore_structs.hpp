#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENWXMathComparison : uint8
{
	Equal_To                       = 0,
	Not_Equal_To                   = 1,
	Greater_Than_Or_Equal_To       = 2,
	Less_Than_Or_Equal_To          = 3,
	Greater_Than                   = 4,
	Less_Than                      = 5,
	ENWXMathComparison_MAX         = 6,
};

enum class ENWXMathOperation : uint8
{
	Add                            = 0,
	Subtract                       = 1,
	ENWXMathOperation_MAX          = 2,
};

enum class EGetResult : uint8
{
	Success                        = 0,
	Failure                        = 1,
	EGetResult_MAX                 = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x118 - 0x0)
// ScriptStruct NWXCore.JsonStruct
struct FJsonStruct
{
public:
	class UScriptStruct*                         StructType;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                StructDataJson;                                    // 0x8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FString, TSoftObjectPtr<class UObject>> AssetReferences;                                   // 0x18(0x50)(Edit, EditConst, RepSkip, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSet<struct FSoftObjectPath>                 AssetPaths;                                        // 0x68(0x50)(Edit, EditConst, RepSkip, NativeAccessSpecifierPrivate)
	TSet<struct FGameplayTag>                    GameplayTagReferences;                             // 0xB8(0x50)(Edit, EditConst, RepSkip, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6B6[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NWXCore.DynamicTypedStructs
struct FDynamicTypedStructs
{
public:
	TArray<struct FJsonStruct>                   StructsData;                                       // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

}


