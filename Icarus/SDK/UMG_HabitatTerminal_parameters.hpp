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
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.UpdateMatchmakingState
struct UUMG_HabitatTerminal_C_UpdateMatchmakingState_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESessionSearchType                Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESessionSearchType                Temp_byte_Variable_1;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51DC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMatchmakingSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESessionSearchType                K2Node_Select_Default;                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.UpdateRefreshButtonState
struct UUMG_HabitatTerminal_C_UpdateRefreshButtonState_Params
{
public:
	enum class ESessionSearchType                Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5263[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMatchmakingSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFindDedicatedSessionsRunning_ReturnValue; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFindFriendSessionsRunning_ReturnValue;  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESessionSearchType                CallFunc_GetCurrentSearchType_ReturnValue;         // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default;                             // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7A (0x7A - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ServerProviderSetup
struct UUMG_HabitatTerminal_C_ServerProviderSetup_Params
{
public:
	TArray<class FString>                        Shuffled;                                          // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<class UWidget*>                       Children;                                          // 0x10(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FSlateChildSize                       NewLocalVar_0;                                     // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor)
	int32                                        RandomOffset;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5321[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ServerProviderButton_C*           CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_532B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_532D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5336[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_Array_Get_Item_1;                         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStretch                          CallFunc_Array_Get_Item_2;                         // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2E8 (0x2E8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OpenWorldProspectSelected
struct UUMG_HabitatTerminal_C_OpenWorldProspectSelected_Params
{
public:
	struct FProspectListRowHandle                Prospect;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FProspectInfo                         ProspectInfo;                                      // 0x18(0x90)(Edit, BlueprintVisible)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFProspectServerInfo                  K2Node_MakeStruct_FProspectServerInfo;             // 0xB8(0x19B)(HasGetValueTypeHash)
	uint8                                        Pad_53D1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         K2Node_MakeStruct_ProspectInfo;                    // 0x258(0x90)(None)
};

// 0x38 (0x38 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.SwitchToHostOpenWorld
struct UUMG_HabitatTerminal_C_SwitchToHostOpenWorld_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_544A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_OpenWorldSelection_C*             CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                            CallFunc_SetContent_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A8 (0x4A8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ConvertDedicatedServerSessions
struct UUMG_HabitatTerminal_C_ConvertDedicatedServerSessions_Params
{
public:
	TArray<struct FBlueprintSessionResult>       Sessions;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FFProspectServerInfo>          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm)
	TArray<struct FFProspectServerInfo>          Prospects;                                         // 0x20(0x10)(Edit, BlueprintVisible)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_551E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlueprintSessionResult               CallFunc_Array_Get_Item;                           // 0x40(0x108)(None)
	struct FIcarusSession                        CallFunc_CreateIcarusSessionFromSession_ReturnValue; // 0x148(0x1B0)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5529[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFProspectServerInfo                  K2Node_MakeStruct_FProspectServerInfo;             // 0x300(0x19B)(HasGetValueTypeHash)
	uint8                                        Pad_552F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ResetProspectView
struct UUMG_HabitatTerminal_C_ResetProspectView_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5589[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetContent_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_TalentView_Prospect_C*            K2Node_DynamicCast_AsUMG_Talent_View_Prospect;     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.SwitchToHostOutpost
struct UUMG_HabitatTerminal_C_SwitchToHostOutpost_Params
{
public:
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5600[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetContent_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.Log
struct UUMG_HabitatTerminal_C_Log_Params
{
public:
	class FString                                Description;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1A1 (0x1A1 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ProspectSelected
struct UUMG_HabitatTerminal_C_ProspectSelected_Params
{
public:
	struct FFProspectServerInfo                  Prospect;                                          // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_56BB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Active;                                            // 0x1A0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A0 (0x1A0 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ClaimAndLaunchProspect
struct UUMG_HabitatTerminal_C_ClaimAndLaunchProspect_Params
{
public:
	struct FFProspectServerInfo                  Prospect_Info;                                     // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_56F6[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
struct UUMG_HabitatTerminal_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.JoinProspect
struct UUMG_HabitatTerminal_C_JoinProspect_Params
{
public:
	struct FFProspectServerInfo                  ProspectInfo;                                      // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_576B[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UUMG_HabitatTerminal_C_BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ProspectModelViewChanged
struct UUMG_HabitatTerminal_C_ProspectModelViewChanged_Params
{
public:
	class UTalentControllerComponent*            Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.TalentProspectSelected
struct UUMG_HabitatTerminal_C_TalentProspectSelected_Params
{
public:
	struct FFProspectServerInfo                  ProspectInfo;                                      // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_57F8[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.HideCloseButton
struct UUMG_HabitatTerminal_C_HideCloseButton_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OutpostModelViewChanged
struct UUMG_HabitatTerminal_C_OutpostModelViewChanged_Params
{
public:
	class UTalentControllerComponent*            Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.TalentOutpostSelected
struct UUMG_HabitatTerminal_C_TalentOutpostSelected_Params
{
public:
	struct FFProspectServerInfo                  ProspectInfo;                                      // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_587A[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A1 (0x1A1 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.OutpostSelected
struct UUMG_HabitatTerminal_C_OutpostSelected_Params
{
public:
	struct FFProspectServerInfo                  Prospect;                                          // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_58B2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Active;                                            // 0x1A0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__PlanetViewButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UUMG_HabitatTerminal_C_BndEvt__PlanetViewButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ShowOutpostCloseButton
struct UUMG_HabitatTerminal_C_ShowOutpostCloseButton_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__UMG_HabitatTerminal_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UUMG_HabitatTerminal_C_BndEvt__UMG_HabitatTerminal_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__UMG_HabitatTerminal_UMG_MultiToggle_K2Node_ComponentBoundEvent_3_MultiToggleStateChanged__DelegateSignature
struct UUMG_HabitatTerminal_C_BndEvt__UMG_HabitatTerminal_UMG_MultiToggle_K2Node_ComponentBoundEvent_3_MultiToggleStateChanged__DelegateSignature_Params
{
public:
	int32                                        PreviousToggleIndex;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentToggleIndex;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.PreConstruct
struct UUMG_HabitatTerminal_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.BndEvt__UMG_HabitatTerminal_Cancel_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
struct UUMG_HabitatTerminal_C_BndEvt__UMG_HabitatTerminal_Cancel_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.Tick
struct UUMG_HabitatTerminal_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1610 (0x1610 - 0x0)
// Function UMG_HabitatTerminal.UMG_HabitatTerminal_C.ExecuteUbergraph_UMG_HabitatTerminal
struct UUMG_HabitatTerminal_C_ExecuteUbergraph_UMG_HabitatTerminal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x34(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5D08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_PasswordInput_C*                  CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0x50(0x98)(ContainsInstancedReference)
	class UMatchmakingSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMatchmakingSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESessionSearchType                CallFunc_GetCurrentSearchType_ReturnValue;         // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D1D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMatchmakingSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMatchmakingSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMatchmakingSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x120(0x10)(ZeroConstructor, NoDestructor)
	struct FFProspectServerInfo                  K2Node_CustomEvent_Prospect_1;                     // 0x130(0x19B)(HasGetValueTypeHash)
	uint8                                        Pad_5D2E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         K2Node_CustomEvent_Active_1;                       // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x2D4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x2E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D39[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0x2F0(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x308(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x5D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x5D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D48[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFactionMission                       CallFunc_GetFactionMissionsStruct_FactionMissions; // 0x5D8(0xF0)(None)
	enum class EValid                            CallFunc_GetFactionMissionsStruct_Paths;           // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x6C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D7F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogue                             CallFunc_GetDialogueStruct_Dialogue;               // 0x6D0(0xE0)(None)
	enum class EValid                            CallFunc_GetDialogueStruct_Paths;                  // 0x7B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFactionInfo                          CallFunc_GetFactionInfoStruct_FactionInfo;         // 0x7B8(0x98)(None)
	enum class EValid                            CallFunc_GetFactionInfoStruct_Paths;               // 0x850(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x851(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x852(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D95[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x854(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x864(0x10)(ZeroConstructor, NoDestructor)
	enum class EValid                            CallFunc_GetIcarusPlayerCharacter_IsValid;         // 0x874(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D9D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x878(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_1;      // 0x880(0x98)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0x918(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFProspectServerInfo                  K2Node_CustomEvent_Prospect_Info;                  // 0x920(0x19B)(HasGetValueTypeHash)
	uint8                                        Pad_5DBF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xAC0(0x10)(ZeroConstructor, NoDestructor)
	class FString                                Temp_wildcard_Variable;                            // 0xAD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xAE0(0x8)(NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_4;               // 0xAE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0xAF0(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xB00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFProspectServerInfo                  K2Node_CustomEvent_ProspectInfo_2;                 // 0xB08(0x19B)(HasGetValueTypeHash)
	uint8                                        Pad_5DD4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerControllerSpace_C*     K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space; // 0xCA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xCB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xCB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_3;               // 0xCC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerControllerSpace_C*     K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space_1; // 0xCC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xCD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTalentControllerComponent*            K2Node_CustomEvent_Controller_1;                   // 0xCD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0xCE0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xCF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput;                   // 0xCF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTalentViewInterface*                  CallFunc_GetView_ReturnValue;                      // 0xD08(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_TalentView_Prospect_C*            K2Node_DynamicCast_AsUMG_Talent_View_Prospect;     // 0xD10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_SetContent_ReturnValue;                   // 0xD20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0xD28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0xD30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFProspectServerInfo                  K2Node_CustomEvent_ProspectInfo_1;                 // 0xD38(0x19B)(HasGetValueTypeHash)
	uint8                                        Pad_5E11[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0xED8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConnectedPlayer                      CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer; // 0xEE0(0x38)(None)
	bool                                         CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue; // 0xF18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0xF19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E1D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_CustomEvent_Button_1;                       // 0xF20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTalentControllerComponent*            K2Node_CustomEvent_Controller;                     // 0xF28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFProspectServerInfo                  K2Node_CustomEvent_ProspectInfo;                   // 0xF30(0x19B)(HasGetValueTypeHash)
	uint8                                        Pad_5E2A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x10D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput_1;                 // 0x10D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTalentViewInterface*                  CallFunc_GetView_ReturnValue_1;                    // 0x10E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x10F0(0x10)(ZeroConstructor, NoDestructor)
	class UUMG_TalentView_Outpost_C*             K2Node_DynamicCast_AsUMG_Talent_View_Outpost;      // 0x1100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_SetContent_ReturnValue_1;                 // 0x1110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFProspectServerInfo                  K2Node_CustomEvent_Prospect;                       // 0x1118(0x19B)(HasGetValueTypeHash)
	uint8                                        Pad_5E46[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         K2Node_CustomEvent_Active;                         // 0x12B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_2;               // 0x12C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x12C8(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x12D8(0x10)(ZeroConstructor, NoDestructor)
	class UUMG_ButtonBase_C*                     K2Node_CustomEvent_Button;                         // 0x12E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialogueSystem*                       CallFunc_GetDialogueSystem_ReturnValue;            // 0x12F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialogueSystem*                       CallFunc_GetDialogueSystem_ReturnValue_1;          // 0x12F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialogueSystem*                       CallFunc_GetDialogueSystem_ReturnValue_2;          // 0x1300(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E71[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogueSystem*                       CallFunc_GetDialogueSystem_ReturnValue_3;          // 0x1310(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_1;               // 0x1318(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ResetProspectView_ReturnValue;            // 0x1320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_PreviousToggleIndex;    // 0x1324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_CurrentToggleIndex;     // 0x1328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid_1;      // 0x132C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue_1;  // 0x1330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x1338(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x1348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_7;                    // 0x1349(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E8E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x1350(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x1358(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x1360(0x10)(ZeroConstructor, NoDestructor)
	class FString                                CallFunc_GetPasswordString_Pasword;                // 0x1370(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1380(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FIcarusSession                        K2Node_MakeStruct_IcarusSession;                   // 0x1390(0x1B0)(None)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid_2;      // 0x1540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue_2;  // 0x1548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1;     // 0x1550(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x1560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EB9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x1564(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5EBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface_1;         // 0x1578(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget_1; // 0x1580(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_8;                    // 0x1588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EC5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x158C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x159C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EC7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x15A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x15A8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x15E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x15E4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x15F4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5ED0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_HostProspectsList_C*              K2Node_Select_Default;                             // 0x1608(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


