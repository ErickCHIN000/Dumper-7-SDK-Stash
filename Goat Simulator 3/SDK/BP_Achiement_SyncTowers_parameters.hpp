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

// 0x29 (0x29 - 0x0)
// Function BP_Achiement_SyncTowers.BP_Achiement_SyncTowers_C.HasMetRequirements
struct ABP_Achiement_SyncTowers_C_HasMetRequirements_Params
{
public:
	bool                                         bIsClient;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMainMenu;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsIsland;                                         // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_956[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_961[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGWorldSave*                          CallFunc_GetWorldSave_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_964[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BP_Achiement_SyncTowers.BP_Achiement_SyncTowers_C.On Goat Tower Sync
struct ABP_Achiement_SyncTowers_C_On_Goat_Tower_Sync_Params
{
public:
	class AGGGoatTower*                          GoatTower;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETowerSynchronizationEvent        SynchronizationEvent;                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_Achiement_SyncTowers.BP_Achiement_SyncTowers_C.ExecuteUbergraph_BP_Achiement_SyncTowers
struct ABP_Achiement_SyncTowers_C_ExecuteUbergraph_BP_Achiement_SyncTowers_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGWorldSave*                          CallFunc_GetWorldSave_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UGGAchievementSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoatTower*                          K2Node_CustomEvent_GoatTower;                      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETowerSynchronizationEvent        K2Node_CustomEvent_SynchronizationEvent;           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9DC[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue_1;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x58(0x10)(ZeroConstructor, NoDestructor)
};

}
}


