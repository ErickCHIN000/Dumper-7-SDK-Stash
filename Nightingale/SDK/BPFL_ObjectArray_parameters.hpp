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

// 0x58 (0x58 - 0x0)
// Function BPFL_ObjectArray.BPFL_ObjectArray_C.ObjectArrayAppend
struct UBPFL_ObjectArray_C_ObjectArrayAppend_Params
{
public:
	struct FS_ObjectArray                        OriginalObjectArray;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_ObjectArray                        AppendedObjectArray;                               // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_ObjectArray                        CombinedObjectArray;                               // 0x28(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<int32>                                LCombinedIDArray;                                  // 0x38(0x10)(Edit, BlueprintVisible)
	struct FS_ObjectArray                        K2Node_MakeStruct_S_ObjectArray;                   // 0x48(0x10)(HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function BPFL_ObjectArray.BPFL_ObjectArray_C.ObjectArrayRemove
struct UBPFL_ObjectArray_C_ObjectArrayRemove_Params
{
public:
	struct FS_ObjectArray                        ObjectArray;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               ItemToFind;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FDA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ObjectArray                        UpdatedObjectArray;                                // 0x28(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<int32>                                StartingIDArray;                                   // 0x38(0x10)(Edit, BlueprintVisible)
	TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface; // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FDF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompositePieceGameplay               CallFunc_GetCompositePieceGameplay_GameplayData;   // 0x60(0x140)(None)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FE6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ObjectArray                        K2Node_MakeStruct_S_ObjectArray;                   // 0x1A8(0x10)(HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function BPFL_ObjectArray.BPFL_ObjectArray_C.ObjectArrayAdd
struct UBPFL_ObjectArray_C_ObjectArrayAdd_Params
{
public:
	struct FS_ObjectArray                        ObjectArray;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               ItemToFind;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        AddIndex;                                          // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1027[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ObjectArray                        UpdatedArray;                                      // 0x28(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<int32>                                StartingIDArray;                                   // 0x38(0x10)(Edit, BlueprintVisible)
	TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface; // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_102C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompositePieceGameplay               CallFunc_GetCompositePieceGameplay_GameplayData;   // 0x60(0x140)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1030[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ObjectArray                        K2Node_MakeStruct_S_ObjectArray;                   // 0x1A8(0x10)(HasGetValueTypeHash)
};

// 0x181 (0x181 - 0x0)
// Function BPFL_ObjectArray.BPFL_ObjectArray_C.ObjectArrayContains
struct UBPFL_ObjectArray_C_ObjectArrayContains_Params
{
public:
	struct FS_ObjectArray                        ObjectArray;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               ItemToFind;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1073[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1077[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompositePieceGameplay               CallFunc_GetCompositePieceGameplay_GameplayData;   // 0x40(0x140)(None)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


