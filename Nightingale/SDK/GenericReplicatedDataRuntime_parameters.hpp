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

// 0x48 (0x48 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsVector
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsVector_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasVector;                                         // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0x30(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsTransform
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsTransform_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasTransform;                                      // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A10[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x30(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsText
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsText_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasText;                                           // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A51[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x30(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsTagContainer
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsTagContainer_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasTagContainer;                                   // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TagContainer;                                      // 0x30(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsString
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsString_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasString;                                         // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsRotator
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsRotator_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasRotator;                                        // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotator;                                           // 0x30(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsObjects
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsObjects_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasObjects;                                        // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B53[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       Objects;                                           // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsNameArray
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsNameArray_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasNameArray;                                      // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B75[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          NameArray;                                         // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsName
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsName_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasName;                                           // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x30(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsInt64
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsInt64_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasInt64;                                          // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Int64;                                             // 0x30(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsInt
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsInt_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasInt;                                            // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Int;                                               // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C00[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsHitResult
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsHitResult_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasHitResult;                                      // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            HitResult;                                         // 0x30(0xE8)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsGameplayTag
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsGameplayTag_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasGameplayTag;                                   // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          GameplayTag;                                       // 0x30(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsFloat
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsFloat_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasFloat;                                          // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C95[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Float;                                             // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C97[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsDataTableRowHandleArray
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsDataTableRowHandleArray_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasDataTableRowHandleArray;                        // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           DataTableRowHandleArray;                           // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsDataTableRowHandle
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsDataTableRowHandle_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasDataTableRowHandle;                            // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D04[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   DataTableRowHandle;                                // 0x30(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsClass
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsClass_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasClass;                                          // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D36[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   Class;                                             // 0x30(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsByte
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsByte_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasByte;                                           // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Byte;                                              // 0x2D(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D65[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsBool
struct UGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsBool_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasBool;                                           // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bool;                                              // 0x2D(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9F[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetDebugString
struct UGenericReplicatedDataFunctionLibrary_GetDebugString_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GetDataCount
struct UGenericReplicatedDataFunctionLibrary_GetDataCount_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromVector
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromVector_Params
{
public:
	struct FVector                               Vector;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x18(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromTransform
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromTransform_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x60(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromText
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x18(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromTagContainer
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromTagContainer_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x20(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromString
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromString_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromRotator
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromRotator_Params
{
public:
	struct FRotator                              Rotator;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x18(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromObjects
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromObjects_Params
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromNameArray
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromNameArray_Params
{
public:
	TArray<class FName>                          NameArray;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromName
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromName_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromInt64
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromInt64_Params
{
public:
	int64                                        Int64;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromInt
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromInt_Params
{
public:
	int32                                        Int;                                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromHitResult
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromHitResult_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0xE8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromGameplayTag
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromGameplayTag_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromFloat
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromFloat_Params
{
public:
	float                                        Float;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F55[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromDataTableRowHandleArray
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromDataTableRowHandleArray_Params
{
public:
	TArray<struct FDataTableRowHandle>           DataTableRowHandleArray;                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromDataTableRowHandle
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromDataTableRowHandle_Params
{
public:
	struct FDataTableRowHandle                   DataTableRowHandle;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromClass
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromClass_Params
{
public:
	TSubclassOf<class UObject>                   Class;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromByte
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromByte_Params
{
public:
	uint8                                        Byte;                                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromBool
struct UGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromBool_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.CreateGenericReplicatedDataHandle
struct UGenericReplicatedDataFunctionLibrary_CreateGenericReplicatedDataHandle_Params
{
public:
	TArray<struct FGenericDataInitializationField> InputData;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          OutHandle;                                         // 0x10(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.CompareHandles
struct UGenericReplicatedDataFunctionLibrary_CompareHandles_Params
{
public:
	struct FGenericReplicatedDataHandle          A;                                                 // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          B;                                                 // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1011[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary.AppendGenericReplicatedData
struct UGenericReplicatedDataFunctionLibrary_AppendGenericReplicatedData_Params
{
public:
	TArray<struct FGenericReplicatedDataHandle>  GenericReplicatedData;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}


