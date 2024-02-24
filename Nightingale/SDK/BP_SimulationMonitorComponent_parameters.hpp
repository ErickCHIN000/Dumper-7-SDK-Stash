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

// 0x2 (0x2 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.GetIsNight
struct UBP_SimulationMonitorComponent_C_GetIsNight_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDayNightState_IsNight;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.BindToDayNightChanged
struct UBP_SimulationMonitorComponent_C_BindToDayNightChanged_Params
{
public:
	class ABP_TimeOfDayManager_C*                TimeOfDayManager;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnTimeOfDayNightChanged
struct UBP_SimulationMonitorComponent_C_OnTimeOfDayNightChanged_Params
{
public:
	bool                                         IsNight;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.RegisterSimStateManagerEvents
struct UBP_SimulationMonitorComponent_C_RegisterSimStateManagerEvents_Params
{
public:
	class AManagerBase*                          Manager;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsReady;                                          // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SimulationStateManager_C*          K2Node_DynamicCast_AsBP_Simulation_State_Manager;  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BCC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_TimeOfDayManager_C*                CallFunc_GetTimeOfDayManager_TimeOfDayManager;     // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.GetDayNightState
struct UBP_SimulationMonitorComponent_C_GetDayNightState_Params
{
public:
	bool                                         IsNight;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreAutomatedTestsRunning_ReturnValue;     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C36[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_TimeOfDayManager_C*                CallFunc_GetTimeOfDayManager_TimeOfDayManager;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnPlayerLogout
struct UBP_SimulationMonitorComponent_C_OnPlayerLogout_Params
{
public:
	class AController*                           ExitingController;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlayerCount_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnPlayerJoined
struct UBP_SimulationMonitorComponent_C_OnPlayerJoined_Params
{
public:
	class APlayerController*                     NewPlayer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlayerCount_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.BindEventToOnDayNightChanged
struct UBP_SimulationMonitorComponent_C_BindEventToOnDayNightChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.UnbindEventFromOnDayNightChanged
struct UBP_SimulationMonitorComponent_C_UnbindEventFromOnDayNightChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.ExecuteUbergraph_BP_SimulationMonitorComponent
struct UBP_SimulationMonitorComponent_C_ExecuteUbergraph_BP_SimulationMonitorComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_Event_Event;                                // 0x4(0x10)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DBC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AManagerBase>              Temp_class_Variable;                               // 0x18(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXGameModeBase*                      CallFunc_GetGameMode_GameMode;                     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GameMode_C*                        K2Node_DynamicCast_AsBP_Game_Mode;                 // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DCD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x5C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x70(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_Event_Event_1;                              // 0x80(0x10)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXGameModeBase*                      CallFunc_GetNWXGameModeBase_ReturnValue;           // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsManagerExpected_ReturnValue;            // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnRealmVisualSeedChanged__DelegateSignature
struct UBP_SimulationMonitorComponent_C_OnRealmVisualSeedChanged__DelegateSignature_Params
{
public:
	int32                                        RealmVisualSeed;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnProfile_Component_RandomizeChanged__DelegateSignature
struct UBP_SimulationMonitorComponent_C_OnProfile_Component_RandomizeChanged__DelegateSignature_Params
{
public:
	struct FS_Profile_Component_Randomize        Profile_Component_Randomize;                       // 0x0(0x74)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnDayNightChanged__DelegateSignature
struct UBP_SimulationMonitorComponent_C_OnDayNightChanged__DelegateSignature_Params
{
public:
	bool                                         IsNight;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnSeasonRandomChanged__DelegateSignature
struct UBP_SimulationMonitorComponent_C_OnSeasonRandomChanged__DelegateSignature_Params
{
public:
	double                                       NewSeasonRandom;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnColorRowRandomChanged__DelegateSignature
struct UBP_SimulationMonitorComponent_C_OnColorRowRandomChanged__DelegateSignature_Params
{
public:
	int32                                        NewColorRowRandom;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C.OnRealmProfileChanged__DelegateSignature
struct UBP_SimulationMonitorComponent_C_OnRealmProfileChanged__DelegateSignature_Params
{
public:
	int32                                        NewRealmProfile;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


