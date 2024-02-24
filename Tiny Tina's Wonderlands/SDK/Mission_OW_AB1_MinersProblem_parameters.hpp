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

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_TalkToNicolas
struct UMission_OW_AB1_MinersProblem_C_Obj_TalkToNicolas_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1216[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Set_TalkToNicolas
struct UMission_OW_AB1_MinersProblem_C_Set_TalkToNicolas_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_TalkToNicolas
struct UMission_OW_AB1_MinersProblem_C_MCE_TalkToNicolas_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_GatherIron
struct UMission_OW_AB1_MinersProblem_C_MCE_GatherIron_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_PickUpOre_INV_01
struct UMission_OW_AB1_MinersProblem_C_Obj_PickUpOre_INV_01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1288[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_PickUpOre_INV_01
struct UMission_OW_AB1_MinersProblem_C_MCE_PickUpOre_INV_01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Set_GatherIron
struct UMission_OW_AB1_MinersProblem_C_Set_GatherIron_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_ReachOreArea_INV
struct UMission_OW_AB1_MinersProblem_C_Obj_ReachOreArea_INV_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_ReachOreArea_INV
struct UMission_OW_AB1_MinersProblem_C_MCE_ReachOreArea_INV_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_DestroyOre_INV_01
struct UMission_OW_AB1_MinersProblem_C_Obj_DestroyOre_INV_01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1318[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_DestroyOre_INV_01
struct UMission_OW_AB1_MinersProblem_C_MCE_DestroyOre_INV_01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_DestroyOre_INV_02
struct UMission_OW_AB1_MinersProblem_C_Obj_DestroyOre_INV_02_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_134F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_DestroyOre_INV_02
struct UMission_OW_AB1_MinersProblem_C_MCE_DestroyOre_INV_02_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_DestroyOre_INV_03
struct UMission_OW_AB1_MinersProblem_C_Obj_DestroyOre_INV_03_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_138B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_DestroyOre_INV_03
struct UMission_OW_AB1_MinersProblem_C_MCE_DestroyOre_INV_03_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_DestroyOre_INV_04
struct UMission_OW_AB1_MinersProblem_C_Obj_DestroyOre_INV_04_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_DestroyOre_INV_04
struct UMission_OW_AB1_MinersProblem_C_MCE_DestroyOre_INV_04_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_DestroyOre_INV_05
struct UMission_OW_AB1_MinersProblem_C_Obj_DestroyOre_INV_05_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1403[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_DestroyOre_INV_05
struct UMission_OW_AB1_MinersProblem_C_MCE_DestroyOre_INV_05_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_DestroyOre_INV_06
struct UMission_OW_AB1_MinersProblem_C_Obj_DestroyOre_INV_06_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1421[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_DestroyOre_INV_06
struct UMission_OW_AB1_MinersProblem_C_MCE_DestroyOre_INV_06_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_DestroyOre_INV_07
struct UMission_OW_AB1_MinersProblem_C_Obj_DestroyOre_INV_07_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1454[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_DestroyOre_INV_07
struct UMission_OW_AB1_MinersProblem_C_MCE_DestroyOre_INV_07_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_DestroyOre_INV_08
struct UMission_OW_AB1_MinersProblem_C_Obj_DestroyOre_INV_08_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1490[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_DestroyOre_INV_08
struct UMission_OW_AB1_MinersProblem_C_MCE_DestroyOre_INV_08_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_DestroyOre_INV_09
struct UMission_OW_AB1_MinersProblem_C_Obj_DestroyOre_INV_09_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_DestroyOre_INV_09
struct UMission_OW_AB1_MinersProblem_C_MCE_DestroyOre_INV_09_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_DestroyOre_INV_10
struct UMission_OW_AB1_MinersProblem_C_Obj_DestroyOre_INV_10_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_150B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_DestroyOre_INV_10
struct UMission_OW_AB1_MinersProblem_C_MCE_DestroyOre_INV_10_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_PickUpOre_INV_02
struct UMission_OW_AB1_MinersProblem_C_Obj_PickUpOre_INV_02_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1553[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_PickUpOre_INV_02
struct UMission_OW_AB1_MinersProblem_C_MCE_PickUpOre_INV_02_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_PickUpOre_INV_03
struct UMission_OW_AB1_MinersProblem_C_Obj_PickUpOre_INV_03_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_158E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_PickUpOre_INV_03
struct UMission_OW_AB1_MinersProblem_C_MCE_PickUpOre_INV_03_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_PickUpOre_INV_04
struct UMission_OW_AB1_MinersProblem_C_Obj_PickUpOre_INV_04_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_PickUpOre_INV_04
struct UMission_OW_AB1_MinersProblem_C_MCE_PickUpOre_INV_04_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_PickUpOre_INV_05
struct UMission_OW_AB1_MinersProblem_C_Obj_PickUpOre_INV_05_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_PickUpOre_INV_05
struct UMission_OW_AB1_MinersProblem_C_MCE_PickUpOre_INV_05_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_PickUpOre_INV_06
struct UMission_OW_AB1_MinersProblem_C_Obj_PickUpOre_INV_06_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1632[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_PickUpOre_INV_06
struct UMission_OW_AB1_MinersProblem_C_MCE_PickUpOre_INV_06_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_PickUpOre_INV_07
struct UMission_OW_AB1_MinersProblem_C_Obj_PickUpOre_INV_07_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_168F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_PickUpOre_INV_07
struct UMission_OW_AB1_MinersProblem_C_MCE_PickUpOre_INV_07_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_PickUpOre_INV_08
struct UMission_OW_AB1_MinersProblem_C_Obj_PickUpOre_INV_08_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_PickUpOre_INV_08
struct UMission_OW_AB1_MinersProblem_C_MCE_PickUpOre_INV_08_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_PickUpOre_INV_09
struct UMission_OW_AB1_MinersProblem_C_Obj_PickUpOre_INV_09_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_170A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_PickUpOre_INV_09
struct UMission_OW_AB1_MinersProblem_C_MCE_PickUpOre_INV_09_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_PickUpOre_INV_10
struct UMission_OW_AB1_MinersProblem_C_Obj_PickUpOre_INV_10_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1747[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.MCE_PickUpOre_INV_10
struct UMission_OW_AB1_MinersProblem_C_MCE_PickUpOre_INV_10_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.Obj_GatherIron
struct UMission_OW_AB1_MinersProblem_C_Obj_GatherIron_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1775[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB42 (0xB42 - 0x0)
// Function Mission_OW_AB1_MinersProblem.Mission_OW_AB1_MinersProblem_C.ExecuteUbergraph_Mission_OW_AB1_MinersProblem
struct UMission_OW_AB1_MinersProblem_C_ExecuteUbergraph_Mission_OW_AB1_MinersProblem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1949[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue;             // 0x8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation;       // 0x220(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1951[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs;    // 0x230(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue;        // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1958[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue1;            // 0x248(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation1;      // 0x460(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_195C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1;   // 0x470(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue1;       // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1960[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue2;            // 0x488(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation2;      // 0x6A0(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1969[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2;   // 0x6B0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue2;       // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent22;     // 0x6C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1971[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount22;     // 0x6C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents22; // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1; // 0x6C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x6CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_197D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context22;        // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context21;        // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent21;     // 0x6E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_198A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount21;     // 0x6E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents21; // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_198E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context20;        // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x6F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent; // 0x6F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent20;     // 0x6FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_199B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount20;     // 0x6FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20; // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x708(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0x718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context19;        // 0x720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue3;            // 0x728(0x218)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x940(0x10)(ZeroConstructor, NoDestructor)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation3;      // 0x950(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3;   // 0x960(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue3;       // 0x970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent19;     // 0x971(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19C6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount19;     // 0x974(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19; // 0x978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context18;        // 0x980(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent18;     // 0x988(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount18;     // 0x98C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18; // 0x990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context17;        // 0x998(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent17;     // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount17;     // 0x9A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17; // 0x9A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context16;        // 0x9B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent16;     // 0x9B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount16;     // 0x9BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16; // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context15;        // 0x9C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent15;     // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount15;     // 0x9D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15; // 0x9D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context14;        // 0x9E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent14;     // 0x9E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount14;     // 0x9EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14; // 0x9F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context13;        // 0x9F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent13;     // 0xA00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount13;     // 0xA04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13; // 0xA08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context12;        // 0xA10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent12;     // 0xA18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount12;     // 0xA1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12; // 0xA20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context11;        // 0xA28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent11;     // 0xA30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount11;     // 0xA34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11; // 0xA38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context10;        // 0xA40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent10;     // 0xA48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount10;     // 0xA4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10; // 0xA50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context9;         // 0xA58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent9;      // 0xA60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount9;      // 0xA64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9; // 0xA68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum3_CmpSuccess;                     // 0xA69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A2B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context8;         // 0xA70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent8;      // 0xA78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount8;      // 0xA7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8; // 0xA80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum4_CmpSuccess;                     // 0xA81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A36[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context7;         // 0xA88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent7;      // 0xA90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount7;      // 0xA94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7; // 0xA98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum5_CmpSuccess;                     // 0xA99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A42[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context6;         // 0xAA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent6;      // 0xAA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount6;      // 0xAAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6; // 0xAB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum6_CmpSuccess;                     // 0xAB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A53[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context5;         // 0xAB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent5;      // 0xAC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount5;      // 0xAC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5; // 0xAC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum7_CmpSuccess;                     // 0xAC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A66[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context4;         // 0xAD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent4;      // 0xAD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount4;      // 0xADC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4; // 0xAE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum8_CmpSuccess;                     // 0xAE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A71[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context3;         // 0xAE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent3;      // 0xAF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount3;      // 0xAF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3; // 0xAF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum9_CmpSuccess;                     // 0xAF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A83[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context2;         // 0xB00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent2;      // 0xB08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount2;      // 0xB0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2; // 0xB10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum10_CmpSuccess;                    // 0xB11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A92[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context1;         // 0xB18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent1;      // 0xB20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount1;      // 0xB24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1; // 0xB28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum11_CmpSuccess;                    // 0xB29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AB5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context;          // 0xB30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent;       // 0xB38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ABA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount;       // 0xB3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents; // 0xB40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum12_CmpSuccess;                    // 0xB41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


