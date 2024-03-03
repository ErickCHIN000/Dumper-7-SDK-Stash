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

// 0x30 (0x30 - 0x0)
// Function bloodquestfinishclean.bloodquestfinishclean_C.call_event
struct Abloodquestfinishclean_C_Call_event_Params
{
public:
	class Abp_quest_actor_C*                     Quest_actor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_quest_event                        Event_data;                                        // 0x8(0x25)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_58A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB1 (0xB1 - 0x0)
// Function bloodquestfinishclean.bloodquestfinishclean_C.ExecuteUbergraph_bloodquestfinishclean
struct Abloodquestfinishclean_C_ExecuteUbergraph_bloodquestfinishclean_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_quest_actor_C*                     K2Node_Event_quest_actor;                          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_quest_event                        K2Node_Event_event_data;                           // 0x28(0x25)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_605[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ANpc_merednew_C*                       CallFunc_GetActorOfClass_ReturnValue;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_609[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ANpc_deadbody_C*                       CallFunc_GetActorOfClass_ReturnValue_1;            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ANpc_citizenrn_C*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x68(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ANpc_citizenrn_C*                      CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_615[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ANpc_watchmanrn_C*>             CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x90(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_618[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ANpc_watchmanrn_C*                     CallFunc_Array_Get_Item_1;                         // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


