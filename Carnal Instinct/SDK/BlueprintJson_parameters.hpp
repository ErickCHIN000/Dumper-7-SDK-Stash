#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonLibrary.StringifyJsonObject
struct UJsonLibrary_StringifyJsonObject_Params
{
public:
	class UJsonObject*                           Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutJsonString;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonLibrary.LoadJsonFile
struct UJsonLibrary_LoadJsonFile_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonObject*                           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Vector2D
struct UJsonLibrary_JsonValue_Vector2D_Params
{
public:
	struct FVector2D                             Value;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonValue*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Vector
struct UJsonLibrary_JsonValue_Vector_Params
{
public:
	struct FVector                               Value;                                             // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UJsonValue*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Transform
struct UJsonLibrary_JsonValue_Transform_Params
{
public:
	struct FTransform                            Value;                                             // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UJsonValue*                            ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_ToVector
struct UJsonLibrary_JsonValue_ToVector_Params
{
public:
	class UJsonValue*                            Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_ToTransform
struct UJsonLibrary_JsonValue_ToTransform_Params
{
public:
	class UJsonValue*                            Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_ToString
struct UJsonLibrary_JsonValue_ToString_Params
{
public:
	class UJsonValue*                            Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_ToRotator
struct UJsonLibrary_JsonValue_ToRotator_Params
{
public:
	class UJsonValue*                            Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_98[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_ToObject
struct UJsonLibrary_JsonValue_ToObject_Params
{
public:
	class UJsonValue*                            Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonObject*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_ToInteger64
struct UJsonLibrary_JsonValue_ToInteger64_Params
{
public:
	class UJsonValue*                            Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_ToInteger
struct UJsonLibrary_JsonValue_ToInteger_Params
{
public:
	class UJsonValue*                            Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_ToFloat
struct UJsonLibrary_JsonValue_ToFloat_Params
{
public:
	class UJsonValue*                            Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_ToBool
struct UJsonLibrary_JsonValue_ToBool_Params
{
public:
	class UJsonValue*                            Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_ToArray
struct UJsonLibrary_JsonValue_ToArray_Params
{
public:
	class UJsonValue*                            Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UJsonValue*>                    ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Text
struct UJsonLibrary_JsonValue_Text_Params
{
public:
	class FText                                  Value;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UJsonValue*                            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_String
struct UJsonLibrary_JsonValue_String_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonValue*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Rotator
struct UJsonLibrary_JsonValue_Rotator_Params
{
public:
	struct FRotator                              Value;                                             // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UJsonValue*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Quat
struct UJsonLibrary_JsonValue_Quat_Params
{
public:
	struct FQuat                                 Value;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UJsonValue*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Name
struct UJsonLibrary_JsonValue_Name_Params
{
public:
	class FName                                  Value;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonValue*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_LinearColor
struct UJsonLibrary_JsonValue_LinearColor_Params
{
public:
	struct FLinearColor                          Value;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonValue*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_JsonObject
struct UJsonLibrary_JsonValue_JsonObject_Params
{
public:
	class UJsonObject*                           Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonValue*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Int64
struct UJsonLibrary_JsonValue_Int64_Params
{
public:
	int64                                        Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonValue*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_HitResult
struct UJsonLibrary_JsonValue_HitResult_Params
{
public:
	struct FHitResult                            Value;                                             // 0x0(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UJsonValue*                            ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Float
struct UJsonLibrary_JsonValue_Float_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UJsonValue*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Color
struct UJsonLibrary_JsonValue_Color_Params
{
public:
	struct FColor                                Value;                                             // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UJsonValue*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Boolean
struct UJsonLibrary_JsonValue_Boolean_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UJsonValue*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonLibrary.JsonValue_Bool
struct UJsonLibrary_JsonValue_Bool_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UJsonValue*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function BlueprintJson.JsonLibrary.GetFieldAsString
struct UJsonLibrary_GetFieldAsString_Params
{
public:
	struct FLightJsonObject                      Object;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function BlueprintJson.JsonLibrary.GetFieldAsObjectArray
struct UJsonLibrary_GetFieldAsObjectArray_Params
{
public:
	struct FLightJsonObject                      Object;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLightJsonObject>              ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function BlueprintJson.JsonLibrary.GetFieldAsObject
struct UJsonLibrary_GetFieldAsObject_Params
{
public:
	struct FLightJsonObject                      Object;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightJsonObject                      ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.JsonLibrary.GetFieldAsInt64
struct UJsonLibrary_GetFieldAsInt64_Params
{
public:
	struct FLightJsonObject                      Object;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.JsonLibrary.GetFieldAsInt32
struct UJsonLibrary_GetFieldAsInt32_Params
{
public:
	struct FLightJsonObject                      Object;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function BlueprintJson.JsonLibrary.GetFieldAsFloatArray
struct UJsonLibrary_GetFieldAsFloatArray_Params
{
public:
	struct FLightJsonObject                      Object;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.JsonLibrary.GetFieldAsFloat
struct UJsonLibrary_GetFieldAsFloat_Params
{
public:
	struct FLightJsonObject                      Object;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonLibrary.ConvertLightObject
struct UJsonLibrary_ConvertLightObject_Params
{
public:
	struct FLightJsonObject                      Object;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UJsonObject*                           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Vector2D
struct UInternalJsonLibrary_JO_AddField_Vector2D_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FieldValue;                                        // 0x18(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Vector
struct UInternalJsonLibrary_JO_AddField_Vector_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FieldValue;                                        // 0x18(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Transform
struct UInternalJsonLibrary_JO_AddField_Transform_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            FieldValue;                                        // 0x20(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Text
struct UInternalJsonLibrary_JO_AddField_Text_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FieldValue;                                        // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_String
struct UInternalJsonLibrary_JO_AddField_String_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldValue;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Rotator
struct UInternalJsonLibrary_JO_AddField_Rotator_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              FieldValue;                                        // 0x18(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Quat
struct UInternalJsonLibrary_JO_AddField_Quat_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 FieldValue;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Object
struct UInternalJsonLibrary_JO_AddField_Object_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               FieldValue;                                        // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Name
struct UInternalJsonLibrary_JO_AddField_Name_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FieldValue;                                        // 0x18(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_LinearColor
struct UInternalJsonLibrary_JO_AddField_LinearColor_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Int64
struct UInternalJsonLibrary_JO_AddField_Int64_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        FieldValue;                                        // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Int
struct UInternalJsonLibrary_JO_AddField_Int_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FieldValue;                                        // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_HitResult
struct UInternalJsonLibrary_JO_AddField_HitResult_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            FieldValue;                                        // 0x18(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_210[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Float
struct UInternalJsonLibrary_JO_AddField_Float_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FieldValue;                                        // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_223[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Boolean
struct UInternalJsonLibrary_JO_AddField_Boolean_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FieldValue;                                        // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_235[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Vector2D
struct UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Vector
struct UInternalJsonLibrary_JO_AddField_Arr_Vector_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Transform
struct UInternalJsonLibrary_JO_AddField_Arr_Transform_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_String
struct UInternalJsonLibrary_JO_AddField_Arr_String_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Rotator
struct UInternalJsonLibrary_JO_AddField_Arr_Rotator_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRotator>                      FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Quat
struct UInternalJsonLibrary_JO_AddField_Arr_Quat_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                         FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Object
struct UInternalJsonLibrary_JO_AddField_Arr_Object_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_LinearColor
struct UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Int64
struct UInternalJsonLibrary_JO_AddField_Arr_Int64_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int64>                                FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Int
struct UInternalJsonLibrary_JO_AddField_Arr_Int_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_HitResult
struct UInternalJsonLibrary_JO_AddField_Arr_HitResult_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                    FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Float
struct UInternalJsonLibrary_JO_AddField_Arr_Float_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Boolean
struct UInternalJsonLibrary_JO_AddField_Arr_Boolean_Params
{
public:
	class UJsonObject*                           JsonObject;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 FieldValue;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonLoadAsyncFromFileProxy.LoadJsonFileAsync
struct UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonLoadAsyncFromFileProxy*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonParseAsyncProxy.ParseJsonAsync
struct UJsonParseAsyncProxy_ParseJsonAsync_Params
{
public:
	class FString                                Json;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonParseAsyncProxy*                  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonSaveAsyncProxy.SaveJsonToFileAsync
struct UJsonSaveAsyncProxy_SaveJsonToFileAsync_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonObject*                           ObjectToSave;                                      // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonSaveAsyncProxy*                   ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BlueprintJson.JsonValue.SwitchValueType
struct UJsonValue_SwitchValueType_Params
{
public:
	enum class EJsonType                         Branches;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BlueprintJson.JsonValue.IsNull
struct UJsonValue_IsNull_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BlueprintJson.JsonObject.ToJsonValue
struct UJsonObject_ToJsonValue_Params
{
public:
	class UJsonValue*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.SetVectorField
struct UJsonObject_SetVectorField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FieldValue;                                        // 0x10(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_488[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.SetVector2DField
struct UJsonObject_SetVector2DField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FieldValue;                                        // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.SetUObjectField
struct UJsonObject_SetUObjectField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               FieldValue;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function BlueprintJson.JsonObject.SetTransformField
struct UJsonObject_SetTransformField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            FieldValue;                                        // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.SetStringField
struct UJsonObject_SetStringField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldValue;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.SetRotatorField
struct UJsonObject_SetRotatorField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              FieldValue;                                        // 0x10(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_506[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.SetQuatField
struct UJsonObject_SetQuatField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 FieldValue;                                        // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.SetObjectField
struct UJsonObject_SetObjectField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonObject*                           JsonObject;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonObject.SetNullField
struct UJsonObject_SetNullField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.SetLinearColorField
struct UJsonObject_SetLinearColorField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FieldValue;                                        // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.SetIntegerField
struct UJsonObject_SetIntegerField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FieldValue;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.SetInteger64Field
struct UJsonObject_SetInteger64Field_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        FieldValue;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function BlueprintJson.JsonObject.SetHitResultField
struct UJsonObject_SetHitResultField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            FieldValue;                                        // 0x10(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_613[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.SetFloatField
struct UJsonObject_SetFloatField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FieldValue;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.SetField
struct UJsonObject_SetField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonValue*                            FieldValue;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.SetColorField
struct UJsonObject_SetColorField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                FieldValue;                                        // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.SetBooleanField
struct UJsonObject_SetBooleanField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FieldValue;                                        // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.SetArrayField
struct UJsonObject_SetArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UJsonValue*>                    FieldValue;                                        // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.ParseJson
struct UJsonObject_ParseJson_Params
{
public:
	class FString                                Json;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UJsonObject*                           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.IsFieldNull
struct UJsonObject_IsFieldNull_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_707[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.HasField
struct UJsonObject_HasField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_719[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsVector
struct UJsonObject_GetFieldAsVector_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_720[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsValue
struct UJsonObject_GetFieldAsValue_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonValue*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsString
struct UJsonObject_GetFieldAsString_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsObjectWrapper
struct UJsonObject_GetFieldAsObjectWrapper_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightJsonObject                      ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsObjectExec
struct UJsonObject_GetFieldAsObjectExec_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonObject*                           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsObject
struct UJsonObject_GetFieldAsObject_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJsonObject*                           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsInteger64
struct UJsonObject_GetFieldAsInteger64_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsInteger
struct UJsonObject_GetFieldAsInteger_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_797[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsInt32Array
struct UJsonObject_GetFieldAsInt32Array_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsFloatArray
struct UJsonObject_GetFieldAsFloatArray_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsFloat
struct UJsonObject_GetFieldAsFloat_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsBoolean
struct UJsonObject_GetFieldAsBoolean_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsArrayExec
struct UJsonObject_GetFieldAsArrayExec_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UJsonValue*>                    ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BlueprintJson.JsonObject.GetFieldAsArray
struct UJsonObject_GetFieldAsArray_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UJsonValue*>                    ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BlueprintJson.JsonObject.GetAllProperties
struct UJsonObject_GetAllProperties_Params
{
public:
	TArray<struct FJsonObjectField>              OutValues;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BlueprintJson.JsonObject.CreateJsonObject
struct UJsonObject_CreateJsonObject_Params
{
public:
	class UJsonObject*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


