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

// 0x1 (0x1 - 0x0)
// Function WBP_NPC_Dialogue.WBP_NPC_Dialogue_C.fnShowHideWidget
struct UWBP_NPC_Dialogue_C_FnShowHideWidget_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WBP_NPC_Dialogue.WBP_NPC_Dialogue_C.fnSetDialogue
struct UWBP_NPC_Dialogue_C_FnSetDialogue_Params
{
public:
	class FText                                  Phrase;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function WBP_NPC_Dialogue.WBP_NPC_Dialogue_C.fnSetName
struct UWBP_NPC_Dialogue_C_FnSetName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function WBP_NPC_Dialogue.WBP_NPC_Dialogue_C.ExecuteUbergraph_WBP_NPC_Dialogue
struct UWBP_NPC_Dialogue_C_ExecuteUbergraph_WBP_NPC_Dialogue_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


