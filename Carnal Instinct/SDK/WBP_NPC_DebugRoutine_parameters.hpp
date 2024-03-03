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

// 0x150 (0x150 - 0x0)
// Function WBP_NPC_DebugRoutine.WBP_NPC_DebugRoutine_C.fnUpdateValues
struct UWBP_NPC_DebugRoutine_C_FnUpdateValues_Params
{
public:
	class FText                                  State;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Profile;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Target_POI;                                        // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Current_POI;                                       // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Assigned_Station;                                  // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Task_Index;                                        // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Task_Time;                                         // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Station_Time;                                      // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Animation;                                         // 0xC0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Time;                                              // 0xD8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  HP;                                                // 0xF0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Player_Name;                                       // 0x108(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Interrupt_State;                                   // 0x120(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Interrupt_Timer;                                   // 0x138(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function WBP_NPC_DebugRoutine.WBP_NPC_DebugRoutine_C.fnSetNPCName
struct UWBP_NPC_DebugRoutine_C_FnSetNPCName_Params
{
public:
	class FText                                  NPC_Name;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1D (0x1D - 0x0)
// Function WBP_NPC_DebugRoutine.WBP_NPC_DebugRoutine_C.EventDisplayMessage
struct UWBP_NPC_DebugRoutine_C_EventDisplayMessage_Params
{
public:
	class FText                                  Message_Text;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        Display_Amount;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Permanent_Message;                                 // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function WBP_NPC_DebugRoutine.WBP_NPC_DebugRoutine_C.ExecuteUbergraph_WBP_NPC_DebugRoutine
struct UWBP_NPC_DebugRoutine_C_ExecuteUbergraph_WBP_NPC_DebugRoutine_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Message_Text;                   // 0x8(0x18)(None)
	float                                        K2Node_CustomEvent_Display_Amount;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Permanent_Message;              // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


