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
// Function ArsenalController.ArsenalController_C.GetPauseMenu
struct AArsenalController_C_GetPauseMenu_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalController.ArsenalController_C.GetCameraControlComponent
struct AArsenalController_C_GetCameraControlComponent_Params
{
public:
	class UTTLDefaultCameraControlComponent*     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function ArsenalController.ArsenalController_C.ChangeBaseCharacter
struct AArsenalController_C_ChangeBaseCharacter_Params
{
public:
	class AActor*                                BaseCharacter;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BE[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseCharacter_C*                      K2Node_DynamicCast_AsBase_Character;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ChangeBaseCharacter_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function ArsenalController.ArsenalController_C.ChangeArsenalHUDComponent
struct AArsenalController_C_ChangeArsenalHUDComponent_Params
{
public:
	class AActor*                                ArsenalActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChangedArsenal;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFirst;                                           // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C7[0x5];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   K2Node_DynamicCast_AsArsenal_Character;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ChangeArsenalHUDComponent_ReturnValue;    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalController.ArsenalController_C.GetMainArsenal
struct AArsenalController_C_GetMainArsenal_Params
{
public:
	class ATTLCharacterCommon*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ArsenalController.ArsenalController_C.SendArmAttackToServer
struct AArsenalController_C_SendArmAttackToServer_Params
{
public:
	bool                                         IsLeft;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPressed;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SendPacket;                                        // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckNotifyArmWeaponAttack_ReturnValue;   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function ArsenalController.ArsenalController_C.PressAttackSupport
struct AArsenalController_C_PressAttackSupport_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.IsRequestedStartTrans
struct AArsenalController_C_IsRequestedStartTrans_Params
{
public:
	bool                                         Isrequested;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.IsWaitReceiveStartTransform
struct AArsenalController_C_IsWaitReceiveStartTransform_Params
{
public:
	bool                                         IsNowWait;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function ArsenalController.ArsenalController_C.GetPlayerArsenalVPPercent
struct AArsenalController_C_GetPlayerArsenalVPPercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E8[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function ArsenalController.ArsenalController_C.ProcessGetOnArsenalCompleted
struct AArsenalController_C_ProcessGetOnArsenalCompleted_Params
{
public:
	class AOuterCharacter_C*                     SelfOuterCharacter;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArsenalCharacter_C*                   GetOnArsenalCharacter;                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChange;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsChangeArsenal;                                   // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F7[0x5];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue1;                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   K2Node_DynamicCast_AsArsenal_Character;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue1;           // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue2;           // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue3;           // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FA[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ChangeArsenalHUDComponent_ReturnValue;    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FC[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLGameState*                         K2Node_DynamicCast_AsTTLGame_State;                // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6E (0x6E - 0x0)
// Function ArsenalController.ArsenalController_C.FindGetOnArsenalCharacter
struct AArsenalController_C_FindGetOnArsenalCharacter_Params
{
public:
	class AArsenalCharacter_C*                   GetOnArsenalCharacter;                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArsenalCharacter_C*                   FoundArsenalCharacter;                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Distance;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AArsenalCharacter_C*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x30(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_113[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckCanGetOn_ReturnValue;                // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_117[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x50(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x5C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD5 (0xD5 - 0x0)
// Function ArsenalController.ArsenalController_C.GetUnusedPlayerStartTransform
struct AArsenalController_C_GetUnusedPlayerStartTransform_Params
{
public:
	struct FTransform                            ReturnTransform;                                   // 0x0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_128[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APlayerStart*>                  CallFunc_GetAllActorsOfClass_OutActors;            // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_129[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerStart*                          CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x60(0x30)(IsPlainOldData, NoDestructor)
	class APlayerStart*                          CallFunc_Array_Get_Item1;                          // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue1;                // 0xA0(0x30)(IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalController.ArsenalController_C.InitializeBP
struct AArsenalController_C_InitializeBP_Params
{
public:
	class ABaseCharacter_C*                      BaseCharacter;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function ArsenalController.ArsenalController_C.CanActInputActionBP
struct AArsenalController_C_CanActInputActionBP_Params
{
public:
	enum class ETTLEActionType                   ActionType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CanAct;                                            // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidObjects_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsControllableMovement_ReturnValue;       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsControllableCriticalAction_ReturnValue; // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function ArsenalController.ArsenalController_C.CheckDoubleAttack
struct AArsenalController_C_CheckDoubleAttack_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACloseRangeWeaponCommon_C*             CallFunc_GetCloseRangeWeapon_CloseRangeWeapon;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACloseRangeWeaponCommon_C*             CallFunc_GetCloseRangeWeapon_CloseRangeWeapon1;    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue1;           // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function ArsenalController.ArsenalController_C.ReleaseAttackRight
struct AArsenalController_C_ReleaseAttackRight_Params
{
public:
	class ACloseRangeWeaponCommon_C*             CallFunc_GetCloseRangeWeapon_CloseRangeWeapon;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function ArsenalController.ArsenalController_C.ReleaseAttackLeft
struct AArsenalController_C_ReleaseAttackLeft_Params
{
public:
	class ACloseRangeWeaponCommon_C*             CallFunc_GetCloseRangeWeapon_CloseRangeWeapon;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3A (0x3A - 0x0)
// Function ArsenalController.ArsenalController_C.PressAttackRight
struct AArsenalController_C_PressAttackRight_Params
{
public:
	bool                                         CallFunc_TryInputArsenalReload_ReturnValue;        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckDoubleAttack_Result;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ProcessFireInput_Result;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ProcessFireInput_Result1;                 // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanSpinShoot_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   K2Node_DynamicCast_AsArsenal_Character;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_161[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLWeaponBase*                        CallFunc_GetCurrentRightWeapon_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetAttackFlag_ReturnValue;                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_163[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACloseRangeWeaponCommon_C*             CallFunc_GetCloseRangeWeapon_CloseRangeWeapon;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCompletelyDestroyed_ReturnValue;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3B (0x3B - 0x0)
// Function ArsenalController.ArsenalController_C.PressAttackLeft
struct AArsenalController_C_PressAttackLeft_Params
{
public:
	bool                                         CallFunc_TryInputArsenalReload_ReturnValue;        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLArsenalCloseRangeAttackType   Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLArsenalCloseRangeAttackType   Temp_byte_Variable1;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckDoubleAttack_Result;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ProcessFireInput_Result;                  // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ProcessFireInput_Result1;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanSpinShoot_ReturnValue;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   K2Node_DynamicCast_AsArsenal_Character;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACloseRangeWeaponCommon_C*             CallFunc_GetCloseRangeWeapon_CloseRangeWeapon;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetAttackFlag_ReturnValue;                // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLArsenalCloseRangeAttackType   K2Node_Select_Default;                             // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_171[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLWeaponBase*                        CallFunc_GetCurrentLeftWeapon_ReturnValue;         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompletelyDestroyed_ReturnValue;        // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalJump
struct AArsenalController_C_InputArsenalJump_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalQuickBoost
struct AArsenalController_C_InputArsenalQuickBoost_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ArsenalController.ArsenalController_C.InputLongArsenalGetOff
struct AArsenalController_C_InputLongArsenalGetOff_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentSwitch
struct AArsenalController_C_InputArsenalEquipmentSwitch_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentPrev
struct AArsenalController_C_InputArsenalEquipmentPrev_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentNext
struct AArsenalController_C_InputArsenalEquipmentNext_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerArsenalJump
struct AArsenalController_C_RunOnServerArsenalJump_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerQuickBoost
struct AArsenalController_C_RunOnServerQuickBoost_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentRight
struct AArsenalController_C_InputArsenalEquipmentRight_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentLeft
struct AArsenalController_C_InputArsenalEquipmentLeft_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalEquipmentDown
struct AArsenalController_C_InputArsenalEquipmentDown_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalPurgeRight
struct AArsenalController_C_InputArsenalPurgeRight_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalPurgeLeft
struct AArsenalController_C_InputArsenalPurgeLeft_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerArsenalGetOff
struct AArsenalController_C_RunOnServerArsenalGetOff_Params
{
public:
	enum class ETTLEHumanGenderType              HumanGenderType;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              HumanCustomInfo;                                   // 0x4(0x94)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        WeaponRemainBits;                                  // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_190[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FemtoValue;                                        // 0x9C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalGetOff
struct AArsenalController_C_InputArsenalGetOff_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalEject
struct AArsenalController_C_InputArsenalEject_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerEjectStart
struct AArsenalController_C_RunOnServerEjectStart_Params
{
public:
	enum class ETTLEHumanGenderType              GenderType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              CustomInfo;                                        // 0x4(0x94)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ArsenalController.ArsenalController_C.InputLongArsenalPurge
struct AArsenalController_C_InputLongArsenalPurge_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerOuterDash
struct AArsenalController_C_RunOnServerOuterDash_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ArsenalController.ArsenalController_C.OnArsenalGetOnCompleted
struct AArsenalController_C_OnArsenalGetOnCompleted_Params
{
public:
	class AArsenalCharacter_C*                   TargetArsenal;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOuterCharacter_C*                     OuterChara;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputHumanGetOn
struct AArsenalController_C_InputHumanGetOn_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerOuterJump
struct AArsenalController_C_RunOnServerOuterJump_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalThrowCatch
struct AArsenalController_C_InputArsenalThrowCatch_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalBoostOff
struct AArsenalController_C_InputArsenalBoostOff_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalGuard
struct AArsenalController_C_InputArsenalGuard_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalThrowRelease
struct AArsenalController_C_InputArsenalThrowRelease_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalThrowAimCancel
struct AArsenalController_C_InputArsenalThrowAimCancel_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalCameraLock
struct AArsenalController_C_InputArsenalCameraLock_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputHumanCameraLock
struct AArsenalController_C_InputHumanCameraLock_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputMenuOk
struct AArsenalController_C_InputMenuOk_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputMenuCancel
struct AArsenalController_C_InputMenuCancel_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalAttackShoulder
struct AArsenalController_C_InputArsenalAttackShoulder_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalAttackRight
struct AArsenalController_C_InputArsenalAttackRight_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputHumanAttackRight
struct AArsenalController_C_InputHumanAttackRight_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalAttackLeft
struct AArsenalController_C_InputArsenalAttackLeft_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputHumanAttackLeft
struct AArsenalController_C_InputHumanAttackLeft_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalMirage
struct AArsenalController_C_InputArsenalMirage_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerArsenalGetOn
struct AArsenalController_C_RunOnServerArsenalGetOn_Params
{
public:
	class AArsenalCharacter_C*                   TargetArsenal;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerArsenalBoostOFF
struct AArsenalController_C_RunOnServerArsenalBoostOFF_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerArsenalAttackLeft
struct AArsenalController_C_RunOnServerArsenalAttackLeft_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerArsenalAttackRight
struct AArsenalController_C_RunOnServerArsenalAttackRight_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputMenuStart
struct AArsenalController_C_InputMenuStart_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputHumanTouch
struct AArsenalController_C_InputHumanTouch_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalAttackSpecial
struct AArsenalController_C_InputArsenalAttackSpecial_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalThrowExecRight
struct AArsenalController_C_InputArsenalThrowExecRight_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalThrowExecLeft
struct AArsenalController_C_InputArsenalThrowExecLeft_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputMenuUp
struct AArsenalController_C_InputMenuUp_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputMenuDown
struct AArsenalController_C_InputMenuDown_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ArsenalController.ArsenalController_C.InputMenuAnalogLDown
struct AArsenalController_C_InputMenuAnalogLDown_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ArsenalController.ArsenalController_C.InputMenuAnalogLUp
struct AArsenalController_C_InputMenuAnalogLUp_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x631 (0x631 - 0x0)
// Function ArsenalController.ArsenalController_C.SpawnArsenalCharacter
struct AArsenalController_C_SpawnArsenalCharacter_Params
{
public:
	struct FTTLArsenalPartsInfoList              PartsList;                                         // 0x0(0x310)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<class FName>                          SkillList;                                         // 0x310(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTTLArsenalPaintInfo                  PaintInfo;                                         // 0x320(0x310)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	enum class ETTLECharacterCommonSpawnType     SpawnType;                                         // 0x630(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerDestroyArsenalCharacter
struct AArsenalController_C_RunOnServerDestroyArsenalCharacter_Params
{
public:
	class AArsenalController_C*                  Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputHumanAttackSpecial
struct AArsenalController_C_InputHumanAttackSpecial_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6E0 (0x6E0 - 0x0)
// Function ArsenalController.ArsenalController_C.ExecSpawnArsenalCharacter
struct AArsenalController_C_ExecSpawnArsenalCharacter_Params
{
public:
	class AArsenalController_C*                  Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLArsenalPartsInfoList              PartsList;                                         // 0x8(0x310)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<class FName>                          SkillList;                                         // 0x318(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTTLArsenalPaintInfo                  PaintInfo;                                         // 0x328(0x310)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	enum class ETTLECharacterCommonSpawnType     SpawnType;                                         // 0x638(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLEHumanGenderType              HumanGenderType;                                   // 0x639(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              HumanCustomPartsInfo;                              // 0x63C(0x94)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         IsJoinRoomFromFriendList;                          // 0x6D0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  VoiceCharaID;                                      // 0x6D8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputHumanAttackShoulder
struct AArsenalController_C_InputHumanAttackShoulder_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnClientSetPlayerStartTransform
struct AArsenalController_C_RunOnClientSetPlayerStartTransform_Params
{
public:
	struct FTransform                            StartTrans;                                        // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputHumanDash
struct AArsenalController_C_InputHumanDash_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalPutDownExecLeft
struct AArsenalController_C_InputArsenalPutDownExecLeft_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputArsenalPutDownExecRight
struct AArsenalController_C_InputArsenalPutDownExecRight_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ArsenalController.ArsenalController_C.TractorBeam_StartCaptureWeapon
struct AArsenalController_C_TractorBeam_StartCaptureWeapon_Params
{
public:
	int32                                        Type;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ArsenalController.ArsenalController_C.InputLongHumanGetOn
struct AArsenalController_C_InputLongHumanGetOn_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputHumanJump
struct AArsenalController_C_InputHumanJump_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputSpectatorChangeR
struct AArsenalController_C_InputSpectatorChangeR_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputSpectatorChangeL
struct AArsenalController_C_InputSpectatorChangeL_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalController.ArsenalController_C.InitializeControlledCharacter
struct AArsenalController_C_InitializeControlledCharacter_Params
{
public:
	class APawn*                                 ControlledCharacter;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6E0 (0x6E0 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerSpawnArsenalCharacter
struct AArsenalController_C_RunOnServerSpawnArsenalCharacter_Params
{
public:
	class AArsenalController_C*                  Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLArsenalPartsInfoList              PartsList;                                         // 0x8(0x310)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<class FName>                          SkillList;                                         // 0x318(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTTLArsenalPaintInfo                  PaintInfo;                                         // 0x328(0x310)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	enum class ETTLECharacterCommonSpawnType     SpawnType;                                         // 0x638(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLEHumanGenderType              HumanGenderType;                                   // 0x639(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              HumanCustomPartsInfo;                              // 0x63C(0x94)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         IsJoinRoomFromFriendList;                          // 0x6D0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  VoiceCharaID;                                      // 0x6D8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6E8 (0x6E8 - 0x0)
// Function ArsenalController.ArsenalController_C.RunOnServerSpawnAsAndNpc
struct AArsenalController_C_RunOnServerSpawnAsAndNpc_Params
{
public:
	class AArsenalController_C*                  Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLArsenalPartsInfoList              PartsList;                                         // 0x8(0x310)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<class FName>                          SkillList;                                         // 0x318(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTTLArsenalPaintInfo                  PaintInfo;                                         // 0x328(0x310)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	enum class ETTLECharacterCommonSpawnType     SpawnType;                                         // 0x638(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLEHumanGenderType              HumanGenderType;                                   // 0x639(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              HumanCustomPartsInfo;                              // 0x63C(0x94)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         IsJoinRoomFromFriendList;                          // 0x6D0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MyNpcId;                                           // 0x6D8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  VoiceCharaID;                                      // 0x6E0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalController.ArsenalController_C.InputMenuX
struct AArsenalController_C_InputMenuX_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3D34 (0x3D34 - 0x0)
// Function ArsenalController.ArsenalController_C.ExecuteUbergraph_ArsenalController
struct AArsenalController_C_ExecuteUbergraph_ArsenalController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMultiplaySurvivalMision_ReturnValue;    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryUIHideDetail_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable1;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue5;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue6;                     // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue7;                     // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue8;                     // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue9;                     // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue10;                    // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x40(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed43;                          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAI_NPC_Barrett_009_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsPressed42;                          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Duration2;                            // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x90(0x10)(ZeroConstructor, NoDestructor)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xA0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xD4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xE0(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xEC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x104(0xC)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed41;                          // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed40;                          // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed39;                          // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsPressed4;                     // 0x113(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsPressed3;                     // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x115(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x116(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanActInputActionBP_Result;               // 0x117(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetEnableQuickMove_ReturnValue;           // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetEnableQuickMove_ReturnValue1;          // 0x11B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed38;                          // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue11;                    // 0x11D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue12;                    // 0x11E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue1;                // 0x11F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed37;                          // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed36;                          // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x123(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x128(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed35;                          // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed34;                          // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTMPOverHeat_ReturnValue;                // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue2;                // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue13;                    // 0x13E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLEHumanGenderType              K2Node_CustomEvent_HumanGenderType3;               // 0x13F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLHumanCustomPartsInfo              K2Node_CustomEvent_HumanCustomInfo;                // 0x140(0x94)(NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_CustomEvent_WeaponRemainBits;               // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_FemtoValue;                     // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue3;                // 0x1DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue14;                    // 0x1DD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue15;                    // 0x1DE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C4[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTTLBasicStatusComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerControlled_ReturnValue;           // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue1;         // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsChaseAutoRunning_ReturnValue;           // 0x1EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C6[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   K2Node_DynamicCast_AsArsenal_Character;            // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x1FC(0xC)(IsPlainOldData, NoDestructor)
	class AArsenalCharacter_C*                   K2Node_DynamicCast_AsArsenal_Character1;           // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C8[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetBodyMeshID_ReturnValue;                // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetHatchMeshForGetOnOff_ReturnValue;      // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x228(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x234(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsPressed33;                          // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CC[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue1;               // 0x250(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1; // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AOuterCharacter_C*                     CallFunc_FinishSpawningActor_ReturnValue1;         // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakeLiteralBool_ReturnValue;              // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue2;         // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryCancelCatchMotion_Result;              // 0x29A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryCancelCatchMotion_EnableOtherAction;   // 0x29B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTurtleGameInstance_C*                 CallFunc_GetGameInstance_Result;                   // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue16;                    // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLEHumanGenderType              CallFunc_GetCurrentOuterCustomParts_GenderType;    // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              CallFunc_GetCurrentOuterCustomParts_ReturnValue;   // 0x2AC(0x94)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsPressed32;                          // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue3;                  // 0x342(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D5[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTurtleGameInstance_C*                 CallFunc_GetGameInstance_Result1;                  // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue17;                    // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLEHumanGenderType              CallFunc_GetCurrentOuterCustomParts_GenderType1;   // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              CallFunc_GetCurrentOuterCustomParts_ReturnValue1;  // 0x354(0x94)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue18;                    // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue19;                    // 0x3E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEquipModeEnabled_ReturnValue;           // 0x3EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D9[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue1;         // 0x3EC(0xC)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll1;                       // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch1;                      // 0x3FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw1;                        // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue1;                 // 0x404(0xC)(IsPlainOldData, NoDestructor)
	class AArsenalCharacter_C*                   K2Node_DynamicCast_AsArsenal_Character2;           // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MakeLiteralBool_ReturnValue1;             // 0x419(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetBodyMeshID_ReturnValue1;               // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetHatchMeshForGetOnOff_ReturnValue1;     // 0x428(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue1;           // 0x430(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue1;            // 0x43C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue2;               // 0x450(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2; // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOuterCharacter_C*                     CallFunc_FinishSpawningActor_ReturnValue2;         // 0x488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLEHumanGenderType              K2Node_CustomEvent_GenderType;                     // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              K2Node_CustomEvent_CustomInfo;                     // 0x494(0x94)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue20;                    // 0x529(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue4;                // 0x52A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue21;                    // 0x52B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_Duration1;                            // 0x52C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue22;                    // 0x530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryStartChangeEquipMode_ReturnValue;      // 0x531(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryStartChangeEquipMode_ReturnValue1;     // 0x532(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryStartFinishChangeEquipWeapon_ReturnValue; // 0x533(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEquipModeEnabled_ReturnValue1;          // 0x534(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SwitchRisePressed_ReturnValue;            // 0x535(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SwitchRisePressed_ReturnValue1;           // 0x536(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue1;           // 0x537(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsKnockBackDamage_ReturnValue;            // 0x538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue23;                    // 0x539(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetAllWeaponBulletRemainBits_ReturnValue; // 0x53A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E9[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLPlayerState*                       K2Node_DynamicCast_AsTTLPlayer_State;              // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2ED[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetRestFemtoValue_ReturnValue;            // 0x54C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanGetOffAction_ReturnValue;              // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue4;                  // 0x551(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue5;                  // 0x552(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue6;                  // 0x553(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue2;           // 0x554(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanQuickMoveForPlayerController_ReturnValue; // 0x555(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSniperModeRestriction_ReturnValue;      // 0x556(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanCancelCloseRangeAttack_ReturnValue;    // 0x557(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Pressed1;                       // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0x559(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue3;           // 0x55A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue24;                    // 0x55B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue25;                    // 0x55C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInMissionPlay_ReturnValue;              // 0x55D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_305[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLOuterStorageInfo                  CallFunc_GetOuterStorageInfoBP_outInfo;            // 0x560(0x10)(NoDestructor)
	struct FTTLOuterStorageInfo                  CallFunc_GetOuterStorageInfoBP_outInfo1;           // 0x570(0x10)(NoDestructor)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue26;                    // 0x588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue27;                    // 0x589(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue28;                    // 0x58A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue29;                    // 0x58B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryStartFinishChangeEquipWeapon_ReturnValue1; // 0x58C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEquipModeEnabled_ReturnValue2;          // 0x58D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x590(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryStartAim_isStartAim;                   // 0x59C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsReload_Result;                          // 0x59D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x59E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsReload_Result1;                         // 0x59F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue3;                 // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   K2Node_CustomEvent_TargetArsenal1;                 // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOuterCharacter_C*                     K2Node_CustomEvent_OuterChara;                     // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue7;                  // 0x5B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue8;                  // 0x5B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_313[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue2;         // 0x5BC(0xC)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue1;         // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryStartCatchActor_isSuccess;             // 0x5C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryReadyCatch_result;                     // 0x5CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckIsInBaseCamp_ReturnValue;            // 0x5CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SpawnMirage_SuccessMirage;                // 0x5CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue4;                 // 0x5CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed31;                          // 0x5CE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue5;                // 0x5CF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCanUseFemto_ReturnValue;                // 0x5D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ProcessMirageInput_ReturnValue;           // 0x5D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCanUseFemto_ReturnValue1;               // 0x5D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryAddTsubazeriaiScore_ReturnValue;       // 0x5D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRespawningTarget_ReturnValue;           // 0x5D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryStartRespawnTarget_ReturnValue;        // 0x5D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryPickUpParts_ReturnValue;               // 0x5D6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Pressed;                        // 0x5D7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLGameState*                         K2Node_DynamicCast_AsTTLGame_State;                // 0x5E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed30;                          // 0x5E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed29;                          // 0x5EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed28;                          // 0x5EB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed27;                          // 0x5EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed26;                          // 0x5ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed25;                          // 0x5EE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed24;                          // 0x5EF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed23;                          // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed22;                          // 0x5F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed21;                          // 0x5F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed20;                          // 0x5F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SendArmAttackToServer_SendPacket;         // 0x5F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed19;                          // 0x5F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed18;                          // 0x5F6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SendArmAttackToServer_SendPacket1;        // 0x5F7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed17;                          // 0x5F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed16;                          // 0x5F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   K2Node_CustomEvent_TargetArsenal;                  // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue30;                    // 0x608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue31;                    // 0x609(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue32;                    // 0x60A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsPressed2;                     // 0x60B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsPressed1;                     // 0x60C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsPressed;                      // 0x60D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_335[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   CallFunc_FindGetOnArsenalCharacter_GetOnArsenalCharacter; // 0x610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue33;                    // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue5;                 // 0x619(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanChangeSniperMode_ReturnValue;          // 0x61A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CaptureWeapon_InAction_ReturnValue;       // 0x61B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed15;                          // 0x61C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_OpenPauseMenu_ReturnValue;                // 0x61D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckIsInBaseCamp_ReturnValue1;           // 0x61E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed14;                          // 0x61F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue34;                    // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue35;                    // 0x621(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed13;                          // 0x622(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed12;                          // 0x623(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed11;                          // 0x624(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCatchingGrenadeCPP_ReturnValue;         // 0x625(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue36;                    // 0x626(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTurtleGameInstance_C*                 CallFunc_GetGameInstance_Result2;                  // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue3;               // 0x630(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed10;                          // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x661(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed9;                           // 0x662(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_357[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default;                             // 0x668(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3; // 0x670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_AxisValue1;                           // 0x678(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_FinishSpawningActor_ReturnValue3;         // 0x680(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue1;          // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLPauseMenuBase*                     K2Node_DynamicCast_AsTTLPause_Menu_Base;           // 0x690(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess5;                      // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_362[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_AxisValue;                            // 0x69C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue6;                // 0x6A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue2;          // 0x6A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_365[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLArsenalPartsInfoList              K2Node_CustomEvent_PartsList3;                     // 0x6A8(0x310)(HasGetValueTypeHash)
	TArray<class FName>                          K2Node_CustomEvent_SkillList3;                     // 0x9B8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FTTLArsenalPaintInfo                  K2Node_CustomEvent_PaintInfo3;                     // 0x9C8(0x310)(NoDestructor, HasGetValueTypeHash)
	enum class ETTLECharacterCommonSpawnType     K2Node_CustomEvent_SpawnType3;                     // 0xCD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalController_C*                  K2Node_CustomEvent_Controller3;                    // 0xCE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsPressed8;                           // 0xCE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_377[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalController_C*                  K2Node_CustomEvent_Controller2;                    // 0xCF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLArsenalPartsInfoList              K2Node_CustomEvent_PartsList2;                     // 0xCF8(0x310)(HasGetValueTypeHash)
	TArray<class FName>                          K2Node_CustomEvent_SkillList2;                     // 0x1008(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FTTLArsenalPaintInfo                  K2Node_CustomEvent_PaintInfo2;                     // 0x1018(0x310)(NoDestructor, HasGetValueTypeHash)
	enum class ETTLECharacterCommonSpawnType     K2Node_CustomEvent_SpawnType2;                     // 0x1328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLEHumanGenderType              K2Node_CustomEvent_HumanGenderType2;               // 0x1329(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              K2Node_CustomEvent_HumanCustomPartsInfo2;          // 0x132C(0x94)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsJoinRoomFromFriendList2;      // 0x13C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_389[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_VoiceCharaID2;                  // 0x13C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue4;               // 0x13D0(0x30)(IsPlainOldData, NoDestructor)
	enum class ETTLEStatusType                   CallFunc_ServerGetSpawnMultiplayStatus_ReturnValue; // 0x1400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_395[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4; // 0x1408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLEStatusType                   CallFunc_ServerGetSpawnMultiplayStatus_ReturnValue1; // 0x1410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   CallFunc_FinishSpawningActor_ReturnValue4;         // 0x1418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetEnableBoost_ReturnValue;               // 0x1421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetEnableFlying_ReturnValue;              // 0x1422(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x1423(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLArsenalPartsInfoList              CallFunc_ChangePartsInfoListForMissionInfo_ReturnValue; // 0x1428(0x310)(HasGetValueTypeHash)
	struct FTTLArsenalPartsInfoList              CallFunc_ChangePartsInfoListNoWeapon_ReturnValue;  // 0x1738(0x310)(HasGetValueTypeHash)
	bool                                         CallFunc_MakeLiteralBool_ReturnValue2;             // 0x1A48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AOuterCharacter_C*                     K2Node_DynamicCast_AsOuter_Character;              // 0x1A50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess6;                      // 0x1A58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   K2Node_DynamicCast_AsArsenal_Character3;           // 0x1A60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess7;                      // 0x1A68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed7;                           // 0x1A69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AOuterCharacter_C*                     K2Node_DynamicCast_AsOuter_Character1;             // 0x1A70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess8;                      // 0x1A78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AOuterCharacter_C*                     K2Node_DynamicCast_AsOuter_Character2;             // 0x1A80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess9;                      // 0x1A88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue37;                    // 0x1A89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue7;                // 0x1A8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCatchingGrenadeCPP_ReturnValue1;        // 0x1A8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue38;                    // 0x1A8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue39;                    // 0x1A8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLEMissionPlayerStartType       CallFunc_GetMissionPlayerStartType_ReturnValue;    // 0x1A8E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalController_ReturnValue4;           // 0x1A8F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1A90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue40;                    // 0x1A91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanConsumeStamina_ReturnValue;            // 0x1A92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetEnableQuickMove_ReturnValue2;          // 0x1A93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetEnableQuickMove_ReturnValue3;          // 0x1A94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue1;       // 0x1A98(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFalling_ReturnValue1;                   // 0x1AA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue6;                 // 0x1AA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue9;                  // 0x1AA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F4[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location1;                 // 0x1AA8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation1;                 // 0x1AB4(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale1;                    // 0x1AC0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_CustomEvent_StartTrans;                     // 0x1AD0(0x30)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll2;                       // 0x1B00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch2;                      // 0x1B04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw2;                        // 0x1B08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue2;                 // 0x1B0C(0xC)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed6;                           // 0x1B18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_400[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_SelectTransform_ReturnValue;              // 0x1B20(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5; // 0x1B50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOuterCharacter_C*                     CallFunc_FinishSpawningActor_ReturnValue5;         // 0x1B58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakeLiteralBool_ReturnValue3;             // 0x1B60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SwitchRisePressed_ReturnValue2;           // 0x1B61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanActInputActionBP_Result1;              // 0x1B62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_413[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTurtleGameInstance_C*                 CallFunc_GetGameInstance_Result3;                  // 0x1B68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTurtleGameInstance_C*                 CallFunc_GetGameInstance_Result4;                  // 0x1B70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_417[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetControllerPlayerBaseCampArsenalPos_ReturnValue; // 0x1B80(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInSession_ReturnValue;                  // 0x1BB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6; // 0x1BB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue10;                 // 0x1BC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_420[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalCharacter_C*                   CallFunc_FinishSpawningActor_ReturnValue6;         // 0x1BC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakeLiteralBool_ReturnValue4;             // 0x1BD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x1BD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsPressed5;                           // 0x1BE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed4;                           // 0x1BE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_440[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Type;                                 // 0x1BE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Duration;                             // 0x1BE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x1BEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed3;                           // 0x1BED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanCatchMovement_ReturnValue;             // 0x1BEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue11;                 // 0x1BEF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed2;                           // 0x1BF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsPressed1;                           // 0x1BF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_448[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue1;                // 0x1BF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLGameState*                         K2Node_DynamicCast_AsTTLGame_State1;               // 0x1C00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess10;                     // 0x1C08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetEmptyBaseCampPlayerStartTransform_ReturnValue; // 0x1C10(0x30)(IsPlainOldData, NoDestructor)
	class APawn*                                 K2Node_Event_ControlledCharacter;                  // 0x1C40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter_C*                      K2Node_DynamicCast_AsBase_Character;               // 0x1C48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess11;                     // 0x1C50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHandWeaponAutoMode_ReturnValue;         // 0x1C51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHandWeaponAutoMode_ReturnValue1;        // 0x1C52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOuter_ReturnValue;                      // 0x1C53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_458[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x1C58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue41;                    // 0x1C60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTTLGameInstance*                      K2Node_DynamicCast_AsTTLGame_Instance;             // 0x1C68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12;                     // 0x1C70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_460[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLArsenalPartsInfoList              CallFunc_TryGetPrevArsenalPartsInfo_partsInfo;     // 0x1C78(0x310)(HasGetValueTypeHash)
	struct FTTLArsenalPaintInfo                  CallFunc_TryGetPrevArsenalPartsInfo_paintInfo;     // 0x1F88(0x310)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetPrevArsenalPartsInfo_ReturnValue;   // 0x2298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCurrentMissionContinuos_ReturnValue;    // 0x2299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_466[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalController_C*                  K2Node_CustomEvent_Controller1;                    // 0x22A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLArsenalPartsInfoList              K2Node_CustomEvent_PartsList1;                     // 0x22A8(0x310)(HasGetValueTypeHash)
	TArray<class FName>                          K2Node_CustomEvent_SkillList1;                     // 0x25B8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FTTLArsenalPaintInfo                  K2Node_CustomEvent_PaintInfo1;                     // 0x25C8(0x310)(NoDestructor, HasGetValueTypeHash)
	enum class ETTLECharacterCommonSpawnType     K2Node_CustomEvent_SpawnType1;                     // 0x28D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLEHumanGenderType              K2Node_CustomEvent_HumanGenderType1;               // 0x28D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              K2Node_CustomEvent_HumanCustomPartsInfo1;          // 0x28DC(0x94)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsJoinRoomFromFriendList1;      // 0x2970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_473[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_VoiceCharaID1;                  // 0x2978(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArsenalController_C*                  K2Node_CustomEvent_Controller;                     // 0x2980(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLArsenalPartsInfoList              K2Node_CustomEvent_PartsList;                      // 0x2988(0x310)(HasGetValueTypeHash)
	TArray<class FName>                          K2Node_CustomEvent_SkillList;                      // 0x2C98(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FTTLArsenalPaintInfo                  K2Node_CustomEvent_PaintInfo;                      // 0x2CA8(0x310)(NoDestructor, HasGetValueTypeHash)
	enum class ETTLECharacterCommonSpawnType     K2Node_CustomEvent_SpawnType;                      // 0x2FB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLEHumanGenderType              K2Node_CustomEvent_HumanGenderType;                // 0x2FB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLHumanCustomPartsInfo              K2Node_CustomEvent_HumanCustomPartsInfo;           // 0x2FBC(0x94)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsJoinRoomFromFriendList;       // 0x3050(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_484[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_MyNpcId;                        // 0x3058(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_VoiceCharaID;                   // 0x3060(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLCharacterCommon*                   CallFunc_SpawnMyNpc_ReturnValue;                   // 0x3068(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_SetUpPlayerStartToMission_ReturnValue;    // 0x3070(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue7;                 // 0x30A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CaptureWeapon_InAction_ReturnValue1;      // 0x30A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue12;                 // 0x30A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryReadyCatch_result1;                    // 0x30A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue42;                    // 0x30A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue43;                    // 0x30A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue44;                    // 0x30A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x30A7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsPressed;                            // 0x30A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue1;             // 0x30A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue1;             // 0x30B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue2;             // 0x30B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTTLGameInstance*                      K2Node_DynamicCast_AsTTLGame_Instance1;            // 0x30C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess13;                     // 0x30C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLArsenalPartsInfoList              CallFunc_TryGetPrevArsenalPartsInfo_partsInfo1;    // 0x30D0(0x310)(HasGetValueTypeHash)
	struct FTTLArsenalPaintInfo                  CallFunc_TryGetPrevArsenalPartsInfo_paintInfo1;    // 0x33E0(0x310)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetPrevArsenalPartsInfo_ReturnValue1;  // 0x36F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCurrentMissionContinuos_ReturnValue1;   // 0x36F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLArsenalPartsInfoList              CallFunc_TryGetContinuousArsenalInfo_partsInfo;    // 0x36F8(0x310)(HasGetValueTypeHash)
	struct FTTLArsenalPaintInfo                  CallFunc_TryGetContinuousArsenalInfo_paintInfo;    // 0x3A08(0x310)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetContinuousArsenalInfo_ReturnValue;  // 0x3D18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue13;                 // 0x3D19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue45;                    // 0x3D1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue46;                    // 0x3D1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue2;             // 0x3D20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTTLGameInstance*                      K2Node_DynamicCast_AsTTLGame_Instance2;            // 0x3D28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess14;                     // 0x3D30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLSurvivalSpawnType             CallFunc_GetSurvaivalSpawnType_ReturnValue;        // 0x3D31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x3D32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlayerStartExist4_ReturnValue;          // 0x3D33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


