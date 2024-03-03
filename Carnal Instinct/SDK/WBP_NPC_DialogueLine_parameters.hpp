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

// 0x1A0 (0x1A0 - 0x0)
// Function WBP_NPC_DialogueLine.WBP_NPC_DialogueLine_C.fnSetLine
struct UWBP_NPC_DialogueLine_C_FnSetLine_Params
{
public:
	class FText                                  NPC_Name;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FStruct_DT_NPC_Dialogue               New_Line;                                          // 0x18(0x68)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class Enum_NPC_Dialogue_State           Line_State;                                        // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_Dialogue_State           State;                                             // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18E1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DT_NPC_Dialogue               Line;                                              // 0x88(0x68)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0xF0(0x18)(Edit, BlueprintVisible)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x118(0x18)(None)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x140(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x158(0x18)(None)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue_1;            // 0x170(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x188(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function WBP_NPC_DialogueLine.WBP_NPC_DialogueLine_C.ExecuteUbergraph_WBP_NPC_DialogueLine
struct UWBP_NPC_DialogueLine_C_ExecuteUbergraph_WBP_NPC_DialogueLine_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


