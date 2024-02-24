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
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WastardInPlace
struct UMission_Plot08_C_UPDATE_WastardInPlace_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_JawSequenceComplete
struct UMission_Plot08_C_UPDATE_JawSequenceComplete_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_GetToJaw
struct UMission_Plot08_C_Obj_GetToJaw_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_GetToJaw
struct UMission_Plot08_C_Set_GetToJaw_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_JawReached
struct UMission_Plot08_C_UPDATE_JawReached_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_GetToJaw_Breadcrumb01
struct UMission_Plot08_C_INVIS_Obj_GetToJaw_Breadcrumb01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_GetToJaw_Breadcrumb02
struct UMission_Plot08_C_INVIS_Obj_GetToJaw_Breadcrumb02_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_GoToJawBreadcrumb02
struct UMission_Plot08_C_UPDATE_GoToJawBreadcrumb02_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_GoToJawBreadcrumb01
struct UMission_Plot08_C_UPDATE_GoToJawBreadcrumb01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_KillUndeadAtJaw
struct UMission_Plot08_C_Obj_KillUndeadAtJaw_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_KillUndeadAtJaw
struct UMission_Plot08_C_Set_KillUndeadAtJaw_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_UndeadAtJawKilled
struct UMission_Plot08_C_UPDATE_UndeadAtJawKilled_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_DefendWastard
struct UMission_Plot08_C_Set_DefendWastard_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_DefendWastard
struct UMission_Plot08_C_Obj_DefendWastard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WastardDefended
struct UMission_Plot08_C_UPDATE_WastardDefended_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_UseElevator
struct UMission_Plot08_C_Set_UseElevator_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_UseElevator
struct UMission_Plot08_C_Obj_UseElevator_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_UseElevator
struct UMission_Plot08_C_UPDATE_UseElevator_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_RelicLocationReached
struct UMission_Plot08_C_UPDATE_RelicLocationReached_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_FindRelicLocation_Breadrcumb01
struct UMission_Plot08_C_INVIS_Obj_FindRelicLocation_Breadrcumb01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_FindRelicLocation_Breadrcumb01
struct UMission_Plot08_C_UPDATE_FindRelicLocation_Breadrcumb01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_InvestigateRelics
struct UMission_Plot08_C_Set_InvestigateRelics_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_InvestigateRelics
struct UMission_Plot08_C_Obj_InvestigateRelics_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_InvestigateRelic01
struct UMission_Plot08_C_Invis_Obj_InvestigateRelic01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_InvestigateRelic02
struct UMission_Plot08_C_Invis_Obj_InvestigateRelic02_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_InvestigateRelic03
struct UMission_Plot08_C_Invis_Obj_InvestigateRelic03_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D11[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_Relic1Investigated
struct UMission_Plot08_C_UPDATE_Relic1Investigated_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_Relic2Investigated
struct UMission_Plot08_C_UPDATE_Relic2Investigated_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_Relic3Investigated
struct UMission_Plot08_C_UPDATE_Relic3Investigated_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_GoToMechanism
struct UMission_Plot08_C_Set_GoToMechanism_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_FindGoodRelic
struct UMission_Plot08_C_Obj_FindGoodRelic_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_TakeRelic
struct UMission_Plot08_C_Obj_TakeRelic_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_FindGoodRelic
struct UMission_Plot08_C_Set_FindGoodRelic_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_TakeRelic
struct UMission_Plot08_C_Set_TakeRelic_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_GoodRelicFound
struct UMission_Plot08_C_UPDATE_GoodRelicFound_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_RelicTaken
struct UMission_Plot08_C_UPDATE_RelicTaken_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_GoToMechanism
struct UMission_Plot08_C_Obj_GoToMechanism_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E00[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_MechanismReached
struct UMission_Plot08_C_UPDATE_MechanismReached_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_GoToMechanism01
struct UMission_Plot08_C_INVIS_Obj_GoToMechanism01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E28[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_GoToMechanism02
struct UMission_Plot08_C_INVIS_Obj_GoToMechanism02_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_GoToMechanism03
struct UMission_Plot08_C_INVIS_Obj_GoToMechanism03_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E65[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_GoToMechanism_Breadcrumb02
struct UMission_Plot08_C_UPDATE_GoToMechanism_Breadcrumb02_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_GoToMechanism_Breadcrumb03
struct UMission_Plot08_C_UPDATE_GoToMechanism_Breadcrumb03_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_GoToMechanism_Breadcrumb01
struct UMission_Plot08_C_UPDATE_GoToMechanism_Breadcrumb01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_PlaceRelic
struct UMission_Plot08_C_Set_PlaceRelic_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_PlaceRelic
struct UMission_Plot08_C_Obj_PlaceRelic_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_RelicPlaced
struct UMission_Plot08_C_UPDATE_RelicPlaced_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_JawActivation_SequenceHelper
struct UMission_Plot08_C_Invis_Obj_JawActivation_SequenceHelper_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ED4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_JawActivationSequenceComplete
struct UMission_Plot08_C_UPDATE_JawActivationSequenceComplete_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_GoToWorkingJaw
struct UMission_Plot08_C_Set_GoToWorkingJaw_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_GoToWorkingJaw
struct UMission_Plot08_C_Obj_GoToWorkingJaw_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F19[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WorkingJawReached
struct UMission_Plot08_C_UPDATE_WorkingJawReached_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_JawElevatorRide
struct UMission_Plot08_C_Set_JawElevatorRide_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_RideElevator
struct UMission_Plot08_C_Obj_RideElevator_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F49[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_ElevatorRideComplete
struct UMission_Plot08_C_UPDATE_ElevatorRideComplete_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_EnterWastardArena
struct UMission_Plot08_C_Obj_EnterWastardArena_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F61[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_EnterWastardArena
struct UMission_Plot08_C_Set_EnterWastardArena_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WastardArenaEntered
struct UMission_Plot08_C_UPDATE_WastardArenaEntered_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_KillWastard
struct UMission_Plot08_C_Set_KillWastard_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_KillWastard
struct UMission_Plot08_C_Obj_KillWastard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WastardKilled
struct UMission_Plot08_C_UPDATE_WastardKilled_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_FollowWastardToShrine
struct UMission_Plot08_C_Set_FollowWastardToShrine_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_FollowWastardToShrine
struct UMission_Plot08_C_Obj_FollowWastardToShrine_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2021[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_CleanseDeathFog
struct UMission_Plot08_C_Set_CleanseDeathFog_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_GetCursed
struct UMission_Plot08_C_Obj_GetCursed_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2037[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_CleanseDeathFog
struct UMission_Plot08_C_Obj_CleanseDeathFog_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_204C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_GetCursed
struct UMission_Plot08_C_Set_GetCursed_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_ReachedShrineWithWastard
struct UMission_Plot08_C_UPDATE_ReachedShrineWithWastard_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_CurseFinished
struct UMission_Plot08_C_UPDATE_CurseFinished_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_DeathFogCleansed
struct UMission_Plot08_C_UPDATE_DeathFogCleansed_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_WaitForWastard
struct UMission_Plot08_C_Set_WaitForWastard_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_JawBreakSequenceHelper
struct UMission_Plot08_C_INVIS_Obj_JawBreakSequenceHelper_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_WaitForWastard
struct UMission_Plot08_C_Obj_WaitForWastard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WastardFollowed
struct UMission_Plot08_C_UPDATE_WastardFollowed_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_FollowWastard
struct UMission_Plot08_C_Obj_FollowWastard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2128[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_FollowWastard
struct UMission_Plot08_C_Set_FollowWastard_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_ElevatorReached
struct UMission_Plot08_C_UPDATE_ElevatorReached_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_GoToSmallElevator
struct UMission_Plot08_C_Obj_GoToSmallElevator_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_217B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_GoToSmallElevator
struct UMission_Plot08_C_Set_GoToSmallElevator_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_GoToSmallElevator_Breadcrumb01
struct UMission_Plot08_C_Obj_GoToSmallElevator_Breadcrumb01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_GoToSmallElevator_Breadcrumb02
struct UMission_Plot08_C_Obj_GoToSmallElevator_Breadcrumb02_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_SmallElevatorBreadcrumb01
struct UMission_Plot08_C_UPDATE_SmallElevatorBreadcrumb01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_SmallElevatorBreadcrumb02
struct UMission_Plot08_C_UPDATE_SmallElevatorBreadcrumb02_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_GoToJawBreadcrumb03
struct UMission_Plot08_C_UPDATE_GoToJawBreadcrumb03_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_GetToJaw_Breadcrumb03
struct UMission_Plot08_C_INVIS_Obj_GetToJaw_Breadcrumb03_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_FindGoodRelic_Breadcrumb01
struct UMission_Plot08_C_INVIS_Obj_FindGoodRelic_Breadcrumb01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_FindGoodRelic_Breadcrumb02
struct UMission_Plot08_C_INVIS_Obj_FindGoodRelic_Breadcrumb02_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2218[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_FindGoodRelic_Breadcrumb01
struct UMission_Plot08_C_UPDATE_FindGoodRelic_Breadcrumb01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_FindGoodRelic_Breadcrumb02
struct UMission_Plot08_C_UPDATE_FindGoodRelic_Breadcrumb02_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_BreakWall
struct UMission_Plot08_C_Set_BreakWall_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_BreakWall
struct UMission_Plot08_C_Obj_BreakWall_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_224F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WallBroken
struct UMission_Plot08_C_UPDATE_WallBroken_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_WaitForWastardBodyBack
struct UMission_Plot08_C_Set_WaitForWastardBodyBack_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_WaitForWastardBodyBack
struct UMission_Plot08_C_Obj_WaitForWastardBodyBack_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2273[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WastardHasBodyBack
struct UMission_Plot08_C_UPDATE_WastardHasBodyBack_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_ShootCrystalPlatform
struct UMission_Plot08_C_Obj_ShootCrystalPlatform_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2290[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_ShootCrystalPlatform
struct UMission_Plot08_C_Set_ShootCrystalPlatform_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_CrystalPlatformShot
struct UMission_Plot08_C_UPDATE_CrystalPlatformShot_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_FindRelicLocationPt1
struct UMission_Plot08_C_Set_FindRelicLocationPt1_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_FindRelicLocationPt1
struct UMission_Plot08_C_Obj_FindRelicLocationPt1_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2303[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_CrystalPlatformReached
struct UMission_Plot08_C_UPDATE_CrystalPlatformReached_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_FindRelicLocationPt2
struct UMission_Plot08_C_Set_FindRelicLocationPt2_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_FindRelicLocationPt2
struct UMission_Plot08_C_Obj_FindRelicLocationPt2_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_235E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_FindRelicLocationPt2_Breadrcumb01
struct UMission_Plot08_C_INVIS_Obj_FindRelicLocationPt2_Breadrcumb01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2384[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_FindRelicLocationPt2_Breadrcumb01
struct UMission_Plot08_C_UPDATE_FindRelicLocationPt2_Breadrcumb01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_FindRelicLocationPt2_Breadrcumb02
struct UMission_Plot08_C_INVIS_Obj_FindRelicLocationPt2_Breadrcumb02_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_FindRelicLocationPt2_Breadrcumb02
struct UMission_Plot08_C_UPDATE_FindRelicLocationPt2_Breadrcumb02_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_GoToJawReveal
struct UMission_Plot08_C_Set_GoToJawReveal_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_GoToJawReveal
struct UMission_Plot08_C_INVIS_Obj_GoToJawReveal_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_246A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_JawRevealReached
struct UMission_Plot08_C_UPDATE_JawRevealReached_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_OVERARCHING_GetWastardsBodyBack
struct UMission_Plot08_C_Obj_OVERARCHING_GetWastardsBodyBack_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_248E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_GoToJawReveal_Breadcrumb01
struct UMission_Plot08_C_INVIS_Obj_GoToJawReveal_Breadcrumb01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_GoToJawReveal_Breadcrumb01
struct UMission_Plot08_C_UPDATE_GoToJawReveal_Breadcrumb01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Inv_OverworldMoment01
struct UMission_Plot08_C_Inv_OverworldMoment01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Update_OverworldMoment01
struct UMission_Plot08_C_Update_OverworldMoment01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_InvestigateStrangeItem
struct UMission_Plot08_C_Set_InvestigateStrangeItem_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_StrangeItemInvetigated
struct UMission_Plot08_C_UPDATE_StrangeItemInvetigated_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_InvestigateStrangeItem
struct UMission_Plot08_C_Obj_InvestigateStrangeItem_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_CursingRitual
struct UMission_Plot08_C_Set_CursingRitual_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_CursingRitual
struct UMission_Plot08_C_Obj_CursingRitual_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2527[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_PermissionGiven
struct UMission_Plot08_C_UPDATE_PermissionGiven_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_StrangerTalkedTo
struct UMission_Plot08_C_UPDATE_StrangerTalkedTo_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_ArrivedAtClimb
struct UMission_Plot08_C_UPDATE_ArrivedAtClimb_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_ExploreFurther
struct UMission_Plot08_C_Obj_ExploreFurther_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2569[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_ExploreFurther
struct UMission_Plot08_C_Set_ExploreFurther_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_StrangeItemFound
struct UMission_Plot08_C_UPDATE_StrangeItemFound_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_InspectRudeRelic
struct UMission_Plot08_C_Set_InspectRudeRelic_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_InspectRudeRelic
struct UMission_Plot08_C_Obj_InspectRudeRelic_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_RudeRelicInspected
struct UMission_Plot08_C_UPDATE_RudeRelicInspected_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_ShootCrystal
struct UMission_Plot08_C_Obj_ShootCrystal_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_FloatingPlatformShot
struct UMission_Plot08_C_UPDATE_FloatingPlatformShot_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_ShootCrystal_Cleared
struct UMission_Plot08_C_Invis_Obj_ShootCrystal_Cleared_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_TalkToStranger
struct UMission_Plot08_C_Obj_TalkToStranger_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2606[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_JawRitual
struct UMission_Plot08_C_Obj_JawRitual_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2622[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_RitualSequenceComplete
struct UMission_Plot08_C_UPDATE_RitualSequenceComplete_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_ParticipateInRitual
struct UMission_Plot08_C_Set_ParticipateInRitual_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_InvestigateWastardsBody
struct UMission_Plot08_C_Set_InvestigateWastardsBody_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_InvestigateWastardsBody
struct UMission_Plot08_C_Obj_InvestigateWastardsBody_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_268C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_WastardPossession_SequenceHelper
struct UMission_Plot08_C_Invis_Obj_WastardPossession_SequenceHelper_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_PossessionComplete
struct UMission_Plot08_C_UPDATE_PossessionComplete_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WastardReachedBossRoomNode
struct UMission_Plot08_C_UPDATE_WastardReachedBossRoomNode_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_GoToWastard
struct UMission_Plot08_C_Set_GoToWastard_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_GoToWastard
struct UMission_Plot08_C_Obj_GoToWastard_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WastardApproachedAfterFight
struct UMission_Plot08_C_UPDATE_WastardApproachedAfterFight_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_OVERARCHING_RepairJaw
struct UMission_Plot08_C_Obj_OVERARCHING_RepairJaw_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_OVERARCHING_FindPowerfulRelic
struct UMission_Plot08_C_Obj_OVERARCHING_FindPowerfulRelic_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_276D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_FindRelicLocation_Breadcrumb02
struct UMission_Plot08_C_INVIS_Obj_FindRelicLocation_Breadcrumb02_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_FindRelicLocation_Breadrcumb02
struct UMission_Plot08_C_UPDATE_FindRelicLocation_Breadrcumb02_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_RelicRoomIntroCombat
struct UMission_Plot08_C_Obj_RelicRoomIntroCombat_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_RelicRoomTracker
struct UMission_Plot08_C_INVIS_Obj_RelicRoomTracker_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_280A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_RelicCombatComplete
struct UMission_Plot08_C_UPDATE_RelicCombatComplete_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_RelicRoomEntered
struct UMission_Plot08_C_INVIS_Obj_RelicRoomEntered_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2829[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_OVERARCHING_WastardBodyBack
struct UMission_Plot08_C_UPDATE_OVERARCHING_WastardBodyBack_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_RelicInvestigated
struct UMission_Plot08_C_UPDATE_RelicInvestigated_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_FindAWayUp
struct UMission_Plot08_C_Obj_FindAWayUp_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_285C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_WastardDispellsSecondHex
struct UMission_Plot08_C_Invis_Obj_WastardDispellsSecondHex_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_286F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_TalkToStranger
struct UMission_Plot08_C_Set_TalkToStranger_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WastardDispelledSecondHex
struct UMission_Plot08_C_UPDATE_WastardDispelledSecondHex_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_FindRelicLocation_Breadrcumb03
struct UMission_Plot08_C_UPDATE_FindRelicLocation_Breadrcumb03_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_FindRelicLocation_Breadcrumb03
struct UMission_Plot08_C_INVIS_Obj_FindRelicLocation_Breadcrumb03_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2915[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_CursingRitualFeedbackHolder
struct UMission_Plot08_C_Invis_Obj_CursingRitualFeedbackHolder_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2925[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_CursingRitualFeedback
struct UMission_Plot08_C_UPDATE_CursingRitualFeedback_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_GoToWorkingJaw_Breadcrumb01
struct UMission_Plot08_C_Invis_Obj_GoToWorkingJaw_Breadcrumb01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2959[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_GoToWorkingJaw_Breadcrumb01
struct UMission_Plot08_C_UPDATE_GoToWorkingJaw_Breadcrumb01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_ReadProphecyScroll
struct UMission_Plot08_C_Obj_ReadProphecyScroll_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_298C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_ReadProphecyScroll
struct UMission_Plot08_C_Set_ReadProphecyScroll_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_AbyssBossProphecyScrollRead
struct UMission_Plot08_C_UPDATE_AbyssBossProphecyScrollRead_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_LeaveTheAbyss
struct UMission_Plot08_C_Set_LeaveTheAbyss_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_LeaveTheAbyss
struct UMission_Plot08_C_Obj_LeaveTheAbyss_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_ProphecyReached
struct UMission_Plot08_C_UPDATE_ProphecyReached_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_LeaveTheAbyss_Breadcrumb01
struct UMission_Plot08_C_Invis_Obj_LeaveTheAbyss_Breadcrumb01_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_LeaveTheAbyss_Breadcrumb01
struct UMission_Plot08_C_UPDATE_LeaveTheAbyss_Breadcrumb01_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_RelicRoomCombatHolder
struct UMission_Plot08_C_INVIS_Obj_RelicRoomCombatHolder_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_CursingWires_Controller
struct UMission_Plot08_C_Invis_Obj_CursingWires_Controller_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_ActivateWires
struct UMission_Plot08_C_UPDATE_ActivateWires_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_EliminateElevatorGuards
struct UMission_Plot08_C_Set_EliminateElevatorGuards_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_EliminateElevatorGuards
struct UMission_Plot08_C_Obj_EliminateElevatorGuards_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_ElevatorGuardsEliminated
struct UMission_Plot08_C_UPDATE_ElevatorGuardsEliminated_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.OBJ_INV_PyramidStormStateChange
struct UMission_Plot08_C_OBJ_INV_PyramidStormStateChange_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ACD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.INVIS_Obj_WastardLightsBrazier
struct UMission_Plot08_C_INVIS_Obj_WastardLightsBrazier_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_WastardIntroBrazierLit
struct UMission_Plot08_C_UPDATE_WastardIntroBrazierLit_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_WastardBodyHelper
struct UMission_Plot08_C_Invis_Obj_WastardBodyHelper_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_HideWastardsBody
struct UMission_Plot08_C_UPDATE_HideWastardsBody_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_SecondHexHelper
struct UMission_Plot08_C_Invis_Obj_SecondHexHelper_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.UPDATE_Open2ndHex
struct UMission_Plot08_C_UPDATE_Open2ndHex_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Invis_Obj_Wastard2ndBAMFHelper
struct UMission_Plot08_C_Invis_Obj_Wastard2ndBAMFHelper_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Obj_GoToClimb
struct UMission_Plot08_C_Obj_GoToClimb_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.MCE_ProphecyFinished
struct UMission_Plot08_C_MCE_ProphecyFinished_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.Set_GoToClimb
struct UMission_Plot08_C_Set_GoToClimb_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x66E3 (0x66E3 - 0x0)
// Function Mission_Plot08.Mission_Plot08_C.ExecuteUbergraph_Mission_Plot08
struct UMission_Plot08_C_ExecuteUbergraph_Mission_Plot08_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue;             // 0x8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation;       // 0x220(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs;    // 0x230(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue;        // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue1;            // 0x248(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation1;      // 0x460(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1;   // 0x470(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue1;       // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue2;            // 0x488(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation2;      // 0x6A0(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3104[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2;   // 0x6B0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue2;       // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_310C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue3;            // 0x6C8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation3;      // 0x8E0(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_310E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3;   // 0x8F0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue3;       // 0x900(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3112[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue4;            // 0x908(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue5;            // 0xB20(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation4;      // 0xD38(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_311B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4;   // 0xD48(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue4;       // 0xD58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_311F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue6;            // 0xD60(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation5;      // 0xF78(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3125[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs5;   // 0xF88(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue5;       // 0xF98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3129[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue7;            // 0xFA0(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation6;      // 0x11B8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_312F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs6;   // 0x11C8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue6;       // 0x11D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3133[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue8;            // 0x11E0(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation7;      // 0x13F8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_313A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs7;   // 0x1408(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue7;       // 0x1418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3147[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue9;            // 0x1420(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation8;      // 0x1638(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_314A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs8;   // 0x1648(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue8;       // 0x1658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_314D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue10;           // 0x1660(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation9;      // 0x1878(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3151[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs9;   // 0x1888(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue9;       // 0x1898(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3156[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue11;           // 0x18A0(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation10;     // 0x1AB8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_315B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs10;  // 0x1AC8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue10;      // 0x1AD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3160[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue12;           // 0x1AE0(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue13;           // 0x1CF8(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue14;           // 0x1F10(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation11;     // 0x2128(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3165[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs11;  // 0x2138(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue11;      // 0x2148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_316F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation12;     // 0x214C(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs12;  // 0x2158(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue12;      // 0x2168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3178[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue15;           // 0x2170(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue16;           // 0x2388(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation13;     // 0x25A0(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_317F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs13;  // 0x25B0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue13;      // 0x25C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3184[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation14;     // 0x25C4(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs14;  // 0x25D0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue14;      // 0x25E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3189[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue17;           // 0x25E8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation15;     // 0x2800(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_318F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs15;  // 0x2810(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue15;      // 0x2820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3192[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue18;           // 0x2828(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue19;           // 0x2A40(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation16;     // 0x2C58(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3197[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs16;  // 0x2C68(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue16;      // 0x2C78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_319B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation17;     // 0x2C7C(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs17;  // 0x2C88(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue17;      // 0x2C98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation18;     // 0x2C9C(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs18;  // 0x2CA8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue18;      // 0x2CB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue20;           // 0x2CC0(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue21;           // 0x2ED8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation19;     // 0x30F0(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs19;  // 0x3100(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue19;      // 0x3110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue22;           // 0x3118(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation20;     // 0x3330(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs20;  // 0x3340(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue20;      // 0x3350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue23;           // 0x3358(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation21;     // 0x3570(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs21;  // 0x3580(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue21;      // 0x3590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue24;           // 0x3598(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue25;           // 0x37B0(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue26;           // 0x39C8(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue27;           // 0x3BE0(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation22;     // 0x3DF8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs22;  // 0x3E08(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue22;      // 0x3E18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue28;           // 0x3E20(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation23;     // 0x4038(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs23;  // 0x4048(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue23;      // 0x4058(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue29;           // 0x4060(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation24;     // 0x4278(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs24;  // 0x4288(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue24;      // 0x4298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue30;           // 0x42A0(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation25;     // 0x44B8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs25;  // 0x44C8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue25;      // 0x44D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue31;           // 0x44E0(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation26;     // 0x46F8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs26;  // 0x4708(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue26;      // 0x4718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue32;           // 0x4720(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation27;     // 0x4938(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs27;  // 0x4948(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue27;      // 0x4958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue33;           // 0x4960(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation28;     // 0x4B78(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs28;  // 0x4B88(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue28;      // 0x4B98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue34;           // 0x4BA0(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue35;           // 0x4DB8(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation29;     // 0x4FD0(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs29;  // 0x4FE0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue29;      // 0x4FF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation30;     // 0x4FF4(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs30;  // 0x5000(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue30;      // 0x5010(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue36;           // 0x5018(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation31;     // 0x5230(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3200[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs31;  // 0x5240(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue31;      // 0x5250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3204[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue37;           // 0x5258(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation32;     // 0x5470(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3208[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs32;  // 0x5480(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue32;      // 0x5490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_320C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x5498(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x54A8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x54B8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x54C8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x54D8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x54E8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x54F8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x5508(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x5518(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0x5528(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate10;            // 0x5538(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate11;            // 0x5548(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context71;        // 0x5558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context70;        // 0x5560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue1;          // 0x5568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue2;          // 0x5569(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent79;     // 0x556A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3224[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount79;     // 0x556C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents79; // 0x5570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent36; // 0x5571(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5572(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_322A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context69;        // 0x5578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent78;     // 0x5580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount78;     // 0x5584(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents78; // 0x5588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x5589(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent77;     // 0x558A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3235[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount77;     // 0x558C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents77; // 0x5590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3238[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context68;        // 0x5598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context67;        // 0x55A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent76;     // 0x55A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount76;     // 0x55AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents76; // 0x55B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent35; // 0x55B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0x55B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3241[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context66;        // 0x55B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue3;          // 0x55C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent34; // 0x55C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent75;     // 0x55C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3244[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount75;     // 0x55C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents75; // 0x55C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3248[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context65;        // 0x55D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum3_CmpSuccess;                     // 0x55D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent33; // 0x55D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent74;     // 0x55DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3254[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount74;     // 0x55DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents74; // 0x55E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3256[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context64;        // 0x55E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum4_CmpSuccess;                     // 0x55F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3257[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context63;        // 0x55F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent73;     // 0x5600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3259[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount73;     // 0x5604(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents73; // 0x5608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_325C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context62;        // 0x5610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum5_CmpSuccess;                     // 0x5618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent32; // 0x5619(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent72;     // 0x561A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_325F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount72;     // 0x561C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents72; // 0x5620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent71;     // 0x5621(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3260[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount71;     // 0x5624(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents71; // 0x5628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum6_CmpSuccess;                     // 0x5629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum7_CmpSuccess;                     // 0x562A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent70;     // 0x562B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount70;     // 0x562C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents70; // 0x5630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent69;     // 0x5631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3265[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount69;     // 0x5634(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents69; // 0x5638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum8_CmpSuccess;                     // 0x5639(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum9_CmpSuccess;                     // 0x563A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3269[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context61;        // 0x5640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context60;        // 0x5648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context59;        // 0x5650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent31; // 0x5658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent68;     // 0x5659(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount68;     // 0x565C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents68; // 0x5660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent67;     // 0x5661(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount67;     // 0x5664(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents67; // 0x5668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum10_CmpSuccess;                    // 0x5669(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum11_CmpSuccess;                    // 0x566A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent30; // 0x566B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent29; // 0x566C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3275[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context58;        // 0x5670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context57;        // 0x5678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent66;     // 0x5680(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3277[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount66;     // 0x5684(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents66; // 0x5688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3279[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context56;        // 0x5690(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum12_CmpSuccess;                    // 0x5698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent65;     // 0x5699(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_327E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount65;     // 0x569C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents65; // 0x56A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent64;     // 0x56A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3280[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount64;     // 0x56A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents64; // 0x56A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent63;     // 0x56A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3285[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount63;     // 0x56AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents63; // 0x56B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum13_CmpSuccess;                    // 0x56B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3287[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context55;        // 0x56B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context54;        // 0x56C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context53;        // 0x56C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent28; // 0x56D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent62;     // 0x56D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount62;     // 0x56D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents62; // 0x56D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context52;        // 0x56E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum14_CmpSuccess;                    // 0x56E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent61;     // 0x56E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount61;     // 0x56EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents61; // 0x56F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum15_CmpSuccess;                    // 0x56F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3291[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context51;        // 0x56F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent27; // 0x5700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent60;     // 0x5701(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3298[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount60;     // 0x5704(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents60; // 0x5708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_329A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context50;        // 0x5710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum16_CmpSuccess;                    // 0x5718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent26; // 0x5719(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent59;     // 0x571A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount59;     // 0x571C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents59; // 0x5720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_329D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context49;        // 0x5728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum17_CmpSuccess;                    // 0x5730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent58;     // 0x5731(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount58;     // 0x5734(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents58; // 0x5738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent25; // 0x5739(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum18_CmpSuccess;                    // 0x573A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context48;        // 0x5740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent24; // 0x5748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent57;     // 0x5749(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount57;     // 0x574C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents57; // 0x5750(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum19_CmpSuccess;                    // 0x5751(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context47;        // 0x5758(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent23; // 0x5760(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent56;     // 0x5761(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount56;     // 0x5764(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents56; // 0x5768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum20_CmpSuccess;                    // 0x5769(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent22; // 0x576A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent55;     // 0x576B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount55;     // 0x576C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents55; // 0x5770(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent54;     // 0x5771(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount54;     // 0x5774(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents54; // 0x5778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum21_CmpSuccess;                    // 0x5779(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum22_CmpSuccess;                    // 0x577A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent21; // 0x577B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context46;        // 0x5780(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context45;        // 0x5788(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context44;        // 0x5790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue4;          // 0x5798(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue5;          // 0x5799(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue6;          // 0x579A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue7;          // 0x579B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue8;          // 0x579C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue9;          // 0x579D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent20; // 0x579E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent53;     // 0x579F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount53;     // 0x57A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents53; // 0x57A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent52;     // 0x57A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount52;     // 0x57A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents52; // 0x57AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum23_CmpSuccess;                    // 0x57AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum24_CmpSuccess;                    // 0x57AE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context43;        // 0x57B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent51;     // 0x57B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount51;     // 0x57BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents51; // 0x57C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum25_CmpSuccess;                    // 0x57C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent19; // 0x57C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32CC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x57C8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate13;            // 0x57D8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate14;            // 0x57E8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate15;            // 0x57F8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate16;            // 0x5808(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate17;            // 0x5818(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate18;            // 0x5828(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate19;            // 0x5838(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate20;            // 0x5848(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate21;            // 0x5858(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate22;            // 0x5868(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate23;            // 0x5878(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue10;         // 0x5888(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate24;            // 0x5890(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context42;        // 0x58A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent50;     // 0x58A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount50;     // 0x58AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents50; // 0x58B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18; // 0x58B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum26_CmpSuccess;                    // 0x58B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent49;     // 0x58B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount49;     // 0x58B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents49; // 0x58B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent48;     // 0x58B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount48;     // 0x58BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents48; // 0x58C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum27_CmpSuccess;                    // 0x58C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum28_CmpSuccess;                    // 0x58C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32DD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context41;        // 0x58C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context40;        // 0x58D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context39;        // 0x58D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent47;     // 0x58E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount47;     // 0x58E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents47; // 0x58E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent46;     // 0x58E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount46;     // 0x58EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents46; // 0x58F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent45;     // 0x58F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount45;     // 0x58F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents45; // 0x58F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context38;        // 0x5900(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context37;        // 0x5908(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17; // 0x5910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent44;     // 0x5911(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount44;     // 0x5914(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents44; // 0x5918(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context36;        // 0x5920(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum29_CmpSuccess;                    // 0x5928(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue11;         // 0x5929(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16; // 0x592A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent43;     // 0x592B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount43;     // 0x592C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents43; // 0x5930(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum30_CmpSuccess;                    // 0x5931(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32E8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context35;        // 0x5938(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent42;     // 0x5940(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount42;     // 0x5944(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents42; // 0x5948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum31_CmpSuccess;                    // 0x5949(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15; // 0x594A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32EA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context34;        // 0x5950(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14; // 0x5958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent41;     // 0x5959(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32ED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount41;     // 0x595C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents41; // 0x5960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context33;        // 0x5968(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum32_CmpSuccess;                    // 0x5970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13; // 0x5971(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent40;     // 0x5972(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount40;     // 0x5974(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents40; // 0x5978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent39;     // 0x5979(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount39;     // 0x597C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents39; // 0x5980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum33_CmpSuccess;                    // 0x5981(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum34_CmpSuccess;                    // 0x5982(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context32;        // 0x5988(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate25;            // 0x5990(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent38;     // 0x59A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount38;     // 0x59A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents38; // 0x59A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum35_CmpSuccess;                    // 0x59A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context31;        // 0x59B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12; // 0x59B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent37;     // 0x59B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount37;     // 0x59BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents37; // 0x59C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context30;        // 0x59C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum36_CmpSuccess;                    // 0x59D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent36;     // 0x59D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32FD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount36;     // 0x59D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents36; // 0x59D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent35;     // 0x59D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32FF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount35;     // 0x59DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents35; // 0x59E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3300[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context29;        // 0x59E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent34;     // 0x59F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3302[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount34;     // 0x59F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents34; // 0x59F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3303[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context28;        // 0x5A00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum37_CmpSuccess;                    // 0x5A08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue12;         // 0x5A09(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3304[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate26;            // 0x5A10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate27;            // 0x5A20(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11; // 0x5A30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3305[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue38;           // 0x5A38(0x218)(None)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context27;        // 0x5C50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation33;     // 0x5C58(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3308[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs33;  // 0x5C68(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue33;      // 0x5C78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3317[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation34;     // 0x5C7C(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs34;  // 0x5C88(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue34;      // 0x5C98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent33;     // 0x5C99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3319[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount33;     // 0x5C9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents33; // 0x5CA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum38_CmpSuccess;                    // 0x5CA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10; // 0x5CA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent32;     // 0x5CA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount32;     // 0x5CA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents32; // 0x5CA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_331B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context26;        // 0x5CB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum39_CmpSuccess;                    // 0x5CB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue13;         // 0x5CB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue14;         // 0x5CBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_331D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context25;        // 0x5CC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue15;         // 0x5CC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_331E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context24;        // 0x5CD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate28;            // 0x5CD8(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent31;     // 0x5CE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3322[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount31;     // 0x5CEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents31; // 0x5CF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum40_CmpSuccess;                    // 0x5CF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9; // 0x5CF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3323[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context23;        // 0x5CF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8; // 0x5D00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent30;     // 0x5D01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3324[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount30;     // 0x5D04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents30; // 0x5D08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3326[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context22;        // 0x5D10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum41_CmpSuccess;                    // 0x5D18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3328[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate29;            // 0x5D20(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue16;         // 0x5D30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent29;     // 0x5D31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount29;     // 0x5D34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents29; // 0x5D38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_332C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context21;        // 0x5D40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum42_CmpSuccess;                    // 0x5D48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent28;     // 0x5D49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount28;     // 0x5D4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents28; // 0x5D50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent27;     // 0x5D51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3330[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount27;     // 0x5D54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents27; // 0x5D58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent26;     // 0x5D59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3332[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount26;     // 0x5D5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents26; // 0x5D60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum43_CmpSuccess;                    // 0x5D61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum44_CmpSuccess;                    // 0x5D62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3335[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context20;        // 0x5D68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7; // 0x5D70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue17;         // 0x5D71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6; // 0x5D72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent25;     // 0x5D73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount25;     // 0x5D74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents25; // 0x5D78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue18;         // 0x5D79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum45_CmpSuccess;                    // 0x5D7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent24;     // 0x5D7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount24;     // 0x5D7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents24; // 0x5D80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3338[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context19;        // 0x5D88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum46_CmpSuccess;                    // 0x5D90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3339[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context18;        // 0x5D98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue19;         // 0x5DA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5; // 0x5DA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent23;     // 0x5DA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount23;     // 0x5DA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents23; // 0x5DA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_333D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context17;        // 0x5DB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum47_CmpSuccess;                    // 0x5DB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent22;     // 0x5DB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount22;     // 0x5DBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents22; // 0x5DC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent21;     // 0x5DC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3342[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount21;     // 0x5DC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents21; // 0x5DC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent20;     // 0x5DC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3344[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount20;     // 0x5DCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20; // 0x5DD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3345[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context16;        // 0x5DD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate30;            // 0x5DE0(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent19;     // 0x5DF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount19;     // 0x5DF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19; // 0x5DF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent18;     // 0x5DF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount18;     // 0x5DFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18; // 0x5E00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum48_CmpSuccess;                    // 0x5E01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum49_CmpSuccess;                    // 0x5E02(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3354[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue39;           // 0x5E08(0x218)(None)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context15;        // 0x6020(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent17;     // 0x6028(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3359[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount17;     // 0x602C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17; // 0x6030(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum50_CmpSuccess;                    // 0x6031(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_335A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context14;        // 0x6038(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context13;        // 0x6040(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent16;     // 0x6048(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_335B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount16;     // 0x604C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16; // 0x6050(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent15;     // 0x6051(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_335C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount15;     // 0x6054(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15; // 0x6058(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum51_CmpSuccess;                    // 0x6059(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue20;         // 0x605A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4; // 0x605B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_335F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context12;        // 0x6060(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context11;        // 0x6068(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent14;     // 0x6070(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3360[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount14;     // 0x6074(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14; // 0x6078(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3362[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue40;           // 0x6080(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation35;     // 0x6298(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3364[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs35;  // 0x62A8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue35;      // 0x62B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3368[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate31;            // 0x62C0(0x10)(ZeroConstructor, NoDestructor)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue41;           // 0x62D0(0x218)(None)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent13;     // 0x64E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3369[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount13;     // 0x64EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13; // 0x64F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_336C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation36;     // 0x64F4(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs36;  // 0x6500(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue36;      // 0x6510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum52_CmpSuccess;                    // 0x6511(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_336E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation37;     // 0x6514(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs37;  // 0x6520(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue37;      // 0x6530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3370[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation38;     // 0x6534(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs38;  // 0x6540(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue38;      // 0x6550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3375[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context10;        // 0x6558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent12;     // 0x6560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3377[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount12;     // 0x6564(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12; // 0x6568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context9;         // 0x6570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue21;         // 0x6578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent11;     // 0x6579(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3380[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount11;     // 0x657C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11; // 0x6580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3; // 0x6581(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum53_CmpSuccess;                    // 0x6582(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3384[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context8;         // 0x6588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2; // 0x6590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent10;     // 0x6591(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3387[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount10;     // 0x6594(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10; // 0x6598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum54_CmpSuccess;                    // 0x6599(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context7;         // 0x65A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent9;      // 0x65A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_338E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount9;      // 0x65AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9; // 0x65B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3391[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context6;         // 0x65B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent8;      // 0x65C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3394[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount8;      // 0x65C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8; // 0x65C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum55_CmpSuccess;                    // 0x65C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent7;      // 0x65CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3395[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount7;      // 0x65CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7; // 0x65D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3398[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context5;         // 0x65D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue22;         // 0x65E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1; // 0x65E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent6;      // 0x65E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount6;      // 0x65E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6; // 0x65E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_339F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context4;         // 0x65F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum56_CmpSuccess;                    // 0x65F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent5;      // 0x65F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount5;      // 0x65FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5; // 0x6600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum57_CmpSuccess;                    // 0x6601(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent4;      // 0x6602(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount4;      // 0x6604(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4; // 0x6608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context3;         // 0x6610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent3;      // 0x6618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount3;      // 0x661C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3; // 0x6620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context2;         // 0x6628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent2;      // 0x6630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount2;      // 0x6634(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2; // 0x6638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context1;         // 0x6640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue23;         // 0x6648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent1;      // 0x6649(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount1;      // 0x664C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1; // 0x6650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent;       // 0x6651(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount;       // 0x6654(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents; // 0x6658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum58_CmpSuccess;                    // 0x6659(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum59_CmpSuccess;                    // 0x665A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context;          // 0x6660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent; // 0x6668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate32;            // 0x6670(0x10)(ZeroConstructor, NoDestructor)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation39;     // 0x6680(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs39;  // 0x6690(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue39;      // 0x66A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation40;     // 0x66A4(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs40;  // 0x66B0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue40;      // 0x66C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation41;     // 0x66C4(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs41;  // 0x66D0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue41;      // 0x66E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue24;         // 0x66E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue25;         // 0x66E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


