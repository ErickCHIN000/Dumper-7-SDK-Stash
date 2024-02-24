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

// 0x40 (0x40 - 0x0)
// Function AffinityTable.AffinityTableBlueprintLibrary.QueryTableForRow
struct UAffinityTableBlueprintLibrary_QueryTableForRow_Params
{
public:
	class UAffinityTable*                        Table;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RowTag;                                            // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExactMatch;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UScriptStruct*>                 StructureTypes;                                    // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCellDataArrayWrapper>         OutMemoryPtrs;                                     // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E71[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function AffinityTable.AffinityTableBlueprintLibrary.QueryTable
struct UAffinityTableBlueprintLibrary_QueryTable_Params
{
public:
	class UAffinityTable*                        Table;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RowTag;                                            // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ColumnTag;                                         // 0x10(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExactMatch;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UScriptStruct*>                 StructureTypes;                                    // 0x20(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAffinityTableCellDataWrapper> OutMemoryPtrs;                                     // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AffinityTable.AffinityTableBlueprintLibrary.GetTableCellsData
struct UAffinityTableBlueprintLibrary_GetTableCellsData_Params
{
public:
	class UScriptStruct*                         StructType;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataIndex;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCellDataArrayWrapper>         MemoryPtrs;                                        // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAffinityTableCellDataWrapper> OutData;                                           // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AffinityTable.AffinityTableBlueprintLibrary.GetTableCellData
struct UAffinityTableBlueprintLibrary_GetTableCellData_Params
{
public:
	class UScriptStruct*                         StructType;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataIndex;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAffinityTableCellDataWrapper> MemoryPtrs;                                        // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAffinityTableCellDataWrapper         OutData;                                           // 0x20(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


