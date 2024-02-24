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
// Function Mission_Plot11.Mission_Plot11_C.Set_EnterCastle
struct UMission_Plot11_C_Set_EnterCastle_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Set_TalkToDragonLord
struct UMission_Plot11_C_Set_TalkToDragonLord_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_TalkToDragonLord
struct UMission_Plot11_C_Obj_TalkToDragonLord_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3735[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Update_EnterCastle
struct UMission_Plot11_C_Update_EnterCastle_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Update_TalkToDragonLord
struct UMission_Plot11_C_Update_TalkToDragonLord_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_CompleteRun
struct UMission_Plot11_C_Obj_CompleteRun_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3748[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Update_CompleteRun
struct UMission_Plot11_C_Update_CompleteRun_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Set_TalkToBlacksmith
struct UMission_Plot11_C_Set_TalkToBlacksmith_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_TalkToBlacksmith
struct UMission_Plot11_C_Obj_TalkToBlacksmith_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_375A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Set_UseReroller
struct UMission_Plot11_C_Set_UseReroller_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_InvestigateReroller
struct UMission_Plot11_C_Obj_InvestigateReroller_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3779[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Update_InvestigateReroller
struct UMission_Plot11_C_Update_InvestigateReroller_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Advance_InvestigateReroller
struct UMission_Plot11_C_Advance_InvestigateReroller_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Set_FindIzzy
struct UMission_Plot11_C_Set_FindIzzy_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_FindIzzy
struct UMission_Plot11_C_Obj_FindIzzy_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3796[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Set_OpenQuickChange
struct UMission_Plot11_C_Set_OpenQuickChange_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_OpenQuickChange
struct UMission_Plot11_C_Obj_OpenQuickChange_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_RerollEnchantment
struct UMission_Plot11_C_Obj_RerollEnchantment_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_RespecSecClass
struct UMission_Plot11_C_Obj_RespecSecClass_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Update_OpenQuickChange
struct UMission_Plot11_C_Update_OpenQuickChange_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Update_RespecSecClass
struct UMission_Plot11_C_Update_RespecSecClass_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Advance_OpenQuickChange
struct UMission_Plot11_C_Advance_OpenQuickChange_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Update_FindIzzy
struct UMission_Plot11_C_Update_FindIzzy_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Update_RerollEnchantment
struct UMission_Plot11_C_Update_RerollEnchantment_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Update_TalkToBlacksmith
struct UMission_Plot11_C_Update_TalkToBlacksmith_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Set_ReturnToPaladinMike
struct UMission_Plot11_C_Set_ReturnToPaladinMike_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_ReturnToPaladinMike
struct UMission_Plot11_C_Obj_ReturnToPaladinMike_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_EnterCastle
struct UMission_Plot11_C_Obj_EnterCastle_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_380B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_LootMoonOrbs
struct UMission_Plot11_C_Obj_LootMoonOrbs_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_381B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Update_LootMoonOrbs
struct UMission_Plot11_C_Update_LootMoonOrbs_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_CloseReroller
struct UMission_Plot11_C_Obj_CloseReroller_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Set_ReturnToLobby
struct UMission_Plot11_C_Set_ReturnToLobby_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_ReturnToLobby
struct UMission_Plot11_C_Obj_ReturnToLobby_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3857[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Update_ReturnToCastle
struct UMission_Plot11_C_Update_ReturnToCastle_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Set_MoveToEnchantmentReroller
struct UMission_Plot11_C_Set_MoveToEnchantmentReroller_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Obj_MoveToReroller
struct UMission_Plot11_C_Obj_MoveToReroller_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3867[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.Set_LootMoonOrbs
struct UMission_Plot11_C_Set_LootMoonOrbs_Params
{
public:
	enum class EMissionObjectiveSetEvent         ObjectiveSetEvent;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.INVS_CloseQuickChange
struct UMission_Plot11_C_INVS_CloseQuickChange_Params
{
public:
	enum class EMissionObjectiveEvent            ObjectiveEvent;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3898[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveCount;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentlyInLoadEvents;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C79 (0x1C79 - 0x0)
// Function Mission_Plot11.Mission_Plot11_C.ExecuteUbergraph_Mission_Plot11
struct UMission_Plot11_C_ExecuteUbergraph_Mission_Plot11_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B40[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue;             // 0x8(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue1;            // 0x220(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue2;            // 0x438(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue3;            // 0x650(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue4;            // 0x868(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue5;            // 0xA80(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation;       // 0xC98(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B66[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs;    // 0xCA8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue;        // 0xCB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue6;            // 0xCC0(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation1;      // 0xED8(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B7C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1;   // 0xEE8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue1;       // 0xEF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation2;      // 0xEFC(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2;   // 0xF08(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue2;       // 0xF18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation3;      // 0xF1C(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3;   // 0xF28(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue3;       // 0xF38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation4;      // 0xF3C(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4;   // 0xF48(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue4;       // 0xF58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation5;      // 0xF5C(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs5;   // 0xF68(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue5;       // 0xF78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue7;            // 0xF80(0x218)(None)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue8;            // 0x1198(0x218)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x13B0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x13C0(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9; // 0x13D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8; // 0x13D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent14;     // 0x13D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BE0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount14;     // 0x13D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14; // 0x13D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context12;        // 0x13E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x13E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context11;        // 0x13F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x13F8(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent13;     // 0x1408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount13;     // 0x140C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13; // 0x1410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C22[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context10;        // 0x1418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x1420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7; // 0x1421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent12;     // 0x1422(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C51[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount12;     // 0x1424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12; // 0x1428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6; // 0x1429(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0x142A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent11;     // 0x142B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount11;     // 0x142C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11; // 0x1430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context9;         // 0x1438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum3_CmpSuccess;                     // 0x1440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context8;         // 0x1448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5; // 0x1450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent10;     // 0x1451(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C7F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount10;     // 0x1454(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10; // 0x1458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4; // 0x1459(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum4_CmpSuccess;                     // 0x145A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent9;      // 0x145B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount9;      // 0x145C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9; // 0x1460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent8;      // 0x1461(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CA9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount8;      // 0x1464(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8; // 0x1468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum5_CmpSuccess;                     // 0x1469(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent7;      // 0x146A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount7;      // 0x146C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7; // 0x1470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context7;         // 0x1478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context6;         // 0x1480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context5;         // 0x1488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context4;         // 0x1490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context3;         // 0x1498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MissionK2Node_MissionCustomEvent_Context2;         // 0x14A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue9;            // 0x14A8(0x218)(None)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue;           // 0x16C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x16C8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x16D8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x16E8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x16F8(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3; // 0x1708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent6;      // 0x1709(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CE0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount6;      // 0x170C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6; // 0x1710(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum6_CmpSuccess;                     // 0x1711(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent5;      // 0x1712(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D02[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount5;      // 0x1714(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5; // 0x1718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum7_CmpSuccess;                     // 0x1719(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent4;      // 0x171A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D11[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount4;      // 0x171C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4; // 0x1720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context1;         // 0x1728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum8_CmpSuccess;                     // 0x1730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent3;      // 0x1731(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D28[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount3;      // 0x1734(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3; // 0x1738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MissionRemoteEvent_ReturnValue1;          // 0x1739(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum9_CmpSuccess;                     // 0x173A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2; // 0x173B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent2;      // 0x173C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount2;      // 0x1740(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2; // 0x1744(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MissionK2Node_MissionCustomEvent_Context;          // 0x1748(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum10_CmpSuccess;                    // 0x1750(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1; // 0x1751(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D47[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x1758(0x10)(ZeroConstructor, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent1;      // 0x1768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount1;      // 0x176C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1; // 0x1770(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum11_CmpSuccess;                    // 0x1771(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveSetEvent         MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent; // 0x1772(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D5A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue10;           // 0x1778(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation6;      // 0x1990(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs6;   // 0x19A0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue6;       // 0x19B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EMissionObjectiveEvent            MissionK2Node_ObjectiveEvent_ObjectiveEvent;       // 0x19B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D69[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MissionK2Node_ObjectiveEvent_ObjectiveCount;       // 0x19B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents; // 0x19B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D73[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation7;      // 0x19BC(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs7;   // 0x19C8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue7;       // 0x19D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum12_CmpSuccess;                    // 0x19D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D7A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation8;      // 0x19DC(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs8;   // 0x19E8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue8;       // 0x19F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation9;      // 0x19FC(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs9;   // 0x1A08(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue9;       // 0x1A18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation10;     // 0x1A1C(0xC)(NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs10;  // 0x1A28(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue10;      // 0x1A38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue11;           // 0x1A40(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeakSequenceEx_Conversation11;     // 0x1C58(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs11;  // 0x1C68(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_FinishSpeakSequenceEx_ReturnValue11;      // 0x1C78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


