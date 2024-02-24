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

// 0x9 (0x9 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.IsEntityPinned
struct UBP_UIMenusComponent_C_IsEntityPinned_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPinned;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.GetDefaultActionStationType
struct UBP_UIMenusComponent_C_GetDefaultActionStationType_Params
{
public:
	enum class Enum_ActionStationType            ActionStationType;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.GetPingObjectType
struct UBP_UIMenusComponent_C_GetPingObjectType_Params
{
public:
	enum class E_PingObjectType                  PingObjectType;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DataTableRowName;                                  // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OnErrorMessageAdded
struct UBP_UIMenusComponent_C_OnErrorMessageAdded_Params
{
public:
	struct FErrorMessageData                     ErrorMessageData;                                  // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_Error_C*                    CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xA9 (0xA9 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.InitializeErrorMessaging
struct UBP_UIMenusComponent_C_InitializeErrorMessaging_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A59[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetOwningPlayerController_PlayerController; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetOwningPlayerController_PlayerController_1; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FErrorMessageData                     CallFunc_GetNextError_OutErrorMessageData;         // 0x20(0x58)(None)
	bool                                         CallFunc_GetNextError_ReturnValue;                 // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UErrorMessagingSubsystem*              CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A70[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetOwningPlayerController_PlayerController_2; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.IssueReportWindowCurrentlyOpen
struct UBP_UIMenusComponent_C_IssueReportWindowCurrentlyOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ABE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXHUDBase*                           CallFunc_GetNWXHUD_ReturnValue;                    // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCurrentlyOpenWindowOfClass_ReturnValue; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.CloseNarrativePlayablePopup
struct UBP_UIMenusComponent_C_CloseNarrativePlayablePopup_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenWindowFromKey
struct UBP_UIMenusComponent_C_OpenWindowFromKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                Window;                                            // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_SocialScreen_C*                   CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BBC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController_1; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue; // 0x50(0x8)(NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue_1; // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController_2; // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerMap_Screen_C*               CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1; // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue_2; // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GuideBook_Screen_C*               CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2; // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController_3; // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue_3; // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GuideBook_Screen_C*               CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3; // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookQuestCategoryTag_ReturnValue;    // 0x98(0x8)(NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController_4; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController_5; // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue_4; // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue_5; // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GuideBook_Screen_C*               CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4; // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_InventoryScreen_C*                CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_5; // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookBuildingCategoryTag_ReturnValue; // 0xD0(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.ApplyDesiredInputMode
struct UBP_UIMenusComponent_C_ApplyDesiredInputMode_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXWindowWidget*                      WindowWidget;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXWindowWidget*                      K2Node_DynamicCast_AsNWXWindow_Widget;             // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputMode                        CallFunc_GetDesiredInputMode_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.IsWindowOpen
struct UBP_UIMenusComponent_C_IsWindowOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UNWXWindowWidget*                      CallFunc_GetCurrentlyOpenWindow_ReturnValue;       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.BP_UIMenusComponent_AutoGenFunc
struct UBP_UIMenusComponent_C_BP_UIMenusComponent_AutoGenFunc_Params
{
public:
	struct FGroup                                Group;                                             // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOnlineServiceStatus                  Status;                                            // 0x30(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMember                               CallFunc_Array_Get_Item;                           // 0x50(0x20)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x55 (0x55 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.CanOpenWindow
struct UBP_UIMenusComponent_C_CanOpenWindow_Params
{
public:
	class UNWXWindowWidget*                      Window;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ZOrder;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  PlayerController;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetWorldIsTearingDown_ReturnValue;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D89[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D97[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DA0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AHUD*                                  CallFunc_GetHUD_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD_NWX_C*                            K2Node_DynamicCast_AsHUD_NWX;                      // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetWorldIsTearingDown_ReturnValue_1;      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenDialogueInternal
struct UBP_UIMenusComponent_C_OpenDialogueInternal_Params
{
public:
	class UWBP_DialogueBase_C*                   Dialogue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.SetInputModeToGameAndUI
struct UBP_UIMenusComponent_C_SetInputModeToGameAndUI_Params
{
public:
	class UWidget*                               WidgetToFocus;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenDialogue
struct UBP_UIMenusComponent_C_OpenDialogue_Params
{
public:
	class AActor*                                NpcActor;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_DialogueBase_C*                   CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.GetOwningPlayerController
struct UBP_UIMenusComponent_C_GetOwningPlayerController_Params
{
public:
	class ABP_PlayerController_C*                PlayerController;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                K2Node_DynamicCast_AsBP_Player_Controller;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.AddPanelToViewport
struct UBP_UIMenusComponent_C_AddPanelToViewport_Params
{
public:
	class UUserWidget*                           Window;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ZOrder;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EFA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXWindowWidget*                      CallFunc_GetCurrentlyOpenWindow_ReturnValue;       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputMode                        CallFunc_GetDesiredInputMode_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F01[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetOwningPlayerController_PlayerController; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_HUD_Manager_C>   CallFunc_Get_HUD_Manager_HUD_Manager;              // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.SetInputModeToUI
struct UBP_UIMenusComponent_C_SetInputModeToUI_Params
{
public:
	class UWidget*                               WidgetToFocus;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.Server_ReviveHumanNPC
struct UBP_UIMenusComponent_C_Server_ReviveHumanNPC_Params
{
public:
	class ABP_Creature_NPC_Human_C*              NPCToRevive;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.Client_OpenNPCScreen
struct UBP_UIMenusComponent_C_Client_OpenNPCScreen_Params
{
public:
	class UBP_NPCComponent_C*                    NPCComponent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                NPC_Actor;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.GetGroupDetails
struct UBP_UIMenusComponent_C_GetGroupDetails_Params
{
public:
	class FString                                GroupID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.ReturnGroupDetails
struct UBP_UIMenusComponent_C_ReturnGroupDetails_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Message;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.PopulatePartyMembersForClient
struct UBP_UIMenusComponent_C_PopulatePartyMembersForClient_Params
{
public:
	struct FMember                               NewItem;                                           // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x80 (0x80 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.EnterPlacementModeFromUI
struct UBP_UIMenusComponent_C_EnterPlacementModeFromUI_Params
{
public:
	struct FStructureAssetReference              PlacementStructureAssetRef;                        // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.TrackBuildingEntity
struct UBP_UIMenusComponent_C_TrackBuildingEntity_Params
{
public:
	struct FStructureAssetReference              StructureAssetRef;                                 // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsAdding;                                          // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.TrackCraftingEntity
struct UBP_UIMenusComponent_C_TrackCraftingEntity_Params
{
public:
	struct FCraftingRecipeReference              CraftingRecipeRef;                                 // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsAdding;                                          // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OnClosed
struct UBP_UIMenusComponent_C_OnClosed_Params
{
public:
	class UNWXWindowWidget*                      Window;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.InstantSwitchToWindow
struct UBP_UIMenusComponent_C_InstantSwitchToWindow_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenNarrativePlayablePopup
struct UBP_UIMenusComponent_C_OpenNarrativePlayablePopup_Params
{
public:
	class FText                                  TitleText;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  BodyText;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenRenameStructureMenu
struct UBP_UIMenusComponent_C_OpenRenameStructureMenu_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x3E8 (0x3E8 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.ExecuteUbergraph_BP_UIMenusComponent
struct UBP_UIMenusComponent_C_ExecuteUbergraph_BP_UIMenusComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWindowOpen_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_ReportIssue_Screen_C*             CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetNWXPlayerController_ReturnValue;       // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_NPC_Human_C*              K2Node_CustomEvent_NPCToRevive;                    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue_1; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_NPC_Screen_C*                     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1; // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_630C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_NPCComponent_C*                    K2Node_CustomEvent_NpcComponent;                   // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_NPC_Actor;                      // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_631F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_GroupId;                        // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x78(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGroupComponentBase*                   CallFunc_GetGroupSystem_GroupComponent;            // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ID;                             // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Name;                           // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Message;                        // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetGroupName_ReturnValue;                 // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMember                               K2Node_CustomEvent_NewItem;                        // 0xD0(0x20)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6371[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     K2Node_DynamicCast_AsBP_Player_State;              // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_637D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              K2Node_CustomEvent_PlacementStructureAssetRef;     // 0x110(0x80)(HasGetValueTypeHash)
	struct FStructureAssetReference              K2Node_Event_StructureAssetRef;                    // 0x190(0x80)(HasGetValueTypeHash)
	bool                                         K2Node_Event_IsAdding_1;                           // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6387[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              K2Node_Event_CraftingRecipeRef;                    // 0x220(0x70)(HasGetValueTypeHash)
	bool                                         K2Node_Event_IsAdding;                             // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6394[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXWindowWidget*                      K2Node_CustomEvent_Window;                         // 0x298(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                CallFunc_OpenWindowFromKey_Window;                 // 0x2A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_Event_Key;                                  // 0x2A8(0x18)(HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetNWXPlayerController_ReturnValue_1;     // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue_2; // 0x2C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBuildingInterface>   K2Node_DynamicCast_AsBuilding_Interface;           // 0x2D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PlayerReadiness_C*                CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2; // 0x2E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetNWXPlayerController_ReturnValue_2;     // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x2F8(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetNWXPlayerController_ReturnValue_3;     // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TitleText;                      // 0x318(0x18)(None)
	class FText                                  K2Node_CustomEvent_BodyText;                       // 0x330(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x348(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController_1; // 0x358(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue_3; // 0x360(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3; // 0x368(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6411[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class IInterface>                Temp_class_Variable_1;                             // 0x378(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue_1;       // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_ScreenShotDir_ReturnValue;                // 0x388(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x398(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IssueReportWindowCurrentlyOpen_ReturnValue; // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6436[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Structure;                      // 0x3B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController_2; // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x3C0(0x18)(ConstParm)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue_4; // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Structure_Rename_C*               CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4; // 0x3E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.RevivingNPC__DelegateSignature
struct UBP_UIMenusComponent_C_RevivingNPC__DelegateSignature_Params
{
public:
	class ABP_Creature_NPC_Human_C*              RevivedNPC;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.UnlockedRecipesReady__DelegateSignature
struct UBP_UIMenusComponent_C_UnlockedRecipesReady__DelegateSignature_Params
{
public:
	struct FS_UnlockedRecipes                    SUnlockedRecipes;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.UnlockedSchematicsReady__DelegateSignature
struct UBP_UIMenusComponent_C_UnlockedSchematicsReady__DelegateSignature_Params
{
public:
	struct FS_UnlockedSchematics                 SUnlockedSchematics;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.GroupDetailsReturned__DelegateSignature
struct UBP_UIMenusComponent_C_GroupDetailsReturned__DelegateSignature_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Message;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.JoinDeploymentRequest__DelegateSignature
struct UBP_UIMenusComponent_C_JoinDeploymentRequest__DelegateSignature_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                RequestingController;                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_UIMenusComponent.BP_UIMenusComponent_C.CreateRealmRequest__DelegateSignature
struct UBP_UIMenusComponent_C_CreateRealmRequest__DelegateSignature_Params
{
public:
	class AController*                           RequestingController;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRealmRecipe                          RealmRecipe;                                       // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


