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

// 0x8 (0x8 - 0x0)
// Function FLODRecordRow.FLODRecordRow_C.SetFLODRecord
struct UFLODRecordRow_C_SetFLODRecord_Params
{
public:
	class UFLODRecord*                           FLODRecord;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x218 (0x218 - 0x0)
// Function FLODRecordRow.FLODRecordRow_C.ExecuteUbergraph_FLODRecordRow
struct UFLODRecordRow_C_ExecuteUbergraph_FLODRecordRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFLODDescription                      CallFunc_GetDescription_ReturnValue;               // 0x8(0x138)(ConstParm)
	class UFLODRecord*                           K2Node_CustomEvent_FLODRecord;                     // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x148(0x40)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_SoftObjectReferenceToString_ReturnValue; // 0x188(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x198(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1B0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1F0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x200(0x18)(None)
};

}
}


