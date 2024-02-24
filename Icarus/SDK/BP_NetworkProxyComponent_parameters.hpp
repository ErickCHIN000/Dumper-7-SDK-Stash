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

// 0x19 (0x19 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.GetPlayerController
struct UBP_NetworkProxyComponent_C_GetPlayerController_Params
{
public:
	class AIcarusPlayerController*               Controller;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               K2Node_DynamicCast_AsIcarus_Player_Controller;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.GetControllerFromState
struct UBP_NetworkProxyComponent_C_GetControllerFromState_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     Controller;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2272[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumPlayers_ReturnValue;                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2295[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.OnFail_FCBD2FBC4B214CFB4D8918AFD6F533F0
struct UBP_NetworkProxyComponent_C_OnFail_FCBD2FBC4B214CFB4D8918AFD6F533F0_Params
{
public:
	struct FResResetCharacter                    Response;                                          // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.OnSuccess_FCBD2FBC4B214CFB4D8918AFD6F533F0
struct UBP_NetworkProxyComponent_C_OnSuccess_FCBD2FBC4B214CFB4D8918AFD6F533F0_Params
{
public:
	struct FResResetCharacter                    Response;                                          // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x3C (0x3C - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_Processing_ AddProcessingRecipe
struct UBP_NetworkProxyComponent_C_Proxy_Processing__AddProcessingRecipe_Params
{
public:
	class UProcessingComponent*                  Processing;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProcessorRecipesRowHandle            Recipe;                                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            PlayerInventory;                                   // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            Quickbar;                                          // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                Player;                                            // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Multiplier;                                        // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_Processing_StartProcessing
struct UBP_NetworkProxyComponent_C_Proxy_Processing_StartProcessing_Params
{
public:
	class UProcessingComponent*                  Processing;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_Processing_RemoveQueueElement
struct UBP_NetworkProxyComponent_C_Proxy_Processing_RemoveQueueElement_Params
{
public:
	class UProcessingComponent*                  Processing;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_Processing_StopAndClear
struct UBP_NetworkProxyComponent_C_Proxy_Processing_StopAndClear_Params
{
public:
	class UProcessingComponent*                  Processing;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                Leaving_Player;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_AddModifier
struct UBP_NetworkProxyComponent_C_Proxy_AddModifier_Params
{
public:
	class AIcarusPlayerCharacter*                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModifier                             ModifierRow;                                       // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.CheatSetTime
struct UBP_NetworkProxyComponent_C_CheatSetTime_Params
{
public:
	float                                        TimeOfDay;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.CheatSpawnAI
struct UBP_NetworkProxyComponent_C_CheatSpawnAI_Params
{
public:
	struct FAISetupRowHandle                     AISetupRow;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Lvl;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEpicCreaturesRowHandle               Epic;                                              // 0x1C(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_Processing_Stop
struct UBP_NetworkProxyComponent_C_Proxy_Processing_Stop_Params
{
public:
	class UProcessingComponent*                  Processing;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                Leaving_Player;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.CheatSetTimeScale
struct UBP_NetworkProxyComponent_C_CheatSetTimeScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.GotoPlayer
struct UBP_NetworkProxyComponent_C_GotoPlayer_Params
{
public:
	class APlayerState*                          Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.BringPlayer
struct UBP_NetworkProxyComponent_C_BringPlayer_Params
{
public:
	class APlayerState*                          Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.CheatSetAIRelationship
struct UBP_NetworkProxyComponent_C_CheatSetAIRelationship_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_ModifySessionTime
struct UBP_NetworkProxyComponent_C_Cheat_ModifySessionTime_Params
{
public:
	int32                                        Seconds_To_Add;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_SetResourceComponentState
struct UBP_NetworkProxyComponent_C_Proxy_SetResourceComponentState_Params
{
public:
	class UResourceNetworkComponent*             Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_ReviveFriend
struct UBP_NetworkProxyComponent_C_Cheat_ReviveFriend_Params
{
public:
	class APlayerState*                          Player_State;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_TriggerWeatherEvent
struct UBP_NetworkProxyComponent_C_Cheat_TriggerWeatherEvent_Params
{
public:
	struct FBiomesRowHandle                      Biome;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FWeatherEventsRowHandle               Event;                                             // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SetGlobalEnvTemp
struct UBP_NetworkProxyComponent_C_Cheat_SetGlobalEnvTemp_Params
{
public:
	int32                                        NewTemp;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.SetCheatNotifications
struct UBP_NetworkProxyComponent_C_SetCheatNotifications_Params
{
public:
	bool                                         State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.GotoActor
struct UBP_NetworkProxyComponent_C_GotoActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Offset;                                            // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.ResetCharacter
struct UBP_NetworkProxyComponent_C_ResetCharacter_Params
{
public:
	class AIcarusPlayerController*               Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.DamageActor
struct UBP_NetworkProxyComponent_C_DamageActor_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           InInstigator;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InDamage;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SetPlayerLocation
struct UBP_NetworkProxyComponent_C_Cheat_SetPlayerLocation_Params
{
public:
	struct FVector                               NewWorldLocation;                                  // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_AddPlayerRelativeLocation
struct UBP_NetworkProxyComponent_C_Cheat_AddPlayerRelativeLocation_Params
{
public:
	struct FVector                               DeltaLocation;                                     // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SetPlayerRotation
struct UBP_NetworkProxyComponent_C_Cheat_SetPlayerRotation_Params
{
public:
	struct FRotator                              NewWorldRotation;                                  // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_AddPlayerRelativeRotation
struct UBP_NetworkProxyComponent_C_Cheat_AddPlayerRelativeRotation_Params
{
public:
	struct FRotator                              NewWorldRotation;                                  // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_UpdateSignText
struct UBP_NetworkProxyComponent_C_Proxy_UpdateSignText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                          Color;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADeployable*                           SignDeployable;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemableRowHandle                    IconRowHandle;                                     // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODSelectTile
struct UBP_NetworkProxyComponent_C_Cheat_FLODSelectTile_Params
{
public:
	class AFLODTile*                             FLODTile;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODDestroyAll
struct UBP_NetworkProxyComponent_C_Cheat_FLODDestroyAll_Params
{
public:
	class AFLODTile*                             FLODTile;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFLODRecord*                           FLODRecord;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODSelectRecord_1
struct UBP_NetworkProxyComponent_C_Cheat_FLODSelectRecord_1_Params
{
public:
	class UFLODRecord*                           FLODRecord;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODSelectRecord_2
struct UBP_NetworkProxyComponent_C_Cheat_FLODSelectRecord_2_Params
{
public:
	class UFLODRecord*                           FLODRecord;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODRestoreAll
struct UBP_NetworkProxyComponent_C_Cheat_FLODRestoreAll_Params
{
public:
	class AFLODTile*                             FLODTile;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFLODRecord*                           FLODRecord;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODSwapInstance
struct UBP_NetworkProxyComponent_C_Cheat_FLODSwapInstance_Params
{
public:
	class UFLODRecord*                           FLODRecord1;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFLODRecord*                           FLODRecord2;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFLODTile*                             FLODTile;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InstanceIndex;                                     // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODDestroyInstances
struct UBP_NetworkProxyComponent_C_Cheat_FLODDestroyInstances_Params
{
public:
	class UFLODRecord*                           FLODRecord;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InstanceIndex;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODAddInstance
struct UBP_NetworkProxyComponent_C_Cheat_FLODAddInstance_Params
{
public:
	class UFLODRecord*                           FLODRecord;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BE7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODRestoreInstance
struct UBP_NetworkProxyComponent_C_Cheat_FLODRestoreInstance_Params
{
public:
	class UFLODRecord*                           FLODRecord;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InstanceIndex;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODDebugInstances
struct UBP_NetworkProxyComponent_C_Cheat_FLODDebugInstances_Params
{
public:
	class AFLODTile*                             FLODTile;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODDebugInstancesAdv
struct UBP_NetworkProxyComponent_C_Cheat_FLODDebugInstancesAdv_Params
{
public:
	class AFLODTile*                             FLODTile;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODTileDestroyAll
struct UBP_NetworkProxyComponent_C_Cheat_FLODTileDestroyAll_Params
{
public:
	class AFLODTile*                             FLODTile;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FLODTileRestoreAll
struct UBP_NetworkProxyComponent_C_Cheat_FLODTileRestoreAll_Params
{
public:
	class AFLODTile*                             FLODTile;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.CheatDealDamage
struct UBP_NetworkProxyComponent_C_CheatDealDamage_Params
{
public:
	enum class EIcarusDamageType                 Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Damage;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SetFactionMission
struct UBP_NetworkProxyComponent_C_Cheat_SetFactionMission_Params
{
public:
	struct FFactionMissionsRowHandle             Mission;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SetDurabilityOnFocusedItem
struct UBP_NetworkProxyComponent_C_Cheat_SetDurabilityOnFocusedItem_Params
{
public:
	int32                                        Durability;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_FreezeWorldComposition
struct UBP_NetworkProxyComponent_C_Cheat_FreezeWorldComposition_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_SetGeneratorActive
struct UBP_NetworkProxyComponent_C_Proxy_SetGeneratorActive_Params
{
public:
	class UGeneratorComponent*                   GeneratorComponent;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Inactive;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_DisableFires
struct UBP_NetworkProxyComponent_C_Cheat_DisableFires_Params
{
public:
	bool                                         State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SetVoice
struct UBP_NetworkProxyComponent_C_Cheat_SetVoice_Params
{
public:
	class AIcarusPlayerCharacter*                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterVoicesRowHandle             Voice;                                             // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_SplitInventoryStack
struct UBP_NetworkProxyComponent_C_Proxy_SplitInventoryStack_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                FromPlayer;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_DropInventoryStack
struct UBP_NetworkProxyComponent_C_Proxy_DropInventoryStack_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                FromPlayer;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_DestroyInventoryStack
struct UBP_NetworkProxyComponent_C_Proxy_DestroyInventoryStack_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3022[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               Player;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRefundPartCost;                                   // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.CheatSpawnAIAtCursor
struct UBP_NetworkProxyComponent_C_CheatSpawnAIAtCursor_Params
{
public:
	struct FAISetupRowHandle                     AISetupRow;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Level;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SetCharacterFlag
struct UBP_NetworkProxyComponent_C_Cheat_SetCharacterFlag_Params
{
public:
	struct FCharacterFlagsRowHandle              Flag;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                         State;                                             // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_GetCharacterFlag
struct UBP_NetworkProxyComponent_C_Cheat_GetCharacterFlag_Params
{
public:
	struct FCharacterFlagsRowHandle              Flag;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_StartScriptedEvent
struct UBP_NetworkProxyComponent_C_Cheat_StartScriptedEvent_Params
{
public:
	struct FScriptedEventsRowHandle              ScriptedEvent;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_RemoveModifier
struct UBP_NetworkProxyComponent_C_Proxy_RemoveModifier_Params
{
public:
	class AIcarusPlayerCharacter*                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModifierStatesRowHandle              ModifierStateRow;                                  // 0x8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SetFillableOnFocusItem
struct UBP_NetworkProxyComponent_C_Cheat_SetFillableOnFocusItem_Params
{
public:
	enum class EIcarusResourceType               Resource;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3196[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Units;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_IcarusActorGenericAction
struct UBP_NetworkProxyComponent_C_Proxy_IcarusActorGenericAction_Params
{
public:
	class AActor*                                IcarusActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_DamageArmor
struct UBP_NetworkProxyComponent_C_Cheat_DamageArmor_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3224[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            Inventory;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_SetMountName
struct UBP_NetworkProxyComponent_C_Proxy_SetMountName_Params
{
public:
	class AIcarusMountCharacter*                 Mount;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Name;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.CheatSetMinimumTimeStep
struct UBP_NetworkProxyComponent_C_CheatSetMinimumTimeStep_Params
{
public:
	float                                        StepSeconds;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_SetMountMovementState
struct UBP_NetworkProxyComponent_C_Proxy_SetMountMovementState_Params
{
public:
	class AIcarusMountCharacter*                 Mount;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMountMovementBehaviourState      NewState;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_SetMountCombatState
struct UBP_NetworkProxyComponent_C_Proxy_SetMountCombatState_Params
{
public:
	class AIcarusMountCharacter*                 Mount;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMountCombatBehaviourState        NewState;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_PlayDialogue
struct UBP_NetworkProxyComponent_C_Cheat_PlayDialogue_Params
{
public:
	struct FDialogueRowHandle                    Dialogue;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.CheatGetAccountFlag
struct UBP_NetworkProxyComponent_C_CheatGetAccountFlag_Params
{
public:
	struct FAccountFlagsRowHandle                Flag;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.CheatSetAccountFlag
struct UBP_NetworkProxyComponent_C_CheatSetAccountFlag_Params
{
public:
	struct FAccountFlagsRowHandle                Flag;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                         State;                                             // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_Cheat_AddRandomItems
struct UBP_NetworkProxyComponent_C_Proxy_Cheat_AddRandomItems_Params
{
public:
	class AIcarusPlayerController*               Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_RegenerateVoxels
struct UBP_NetworkProxyComponent_C_Cheat_RegenerateVoxels_Params
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Radius;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_TriggerAffliction
struct UBP_NetworkProxyComponent_C_Proxy_TriggerAffliction_Params
{
public:
	class AIcarusPlayerCharacter*                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAfflictionChanceRowHandle            AfflictionChance;                                  // 0x8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_MineVoxels
struct UBP_NetworkProxyComponent_C_Cheat_MineVoxels_Params
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Radius;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_BestiaryFishCatches
struct UBP_NetworkProxyComponent_C_Cheat_BestiaryFishCatches_Params
{
public:
	struct FFishDataRowHandle                    Fish;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        NumCatches;                                        // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SetBestiaryProgress
struct UBP_NetworkProxyComponent_C_Cheat_SetBestiaryProgress_Params
{
public:
	struct FBestiaryDataRowHandle                BestiaryGroup;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        NumPoints;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_IcarusActorGenericActionWithCharacter
struct UBP_NetworkProxyComponent_C_Proxy_IcarusActorGenericActionWithCharacter_Params
{
public:
	class AActor*                                IcarusActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                InteractingCharacter;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_UpdatePainting
struct UBP_NetworkProxyComponent_C_Proxy_UpdatePainting_Params
{
public:
	class ADeployable*                           PaintingDeployable;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPaintingsRowHandle                   PaintingRowHandle;                                 // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_BlockDynanicSpawns
struct UBP_NetworkProxyComponent_C_Cheat_BlockDynanicSpawns_Params
{
public:
	struct FBiomesRowHandle                      Biome;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         bLock;                                             // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_CatchFishCheat
struct UBP_NetworkProxyComponent_C_Proxy_CatchFishCheat_Params
{
public:
	class AIcarusPlayerController*               Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_CatchFishInZoneCheat
struct UBP_NetworkProxyComponent_C_Proxy_CatchFishInZoneCheat_Params
{
public:
	class AIcarusPlayerController*               Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFishSpawnZonesRowHandle              Zone;                                              // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_UpdateWeatherForecast
struct UBP_NetworkProxyComponent_C_Cheat_UpdateWeatherForecast_Params
{
public:
	struct FProspectForecastRowHandle            ProspectForecast;                                  // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_ClientDropshipReady
struct UBP_NetworkProxyComponent_C_Proxy_ClientDropshipReady_Params
{
public:
	class AIcarusRocket*                         Dropship;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_UpdateBeaconStyle
struct UBP_NetworkProxyComponent_C_Proxy_UpdateBeaconStyle_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IconIndex;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3814[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADeployable*                           BeaconDeployable;                                  // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SetGOAPMotivationValue
struct UBP_NetworkProxyComponent_C_Cheat_SetGOAPMotivationValue_Params
{
public:
	struct FGOAPMotivationsEnum                  Motivation;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        NewValue;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_GrowCrop
struct UBP_NetworkProxyComponent_C_Cheat_GrowCrop_Params
{
public:
	class UFarmableComponent*                    Farmable;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SpawnActorFromClass
struct UBP_NetworkProxyComponent_C_Cheat_SpawnActorFromClass_Params
{
public:
	class UClass*                                ClassToSpawn;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnTransform;                                    // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_RequestMissionResupply
struct UBP_NetworkProxyComponent_C_Proxy_RequestMissionResupply_Params
{
public:
	class AIcarusPlayerCharacter*                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SpawnWorldBoss
struct UBP_NetworkProxyComponent_C_Cheat_SpawnWorldBoss_Params
{
public:
	struct FWorldBossesEnum                      WorldBoss;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_GenerateWorldBosses
struct UBP_NetworkProxyComponent_C_Cheat_GenerateWorldBosses_Params
{
public:
	struct FProspectListEnum                     ForProspect;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_AddLivingItemProgress
struct UBP_NetworkProxyComponent_C_Cheat_AddLivingItemProgress_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_SetLivingItemUpgrade
struct UBP_NetworkProxyComponent_C_Cheat_SetLivingItemUpgrade_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x4(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Proxy_Cheat_AddItemSet
struct UBP_NetworkProxyComponent_C_Proxy_Cheat_AddItemSet_Params
{
public:
	class AIcarusPlayerController*               Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Name;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.Cheat_IcarusSlomo
struct UBP_NetworkProxyComponent_C_Cheat_IcarusSlomo_Params
{
public:
	float                                        Dilation;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14F9 (0x14F9 - 0x0)
// Function BP_NetworkProxyComponent.BP_NetworkProxyComponent_C.ExecuteUbergraph_BP_NetworkProxyComponent
struct UBP_NetworkProxyComponent_C_ExecuteUbergraph_BP_NetworkProxyComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Dilation;                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTimeOfDaySubsystem*                   CallFunc_GetWorldSubsystem_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlagSubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlagSubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestNotificationSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProspectSubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FResResetCharacter                    Temp_struct_Variable;                              // 0x30(0xA8)(None)
	struct FProspectInfo                         CallFunc_GetActiveProspectInfo_ReturnValue;        // 0xD8(0x90)(ConstParm)
	int32                                        Temp_int_Variable;                                 // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BCB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue;              // 0x170(0x18)(None)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue_1;            // 0x188(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1A0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1E0(0x40)(HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x230(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x248(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x260(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x2A0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x2E0(0x18)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x300(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x340(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x358(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x370(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FResResetCharacter                    K2Node_CustomEvent_Response;                       // 0x380(0xA8)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x428(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FResResetCharacter                    K2Node_CustomEvent_Response_1;                     // 0x448(0xA8)(ConstParm)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x4F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x4F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x4FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x500(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x504(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable_1;                               // 0x514(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x518(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProcessingComponent*                  K2Node_CustomEvent_Processing_4;                   // 0x520(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProcessorRecipesRowHandle            K2Node_CustomEvent_Recipe;                         // 0x528(0x18)(NoDestructor, HasGetValueTypeHash)
	class UInventory*                            K2Node_CustomEvent_PlayerInventory;                // 0x540(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            K2Node_CustomEvent_Quickbar;                       // 0x548(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_Player_8;                       // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Multiplier;                     // 0x558(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CCB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProcessingComponent*                  K2Node_CustomEvent_Processing_3;                   // 0x560(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UInventory*>                    K2Node_MakeArray_Array_1;                          // 0x568(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UProcessingComponent*                  K2Node_CustomEvent_Processing_2;                   // 0x578(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Location_3;                     // 0x580(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProcessingComponent*                  K2Node_CustomEvent_Processing_1;                   // 0x588(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_Leaving_Player_1;               // 0x590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_Player_7;                       // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModifier                             K2Node_CustomEvent_ModifierRow;                    // 0x5A0(0x20)(NoDestructor)
	float                                        K2Node_CustomEvent_TimeOfDay;                      // 0x5C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths;                    // 0x5C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddModifierState_ReturnValue;             // 0x5C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAISetupRowHandle                     K2Node_CustomEvent_AISetupRow_1;                   // 0x5D0(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Lvl;                            // 0x5E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEpicCreaturesRowHandle               K2Node_CustomEvent_Epic;                           // 0x5EC(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProcessingComponent*                  K2Node_CustomEvent_Processing;                     // 0x608(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_Leaving_Player;                 // 0x610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Scale;                          // 0x618(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_1;                  // 0x61C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlagSubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          K2Node_CustomEvent_Player_6;                       // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                          K2Node_CustomEvent_Player_5;                       // 0x638(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_RowName;                        // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_2;                  // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x649(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Seconds_To_Add;                 // 0x64C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResourceNetworkComponent*             K2Node_CustomEvent_Component;                      // 0x650(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_State_6;                        // 0x658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlagSubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActivateResourceComponent_ReturnValue;    // 0x668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          K2Node_CustomEvent_Player_State;                   // 0x670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBiomesRowHandle                      K2Node_CustomEvent_Biome_1;                        // 0x678(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FWeatherEventsRowHandle               K2Node_CustomEvent_Event;                          // 0x690(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_NewTemp;                        // 0x6A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x6AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_State_5;                        // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_Actor;                          // 0x6B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Offset;                         // 0x6C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               K2Node_CustomEvent_Controller_4;                   // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_InActor;                        // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_CustomEvent_InInstigator;                   // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_InDamage;                       // 0x6E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ApplyDamage_ReturnValue;                  // 0x6F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E66[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerCharacterID                    CallFunc_GetPlayerCharacterID_ReturnValue;         // 0x700(0x18)(ConstParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReqResetCharacter                    K2Node_MakeStruct_ReqResetCharacter;               // 0x720(0x18)(None)
	class UResetCharacterCallbackProxyGen*       CallFunc_ResetCharacter_ReturnValue;               // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x740(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_CustomEvent_NewWorldLocation;               // 0x744(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_DeltaLocation;                  // 0x750(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_NewWorldRotation_1;             // 0x75C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              K2Node_CustomEvent_NewWorldRotation;               // 0x768(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x778(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x780(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusGameStateSurvival*              K2Node_DynamicCast_AsIcarus_Game_State_Survival;   // 0x788(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Text;                           // 0x798(0x18)(None)
	struct FLinearColor                          K2Node_CustomEvent_Color_1;                        // 0x7B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADeployable*                           K2Node_CustomEvent_SignDeployable;                 // 0x7C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemableRowHandle                    K2Node_CustomEvent_IconRowHandle;                  // 0x7C8(0x18)(NoDestructor, HasGetValueTypeHash)
	class AFLODTile*                             K2Node_CustomEvent_FLODTile_7;                     // 0x7E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFLODTile*                             K2Node_CustomEvent_FLODTile_6;                     // 0x7E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFLODRecord*                           K2Node_CustomEvent_FLODRecord_6;                   // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x7F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x7F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F58[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFLODRecord*                           K2Node_CustomEvent_FLODRecord_5;                   // 0x800(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFLODRecord*                           K2Node_CustomEvent_FLODRecord_4;                   // 0x808(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFLODTile*                             K2Node_CustomEvent_FLODTile_5;                     // 0x810(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFLODRecord*                           K2Node_CustomEvent_FLODRecord_3;                   // 0x818(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x821(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F7F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFLODRecord*                           K2Node_CustomEvent_FLODRecord1;                    // 0x828(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFLODRecord*                           K2Node_CustomEvent_FLODRecord2;                    // 0x830(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFLODTile*                             K2Node_CustomEvent_FLODTile_4;                     // 0x838(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_InstanceIndex_2;                // 0x840(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SwapRecordInstance_ReturnValue;           // 0x844(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x848(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x849(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x84A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFLODRecord*                           K2Node_CustomEvent_FLODRecord_2;                   // 0x850(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_InstanceIndex_1;                // 0x858(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                K2Node_MakeArray_Array_2;                          // 0x860(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x870(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFLODRecord*                           K2Node_CustomEvent_FLODRecord_1;                   // 0x878(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            K2Node_CustomEvent_Transform;                      // 0x880(0x30)(IsPlainOldData, NoDestructor)
	class UFLODRecord*                           K2Node_CustomEvent_FLODRecord;                     // 0x8B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_InstanceIndex;                  // 0x8B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_AddDynamicInstance_ReturnValue;           // 0x8BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                K2Node_MakeArray_Array_3;                          // 0x8C0(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x8D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x8D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5019[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFLODTile*                             K2Node_CustomEvent_FLODTile_3;                     // 0x8D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_State_4;                        // 0x8E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x8E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5070[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFLODTile*                             K2Node_CustomEvent_FLODTile_2;                     // 0x8E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_State_3;                        // 0x8F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x8F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5075[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFLODTile*                             K2Node_CustomEvent_FLODTile_1;                     // 0x8F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFLODTile*                             K2Node_CustomEvent_FLODTile;                       // 0x900(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x908(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x909(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5091[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x90C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EIcarusDamageType                 K2Node_CustomEvent_Type;                           // 0x910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Damage;                         // 0x914(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_Character_2;                    // 0x918(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x920(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DealFlatDamage_ReturnValue;               // 0x924(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_3;                  // 0x925(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x926(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50E1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFactionMissionsRowHandle             K2Node_CustomEvent_Mission;                        // 0x928(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_4;                  // 0x940(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x941(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Durability;                     // 0x944(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enabled;                        // 0x948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetPlayerController_Controller;           // 0x950(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGeneratorComponent*                   K2Node_CustomEvent_GeneratorComponent;             // 0x958(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_InActive;                       // 0x960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5114[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusActor*                          CallFunc_GetOwnerIcarusActor_ReturnValue;          // 0x968(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActivateGenerator_ReturnValue;            // 0x970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_State_2;                        // 0x971(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_512D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_Player_4;                       // 0x978(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterVoicesRowHandle             K2Node_CustomEvent_Voice;                          // 0x980(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_5;                  // 0x998(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0x999(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x99A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5158[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            K2Node_CustomEvent_Inventory_3;                    // 0x9A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Location_2;                     // 0x9A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_515C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_FromPlayer_1;                   // 0x9B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            K2Node_CustomEvent_Inventory_2;                    // 0x9B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Location_1;                     // 0x9C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5174[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_FromPlayer;                     // 0x9C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            K2Node_CustomEvent_Inventory_1;                    // 0x9D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Location;                       // 0x9D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_518E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               K2Node_CustomEvent_Player_3;                       // 0x9E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bRefundPartCost;                // 0x9E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_6;                  // 0x9E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetPlayerController_Controller_1;         // 0x9F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0x9F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0xA00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISetupRowHandle                     K2Node_CustomEvent_AISetupRow;                     // 0xA08(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Level;                          // 0xA20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterFlagsRowHandle              K2Node_CustomEvent_Flag_3;                         // 0xA24(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_State_1;                        // 0xA3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetPlayerController_Controller_2;         // 0xA40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterFlagsRowHandle              K2Node_CustomEvent_Flag_2;                         // 0xA48(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue_1;       // 0xA60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0xA68(0x18)(None)
	class AIcarusPlayerController*               CallFunc_GetPlayerController_Controller_3;         // 0xA80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0xA88(0x40)(HasGetValueTypeHash)
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue_2;       // 0xAC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               CallFunc_GetPlayerController_Controller_4;         // 0xAD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCharacterFlagPlayer_ReturnValue;       // 0xAD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5235[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;   // 0xAE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue_2;            // 0xAE8(0x18)(None)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0xB00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_524B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_6;            // 0xB08(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_4;                          // 0xB48(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0xB58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xB60(0x18)(None)
	struct FScriptedEventsRowHandle              K2Node_CustomEvent_ScriptedEvent;                  // 0xB78(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_7;                  // 0xB90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScriptedEventData                    CallFunc_GetScriptedEventsStruct_ScriptedEvents;   // 0xB98(0x58)(None)
	enum class EValid                            CallFunc_GetScriptedEventsStruct_Paths;            // 0xBF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_7;                    // 0xBF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_8;                    // 0xBF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52F7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xBF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0xC00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               K2Node_DynamicCast_AsIcarus_Player_Controller;     // 0xC08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5313[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsScripted_Event;          // 0xC18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0xC20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5340[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;   // 0xC28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0xC30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5347[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerCharacterState*                 CallFunc_GetPlayerCharacterState_ReturnValue;      // 0xC38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xC40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5353[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_Player_2;                       // 0xC50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModifierStatesRowHandle              K2Node_CustomEvent_ModifierStateRow;               // 0xC58(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xC70(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveModifierState_ReturnValue;          // 0xCA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5368[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xCA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQuestManager*                         CallFunc_GetQuestManager_ReturnValue;              // 0xCB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0xCB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5373[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AScriptedEvent*                        CallFunc_FinishSpawningActor_ReturnValue;          // 0xCC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTimeOfDaySubsystem*                   CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0xCC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AQuestManager*>                 CallFunc_GetAllActorsOfClass_OutActors;            // 0xCD0(0x10)(ReferenceParm)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_8;                  // 0xCE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5397[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQuestManager*                         CallFunc_Array_Get_Item;                           // 0xCE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_9;                    // 0xCF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xCF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EIcarusResourceType               K2Node_CustomEvent_Resource;                       // 0xCF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Units;                          // 0xCFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AIcarusNPCGOAPCharacter*>       CallFunc_GetAllActorsOfClass_OutActors_1;          // 0xD08(0x10)(ReferenceParm)
	class AIcarusNPCGOAPCharacter*               CallFunc_Array_Get_Item_1;                         // 0xD18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xD20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xD24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AIcarusNPCGOAPController*>      CallFunc_GetAllActorsOfClass_OutActors_2;          // 0xD28(0x10)(ReferenceParm)
	class AIcarusNPCGOAPController*              CallFunc_Array_Get_Item_2;                         // 0xD38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xD40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xD44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AIcarusNPCGOAPCharacter*>       CallFunc_GetAllActorsOfClass_OutActors_3;          // 0xD48(0x10)(ReferenceParm)
	class AIcarusNPCGOAPCharacter*               CallFunc_Array_Get_Item_3;                         // 0xD58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0xD60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DealFlatDamage_ReturnValue_1;             // 0xD64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0xD65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5410[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_IcarusActor_1;                  // 0xD68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GenericAction_C> K2Node_DynamicCast_AsBPI_Generic_Action;           // 0xD70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0xD81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5423[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimeOfDaySubsystem*                   CallFunc_GetWorldSubsystem_ReturnValue_3;          // 0xD88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDeployableSubsystem*                  CallFunc_GetWorldSubsystem_ReturnValue_4;          // 0xD90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Amount_1;                       // 0xD98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5435[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            K2Node_CustomEvent_Inventory;                      // 0xDA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DealDamageToInventoryItem_ReturnValue;    // 0xDA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5448[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusMountCharacter*                 K2Node_CustomEvent_Mount_2;                        // 0xDB0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Name_1;                         // 0xDB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_StepSeconds;                    // 0xDC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMountName_ReturnValue;                 // 0xDCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_9;                  // 0xDCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_10;                   // 0xDCE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5465[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusMountCharacter*                 K2Node_CustomEvent_Mount_1;                        // 0xDD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMountMovementBehaviourState      K2Node_CustomEvent_NewState_1;                     // 0xDD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5487[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusMountCharacter*                 K2Node_CustomEvent_Mount;                          // 0xDE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMountCombatBehaviourState        K2Node_CustomEvent_NewState;                       // 0xDE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5490[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogueRowHandle                    K2Node_CustomEvent_Dialogue;                       // 0xDEC(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_10;                 // 0xE04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_549E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogueSystem*                       CallFunc_GetDialogueSystem_ReturnValue;            // 0xE08(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_11;                   // 0xE10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_11;                 // 0xE11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogueSystem*                       CallFunc_GetDialogueSystem_ReturnValue_1;          // 0xE18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_12;                   // 0xE20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAccountFlagsRowHandle                K2Node_CustomEvent_Flag_1;                         // 0xE24(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetPlayerController_Controller_5;         // 0xE40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue_3;       // 0xE48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue_1;            // 0xE50(0x18)(None)
	bool                                         CallFunc_HasAccountFlagPlayer_ReturnValue;         // 0xE68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_7;            // 0xE70(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue_3;            // 0xEB0(0x18)(None)
	struct FAccountFlagsRowHandle                K2Node_CustomEvent_Flag;                           // 0xEC8(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_State;                          // 0xEE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_8;            // 0xEE8(0x40)(HasGetValueTypeHash)
	class AIcarusPlayerController*               CallFunc_GetPlayerController_Controller_6;         // 0xF28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_5;                          // 0xF30(0x10)(ReferenceParm)
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue_4;       // 0xF40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0xF48(0x18)(None)
	class AQuestManager*                         CallFunc_GetQuestManager_ReturnValue_1;            // 0xF60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               K2Node_CustomEvent_Controller_3;                   // 0xF68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0xF70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_550D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQuest*                                CallFunc_GetQuest_ReturnValue;                     // 0xF78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_21;                   // 0xF80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SkipStep_ReturnValue;                     // 0xF81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5519[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_CustomEvent_WorldLocation_1;                // 0xF84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Radius_1;                       // 0xF90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5592[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_Player_1;                       // 0xF98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAfflictionChanceRowHandle            K2Node_CustomEvent_AfflictionChance;               // 0xFA0(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xFB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_TriggerAfflictionChance_ReturnValue;      // 0xFBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_WorldLocation;                  // 0xFC0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Radius;                         // 0xFCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVoxelMinedSphere                     K2Node_MakeStruct_VoxelMinedSphere;                // 0xFD0(0x10)(NoDestructor)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0xFE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVoxelMinedSphere>             K2Node_MakeArray_Array_6;                          // 0xFE8(0x10)(ConstParm, ReferenceParm)
	TArray<class AVoxelResource*>                CallFunc_GetNearbyVoxelResources_FoundVoxels;      // 0xFF8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetNearbyVoxelResources_ReturnValue;      // 0x1008(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AVoxelResource*                        CallFunc_Array_Get_Item_4;                         // 0x1010(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x1018(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVoxelMinedState                  CallFunc_GetVoxelMinedState_ReturnValue;           // 0x101C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x101D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_13;                   // 0x101E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55D5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFishDataRowHandle                    K2Node_CustomEvent_Fish;                           // 0x1020(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_NumCatches;                     // 0x1038(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBestiaryDataRowHandle                K2Node_CustomEvent_BestiaryGroup;                  // 0x103C(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_NumPoints;                      // 0x1054(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_IcarusActor;                    // 0x1058(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_InteractingCharacter;           // 0x1060(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADeployable*                           K2Node_CustomEvent_PaintingDeployable;             // 0x1068(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPaintingsRowHandle                   K2Node_CustomEvent_PaintingRowHandle;              // 0x1070(0x18)(NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GenericAction_C> K2Node_DynamicCast_AsBPI_Generic_Action_1;         // 0x1088(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1098(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_22;                   // 0x1099(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBiomesRowHandle                      K2Node_CustomEvent_Biome;                          // 0x109C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Block;                          // 0x10B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5607[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               K2Node_CustomEvent_Controller_2;                   // 0x10B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_Character_1;                    // 0x10C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               K2Node_CustomEvent_Controller_1;                   // 0x10C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_Character;                      // 0x10D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFishSpawnZonesRowHandle              K2Node_CustomEvent_Zone;                           // 0x10D8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FProspectForecastRowHandle            K2Node_CustomEvent_ProspectForecast;               // 0x10F0(0x18)(NoDestructor, HasGetValueTypeHash)
	class AIcarusRocket*                         K2Node_CustomEvent_Dropship;                       // 0x1108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_CustomEvent_Color;                          // 0x1110(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_IconIndex;                      // 0x1120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5633[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADeployable*                           K2Node_CustomEvent_BeaconDeployable;               // 0x1128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGOAPMotivationsEnum                  K2Node_CustomEvent_Motivation;                     // 0x1130(0x10)(HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_NewValue;                       // 0x1140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5640[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AIcarusNPCGOAPController*>      CallFunc_GetAllActorsOfClass_OutActors_4;          // 0x1148(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_9;            // 0x1158(0x40)(HasGetValueTypeHash)
	class AIcarusNPCGOAPController*              CallFunc_Array_Get_Item_5;                         // 0x1198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x11A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5652[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x11A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x11B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5658[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue;            // 0x11B8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_10;           // 0x11D0(0x40)(HasGetValueTypeHash)
	class FName                                  CallFunc_BreakGOAPMotivationsEnum_Name;            // 0x1210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGOAPMotivationsEnum_Index;           // 0x1218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGOAPMotivationsRowHandle             CallFunc_StructToRowHandle_ReturnValue;            // 0x121C(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5666[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue_2;            // 0x1238(0x18)(None)
	bool                                         CallFunc_UpdateMotivationValue_ReturnValue;        // 0x1250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_566F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_11;           // 0x1258(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_7;                          // 0x1298(0x10)(ReferenceParm)
	class UFarmableComponent*                    K2Node_CustomEvent_Farmable;                       // 0x12A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x12B0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x12C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_ClassToSpawn;                   // 0x12D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            K2Node_CustomEvent_SpawnTransform;                 // 0x12E0(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x1310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_CustomEvent_Player;                         // 0x1318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x1320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWorldBossesEnum                      K2Node_CustomEvent_WorldBoss;                      // 0x1328(0x10)(HasGetValueTypeHash)
	class AWorldBossManager*                     CallFunc_GetWorldBossManager_ReturnValue;          // 0x1338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWorldBossesRowHandle                 CallFunc_StructToRowHandle_ReturnValue_1;          // 0x1340(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_23;                   // 0x1358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SpawnWorldBossOfType_ReturnValue;         // 0x1359(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56C8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectListEnum                     K2Node_CustomEvent_ForProspect;                    // 0x1360(0x10)(HasGetValueTypeHash)
	class AWorldBossManager*                     CallFunc_GetWorldBossManager_ReturnValue_1;        // 0x1370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                CallFunc_StructToRowHandle_ReturnValue_2;          // 0x1378(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_24;                   // 0x1390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWorldBossManager*                     CallFunc_GetWorldBossManager_ReturnValue_2;        // 0x1398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_25;                   // 0x13A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWorldBossManager*                     CallFunc_GetWorldBossManager_ReturnValue_3;        // 0x13A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Amount;                         // 0x13B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_26;                   // 0x13B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5706[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_slot;                           // 0x13B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          K2Node_CustomEvent_Upgrade;                        // 0x13BC(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_12;                 // 0x13D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5719[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x13D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_14;                   // 0x13E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5725[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               K2Node_DynamicCast_AsIcarus_Player_Controller_1;   // 0x13E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x13F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5732[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_3;   // 0x13F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_13;                 // 0x1400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5742[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusItem*                           CallFunc_GetFocusedItemActor_ReturnValue;          // 0x1408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_15;                   // 0x1410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x1411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5759[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULivingItemComponent*                  CallFunc_GetTrait_ReturnValue;                     // 0x1418(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x1420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               K2Node_DynamicCast_AsIcarus_Player_Controller_2;   // 0x1428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x1430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_16;                   // 0x1431(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_577E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_4;   // 0x1438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusItem*                           CallFunc_GetFocusedItemActor_ReturnValue_1;        // 0x1440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_14;                 // 0x1448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths_1;                         // 0x1449(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5797[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULivingItemComponent*                  CallFunc_GetTrait_ReturnValue_1;                   // 0x1450(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_17;                   // 0x1458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_18;                   // 0x1459(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_579B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_3;                   // 0x1460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               K2Node_DynamicCast_AsIcarus_Player_Controller_3;   // 0x1468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x1470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths_15;                 // 0x1471(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57A9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_5;   // 0x1478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_19;                   // 0x1480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusItem*                           CallFunc_GetFocusedItemActor_ReturnValue_2;        // 0x1488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_4;                   // 0x1490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths_2;                         // 0x1498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULivingItemComponent*                  CallFunc_GetTrait_ReturnValue_2;                   // 0x14A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               K2Node_DynamicCast_AsIcarus_Player_Controller_4;   // 0x14A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x14B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_6;   // 0x14B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_20;                   // 0x14C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusItem*                           CallFunc_GetFocusedItemActor_ReturnValue_3;        // 0x14C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths_3;                         // 0x14D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULivingItemComponent*                  CallFunc_GetTrait_ReturnValue_3;                   // 0x14D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               K2Node_CustomEvent_Controller;                     // 0x14E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Name;                           // 0x14E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_21;                   // 0x14F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


