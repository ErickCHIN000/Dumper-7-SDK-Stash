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

// 0x3C (0x3C - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.IsReadyForActivation
struct ABP_StretchGoal_Boss_Trigger_C_IsReadyForActivation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A70[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGoatCastleSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGCastleStretchGoal*                  CallFunc_GetCurrentlyActiveGoal_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A7D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGoatCastleSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGGoatCastleSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGCastleStretchGoal*                  CallFunc_GetCurrentlyActiveGoal_ReturnValue_1;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnyGoalUnlocking_ReturnValue;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.CanBeInteractedWith
struct ABP_StretchGoal_Boss_Trigger_C_CanBeInteractedWith_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsReadyForActivation_ReturnValue;         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x188 (0x188 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.GetInteractTextTitle
struct ABP_StretchGoal_Boss_Trigger_C_GetInteractTextTitle_Params
{
public:
	class AGGPlayerController*                   InteractingPlayerController;                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm)
	float                                        HoldDuration;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B10[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGoatCastleSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGCastleStretchGoal*                  CallFunc_GetCurrentlyActiveGoal_ReturnValue;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B1F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B23[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x98(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0xD8(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0xE8(0x40)(HasGetValueTypeHash)
	float                                        CallFunc_GetRequiredHoldDuration_ReturnValue;      // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B30[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x130(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x140(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x158(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x170(0x18)(None)
};

// 0x2C (0x2C - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Interact
struct ABP_StretchGoal_Boss_Trigger_C_Interact_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeldFor;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BA3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetRequiredHoldDuration_ReturnValue;      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeInteractedWith_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BAC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGoatCastleSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGCastleStretchGoal*                  CallFunc_GetCurrentlyActiveGoal_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetCanBeInteractedWith
struct ABP_StretchGoal_Boss_Trigger_C_SetCanBeInteractedWith_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Set Can Activate SG Button
struct ABP_StretchGoal_Boss_Trigger_C_Set_Can_Activate_SG_Button_Params
{
public:
	bool                                         Should_ActivateSG;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AnimateLids;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         WasAlreadyInState;                                 // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Set Activateable Visuals SG
struct ABP_StretchGoal_Boss_Trigger_C_Set_Activateable_Visuals_SG_Params
{
public:
	bool                                         Activateable;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AnimateLids;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAnimateLids;                                 // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsActivatable;                                     // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsLoaded_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Update Active Status
struct ABP_StretchGoal_Boss_Trigger_C_Update_Active_Status_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C78[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGoatCastleSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGCastleStretchGoal*                  CallFunc_GetCurrentlyActiveGoal_ReturnValue;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetButtonActive
struct ABP_StretchGoal_Boss_Trigger_C_SetButtonActive_Params
{
public:
	bool                                         NewStatus;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetActiveFXEnabled
struct ABP_StretchGoal_Boss_Trigger_C_SetActiveFXEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldBeEnabled;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CBE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_1;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.UnlockTrigger
struct ABP_StretchGoal_Boss_Trigger_C_UnlockTrigger_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CE7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.LockTrigger
struct ABP_StretchGoal_Boss_Trigger_C_LockTrigger_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D17[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetLidsOpened
struct ABP_StretchGoal_Boss_Trigger_C_SetLidsOpened_Params
{
public:
	bool                                         Open;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECollisionEnabled                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionEnabled                 Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECollisionEnabled                 K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Set Activateable Visuals Boss
struct ABP_StretchGoal_Boss_Trigger_C_Set_Activateable_Visuals_Boss_Params
{
public:
	bool                                         PortalActivateable;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AnimateLids;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAnimateLids;                                 // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPortalActivatable;                               // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D78[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     CallFunc_GetLoadedAsset_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     CallFunc_GetLoadedAsset_ReturnValue_1;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_2;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Set Triggered Visuals Boss
struct ABP_StretchGoal_Boss_Trigger_C_Set_Triggered_Visuals_Boss_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DBC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsLoaded_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DBF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue;               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DC4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             CallFunc_GetLoadedAsset_ReturnValue_1;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue_1;                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DC8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             CallFunc_GetLoadedAsset_ReturnValue_2;             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue_2;                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Set Can Activate Portal Button
struct ABP_StretchGoal_Boss_Trigger_C_Set_Can_Activate_Portal_Button_Params
{
public:
	bool                                         CanActivatePortal;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AnimateLids;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         WasAlreadyInState;                                 // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5A (0x5A - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.DoesTriggerHavePlayer
struct ABP_StretchGoal_Boss_Trigger_C_DoesTriggerHavePlayer_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Has_Player;                                        // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         TriggerHasPlayer;                                  // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E4E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E55[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E62[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           CallFunc_GetOverlappingComponents_OutOverlappingComponents; // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E66[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompGoat_IsGoat;                        // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompGoat_IsCapsuleComponent;            // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompGoat_IsMeshComponent;               // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E6E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_IsCompGoat_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E77[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnLoaded_55D6FF4846FB0812D869AC80B7004F02
struct ABP_StretchGoal_Boss_Trigger_C_OnLoaded_55D6FF4846FB0812D869AC80B7004F02_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnLoaded_6227C4B049F3B3A07665EE8A836EA64D
struct ABP_StretchGoal_Boss_Trigger_C_OnLoaded_6227C4B049F3B3A07665EE8A836EA64D_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnDynamicLoadingFinished__DelegateSignature
struct ABP_StretchGoal_Boss_Trigger_C_BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnDynamicLoadingFinished__DelegateSignature_Params
{
public:
	class UGGDynamicAssetHoldingComponent*       DynAssetComp;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_4_OnLostSignificance__DelegateSignature
struct ABP_StretchGoal_Boss_Trigger_C_BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_4_OnLostSignificance__DelegateSignature_Params
{
public:
	class UGGDynamicAssetHoldingComponent*       DynAssetComp;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnCurrentGoalUpdated
struct ABP_StretchGoal_Boss_Trigger_C_OnCurrentGoalUpdated_Params
{
public:
	class AGGCastleStretchGoal*                  UpdatedGoal;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetPlateCircleMaterial
struct ABP_StretchGoal_Boss_Trigger_C_SetPlateCircleMaterial_Params
{
public:
	bool                                         ShouldUseActiveMaterial;                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetPlateEyeMaterial
struct ABP_StretchGoal_Boss_Trigger_C_SetPlateEyeMaterial_Params
{
public:
	bool                                         ShouldUseActiveMaterial;                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Multicast_SetActiveFXEnabled
struct ABP_StretchGoal_Boss_Trigger_C_Multicast_SetActiveFXEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_StretchGoal_Boss_Trigger_C_BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1C (0x1C - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_StretchGoal_Boss_Trigger_C_BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnCinematicStarted
struct ABP_StretchGoal_Boss_Trigger_C_OnCinematicStarted_Params
{
public:
	class ULevelSequencePlayer*                  Sequence;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x550 (0x550 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.ExecuteUbergraph_BP_StretchGoal_Boss_Trigger
struct ABP_StretchGoal_Boss_Trigger_C_ExecuteUbergraph_BP_StretchGoal_Boss_Trigger_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1139[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_113D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1140[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGDynamicAssetHoldingComponent*       K2Node_ComponentBoundEvent_DynAssetComp_1;         // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       K2Node_ComponentBoundEvent_DynAssetComp;           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesTriggerHavePlayer_Has_Player;         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1148[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_114C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetPlayerControllerFromActor_ReturnValue; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_114F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TeleportLoc_C*                     K2Node_DynamicCast_AsBP_Teleport_Loc;              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1157[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x88(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1158[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_115B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLoadingScreenParameters              K2Node_MakeStruct_LoadingScreenParameters;         // 0xB8(0x48)(None)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_115C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTeleportParameters                   K2Node_MakeStruct_TeleportParameters;              // 0x108(0x58)(NoDestructor)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x164(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_1160[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGCastleStretchGoal*                  K2Node_CustomEvent_UpdatedGoal;                    // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ShouldUseActiveMaterial_1;      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_ShouldUseActiveMaterial;        // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1163[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInstance>      K2Node_Select_Default;                             // 0x188(0x28)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1B0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1C0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1168[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x1D8(0x8)(NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue;               // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue_1;             // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1F0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_bEnabled;                       // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_3;               // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsLoaded_ReturnValue;                  // 0x203(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_116F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_2;             // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGGoatCastleSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1171[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Update_Active_Status_Active;              // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1172[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_3;             // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue_4;             // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Update_Active_Status_Active_1;            // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x242(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1176[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     K2Node_DynamicCast_AsMaterial_Instance;            // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_117A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x260(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor_1;           // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp_1;            // 0x270(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bFromSweep;             // 0x27C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_117E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult;            // 0x280(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x308(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0x318(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCompGoat_IsGoat;                        // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompGoat_IsCapsuleComponent;            // 0x325(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompGoat_IsMeshComponent;               // 0x326(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1185[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_IsCompGoat_ReturnValue;                   // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCompGoat_IsGoat_1;                      // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompGoat_IsCapsuleComponent_1;          // 0x331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompGoat_IsMeshComponent_1;             // 0x332(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1187[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_IsCompGoat_ReturnValue_1;                 // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1189[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x344(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_118A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGLevelSequenceActor*                 CallFunc_CreateGGLevelSequencePlayer_OutActor;     // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                  CallFunc_CreateGGLevelSequencePlayer_ReturnValue;  // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKeyValueBase                         CallFunc_KeyValue_IntToKeyValue_ReturnValue;       // 0x368(0x28)(None)
	bool                                         CallFunc_UpdateKeyValueData_ReturnValue;           // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_118C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x394(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                K2Node_MakeStruct_Color;                           // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_118D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTravelSettings                       K2Node_MakeStruct_TravelSettings;                  // 0x3A0(0x50)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_118F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue_5;             // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1190[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x408(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsLoaded_ReturnValue_1;                // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_4;               // 0x412(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x413(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x41C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x41D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1195[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1196[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_StretchGoal_Boss_Trigger_C*        CallFunc_Array_Get_Item_1;                         // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               CallFunc_Array_Get_Item_2;                         // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1197[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x43C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x448(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x450(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x460(0x10)(ZeroConstructor, NoDestructor)
	class UGGGatherGoatsSubsystem*               CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasGatherEventWithID_ReturnValue;         // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_119B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_Array_Get_Item_3;                         // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x489(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_119F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue;        // 0x490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               Temp_object_Variable_1;                            // 0x4A0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               Temp_object_Variable_2;                            // 0x4B0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_2;           // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequencePlayer*                  K2Node_CustomEvent_Sequence;                       // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue;        // 0x4C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue_1;      // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGLevelTravelSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue_2;      // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInstance>      K2Node_Select_Default_1;                           // 0x4F0(0x28)(HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_3;                            // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     K2Node_DynamicCast_AsMaterial_Instance_1;          // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_StretchGoal_Boss_Trigger_C*        CallFunc_Array_Get_Item_4;                         // 0x530(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x538(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x53C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x544(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnInteracted__DelegateSignature
struct ABP_StretchGoal_Boss_Trigger_C_OnInteracted__DelegateSignature_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnGoatTeleported__DelegateSignature
struct ABP_StretchGoal_Boss_Trigger_C_OnGoatTeleported__DelegateSignature_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnPlayerLeftTrigger__DelegateSignature
struct ABP_StretchGoal_Boss_Trigger_C_OnPlayerLeftTrigger__DelegateSignature_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnPlayerEnteredTrigger__DelegateSignature
struct ABP_StretchGoal_Boss_Trigger_C_OnPlayerEnteredTrigger__DelegateSignature_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


