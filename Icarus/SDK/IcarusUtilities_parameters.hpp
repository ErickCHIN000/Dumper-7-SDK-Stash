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

// 0x1C (0x1C - 0x0)
// Function IcarusUtilities.RowLibrary.IsRowHandleValid
struct URowLibrary_IsRowHandleValid_Params
{
public:
	struct FRowHandle                            RowHandle;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function IcarusUtilities.RowLibrary.IsRowHandleNone
struct URowLibrary_IsRowHandleNone_Params
{
public:
	struct FRowHandle                            RowHandle;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13ED[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function IcarusUtilities.RowLibrary.IsRowEnumValid
struct URowLibrary_IsRowEnumValid_Params
{
public:
	struct FRowEnum                              Enum;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function IcarusUtilities.RowLibrary.IsRowEnumNone
struct URowLibrary_IsRowEnumNone_Params
{
public:
	struct FRowEnum                              Enum;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function IcarusUtilities.RowLibrary.GetRowIndex
struct URowLibrary_GetRowIndex_Params
{
public:
	struct FRowHandle                            Row;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function IcarusUtilities.RowLibrary.GetMetadata
struct URowLibrary_GetMetadata_Params
{
public:
	struct FRowHandle                            RowHandle;                                         // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRowMetadata                          ReturnValue;                                       // 0x18(0x88)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function IcarusUtilities.RowLibrary.GetFeatureLevel
struct URowLibrary_GetFeatureLevel_Params
{
public:
	struct FRowHandle                            RowHandle;                                         // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelsRowHandle               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function IcarusUtilities.RowLibrary.GetDataTableName
struct URowLibrary_GetDataTableName_Params
{
public:
	struct FRowHandle                            RowHandle;                                         // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x18(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function IcarusUtilities.RowLibrary.GetDataTableForEdit
struct URowLibrary_GetDataTableForEdit_Params
{
public:
	struct FRowHandle                            RowHandle;                                         // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIcarusDataTable*                      ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function IcarusUtilities.RowLibrary.GetDataTable
struct URowLibrary_GetDataTable_Params
{
public:
	struct FRowHandle                            RowHandle;                                         // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIcarusDataTable*                      ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function IcarusUtilities.RowLibrary.EqualEqual_FRowHandleFRowHandle
struct URowLibrary_EqualEqual_FRowHandleFRowHandle_Params
{
public:
	struct FRowHandle                            RowHandleA;                                        // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRowHandle                            RowHandleB;                                        // 0x18(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1417[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.StructToRowHandle
struct UFeatureLevelsLibrary_StructToRowHandle_Params
{
public:
	struct FFeatureLevelsEnum                    EnumValue;                                         // 0x0(0x10)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelsRowHandle               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.StructToName
struct UFeatureLevelsLibrary_StructToName_Params
{
public:
	struct FFeatureLevelsEnum                    EnumValue;                                         // 0x0(0x10)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.StructToInt
struct UFeatureLevelsLibrary_StructToInt_Params
{
public:
	struct FFeatureLevelsEnum                    EnumValue;                                         // 0x0(0x10)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_144F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.RowHandleToStruct
struct UFeatureLevelsLibrary_RowHandleToStruct_Params
{
public:
	struct FFeatureLevelsRowHandle               RowHandle;                                         // 0x0(0x18)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelsEnum                    ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.RemoveRowFromFeatureLevelsTable
struct UFeatureLevelsLibrary_RemoveRowFromFeatureLevelsTable_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.NumRows
struct UFeatureLevelsLibrary_NumRows_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.NotEqual_EnumName
struct UFeatureLevelsLibrary_NotEqual_EnumName_Params
{
public:
	struct FFeatureLevelsEnum                    A;                                                 // 0x0(0x10)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  B;                                                 // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.NotEqual_EnumEnum
struct UFeatureLevelsLibrary_NotEqual_EnumEnum_Params
{
public:
	struct FFeatureLevelsEnum                    A;                                                 // 0x0(0x10)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelsEnum                    B;                                                 // 0x10(0x10)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.NameToStruct
struct UFeatureLevelsLibrary_NameToStruct_Params
{
public:
	class FName                                  NameValue;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelsEnum                    ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.NameToInt
struct UFeatureLevelsLibrary_NameToInt_Params
{
public:
	class FName                                  NameValue;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.MakeLiteralFeatureLevels
struct UFeatureLevelsLibrary_MakeLiteralFeatureLevels_Params
{
public:
	struct FFeatureLevelsRowHandle               RowHandle;                                         // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelsRowHandle               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevelsFromIndex
struct UFeatureLevelsLibrary_MakeFeatureLevelsFromIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelsRowHandle               ReturnValue;                                       // 0x4(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevelsEnum
struct UFeatureLevelsLibrary_MakeFeatureLevelsEnum_Params
{
public:
	struct FFeatureLevelsEnum                    Enum;                                              // 0x0(0x10)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelsEnum                    ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevels
struct UFeatureLevelsLibrary_MakeFeatureLevels_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelsRowHandle               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.IsValidName
struct UFeatureLevelsLibrary_IsValidName_Params
{
public:
	class FName                                  NameValue;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.IntToStruct
struct UFeatureLevelsLibrary_IntToStruct_Params
{
public:
	int32                                        IntValue;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFeatureLevelsEnum                    ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.IntToName
struct UFeatureLevelsLibrary_IntToName_Params
{
public:
	int32                                        IntValue;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.GetFeatureLevelsStruct
struct UFeatureLevelsLibrary_GetFeatureLevelsStruct_Params
{
public:
	struct FFeatureLevelsRowHandle               RowHandle;                                         // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelData                     FeatureLevels;                                     // 0x18(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EValid                            Paths;                                             // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1502[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x34 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle
struct UFeatureLevelsLibrary_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_Params
{
public:
	struct FFeatureLevelsRowHandle               RowHandleA;                                        // 0x0(0x18)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelsRowHandle               RowHandleB;                                        // 0x18(0x18)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.EqualEqual_EnumEnum
struct UFeatureLevelsLibrary_EqualEqual_EnumEnum_Params
{
public:
	struct FFeatureLevelsEnum                    A;                                                 // 0x0(0x10)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelsEnum                    B;                                                 // 0x10(0x10)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1545[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x34 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.CastToFeatureLevelsRowHandle
struct UFeatureLevelsLibrary_CastToFeatureLevelsRowHandle_Params
{
public:
	struct FRowHandle                            RowHandle;                                         // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EValid                            Paths;                                             // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFeatureLevelsRowHandle               ReturnValue;                                       // 0x1C(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.BreakFeatureLevelsEnum
struct UFeatureLevelsLibrary_BreakFeatureLevelsEnum_Params
{
public:
	struct FFeatureLevelsEnum                    Enum;                                              // 0x0(0x10)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1589[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function IcarusUtilities.FeatureLevelsLibrary.AddRowToFeatureLevelsTable
struct UFeatureLevelsLibrary_AddRowToFeatureLevelsTable_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFeatureLevelData                     Data;                                              // 0x8(0x98)(Parm, NativeAccessSpecifierPublic)
	struct FFeatureLevelsRowHandle               NewRow;                                            // 0xA0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideExistingRow;                              // 0xB8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function IcarusUtilities.IcarusFeatureLevelFunctionLibrary.IsFeatureLevelEnabled
struct UIcarusFeatureLevelFunctionLibrary_IsFeatureLevelEnabled_Params
{
public:
	struct FFeatureLevelsRowHandle               InFeatureLevel;                                    // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function IcarusUtilities.IcarusFeatureLevelFunctionLibrary.GetCurrentFeatureLevel
struct UIcarusFeatureLevelFunctionLibrary_GetCurrentFeatureLevel_Params
{
public:
	struct FFeatureLevelsRowHandle               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function IcarusUtilities.IcarusHashesFunctionLibrary.NameToHash
struct UIcarusHashesFunctionLibrary_NameToHash_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function IcarusUtilities.IcarusHashesFunctionLibrary.HashToName
struct UIcarusHashesFunctionLibrary_HashToName_Params
{
public:
	int32                                        Hash;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function IcarusUtilities.IcarusStringFunctionLibrary.StringContainsSpecialCharacters_Output
struct UIcarusStringFunctionLibrary_StringContainsSpecialCharacters_Output_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutSpecialCharacters;                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function IcarusUtilities.IcarusStringFunctionLibrary.StringContainsSpecialCharacters
struct UIcarusStringFunctionLibrary_StringContainsSpecialCharacters_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function IcarusUtilities.IcarusStringFunctionLibrary.ParseIntoLines
struct UIcarusStringFunctionLibrary_ParseIntoLines_Params
{
public:
	class FString                                MultiLineInput;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_Text
struct UIcarusStringFunctionLibrary_LexicalLess_Text_Params
{
public:
	class FText                                  TextA;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  TextB;                                             // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_String
struct UIcarusStringFunctionLibrary_LexicalLess_String_Params
{
public:
	class FString                                StringA;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringB;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_Name
struct UIcarusStringFunctionLibrary_LexicalLess_Name_Params
{
public:
	class FName                                  NameA;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameB;                                             // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1749[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function IcarusUtilities.IcarusStringFunctionLibrary.FastLess_Name
struct UIcarusStringFunctionLibrary_FastLess_Name_Params
{
public:
	class FName                                  NameA;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameB;                                             // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function IcarusUtilities.LessInterface.LessThan
struct ILessInterface_LessThan_Params
{
public:
	class UObject*                               Other;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1816[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function IcarusUtilities.PanningPanel.SetZoomOverride
struct UPanningPanel_SetZoomOverride_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function IcarusUtilities.PanningPanel.SetPositionOverride
struct UPanningPanel_SetPositionOverride_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function IcarusUtilities.PanningPanel.GetPosition
struct UPanningPanel_GetPosition_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function IcarusUtilities.PanningPanel.AddChildToOverlay
struct UPanningPanel_AddChildToOverlay_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOverlaySlot*                          ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


