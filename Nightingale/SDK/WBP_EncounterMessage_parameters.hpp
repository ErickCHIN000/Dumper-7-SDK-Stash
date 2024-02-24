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

// 0x38 (0x38 - 0x0)
// Function WBP_EncounterMessage.WBP_EncounterMessage_C.SetupMessageAndShow
struct UWBP_EncounterMessage_C_SetupMessageAndShow_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  InText2;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WBP_EncounterMessage.WBP_EncounterMessage_C.EncounterMessage_DisplayAndPin
struct UWBP_EncounterMessage_C_EncounterMessage_DisplayAndPin_Params
{
public:
	struct FNotificationEncounter                Notification_Encounter;                            // 0x0(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x68 (0x68 - 0x0)
// Function WBP_EncounterMessage.WBP_EncounterMessage_C.EncounterMessage_DisplayFor
struct UWBP_EncounterMessage_C_EncounterMessage_DisplayFor_Params
{
public:
	double                                       TimeToDisplay;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEncounter                Content;                                           // 0x8(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x114 (0x114 - 0x0)
// Function WBP_EncounterMessage.WBP_EncounterMessage_C.ExecuteUbergraph_WBP_EncounterMessage
struct UWBP_EncounterMessage_C_ExecuteUbergraph_WBP_EncounterMessage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4296[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_429B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotificationEncounter                K2Node_CustomEvent_Notification_Encounter;         // 0x30(0x60)(ConstParm)
	double                                       K2Node_CustomEvent_TimeToDisplay;                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEncounter                K2Node_CustomEvent_Content;                        // 0x98(0x60)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default;                             // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x108(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


