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

// 0x18 (0x18 - 0x0)
// Function ScriptedEventRow.ScriptedEventRow_C.AddScriptedEvent
struct UScriptedEventRow_C_AddScriptedEvent_Params
{
public:
	class FText                                  RowName;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x50 (0x50 - 0x0)
// Function ScriptedEventRow.ScriptedEventRow_C.ExecuteUbergraph_ScriptedEventRow
struct UScriptedEventRow_C_ExecuteUbergraph_ScriptedEventRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_RowName;                        // 0x8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptedEventsRowHandle              CallFunc_MakeScriptedEvents_ReturnValue;           // 0x38(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}

