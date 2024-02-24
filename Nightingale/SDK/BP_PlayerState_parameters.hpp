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
// Function BP_PlayerState.BP_PlayerState_C.GetMenusComponent
struct ABP_PlayerState_C_GetMenusComponent_Params
{
public:
	class UMenusComponent*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.GetQuestTracker
struct ABP_PlayerState_C_GetQuestTracker_Params
{
public:
	TScriptInterface<class IQuestTrackerInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x92 (0x92 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CallFishCaught
struct ABP_PlayerState_C_CallFishCaught_Params
{
public:
	struct FFish                                 CaughtFish;                                        // 0x0(0x90)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.GetWeakpointComponent
struct ABP_PlayerState_C_GetWeakpointComponent_Params
{
public:
	bool                                         HasInterface;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DD9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_WeakPoint_C>     Interface;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.GetPingInterface
struct ABP_PlayerState_C_GetPingInterface_Params
{
public:
	bool                                         bHasInterface;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_Ping_C>          PingInterface;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC2 (0xC2 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.GetBPPlayerController
struct ABP_PlayerState_C_GetBPPlayerController_Params
{
public:
	class ABP_PlayerController_C*                Player_Controller;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue;            // 0x8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x78(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x88(0x18)(None)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                K2Node_DynamicCast_AsBP_Player_Controller;         // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.GetMapTracker
struct ABP_PlayerState_C_GetMapTracker_Params
{
public:
	class UBP_MapTracker_C*                      MapTracker;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_Player_Controller;  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MapTracker_C*                      CallFunc_GetMapTracker_MapTrackerComponent;        // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.GetGroupSystem
struct ABP_PlayerState_C_GetGroupSystem_Params
{
public:
	class UGroupComponentBase*                   GroupComponent;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.GetDebugModeStateInterface
struct ABP_PlayerState_C_GetDebugModeStateInterface_Params
{
public:
	class UBP_DebugModeStateComponent_C*         DebugModeState;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.GetRespawnPoint
struct ABP_PlayerState_C_GetRespawnPoint_Params
{
public:
	class ANWXPlayerStart*                       RespawnPoint;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.GetOwningCharacter
struct ABP_PlayerState_C_GetOwningCharacter_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AnimCharacter_C*                   Character;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller;            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_AnimCharacter_C*                   K2Node_DynamicCast_AsBP_Anim_Character;            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B (0x2B - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.IsCharacterInStatus
struct ABP_PlayerState_C_IsCharacterInStatus_Params
{
public:
	enum class E_CharacterGameStatus             CharacterState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_CharacterStateEntry                CallFunc_Array_Get_Item;                           // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.OnCharacterStatesChanged
struct ABP_PlayerState_C_OnCharacterStatesChanged_Params
{
public:
	struct FS_CharacterStateEntry                MostRecentState;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_627A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CharacterStateEntry                CallFunc_Array_Get_Item;                           // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.RemoveCharacterState
struct ABP_PlayerState_C_RemoveCharacterState_Params
{
public:
	class UObject*                               StateReporter;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterGameStatus             State;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CharacterStateEntry                CallFunc_GetExistentStateForStateReporter_CharacterState; // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetExistentStateForStateReporter_Index;   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetExistentStateForStateReporter_Found;   // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.AddCharacterState
struct ABP_PlayerState_C_AddCharacterState_Params
{
public:
	class UObject*                               StateReporter;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterGameStatus             State;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_638A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CharacterStateEntry                CallFunc_GetExistentStateForStateReporter_CharacterState; // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetExistentStateForStateReporter_Index;   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetExistentStateForStateReporter_Found;   // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6397[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CharacterStateEntry                K2Node_MakeStruct_S_CharacterStateEntry;           // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x55 (0x55 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.GetExistentStateForStateReporter
struct ABP_PlayerState_C_GetExistentStateForStateReporter_Params
{
public:
	class UObject*                               StateReporter;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterGameStatus             State;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6444[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CharacterStateEntry                CharacterState;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x24(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6453[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CharacterStateEntry                FoundCharacterState;                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        FoundStateIndex;                                   // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6461[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CharacterStateEntry                K2Node_MakeStruct_S_CharacterStateEntry;           // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.OnRep_bServerReady
struct ABP_PlayerState_C_OnRep_bServerReady_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_653C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6548[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponentBase*               CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6557[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.Run_CodexTelemetry_CodexViewed
struct ABP_PlayerState_C_Run_CodexTelemetry_CodexViewed_Params
{
public:
	class UCodexBaseDataAsset*                   Codex_Data_Asset;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.Server_AddCharacterState
struct ABP_PlayerState_C_Server_AddCharacterState_Params
{
public:
	class UObject*                               StateReporter;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterGameStatus             CharacterState;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.Server_RemoveCharacterState
struct ABP_PlayerState_C_Server_RemoveCharacterState_Params
{
public:
	class UObject*                               StateReporter;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterGameStatus             CharacterState;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CallGiveTag
struct ABP_PlayerState_C_CallGiveTag_Params
{
public:
	struct FGameplayTag                          Gameplay_Tag;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CallCreatureKilled
struct ABP_PlayerState_C_CallCreatureKilled_Params
{
public:
	struct FDataTableRowHandle                   Creature_Information;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CreatureTagContainer;                              // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 KillerTagContainer;                                // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CallStructureBlueprintPlaced
struct ABP_PlayerState_C_CallStructureBlueprintPlaced_Params
{
public:
	struct FDataTableRowHandle                   StructureDataHandle;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2F4 (0x2F4 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CallResourceHarvested
struct ABP_PlayerState_C_CallResourceHarvested_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Amount;                                            // 0x2F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CallStructureCompleted
struct ABP_PlayerState_C_CallStructureCompleted_Params
{
public:
	class AActor*                                Owning_Actor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Piece_ID;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CallItemDeposited_InWorldContainer
struct ABP_PlayerState_C_CallItemDeposited_InWorldContainer_Params
{
public:
	struct FItemDataReference                    ItemRowHandle;                                     // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        Quantity;                                          // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ContainerTag;                                      // 0x84(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CrossServer_StructureBlueprintPlaced
struct ABP_PlayerState_C_CrossServer_StructureBlueprintPlaced_Params
{
public:
	struct FDataTableRowHandle                   StructureDataHandle;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CrossServer_CallCreatureKilled
struct ABP_PlayerState_C_CrossServer_CallCreatureKilled_Params
{
public:
	struct FDataTableRowHandle                   Creature_Info;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CreatureTagContainer;                              // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 KillerTagContainer;                                // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CrossServer_CallTagGiven
struct ABP_PlayerState_C_CrossServer_CallTagGiven_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CallWeakpointHit
struct ABP_PlayerState_C_CallWeakpointHit_Params
{
public:
	struct FGameplayTagContainer                 WeakpointType;                                     // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 CreatureTags;                                      // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FHitResult                            HitResult;                                         // 0x40(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x40 (0x40 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CrossServer_WeakpointHit
struct ABP_PlayerState_C_CrossServer_WeakpointHit_Params
{
public:
	struct FGameplayTagContainer                 WeakpointType;                                     // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 CreatureTags;                                      // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CallOnSpellCast
struct ABP_PlayerState_C_CallOnSpellCast_Params
{
public:
	TSoftObjectPtr<class UTechniqueDataAsset>    SpellCast;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CallOnInteractedWithPlayer
struct ABP_PlayerState_C_CallOnInteractedWithPlayer_Params
{
public:
	class APawn*                                 InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.OnInventoryReady
struct ABP_PlayerState_C_OnInventoryReady_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x763 (0x763 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState
struct ABP_PlayerState_C_ExecuteUbergraph_BP_PlayerState_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D35[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D3D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCodexBaseDataAsset*                   K2Node_CustomEvent_Codex_Data_Asset;               // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D48[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_StateReporter_1;                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterGameStatus             K2Node_CustomEvent_CharacterState_1;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_StateReporter;                  // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterGameStatus             K2Node_CustomEvent_CharacterState;                 // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_Event_Gameplay_Tag;                         // 0x6C(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_Event_Creature_Information;                 // 0x78(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_CreatureTagContainer;                 // 0x88(0x20)(None)
	struct FGameplayTagContainer                 K2Node_Event_KillerTagContainer;                   // 0xA8(0x20)(None)
	struct FDataTableRowHandle                   K2Node_Event_StructureDataHandle;                  // 0xC8(0x10)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D84[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       K2Node_Event_ItemEntry;                            // 0xE0(0x2F0)(None)
	int32                                        K2Node_Event_Amount;                               // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Owning_Actor;                         // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Piece_ID;                             // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DEA[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    K2Node_Event_ItemRowHandle;                        // 0x3F0(0x80)(HasGetValueTypeHash)
	int32                                        K2Node_Event_Quantity;                             // 0x470(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_ContainerTag;                         // 0x474(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_CustomEvent_StructureDataHandle;            // 0x480(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x491(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_3;               // 0x492(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_4;               // 0x493(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x494(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0x4A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_5;               // 0x4A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_3;                   // 0x4A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E27[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_CustomEvent_Creature_Info;                  // 0x4A8(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_CustomEvent_CreatureTagContainer;           // 0x4B8(0x20)(None)
	struct FGameplayTagContainer                 K2Node_CustomEvent_KillerTagContainer;             // 0x4D8(0x20)(None)
	bool                                         CallFunc_IsServer_ReturnValue_4;                   // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_CustomEvent_Tag;                            // 0x4FC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_6;               // 0x504(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 K2Node_Event_WeakpointType;                        // 0x508(0x20)(None)
	struct FGameplayTagContainer                 K2Node_Event_CreatureTags;                         // 0x528(0x20)(None)
	struct FHitResult                            K2Node_Event_HitResult;                            // 0x548(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                 K2Node_CustomEvent_WeakpointType;                  // 0x630(0x20)(None)
	struct FGameplayTagContainer                 K2Node_CustomEvent_CreatureTags;                   // 0x650(0x20)(None)
	TSoftObjectPtr<class UTechniqueDataAsset>    K2Node_Event_SpellCast;                            // 0x670(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_5;                   // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_6;                   // 0x699(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_7;               // 0x69A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_8;               // 0x69B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_7;                   // 0x69C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_InteractingPawn;                      // 0x6A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x6A8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x6B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_9;               // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GameState_C*                       K2Node_DynamicCast_AsBP_Game_State;                // 0x6C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_10;              // 0x6D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_11;              // 0x6D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6ED6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x6D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x6E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_8;                   // 0x6E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EF6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x6E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  K2Node_DynamicCast_AsNWXPlayer_Controller;         // 0x6F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x6F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x6F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F09[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBasicAwaiter*                         CallFunc_GetInventoryAwaiter_ReturnValue;          // 0x700(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IAwaitable>           CallFunc_AwaitBP_Awaitable_CastInput;              // 0x708(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDelegateHandleBPWrapper              CallFunc_AwaitBP_Handle;                           // 0x718(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0x720(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_2;            // 0x730(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x740(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x750(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_9;                   // 0x760(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success;                        // 0x761(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_10;                  // 0x762(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.OnSpellCasted__DelegateSignature
struct ABP_PlayerState_C_OnSpellCasted__DelegateSignature_Params
{
public:
	TSoftObjectPtr<class UTechniqueDataAsset>    Spell_Casted;                                      // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.OnInteractedWithPlayer__DelegateSignature
struct ABP_PlayerState_C_OnInteractedWithPlayer__DelegateSignature_Params
{
public:
	class APawn*                                 InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.OnFishCaught__DelegateSignature
struct ABP_PlayerState_C_OnFishCaught__DelegateSignature_Params
{
public:
	struct FFish                                 CaughtFish;                                        // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x128 (0x128 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.WeakpointHit__DelegateSignature
struct ABP_PlayerState_C_WeakpointHit__DelegateSignature_Params
{
public:
	struct FGameplayTagContainer                 WeakpointType;                                     // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 CreatureTags;                                      // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FHitResult                            HitResult;                                         // 0x40(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.OnPlayerInteraction__DelegateSignature
struct ABP_PlayerState_C_OnPlayerInteraction__DelegateSignature_Params
{
public:
	struct FGameplayTagContainer                 InteractionTags;                                   // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               InteractionTarget;                                 // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.OnPawnDamageReceived__DelegateSignature
struct ABP_PlayerState_C_OnPawnDamageReceived__DelegateSignature_Params
{
public:
	double                                       Damage;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 EffectTags;                                        // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x320 (0x320 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.OnItemAbilityUsed__DelegateSignature
struct ABP_PlayerState_C_OnItemAbilityUsed__DelegateSignature_Params
{
public:
	TSoftObjectPtr<class UTechniqueDataAsset>    Technique;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_71F2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemEntry;                                         // 0x30(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8C (0x8C - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.ItemDepositedWorldContainer__DelegateSignature
struct ABP_PlayerState_C_ItemDepositedWorldContainer__DelegateSignature_Params
{
public:
	struct FItemDataReference                    ItemRowHandle;                                     // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        Quantity;                                          // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ContainerTag;                                      // 0x84(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.StructureCompleted__DelegateSignature
struct ABP_PlayerState_C_StructureCompleted__DelegateSignature_Params
{
public:
	class AActor*                                Owning_Actor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Piece_ID;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F4 (0x2F4 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.ResourceHarvested__DelegateSignature
struct ABP_PlayerState_C_ResourceHarvested__DelegateSignature_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Amount;                                            // 0x2F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.StructureBlueprintPlaced__DelegateSignature
struct ABP_PlayerState_C_StructureBlueprintPlaced__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   StructureDataHandle;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CreatureKilled__DelegateSignature
struct ABP_PlayerState_C_CreatureKilled__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   Creature_Info;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CreatureTagContainer;                              // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 KillerTagContainer;                                // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.TagGiven__DelegateSignature
struct ABP_PlayerState_C_TagGiven__DelegateSignature_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerState.BP_PlayerState_C.CharacterStatesUpdated__DelegateSignature
struct ABP_PlayerState_C_CharacterStatesUpdated__DelegateSignature_Params
{
public:
	struct FS_CharacterStateEntry                MostRecentState;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


