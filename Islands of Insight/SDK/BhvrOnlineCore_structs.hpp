#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EJsonOptionOutput : uint8
{
	Compact                        = 0,
	Pretty                         = 1,
	EJsonOptionOutput_MAX          = 2,
};

enum class EJsonOptionCase : uint8
{
	Identity                       = 0,
	CamelCase                      = 1,
	UpperCamelCase                 = 2,
	SnakeCase                      = 3,
	UpperSnakeCase                 = 4,
	EJsonOptionCase_MAX            = 5,
};

enum class EJsonOptionError : uint8
{
	Log                            = 0,
	Check                          = 1,
	Ensure                         = 2,
	Silent                         = 3,
	EJsonOptionError_MAX           = 4,
};

enum class EJsonOptionEnum : uint8
{
	String                         = 0,
	Number                         = 1,
	EJsonOptionEnum_MAX            = 2,
};

enum class EJsonOptionDateTime : uint8
{
	Iso8601                        = 0,
	Unix                           = 1,
	UnixString                     = 2,
	EJsonOptionDateTime_MAX        = 3,
};

enum class EJsonOptionGuid : uint8
{
	Canonical                      = 0,
	Unreal                         = 1,
	EJsonOptionGuid_MAX            = 2,
};

enum class EJsonOptionString : uint8
{
	EmptyAsNull                    = 0,
	KeepEmpty                      = 1,
	EJsonOptionString_MAX          = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct BhvrOnlineCore.OnlineStatus
struct FOnlineStatus
{
public:
	int32                                        Code;                                              // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct BhvrOnlineCore.HttpRequestExecutor
struct FHttpRequestExecutor
{
public:
	struct FOnlineStatus                         DefaultStatus;                                     // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Owner;                                             // 0x8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A5[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct BhvrOnlineCore.HttpRequestFactory
struct FHttpRequestFactory
{
public:
	class FString                                BaseUrl;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BasePath;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct BhvrOnlineCore.JsonOptions
struct FJsonOptions
{
public:
	TMap<class UEnum*, int64>                    OptionMap;                                         // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct BhvrOnlineCore.JsonValueWrapper
struct FJsonValueWrapper
{
public:
	class FString                                JsonString;                                        // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AF[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct BhvrOnlineCore.OnlineSdkId
struct FOnlineSdkId
{
public:
	TSubclassOf<class UOnlineSdkBase>            OnlineSdkClass;                                    // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayTag;                                       // 0x8(0x8)(Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


