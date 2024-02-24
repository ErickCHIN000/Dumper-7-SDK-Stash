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
// Function BP_Event_GoatTower.BP_Event_GoatTower_C.ThroneRoomOpened
struct ABP_Event_GoatTower_C_ThroneRoomOpened_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Event_GoatTower.BP_Event_GoatTower_C.GoatTowerSynched
struct ABP_Event_GoatTower_C_GoatTowerSynched_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Event_GoatTower.BP_Event_GoatTower_C.PlayerEnteredThroneRoom
struct ABP_Event_GoatTower_C_PlayerEnteredThroneRoom_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoatTower*                          GoatTower;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Event_GoatTower.BP_Event_GoatTower_C.OnIntroFinished
struct ABP_Event_GoatTower_C_OnIntroFinished_Params
{
public:
	class AGGIntro*                              Intro;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Event_GoatTower.BP_Event_GoatTower_C.OnStartedSyncing
struct ABP_Event_GoatTower_C_OnStartedSyncing_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_Event_GoatTower.BP_Event_GoatTower_C.OnQuestProgressionLoadedBlueprint
struct ABP_Event_GoatTower_C_OnQuestProgressionLoadedBlueprint_Params
{
public:
	bool                                         bSaveExisted;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bWasCompleted;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x17C (0x17C - 0x0)
// Function BP_Event_GoatTower.BP_Event_GoatTower_C.ExecuteUbergraph_BP_Event_GoatTower
struct ABP_Event_GoatTower_C_ExecuteUbergraph_BP_Event_GoatTower_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDemoBuild_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDemoBuild_ReturnValue_1;                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CB5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_CB7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_Goat_3;                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class AGGPlayerState*                        CallFunc_GetGGPlayerState_ReturnValue;             // 0x38(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_CustomEvent_Goat_2;                         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_GoatTower_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x48(0x10)(ReferenceParm)
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue;        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x64(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_CCC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_Goat_1;                         // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoatTower*                          K2Node_CustomEvent_GoatTower;                      // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerState*                        CallFunc_GetGGPlayerState_ReturnValue_1;           // 0x88(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGIntro*                              K2Node_CustomEvent_Intro;                          // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CD2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CD4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_StretchGoal_Base_C*                K2Node_DynamicCast_AsBP_Stretch_Goal_Base;         // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CE1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDemoBuild_ReturnValue_2;                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CEA[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xC4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xD4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_CF2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_Goat;                           // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerState*                        CallFunc_GetGGPlayerState_ReturnValue_2;           // 0xF0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CFD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ThroneRoom_Scanner_C*              K2Node_DynamicCast_AsBP_Throne_Room_Scanner;       // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D09[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue_1;       // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsQuestStepCompleted_ReturnValue;         // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsQuestStepCompleted_ReturnValue_1;       // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsQuestStepCompleted_ReturnValue_2;       // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D28[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue_2;       // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue_3;       // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsQuestStepCompleted_ReturnValue_3;       // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsQuestStepCompleted_ReturnValue_4;       // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D32[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue_4;       // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsQuestStepCompleted_ReturnValue_5;       // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D3B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetPrimaryGGPlayerController_ReturnValue; // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D42[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerState*                        CallFunc_GetGGPlayerState_ReturnValue_3;           // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GoatTower_C*                       CallFunc_Array_Get_Item;                           // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSaveExisted;                         // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bWasCompleted;                        // 0x17A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasEverBeenDiscovered_ReturnValue;        // 0x17B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


