#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EJsonType : uint8
{
	Null                           = 0,
	String                         = 1,
	Number                         = 2,
	Boolean                        = 3,
	Array                          = 4,
	Object                         = 5,
	EJsonType_MAX                  = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct BlueprintJson.LightJsonObject
struct FLightJsonObject
{
public:
	uint8                                        Pad_890[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct BlueprintJson.JsonObjectField
struct FJsonObjectField
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonValue*                            FieldValue;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


