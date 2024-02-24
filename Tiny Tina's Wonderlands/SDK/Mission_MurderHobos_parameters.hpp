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
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_FindWizard
struct UMission_MurderHobos_C_Set_FindWizard_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_FindWizard
struct UMission_MurderHobos_C_Obj_FindWizard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FF3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_FindWizard
struct UMission_MurderHobos_C_UPDATE_FindWizard_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_TalkToWizard
struct UMission_MurderHobos_C_Set_TalkToWizard_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_TalkToWizard
struct UMission_MurderHobos_C_Obj_TalkToWizard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1052[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_TalkToWizard
struct UMission_MurderHobos_C_UPDATE_TalkToWizard_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_IntimidateOrSeduce
struct UMission_MurderHobos_C_Set_IntimidateOrSeduce_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_IntimidateWizard
struct UMission_MurderHobos_C_Obj_IntimidateWizard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_IntimidateWizard
struct UMission_MurderHobos_C_UPDATE_IntimidateWizard_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_SeduceWizard
struct UMission_MurderHobos_C_Obj_SeduceWizard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_111A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_SeduceWizard
struct UMission_MurderHobos_C_UPDATE_SeduceWizard_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_Intimidated
struct UMission_MurderHobos_C_Set_Intimidated_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.ADVANCE_CatchWizard
struct UMission_MurderHobos_C_ADVANCE_CatchWizard_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_CatchWizard
struct UMission_MurderHobos_C_Set_CatchWizard_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_CatchWizard
struct UMission_MurderHobos_C_Obj_CatchWizard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1199[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_CatchWizard
struct UMission_MurderHobos_C_UPDATE_CatchWizard_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_PickUpMap
struct UMission_MurderHobos_C_Set_PickUpMap_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_PickUpMap
struct UMission_MurderHobos_C_Obj_PickUpMap_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_PickUpMap
struct UMission_MurderHobos_C_UPDATE_PickUpMap_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_FindTomb
struct UMission_MurderHobos_C_Set_FindTomb_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_FindTomb
struct UMission_MurderHobos_C_Obj_FindTomb_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_124C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_FindTomb
struct UMission_MurderHobos_C_UPDATE_FindTomb_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_PassGate
struct UMission_MurderHobos_C_Set_PassGate_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_PassGate
struct UMission_MurderHobos_C_Obj_PassGate_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1294[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_PassGate
struct UMission_MurderHobos_C_UPDATE_PassGate_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_DistractGuard
struct UMission_MurderHobos_C_Obj_DistractGuard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_DistractGuard
struct UMission_MurderHobos_C_UPDATE_DistractGuard_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_BribeGuard
struct UMission_MurderHobos_C_Obj_BribeGuard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_BribeGuard
struct UMission_MurderHobos_C_UPDATE_BribeGuard_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_SeduceGaurd
struct UMission_MurderHobos_C_Obj_SeduceGaurd_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1347[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_SeduceGaurd
struct UMission_MurderHobos_C_UPDATE_SeduceGaurd_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_FindTomb02
struct UMission_MurderHobos_C_Set_FindTomb02_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.ADVANCETO_PassGate
struct UMission_MurderHobos_C_ADVANCETO_PassGate_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_KillGuardians
struct UMission_MurderHobos_C_Set_KillGuardians_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_KillGuardians
struct UMission_MurderHobos_C_OBJ_KillGuardians_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_OpenTomb
struct UMission_MurderHobos_C_Set_OpenTomb_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_OpenTomb
struct UMission_MurderHobos_C_OBJ_OpenTomb_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_OpenTomb
struct UMission_MurderHobos_C_UPDATE_OpenTomb_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_KillGuardians
struct UMission_MurderHobos_C_UPDATE_KillGuardians_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_FindArtifact
struct UMission_MurderHobos_C_Set_FindArtifact_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_FindArtifact
struct UMission_MurderHobos_C_OBJ_FindArtifact_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_143B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_FindArtifact
struct UMission_MurderHobos_C_UPDATE_FindArtifact_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_PickUpArtifact
struct UMission_MurderHobos_C_Set_PickUpArtifact_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_PickUpArtifact
struct UMission_MurderHobos_C_OBJ_PickUpArtifact_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1489[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_PickUpArtifact
struct UMission_MurderHobos_C_UPDATE_PickUpArtifact_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_KillAncientGuardian
struct UMission_MurderHobos_C_Set_KillAncientGuardian_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_KillAncientGuardian
struct UMission_MurderHobos_C_OBJ_KillAncientGuardian_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_KillAncientGuardian
struct UMission_MurderHobos_C_UPDATE_KillAncientGuardian_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_Seduced
struct UMission_MurderHobos_C_Set_Seduced_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_PlaceIncantation
struct UMission_MurderHobos_C_Set_PlaceIncantation_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_PlaceIncantation
struct UMission_MurderHobos_C_OBJ_PlaceIncantation_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1537[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_PlaceIncantation
struct UMission_MurderHobos_C_UPDATE_PlaceIncantation_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_PickUpSkulls
struct UMission_MurderHobos_C_Set_PickUpSkulls_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_PickUpSkulls
struct UMission_MurderHobos_C_OBJ_PickUpSkulls_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1583[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_PickUpSkulls
struct UMission_MurderHobos_C_UPDATE_PickUpSkulls_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_OpenGate
struct UMission_MurderHobos_C_Obj_OpenGate_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.ObjINVIS_PlaceSkull1
struct UMission_MurderHobos_C_ObjINVIS_PlaceSkull1_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_PlaceSkull1
struct UMission_MurderHobos_C_UPDATE_PlaceSkull1_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.ObjINVIS_PlaceSkull2
struct UMission_MurderHobos_C_ObjINVIS_PlaceSkull2_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_161B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_PlaceSkull2
struct UMission_MurderHobos_C_UPDATE_PlaceSkull2_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_OpenGate
struct UMission_MurderHobos_C_UPDATE_OpenGate_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_GiveScroll
struct UMission_MurderHobos_C_Set_GiveScroll_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_GiveScroll
struct UMission_MurderHobos_C_OBJ_GiveScroll_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_GiveScroll
struct UMission_MurderHobos_C_UPDATE_GiveScroll_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_AncientGuardian
struct UMission_MurderHobos_C_Set_AncientGuardian_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_AttackAncientGuardian
struct UMission_MurderHobos_C_Obj_AttackAncientGuardian_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1740[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_SeduceAncientGuardian
struct UMission_MurderHobos_C_Obj_SeduceAncientGuardian_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1755[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_INVISListenToAncientGuardian
struct UMission_MurderHobos_C_Obj_INVISListenToAncientGuardian_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_176A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_SeduceAncientGuardian
struct UMission_MurderHobos_C_UPDATE_SeduceAncientGuardian_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_AttackAncientGuardian
struct UMission_MurderHobos_C_UPDATE_AttackAncientGuardian_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Thwart_ListentoAncientGuardian
struct UMission_MurderHobos_C_Thwart_ListentoAncientGuardian_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_TalkToGuard
struct UMission_MurderHobos_C_Set_TalkToGuard_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Obj_TalkToGuard
struct UMission_MurderHobos_C_Obj_TalkToGuard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_TalkToGuard
struct UMission_MurderHobos_C_UPDATE_TalkToGuard_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_GoblinDistracted
struct UMission_MurderHobos_C_Set_GoblinDistracted_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.VO_ApproachWizard
struct UMission_MurderHobos_C_VO_ApproachWizard_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_GoblinBribed
struct UMission_MurderHobos_C_Set_GoblinBribed_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_GoblinSeduced
struct UMission_MurderHobos_C_Set_GoblinSeduced_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.CloseGate_GuardianSpeech
struct UMission_MurderHobos_C_CloseGate_GuardianSpeech_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_BribeGuard02
struct UMission_MurderHobos_C_Set_BribeGuard02_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_BribeGuard2
struct UMission_MurderHobos_C_OBJ_BribeGuard2_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1882[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_BribeGuard2
struct UMission_MurderHobos_C_UPDATE_BribeGuard2_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_SeduceGuard2
struct UMission_MurderHobos_C_Set_SeduceGuard2_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_SeduceGuard2
struct UMission_MurderHobos_C_OBJ_SeduceGuard2_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_SeduceGuard2
struct UMission_MurderHobos_C_UPDATE_SeduceGuard2_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.Set_LeaveTomb
struct UMission_MurderHobos_C_Set_LeaveTomb_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.ADVANCETO_BribeGuard2
struct UMission_MurderHobos_C_ADVANCETO_BribeGuard2_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.ADVANCETO_SeduceGuard2
struct UMission_MurderHobos_C_ADVANCETO_SeduceGuard2_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.GuardianKilledEarlyFailsafe
struct UMission_MurderHobos_C_GuardianKilledEarlyFailsafe_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.SET_PosterKickoff
struct UMission_MurderHobos_C_SET_PosterKickoff_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_PosterKickoff
struct UMission_MurderHobos_C_OBJ_PosterKickoff_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_199E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.SET_NPCKickoff
struct UMission_MurderHobos_C_SET_NPCKickoff_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_NPCKickoff
struct UMission_MurderHobos_C_OBJ_NPCKickoff_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.UPDATE_PosterKickoff
struct UMission_MurderHobos_C_UPDATE_PosterKickoff_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.OBJ_INVIS_SeductionReward
struct UMission_MurderHobos_C_OBJ_INVIS_SeductionReward_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6652 (0x6652 - 0x0)
// Function Mission_MurderHobos.Mission_MurderHobos_C.ExecuteUbergraph_Mission_MurderHobos
struct UMission_MurderHobos_C_ExecuteUbergraph_Mission_MurderHobos_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EEE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue;             // 0x8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation;       // 0x220(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EF2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs;    // 0x230(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue;        // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EF7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue1;            // 0x248(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation1;      // 0x460(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1;   // 0x470(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue1;       // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue2;            // 0x488(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation2;      // 0x6A0(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2;   // 0x6B0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue2;       // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue3;            // 0x6C8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation3;      // 0x8E0(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3;   // 0x8F0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue3;       // 0x900(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue4;            // 0x908(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation4;      // 0xB20(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4;   // 0xB30(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue4;       // 0xB40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F27[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue5;            // 0xB48(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation5;      // 0xD60(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs5;   // 0xD70(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue5;       // 0xD80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue6;            // 0xD88(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation6;      // 0xFA0(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F31[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs6;   // 0xFB0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue6;       // 0xFC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue7;            // 0xFC8(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue8;            // 0x11E0(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue9;            // 0x13F8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation7;      // 0x1610(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs7;   // 0x1620(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue7;       // 0x1630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue10;           // 0x1638(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue11;           // 0x1850(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation8;      // 0x1A68(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs8;   // 0x1A78(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue8;       // 0x1A88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation9;      // 0x1A8C(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs9;   // 0x1A98(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue9;       // 0x1AA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation10;     // 0x1AAC(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs10;  // 0x1AB8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue10;      // 0x1AC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue12;           // 0x1AD0(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue13;           // 0x1CE8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation11;     // 0x1F00(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs11;  // 0x1F10(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue11;      // 0x1F20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation12;     // 0x1F24(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs12;  // 0x1F30(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue12;      // 0x1F40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue14;           // 0x1F48(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue15;           // 0x2160(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue16;           // 0x2378(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation13;     // 0x2590(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs13;  // 0x25A0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue13;      // 0x25B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue17;           // 0x25B8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation14;     // 0x27D0(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs14;  // 0x27E0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue14;      // 0x27F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue18;           // 0x27F8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation15;     // 0x2A10(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs15;  // 0x2A20(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue15;      // 0x2A30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue19;           // 0x2A38(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation16;     // 0x2C50(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs16;  // 0x2C60(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue16;      // 0x2C70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue20;           // 0x2C78(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation17;     // 0x2E90(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs17;  // 0x2EA0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue17;      // 0x2EB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue21;           // 0x2EB8(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue22;           // 0x30D0(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation18;     // 0x32E8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs18;  // 0x32F8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue18;      // 0x3308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FBE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation19;     // 0x330C(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs19;  // 0x3318(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue19;      // 0x3328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue23;           // 0x3330(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation20;     // 0x3548(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs20;  // 0x3558(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue20;      // 0x3568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue24;           // 0x3570(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation21;     // 0x3788(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FD8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs21;  // 0x3798(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue21;      // 0x37A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation22;     // 0x37AC(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs22;  // 0x37B8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue22;      // 0x37C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue25;           // 0x37D0(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation23;     // 0x39E8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs23;  // 0x39F8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue23;      // 0x3A08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation24;     // 0x3A0C(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs24;  // 0x3A18(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue24;      // 0x3A28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2001[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue26;           // 0x3A30(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation25;     // 0x3C48(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_200A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs25;  // 0x3C58(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue25;      // 0x3C68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_200F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue27;           // 0x3C70(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation26;     // 0x3E88(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2015[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs26;  // 0x3E98(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue26;      // 0x3EA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_201B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue28;           // 0x3EB0(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue29;           // 0x40C8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation27;     // 0x42E0(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2026[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs27;  // 0x42F0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue27;      // 0x4300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_202C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation28;     // 0x4304(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs28;  // 0x4310(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue28;      // 0x4320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_204A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue30;           // 0x4328(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation29;     // 0x4540(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_204F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs29;  // 0x4550(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue29;      // 0x4560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2055[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4568(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x4578(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x4588(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x4598(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x45A8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x45B8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x45C8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x45D8(0x10)(ZeroConstructor, NoDestructor)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation30;     // 0x45E8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2070[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs30;  // 0x45F8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue30;      // 0x4608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2075[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue31;           // 0x4610(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation31;     // 0x4828(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2079[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs31;  // 0x4838(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue31;      // 0x4848(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_207E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        K2Node_MakeStruct_DialogContext;                   // 0x4850(0x218)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x4A68(0x10)(ZeroConstructor, NoDestructor)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue32;           // 0x4A78(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation32;     // 0x4C90(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2082[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs32;  // 0x4CA0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue32;      // 0x4CB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2088[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x4CB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetCurrentlyTrackedMission_ReturnValue;   // 0x4CC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x4CC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_208C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x4CCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue33;           // 0x4CD0(0x218)(None)
	bool                                         Temp_bool_Variable;                                // 0x4EE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2093[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation33;     // 0x4EEC(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs33;  // 0x4EF8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue33;      // 0x4F08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2096[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue34;           // 0x4F10(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation34;     // 0x5128(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_209C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs34;  // 0x5138(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue34;      // 0x5148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue35;           // 0x5150(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation35;     // 0x5368(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs35;  // 0x5378(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue35;      // 0x5388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x5389(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue36;           // 0x5390(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation36;     // 0x55A8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs36;  // 0x55B8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue36;      // 0x55C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue37;           // 0x55D0(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation37;     // 0x57E8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs37;  // 0x57F8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue37;      // 0x5808(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Is_Playing_Variable;                     // 0x5809(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20C8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue38;           // 0x5810(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation38;     // 0x5A28(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs38;  // 0x5A38(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue38;      // 0x5A48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue39;           // 0x5A50(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue40;           // 0x5C68(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation39;     // 0x5E80(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs39;  // 0x5E90(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue39;      // 0x5EA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation40;     // 0x5EA4(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs40;  // 0x5EB0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue40;      // 0x5EC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent27; // 0x5EC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent30;     // 0x5EC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20FD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount30;     // 0x5EC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents30; // 0x5EC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2105[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context35;        // 0x5ED0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5ED8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent26; // 0x5ED9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent29;     // 0x5EDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_210C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount29;     // 0x5EDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents29; // 0x5EE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2111[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context34;        // 0x5EE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x5EF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent25; // 0x5EF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent28;     // 0x5EF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2118[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount28;     // 0x5EF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents28; // 0x5EF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_211C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context33;        // 0x5F00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0x5F08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2121[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x5F0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent27;     // 0x5F10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2129[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount27;     // 0x5F14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents27; // 0x5F18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum3_CmpSuccess;                     // 0x5F19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_212F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context32;        // 0x5F20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent24; // 0x5F28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2132[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context31;        // 0x5F30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum4_CmpSuccess;                     // 0x5F38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent23; // 0x5F39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent26;     // 0x5F3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2137[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount26;     // 0x5F3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents26; // 0x5F40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2138[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context30;        // 0x5F48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum5_CmpSuccess;                     // 0x5F50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent22; // 0x5F51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent25;     // 0x5F52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_213C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount25;     // 0x5F54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents25; // 0x5F58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2141[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context29;        // 0x5F60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum6_CmpSuccess;                     // 0x5F68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2146[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_NewDialogConversation_ReturnValue;        // 0x5F6C(0xC)(NoDestructor, HasGetValueTypeHash)
	struct FDialogConversation                   CallFunc_FinishSpeak_Conversation;                 // 0x5F78(0xC)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FinishSpeak_SequenceID;                   // 0x5F84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinishSpeak_ReturnValue;                  // 0x5F88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_214E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0x5F90(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent21; // 0x5FA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent24;     // 0x5FA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2153[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount24;     // 0x5FA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents24; // 0x5FA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2156[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context28;        // 0x5FB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum7_CmpSuccess;                     // 0x5FB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent20; // 0x5FB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent23;     // 0x5FBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_215C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount23;     // 0x5FBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents23; // 0x5FC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_215E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context27;        // 0x5FC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum8_CmpSuccess;                     // 0x5FD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent22;     // 0x5FD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2164[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount22;     // 0x5FD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents22; // 0x5FD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2178[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate10;            // 0x5FE0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum9_CmpSuccess;                     // 0x5FF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_217A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context26;        // 0x5FF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent21;     // 0x6000(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_217C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount21;     // 0x6004(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents21; // 0x6008(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_217F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context25;        // 0x6010(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum10_CmpSuccess;                    // 0x6018(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent20;     // 0x6019(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2188[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount20;     // 0x601C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20; // 0x6020(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_218C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context24;        // 0x6028(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum11_CmpSuccess;                    // 0x6030(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x6031(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent19; // 0x6032(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2196[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context23;        // 0x6038(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18; // 0x6040(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent19;     // 0x6041(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_219A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount19;     // 0x6044(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19; // 0x6048(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17; // 0x6049(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum12_CmpSuccess;                    // 0x604A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent18;     // 0x604B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount18;     // 0x604C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18; // 0x6050(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context22;        // 0x6058(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum13_CmpSuccess;                    // 0x6060(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context21;        // 0x6068(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16; // 0x6070(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable1;                // 0x6071(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent17;     // 0x6072(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21B1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount17;     // 0x6074(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17; // 0x6078(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum14_CmpSuccess;                    // 0x6079(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21DF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context20;        // 0x6080(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15; // 0x6088(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent16;     // 0x6089(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21E7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount16;     // 0x608C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16; // 0x6090(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context19;        // 0x6098(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum15_CmpSuccess;                    // 0x60A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14; // 0x60A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent15;     // 0x60A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21F0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount15;     // 0x60A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15; // 0x60A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context18;        // 0x60B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum16_CmpSuccess;                    // 0x60B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue;           // 0x60B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue1;          // 0x60BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13; // 0x60BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum17_CmpSuccess;                    // 0x60BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue2;          // 0x60BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue3;          // 0x60BE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue4;          // 0x60BF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12; // 0x60C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent14;     // 0x60C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2212[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount14;     // 0x60C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14; // 0x60C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2217[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context17;        // 0x60D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum18_CmpSuccess;                    // 0x60D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11; // 0x60D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent13;     // 0x60DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_221C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount13;     // 0x60DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13; // 0x60E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_221E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context16;        // 0x60E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum19_CmpSuccess;                    // 0x60F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent12;     // 0x60F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2222[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount12;     // 0x60F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12; // 0x60F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent11;     // 0x60F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2224[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount11;     // 0x60FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11; // 0x6100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2226[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context15;        // 0x6108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum20_CmpSuccess;                    // 0x6110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent10;     // 0x6111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2229[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount10;     // 0x6114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10; // 0x6118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_222F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context14;        // 0x6120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum21_CmpSuccess;                    // 0x6128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2232[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context13;        // 0x6130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10; // 0x6138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent9;      // 0x6139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2238[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount9;      // 0x613C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9; // 0x6140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_223C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context12;        // 0x6148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum22_CmpSuccess;                    // 0x6150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue5;          // 0x6151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue6;          // 0x6152(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9; // 0x6153(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent8;      // 0x6154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2244[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount8;      // 0x6158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8; // 0x615C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum23_CmpSuccess;                    // 0x615D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum24_CmpSuccess;                    // 0x615E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent7;      // 0x615F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount7;      // 0x6160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7; // 0x6164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent6;      // 0x6165(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2253[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount6;      // 0x6168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6; // 0x616C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum25_CmpSuccess;                    // 0x616D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum26_CmpSuccess;                    // 0x616E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2258[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context11;        // 0x6170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context10;        // 0x6178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue7;          // 0x6180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue8;          // 0x6181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue9;          // 0x6182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_225C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context9;         // 0x6188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate11;            // 0x6190(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x61A0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate13;            // 0x61B0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate14;            // 0x61C0(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue; // 0x61D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2261[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate15;            // 0x61D8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum27_CmpSuccess;                    // 0x61E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8; // 0x61E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent5;      // 0x61EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2267[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount5;      // 0x61EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5; // 0x61F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2268[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context8;         // 0x61F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum28_CmpSuccess;                    // 0x6200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_226C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate16;            // 0x6208(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate17;            // 0x6218(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7; // 0x6228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2276[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context7;         // 0x6230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6; // 0x6238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5; // 0x6239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue10;         // 0x623A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue11;         // 0x623B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue1; // 0x623C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum29_CmpSuccess;                    // 0x623D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_227C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate18;            // 0x6240(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate19;            // 0x6250(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue2; // 0x6260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum30_CmpSuccess;                    // 0x6261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_227F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate20;            // 0x6268(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue3; // 0x6278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum31_CmpSuccess;                    // 0x6279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue4; // 0x627A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2282[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate21;            // 0x6280(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum32_CmpSuccess;                    // 0x6290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2286[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate22;            // 0x6298(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue12;         // 0x62A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_228C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate23;            // 0x62B0(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context6;         // 0x62C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4; // 0x62C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent4;      // 0x62C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount4;      // 0x62CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4; // 0x62D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context5;         // 0x62D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum33_CmpSuccess;                    // 0x62E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3; // 0x62E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent3;      // 0x62E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22B9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount3;      // 0x62E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3; // 0x62E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context4;         // 0x62F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum34_CmpSuccess;                    // 0x62F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2; // 0x62F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22D0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context3;         // 0x6300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum35_CmpSuccess;                    // 0x6308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context2;         // 0x6310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate24;            // 0x6318(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue13;         // 0x6328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue14;         // 0x6329(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22F0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate25;            // 0x6330(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate26;            // 0x6340(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue5; // 0x6350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum36_CmpSuccess;                    // 0x6351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue15;         // 0x6352(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue16;         // 0x6353(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2306[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context1;         // 0x6358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x6360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable1;                      // 0x6361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1; // 0x6362(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2317[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate27;            // 0x6368(0x10)(ZeroConstructor, NoDestructor)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue41;           // 0x6378(0x218)(None)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue17;         // 0x6590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_231E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation41;     // 0x6594(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs41;  // 0x65A0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue41;      // 0x65B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue6; // 0x65B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum37_CmpSuccess;                    // 0x65B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue18;         // 0x65B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue19;         // 0x65B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate28;            // 0x65B8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue20;         // 0x65C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue21;         // 0x65C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue7; // 0x65CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum38_CmpSuccess;                    // 0x65CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate29;            // 0x65D0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate30;            // 0x65E0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue22;         // 0x65F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1; // 0x65F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent2;      // 0x65F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23BB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount2;      // 0x65F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2; // 0x65F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent; // 0x65F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum39_CmpSuccess;                    // 0x65FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent1;      // 0x65FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount1;      // 0x65FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1; // 0x6600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum40_CmpSuccess;                    // 0x6601(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23CE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context;          // 0x6608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent;       // 0x6610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount;       // 0x6614(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents; // 0x6618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate31;            // 0x6620(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue8; // 0x6630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum41_CmpSuccess;                    // 0x6631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue9; // 0x6632(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue10; // 0x6633(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum42_CmpSuccess;                    // 0x6634(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum43_CmpSuccess;                    // 0x6635(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveStatus           CallFunc_GetMissionObjectiveStatusRef_ReturnValue11; // 0x6636(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue23;         // 0x6637(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum44_CmpSuccess;                    // 0x6638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue24;         // 0x6639(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue25;         // 0x663A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue26;         // 0x663B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate32;            // 0x6640(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue27;         // 0x6650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue28;         // 0x6651(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


