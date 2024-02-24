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

// 0xC (0xC - 0x0)
// Function NWXCore.BitwiseFunctions.GetNthBitValue
struct UBitwiseFunctions_GetNthBitValue_Params
{
public:
	int32                                        BitMask;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        N;                                                 // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function NWXCore.BitwiseFunctions.BitwiseRightShift
struct UBitwiseFunctions_BitwiseRightShift_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShiftAmount;                                       // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function NWXCore.BitwiseFunctions.BitwiseLeftShift
struct UBitwiseFunctions_BitwiseLeftShift_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShiftAmount;                                       // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function NWXCore.ComparisonFunctionLibrary.CompareInts
struct UComparisonFunctionLibrary_CompareInts_Params
{
public:
	int32                                        LHS;                                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RHS;                                               // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENWXMathComparison                Comparison;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EC[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function NWXCore.DataValidationHelperFunctions.ValidateTextIsSetAndInAStringTable
struct UDataValidationHelperFunctions_ValidateTextIsSetAndInAStringTable_Params
{
public:
	class FString                                Label;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FText>                          ValidationErrors;                                  // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EDataValidationResult             ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_504[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function NWXCore.DataValidationHelperFunctions.ValidateTextIsEmptyOrInAStringTable
struct UDataValidationHelperFunctions_ValidateTextIsEmptyOrInAStringTable_Params
{
public:
	class FString                                Label;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FText>                          ValidationErrors;                                  // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EDataValidationResult             ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// Function NWXCore.DataValidationHelperFunctions.CombineValidationResults
struct UDataValidationHelperFunctions_CombineValidationResults_Params
{
public:
	enum class EDataValidationResult             A;                                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataValidationResult             B;                                                 // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataValidationResult             ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function NWXCore.GetPrimitivesByTagInterface.GetPrimitiveComponentsByTag
struct IGetPrimitivesByTagInterface_GetPrimitiveComponentsByTag_Params
{
public:
	struct FGameplayTagContainer                 Tag;                                               // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UPrimitiveComponent*>           ReturnValue;                                       // 0x20(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NWXCore.LiveServicesDataTable.UpdateFromLiveConfig
struct ULiveServicesDataTable_UpdateFromLiveConfig_Params
{
public:
	class FString                                NewTableJson;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.UpdateDynamicStructsUStruct
struct ULiveServicesFunctionLibrary_UpdateDynamicStructsUStruct_Params
{
public:
	class UObject*                               Struct;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicTypedStructs                  DynamicStruct;                                     // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FDynamicTypedStructs                  DynamicStructOut;                                  // 0x18(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.UpdateDynamicStructs
struct ULiveServicesFunctionLibrary_UpdateDynamicStructs_Params
{
public:
	struct FDynamicTypedStructs                  DynamicStruct;                                     // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FDynamicTypedStructs                  DynamicStructOut;                                  // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FJsonStruct                           JsonStruct;                                        // 0x20(0x118)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.StringToDynamicStructs
struct ULiveServicesFunctionLibrary_StringToDynamicStructs_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Succeeded;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_583[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDynamicTypedStructs                  ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x248 (0x248 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.SetJsonStructByType
struct ULiveServicesFunctionLibrary_SetJsonStructByType_Params
{
public:
	struct FJsonStruct                           JsonStruct;                                        // 0x0(0x118)(Parm, NativeAccessSpecifierPublic)
	class UScriptStruct*                         StructType;                                        // 0x118(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTableRowBase                         StructData;                                        // 0x120(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FJsonStruct                           OutJsonStruct;                                     // 0x128(0x118)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x240(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_595[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.RemoveStructByType
struct ULiveServicesFunctionLibrary_RemoveStructByType_Params
{
public:
	struct FDynamicTypedStructs                  DynamicStruct;                                     // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class UScriptStruct*                         StructType;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicTypedStructs                  DynamicStructOut;                                  // 0x18(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.MergeDynamicStructs
struct ULiveServicesFunctionLibrary_MergeDynamicStructs_Params
{
public:
	struct FDynamicTypedStructs                  A;                                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FDynamicTypedStructs                  B;                                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FDynamicTypedStructs                  OutResultStruct;                                   // 0x20(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.IsJsonEqual
struct ULiveServicesFunctionLibrary_IsJsonEqual_Params
{
public:
	class FString                                JsonStringA;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                JsonStringB;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.IsDynamicStructEmpty
struct ULiveServicesFunctionLibrary_IsDynamicStructEmpty_Params
{
public:
	struct FDynamicTypedStructs                  DynamicStruct;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.GetStructByType
struct ULiveServicesFunctionLibrary_GetStructByType_Params
{
public:
	struct FDynamicTypedStructs                  StructsContainer;                                  // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class UScriptStruct*                         StructType;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTableRowBase                         OutStruct;                                         // 0x18(0x8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x130 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.GetJsonStructByType
struct ULiveServicesFunctionLibrary_GetJsonStructByType_Params
{
public:
	struct FJsonStruct                           JsonStruct;                                        // 0x0(0x118)(Parm, NativeAccessSpecifierPublic)
	class UScriptStruct*                         StructType;                                        // 0x118(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTableRowBase                         OutStruct;                                         // 0x120(0x8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x128(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_616[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.DynamicStructsToString
struct ULiveServicesFunctionLibrary_DynamicStructsToString_Params
{
public:
	struct FDynamicTypedStructs                  Struct;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.DynamicStructContains
struct ULiveServicesFunctionLibrary_DynamicStructContains_Params
{
public:
	struct FDynamicTypedStructs                  DynamicStruct;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UScriptStruct*                         StructType;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_635[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x120 - 0x0)
// Function NWXCore.LiveServicesFunctionLibrary.CreateJsonStruct
struct ULiveServicesFunctionLibrary_CreateJsonStruct_Params
{
public:
	class UObject*                               Struct;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonStruct                           ReturnValue;                                       // 0x8(0x118)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NWXCore.NWXCoreFunctionLibrary.AreAutomatedTestsRunning
struct UNWXCoreFunctionLibrary_AreAutomatedTestsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


