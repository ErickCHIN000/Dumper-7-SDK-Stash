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
// Function UMG_ProspectObjectiveEntry.UMG_ProspectObjectiveEntry_C.PreConstruct
struct UUMG_ProspectObjectiveEntry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C0 (0x1C0 - 0x0)
// Function UMG_ProspectObjectiveEntry.UMG_ProspectObjectiveEntry_C.ExecuteUbergraph_UMG_ProspectObjectiveEntry
struct UUMG_ProspectObjectiveEntry_C_ExecuteUbergraph_UMG_ProspectObjectiveEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3669[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestSetup                           CallFunc_GetQuestsStruct_Quests;                   // 0x8(0x148)(None)
	enum class EValid                            CallFunc_GetQuestsStruct_Paths;                    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_367A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x158(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x198(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1A8(0x18)(None)
};

}
}


