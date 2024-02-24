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
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Set_DestroyHooks
struct UMission_PLC3_3_2_C_Set_DestroyHooks_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Obj_DestroyHooks
struct UMission_PLC3_3_2_C_Obj_DestroyHooks_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_390F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.SET_Portal02
struct UMission_PLC3_3_2_C_SET_Portal02_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.OBJ_Portal02Objective
struct UMission_PLC3_3_2_C_OBJ_Portal02Objective_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3964[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Update_PuzzleSolved
struct UMission_PLC3_3_2_C_Update_PuzzleSolved_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.UPDATE_ExitSmith02
struct UMission_PLC3_3_2_C_UPDATE_ExitSmith02_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.SET_GuideTheEnergy
struct UMission_PLC3_3_2_C_SET_GuideTheEnergy_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.OBJ_GuideTheEnergy
struct UMission_PLC3_3_2_C_OBJ_GuideTheEnergy_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Update_GuideTheEnergy
struct UMission_PLC3_3_2_C_Update_GuideTheEnergy_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Set_EnterSmith02
struct UMission_PLC3_3_2_C_Set_EnterSmith02_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Obj_EnterSmith02
struct UMission_PLC3_3_2_C_Obj_EnterSmith02_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.UPDATE_EnterSmith02
struct UMission_PLC3_3_2_C_UPDATE_EnterSmith02_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.ExecuteUbergraph_Mission_PLC3_3_2
struct UMission_PLC3_3_2_C_ExecuteUbergraph_Mission_PLC3_3_2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent3;      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B63[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount3;      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3; // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2; // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent2;      // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount2;      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2; // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B80[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context3;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context2;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1; // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent1;      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B98[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount1;      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1; // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context1;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent; // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent;       // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BBC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount;       // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum3_CmpSuccess;                     // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BC9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


