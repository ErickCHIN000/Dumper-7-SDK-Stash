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
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetUserInterface
struct ABP_IcarusPlayerControllerSpace_C_GetUserInterface_Params
{
public:
	class UUMG_UserInterface_Base_C*             UserInterface;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.DisplayDynamicWidget
struct ABP_IcarusPlayerControllerSpace_C_DisplayDynamicWidget_Params
{
public:
	TSubclassOf<class UIcarusLinkedActorPanelBase> WidgetClass;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                LinkedActorForWidget;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusLinkedActorPanelBase*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsUMG_Icarus_Linked_Actor_Panel; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_415B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_IcarusLinkedActorPanel_C*         CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetUserInterfaceInternal
struct ABP_IcarusPlayerControllerSpace_C_GetUserInterfaceInternal_Params
{
public:
	class UUserInterfaceBase*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Return to Character Select
struct ABP_IcarusPlayerControllerSpace_C_Return_to_Character_Select_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_IcarusGameInstance_C*              K2Node_DynamicCast_AsBP_Icarus_Game_Instance;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.BackendConnection_PostInitialise
struct ABP_IcarusPlayerControllerSpace_C_BackendConnection_PostInitialise_Params
{
public:
	TArray<struct FMetaItem>                     CallFunc_GetMetaInventory_ReturnValue;             // 0x0(0x10)(ConstParm, ReferenceParm)
	TArray<struct FMetaItem>                     CallFunc_GetLoadoutInventory_ReturnValue;          // 0x10(0x10)(ConstParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetCheatOverlay
struct ABP_IcarusPlayerControllerSpace_C_GetCheatOverlay_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCheatOverlayBase*                     ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CheatOverlay_C*                   CallFunc_GetCheatOverlay_Overlay;                  // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetIsThirdPerson
struct ABP_IcarusPlayerControllerSpace_C_GetIsThirdPerson_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.HasActiveSelectedCharacter
struct ABP_IcarusPlayerControllerSpace_C_HasActiveSelectedCharacter_Params
{
public:
	bool                                         HasSelectedCharacter;                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasActiveCharacter_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetProspectInfo
struct ABP_IcarusPlayerControllerSpace_C_GetProspectInfo_Params
{
public:
	struct FFProspectServerInfo                  ProspectServerInfo;                                // 0x0(0x19B)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_42E2[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Escape_K2Node_InputKeyEvent_0
struct ABP_IcarusPlayerControllerSpace_C_InpActEvt_Escape_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Fire_K2Node_InputActionEvent_8
struct ABP_IcarusPlayerControllerSpace_C_InpActEvt_Fire_K2Node_InputActionEvent_8_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Fire_K2Node_InputActionEvent_7
struct ABP_IcarusPlayerControllerSpace_C_InpActEvt_Fire_K2Node_InputActionEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_AltFire_K2Node_InputActionEvent_6
struct ABP_IcarusPlayerControllerSpace_C_InpActEvt_AltFire_K2Node_InputActionEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_AltFire_K2Node_InputActionEvent_5
struct ABP_IcarusPlayerControllerSpace_C_InpActEvt_AltFire_K2Node_InputActionEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Interact_K2Node_InputActionEvent_4
struct ABP_IcarusPlayerControllerSpace_C_InpActEvt_Interact_K2Node_InputActionEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Jump_K2Node_InputActionEvent_3
struct ABP_IcarusPlayerControllerSpace_C_InpActEvt_Jump_K2Node_InputActionEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Jump_K2Node_InputActionEvent_2
struct ABP_IcarusPlayerControllerSpace_C_InpActEvt_Jump_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnFailure_153E3E574849CADDC230B4BDF276D6E3
struct ABP_IcarusPlayerControllerSpace_C_OnFailure_153E3E574849CADDC230B4BDF276D6E3_Params
{
public:
	struct FErrorCodesEnum                       Result;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                ExtraErrorInfo;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnSuccess_153E3E574849CADDC230B4BDF276D6E3
struct ABP_IcarusPlayerControllerSpace_C_OnSuccess_153E3E574849CADDC230B4BDF276D6E3_Params
{
public:
	struct FErrorCodesEnum                       Result;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                ExtraErrorInfo;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnFailure_C61F5EF443F6FA83FE9C9EBEFD43DCD9
struct ABP_IcarusPlayerControllerSpace_C_OnFailure_C61F5EF443F6FA83FE9C9EBEFD43DCD9_Params
{
public:
	struct FErrorCodesEnum                       Result;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                ExtraErrorInfo;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnSuccess_C61F5EF443F6FA83FE9C9EBEFD43DCD9
struct ABP_IcarusPlayerControllerSpace_C_OnSuccess_C61F5EF443F6FA83FE9C9EBEFD43DCD9_Params
{
public:
	struct FErrorCodesEnum                       Result;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                ExtraErrorInfo;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnFailure_5F9E1E7C4E38E77D32A72DAA4B267722
struct ABP_IcarusPlayerControllerSpace_C_OnFailure_5F9E1E7C4E38E77D32A72DAA4B267722_Params
{
public:
	struct FErrorCodesEnum                       Result;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                ExtraErrorInfo;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnSuccess_5F9E1E7C4E38E77D32A72DAA4B267722
struct ABP_IcarusPlayerControllerSpace_C_OnSuccess_5F9E1E7C4E38E77D32A72DAA4B267722_Params
{
public:
	struct FErrorCodesEnum                       Result;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                ExtraErrorInfo;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_1
struct ABP_IcarusPlayerControllerSpace_C_InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Escape_K2Node_InputActionEvent_0
struct ABP_IcarusPlayerControllerSpace_C_InpActEvt_Escape_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ServerPushClientDynamicWidget
struct ABP_IcarusPlayerControllerSpace_C_ServerPushClientDynamicWidget_Params
{
public:
	class UClass*                                WidgetClass;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LinkedActorForWidget;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnServer_GiveFocusToObject
struct ABP_IcarusPlayerControllerSpace_C_OnServer_GiveFocusToObject_Params
{
public:
	class AActor*                                Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_4
struct ABP_IcarusPlayerControllerSpace_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_4_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.BeginInputCapture
struct ABP_IcarusPlayerControllerSpace_C_BeginInputCapture_Params
{
public:
	class UBP_InputCaptureComponent_C*           InputCaptureComponent;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CapturedActor;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.LerpToInputCaptureLocation
struct ABP_IcarusPlayerControllerSpace_C_LerpToInputCaptureLocation_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
struct ABP_IcarusPlayerControllerSpace_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct ABP_IcarusPlayerControllerSpace_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReceiveTick
struct ABP_IcarusPlayerControllerSpace_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.UpdateSessionSettings
struct ABP_IcarusPlayerControllerSpace_C_UpdateSessionSettings_Params
{
public:
	struct FFProspectServerInfo                  ProspectInfo;                                      // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_48C9[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReceiveEndPlay
struct ABP_IcarusPlayerControllerSpace_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.BackendConnection_SetCharacter
struct ABP_IcarusPlayerControllerSpace_C_BackendConnection_SetCharacter_Params
{
public:
	struct FOnlineProfileCharacter               SelectedCharacter;                                 // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.NotifyOfCheater
struct ABP_IcarusPlayerControllerSpace_C_NotifyOfCheater_Params
{
public:
	class FString                                CharacterName;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Client_CheaterAlert
struct ABP_IcarusPlayerControllerSpace_C_Client_CheaterAlert_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReceivePossess
struct ABP_IcarusPlayerControllerSpace_C_ReceivePossess_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ShowLoadingScreen_Event
struct ABP_IcarusPlayerControllerSpace_C_ShowLoadingScreen_Event_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnClient_SetReadyState
struct ABP_IcarusPlayerControllerSpace_C_OnClient_SetReadyState_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnServer_SetReadyState
struct ABP_IcarusPlayerControllerSpace_C_OnServer_SetReadyState_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x130 (0x130 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ExecuteClaimLaunchProspect
struct ABP_IcarusPlayerControllerSpace_C_ExecuteClaimLaunchProspect_Params
{
public:
	struct FProspectInfo                         Prospect_Info;                                     // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOnlineProfileCharacter               OnlineProfileCharacter;                            // 0x90(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x260 (0x260 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ExecuteJoinProspect
struct ABP_IcarusPlayerControllerSpace_C_ExecuteJoinProspect_Params
{
public:
	struct FIcarusSession                        IcarusSession;                                     // 0x0(0x1B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOnlineProfileCharacter               OnlineProfileCharacter;                            // 0x1B0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                ExtraSettings;                                     // 0x250(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x168 (0x168 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ExecuteResumeProspect
struct ABP_IcarusPlayerControllerSpace_C_ExecuteResumeProspect_Params
{
public:
	struct FAssociatedProspectInfo               AssociatedProspectInfo;                            // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOnlineProfileCharacter               OnlineProfileCharacter;                            // 0xC8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1B0 (0x1B0 - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.AcceptInvite
struct ABP_IcarusPlayerControllerSpace_C_AcceptInvite_Params
{
public:
	struct FIcarusSession                        SessionToJoin;                                     // 0x0(0x1B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1A1A (0x1A1A - 0x0)
// Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ExecuteUbergraph_BP_IcarusPlayerControllerSpace
struct ABP_IcarusPlayerControllerSpace_C_ExecuteUbergraph_BP_IcarusPlayerControllerSpace_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpaceMenuScene                   Temp_byte_Variable;                                // 0x4(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpaceMenuScene                   Temp_byte_Variable_1;                              // 0x5(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_535D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusErrorSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	struct FErrorCodesEnum                       K2Node_CustomEvent_Result_5;                       // 0x20(0x10)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ExtraErrorInfo_5;               // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x40(0x10)(ZeroConstructor, NoDestructor)
	struct FErrorCodesEnum                       K2Node_CustomEvent_Result_4;                       // 0x50(0x10)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ExtraErrorInfo_4;               // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	class FString                                Temp_string_Variable;                              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FErrorCodesEnum                       Temp_struct_Variable;                              // 0x90(0x10)(HasGetValueTypeHash)
	class UIcarusErrorSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xA8(0x10)(ZeroConstructor, NoDestructor)
	struct FErrorCodesEnum                       K2Node_CustomEvent_Result_3;                       // 0xB8(0x10)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ExtraErrorInfo_3;               // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FErrorCodesEnum                       K2Node_CustomEvent_Result_2;                       // 0xD8(0x10)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ExtraErrorInfo_2;               // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xF8(0x10)(ZeroConstructor, NoDestructor)
	class FString                                Temp_string_Variable_1;                            // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FErrorCodesEnum                       Temp_struct_Variable_1;                            // 0x118(0x10)(HasGetValueTypeHash)
	class UIcarusErrorSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FErrorCodesEnum                       K2Node_CustomEvent_Result_1;                       // 0x130(0x10)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ExtraErrorInfo_1;               // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x150(0x10)(ZeroConstructor, NoDestructor)
	struct FErrorCodesEnum                       K2Node_CustomEvent_Result;                         // 0x160(0x10)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ExtraErrorInfo;                 // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x180(0x10)(ZeroConstructor, NoDestructor)
	class FString                                Temp_string_Variable_2;                            // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FErrorCodesEnum                       Temp_struct_Variable_2;                            // 0x1A0(0x10)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0x1B0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x1C8(0x18)(HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_WidgetClass;                    // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_LinkedActorForWidget;           // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_Object;                         // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x204(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_InputAxisEvent_AxisValue_2;                 // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_4;                     // 0x218(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5409[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_InputCaptureComponent_C*           K2Node_CustomEvent_InputCaptureComponent;          // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_CapturedActor;                  // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5415[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Operable_C*                        K2Node_DynamicCast_AsBP_Operable;                  // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5429[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;   // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;   // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x278(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x284(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_3;   // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_Target;                         // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue_1;                 // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5451[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraComponent*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x2A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue;                   // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5477[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x2B8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x2C4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue;                        // 0x2D0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x2DC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x2E8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x371(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5489[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterfaceSpace_C*             CallFunc_Create_ReturnValue;                       // 0x378(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue;      // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue_1;    // 0x381(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54B1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_3;                            // 0x390(0x18)(HasGetValueTypeHash)
	class UBP_IcarusGameInstance_C*              K2Node_DynamicCast_AsBP_Icarus_Game_Instance;      // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_OperableTerminalInstructions_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x3B8(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_5;                     // 0x3D0(0x18)(HasGetValueTypeHash)
	class UW_OperableTerminalInstructions_C*     CallFunc_Array_Get_Item;                           // 0x3E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_6;                     // 0x3F0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowMainMenu_Success;                     // 0x409(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x40A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x40B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x40C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x40D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x40E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x40F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue_2;    // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFProspectServerInfo                  K2Node_CustomEvent_ProspectInfo;                   // 0x420(0x19B)(HasGetValueTypeHash)
	uint8                                        Pad_5509[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASpaceStation_Gamemode_C*              K2Node_DynamicCast_AsSpace_Station_Gamemode;       // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_550E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x5CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5515[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x5D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_551C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               K2Node_CustomEvent_SelectedCharacter;              // 0x5E0(0xA0)(None)
	class FString                                K2Node_Event_CharacterName;                        // 0x680(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Name;                           // 0x690(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x6A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x6B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowMainMenu_Success_1;                   // 0x6C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_554B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x6C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5555[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_4;   // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0x6E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_555B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_PossessedPawn;                        // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x6F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusCameraPawn_C*                K2Node_DynamicCast_AsBP_Icarus_Camera_Pawn;        // 0x700(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x709(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOnlineSubsystemIcarusEnabled_ReturnValue; // 0x70A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x70B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_556B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x710(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_5;   // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x749(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5576[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerStart*                          CallFunc_GetActorOfClass_ReturnValue;              // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x758(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x764(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0x770(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x7A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5583[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x7A4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0x82C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5585[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x830(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_6;   // 0x838(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusCharacterDummy_C*            K2Node_DynamicCast_AsBP_Icarus_Character_Dummy;    // 0x840(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x848(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x849(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_559C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Temp_struct_Variable_4;                            // 0x850(0x18)(HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Show;                           // 0x870(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASpaceStation_GameState_C*             K2Node_DynamicCast_AsSpace_Station_Game_State;     // 0x878(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x880(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_7;                     // 0x888(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_HasActiveSelectedCharacter_HasSelectedCharacter; // 0x8A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x8A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_FinishSpawningActor_ReturnValue;          // 0x8B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_3;                 // 0x8C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusCameraPawn_C*                K2Node_DynamicCast_AsBP_Icarus_Camera_Pawn_1;      // 0x8D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_8;                     // 0x8E0(0x18)(HasGetValueTypeHash)
	uint8                                        Pad_55DD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue_2;               // 0x900(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FKey                                  Temp_struct_Variable_5;                            // 0x930(0x18)(HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x948(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_2;                     // 0x950(0x18)(HasGetValueTypeHash)
	class ABP_IcarusCameraPawn_C*                CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x968(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SpaceMenuCamera_C*                 CallFunc_Map_Find_Value;                           // 0x978(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x981(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55FC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SpaceMenuCamera_C*                 CallFunc_Map_Find_Value_1;                         // 0x988(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5603[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_4;                 // 0x998(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_560B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_5;                 // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x9B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5612[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AExponentialHeightFog*>         CallFunc_GetAllActorsOfClass_OutActors;            // 0x9B8(0x10)(ReferenceParm)
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0x9C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5619[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AExponentialHeightFog*                 K2Node_DynamicCast_AsExponential_Height_Fog;       // 0x9D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x9E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x9E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0x9E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Ready_1;                        // 0x9E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Ready;                          // 0x9E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_3;                   // 0x9E5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowMainMenu_Success_2;                   // 0x9E6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0x9E7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                  K2Node_InputActionEvent_Key_3;                     // 0x9E8(0x18)(HasGetValueTypeHash)
	class UBP_IcarusGameUserSettings_C*          CallFunc_Get_Icarus_Game_User_Settings_Settings;   // 0xA00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMouseSensitivityParameters_Yaw;        // 0xA08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMouseSensitivityParameters_Pitch;      // 0xA0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMouseSensitivityParameters_AimYaw;     // 0xA10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMouseSensitivityParameters_AimPitch;   // 0xA14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0xA18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusGameInstance*                   K2Node_DynamicCast_AsIcarus_Game_Instance;         // 0xA20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0xA28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5647[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileCharacter               CallFunc_GetLocalSelectedCharacter_ReturnValue;    // 0xA30(0xA0)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0xAD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xAD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5651[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         K2Node_CustomEvent_Prospect_Info;                  // 0xAD8(0x90)(None)
	struct FOnlineProfileCharacter               K2Node_CustomEvent_OnlineProfileCharacter_2;       // 0xB68(0xA0)(None)
	class UW_OperableTerminalInstructions_C*     CallFunc_Create_ReturnValue_1;                     // 0xC08(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotificationSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0xC10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIcarusSession                        K2Node_CustomEvent_IcarusSession;                  // 0xC18(0x1B0)(None)
	struct FOnlineProfileCharacter               K2Node_CustomEvent_OnlineProfileCharacter_1;       // 0xDC8(0xA0)(None)
	class FString                                K2Node_CustomEvent_ExtraSettings;                  // 0xE68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0xE78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5669[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0xE80(0x18)(HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0xE98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0xEA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_567D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1;     // 0xEB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0xEC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5685[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0xEC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface_1;         // 0xED0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0xED8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget_1; // 0xEE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoadingIcon_C*                    CallFunc_Create_ReturnValue_2;                     // 0xEE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoadingIcon_C*                    CallFunc_Create_ReturnValue_3;                     // 0xEF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0xEF8(0x98)(ContainsInstancedReference)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_1;      // 0xF90(0x98)(ContainsInstancedReference)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_2;      // 0x1028(0x98)(ContainsInstancedReference)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_3;      // 0x10C0(0x98)(ContainsInstancedReference)
	TMap<enum class EIcarusClaimLaunchConfirmationStep, struct FConfirmationPopupDetails> K2Node_MakeMap_Map;                                // 0x1158(0x50)(ContainsInstancedReference)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_4;      // 0x11A8(0x98)(ContainsInstancedReference)
	class UIcarusClaimLaunchSession*             CallFunc_IcarusClaimLaunchSession_ReturnValue;     // 0x1240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EIcarusJoinConfirmationStep, struct FConfirmationPopupDetails> K2Node_MakeMap_Map_1;                              // 0x1248(0x50)(ContainsInstancedReference)
	class UIcarusJoinSession*                    CallFunc_IcarusJoinSession_ReturnValue;            // 0x1298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_21;                   // 0x12A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_22;                   // 0x12A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_570F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAssociatedProspectInfo               K2Node_CustomEvent_AssociatedProspectInfo;         // 0x12A8(0xC8)(None)
	struct FOnlineProfileCharacter               K2Node_CustomEvent_OnlineProfileCharacter;         // 0x1370(0xA0)(None)
	bool                                         CallFunc_IsValid_ReturnValue_23;                   // 0x1410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5728[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2;     // 0x1418(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x1428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5736[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface_2;         // 0x1430(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoadingIcon_C*                    CallFunc_Create_ReturnValue_4;                     // 0x1438(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_5;      // 0x1440(0x98)(ContainsInstancedReference)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_6;      // 0x14D8(0x98)(ContainsInstancedReference)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_7;      // 0x1570(0x98)(ContainsInstancedReference)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget_2; // 0x1608(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_8;      // 0x1610(0x98)(ContainsInstancedReference)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_9;      // 0x16A8(0x98)(ContainsInstancedReference)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_10;     // 0x1740(0x98)(ContainsInstancedReference)
	TMap<enum class EIcarusResumeConfirmationStep, struct FConfirmationPopupDetails> K2Node_MakeMap_Map_2;                              // 0x17D8(0x50)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue_24;                   // 0x1828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5765[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusResumeSession*                  CallFunc_IcarusResumeSession_ReturnValue;          // 0x1830(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_25;                   // 0x1838(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_576F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x1840(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIcarusSession                        K2Node_Event_SessionToJoin;                        // 0x1848(0x1B0)(None)
	class UBP_IcarusGameInstance_C*              K2Node_DynamicCast_AsBP_Icarus_Game_Instance_1;    // 0x19F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x1A00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIcarusGameStateSpace_bValid;           // 0x1A01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_577F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusGameStateSpace*                 CallFunc_GetIcarusGameStateSpace_ReturnValue;      // 0x1A08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASpaceStation_GameState_C*             K2Node_DynamicCast_AsSpace_Station_Game_State_1;   // 0x1A10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x1A18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ProspectInfoIsValid_Valid;                // 0x1A19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


