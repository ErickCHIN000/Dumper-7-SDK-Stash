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

// 0x5 (0x5 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.AnyTutorialPopupVisible
struct UWid_WorkshopUI_Main_C_AnyTutorialPopupVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B0 (0x2B0 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.IsAnyCompanionAssignedToStoryMission
struct UWid_WorkshopUI_Main_C_IsAnyCompanionAssignedToStoryMission_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FActiveQuestInfo> Quests;                                            // 0x8(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EEventMap, struct FActiveQuestInfo> K2Node_MakeVariable_MakeVariableOutput;            // 0x70(0x50)(None)
	TArray<enum class EEventMap>                 CallFunc_Map_Keys_Keys;                            // 0xC0(0x10)(ReferenceParm)
	enum class EEventMap                         CallFunc_Array_Get_Item;                           // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_160[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveQuestInfo                      CallFunc_Map_Find_Value;                           // 0xDC(0x18)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_161[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_163[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue;              // 0x108(0x50)(None)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestInfoInput                       CallFunc_GetQuestInfoBP_ReturnValue;               // 0x160(0x150)(None)
};

// 0x20 (0x20 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.SetTutorialSeen
struct UWid_WorkshopUI_Main_C_SetTutorialSeen_Params
{
public:
	class FName                                  PermamentData;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor, UObjectWrapper)
};

// 0x1B7 (0x1B7 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.ValidateIgorEvent
struct UWid_WorkshopUI_Main_C_ValidateIgorEvent_Params
{
public:
	bool                                         FoundCorrectEvent;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_198[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       IgorStats;                                         // 0x8(0x60)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABackend*>                      CallFunc_GetAllActorsOfClass_OutActors;            // 0x78(0x10)(ReferenceParm)
	class ABackend*                              CallFunc_Array_Get_Item;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UnsetCompanionFromCurrentActiveEvent_ReturnValue; // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWid_LevelSelection_Entry_C*>   CallFunc_GetAllLevels_Levels;                      // 0x98(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_LevelSelection_Entry_C*           CallFunc_Array_Get_Item_1;                         // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentStatsForCompanion2_Valid;       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_GetCurrentStatsForCompanion2_ReturnValue; // 0xD0(0x60)(None)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue;              // 0x138(0x50)(None)
	TArray<struct FActiveQuestInfo>              CallFunc_Map_Values_Values;                        // 0x188(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveQuestInfo                      CallFunc_Array_Get_Item_2;                         // 0x19C(0x18)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x1B6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.IsDetailInfoVisible
struct UWid_WorkshopUI_Main_C_IsDetailInfoVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.UpdatePopupPosition
struct UWid_WorkshopUI_Main_C_UpdatePopupPosition_Params
{
public:
	class UWid_RoomSkillTreeConfirm_C*           Popup;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x24(0x10)(NoDestructor, UObjectWrapper)
};

// 0x25 (0x25 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.HideAllHighLights
struct UWid_WorkshopUI_Main_C_HideAllHighLights_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_LevelSelection_Entry_C*           K2Node_DynamicCast_AsWid_Level_Selection_Entry;    // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.SetInput
struct UWid_WorkshopUI_Main_C_SetInput_Params
{
public:
	bool                                         ArrowsEnabled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FEnabled;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnterEnabled;                                      // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RMBEnabled;                                        // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7D (0x7D - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.GetCurrentSelectedEvent
struct UWid_WorkshopUI_Main_C_GetCurrentSelectedEvent_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue;              // 0x10(0x50)(None)
	enum class EEventMap                         CallFunc_CurrentSelectedMap_Mapp;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_234[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveQuestInfo                      CallFunc_Map_Find_Value;                           // 0x64(0x18)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.ChangeApp
struct UWid_WorkshopUI_Main_C_ChangeApp_Params
{
public:
	TScriptInterface<class IWid_IWorkshopUIApp_C> NewApp;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.OnAssign
struct UWid_WorkshopUI_Main_C_OnAssign_Params
{
public:
	class FName                                  Event;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         Map;                                               // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputUpDown
struct UWid_WorkshopUI_Main_C_InputUpDown_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputLeftRight
struct UWid_WorkshopUI_Main_C_InputLeftRight_Params
{
public:
	float                                        Axis;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.Tick
struct UWid_WorkshopUI_Main_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.ShowNormalPopup
struct UWid_WorkshopUI_Main_C_ShowNormalPopup_Params
{
public:
	class FName                                  Message;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6B0 (0x6B0 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.ExecuteUbergraph_wid_WorkshopUI_Main
struct UWid_WorkshopUI_Main_C_ExecuteUbergraph_wid_WorkshopUI_Main_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x8(0x10)(NoDestructor, UObjectWrapper)
	class UWid_RoomSkillTreeConfirm_C*           CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_RoomSkillTreeConfirm_C*           CallFunc_Create_ReturnValue_1;                     // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_RoomSkillTreeConfirm_C*           CallFunc_Create_ReturnValue_2;                     // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AnyTutorialPopupVisible_ReturnValue;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_RoomSkillTreeConfirm_C*           CallFunc_Create_ReturnValue_3;                     // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue;              // 0x50(0x50)(None)
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue;       // 0xA0(0x10)(ReferenceParm)
	TArray<enum class EEventMap>                 CallFunc_Map_Keys_Keys;                            // 0xB0(0x10)(ReferenceParm)
	TArray<struct FActiveQuestInfo>              CallFunc_Map_Values_Values;                        // 0xC0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_Start_self_CastInput;                     // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  K2Node_CustomEvent_Event;                          // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         K2Node_CustomEvent_Map;                            // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_ChangeApp_NewApp_CastInput;               // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x120(0x18)(None)
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue_1;     // 0x138(0x10)(ReferenceParm)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_GetMapForActiveEvent_ReturnValue;         // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_Show_self_CastInput;                      // 0x158(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_CustomEvent_Axis_1;                         // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_ChangeApp_NewApp_CastInput_1;             // 0x170(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_CustomEvent_Axis;                           // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCurrentSelectedEvent_Name;             // 0x184(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionsPanel_C*                CallFunc_UpdateAllCompanions_CompanionsPanel;      // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCurrentSelectedEvent_Name_1;           // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_CompanionsPanel_C*                CallFunc_UpdateAllCompanions_CompanionsPanel_1;    // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCurrentSelectedEvent_Name_2;           // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_CompanionsPanel_C*                CallFunc_UpdateAllCompanions_CompanionsPanel_2;    // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveChild_ReturnValue;                  // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_3;    // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue_2;     // 0x1C8(0x10)(ReferenceParm)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1DB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_503[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x1E0(0x18)(None)
	class UWid_RoomSkillTreeConfirm_C*           CallFunc_Create_ReturnValue_4;                     // 0x1F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x200(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x23D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x23E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x248(0x18)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_512[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x264(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_519[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_4;    // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x28C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_523[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x290(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x29C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_532[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_5;    // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_1;            // 0x2C0(0x10)(NoDestructor, UObjectWrapper)
	bool                                         CallFunc_PermanentDataGetValue_ReturnValue;        // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x2D4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_53E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveChild_ReturnValue_1;                // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned; // 0x2F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_544[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x2F4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_546[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_2;            // 0x308(0x10)(NoDestructor, UObjectWrapper)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_6;    // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x320(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x330(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x340(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x350(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDetailInfoVisible_ReturnValue;          // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_7;    // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue_3;     // 0x370(0x10)(ReferenceParm)
	bool                                         CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned_1; // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_2;          // 0x381(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x382(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55F[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x384(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_563[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_8;    // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_Array_Get_Item;                           // 0x3AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x3AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x3AE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x3AF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x3B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x3B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x3B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_4;          // 0x3B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x3B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_5;          // 0x3B6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0x3B7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_6;          // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_9;                 // 0x3B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_598[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveQuestInfo                      CallFunc_Array_Get_Item_1;                         // 0x3BC(0x18)(NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_10;                // 0x3D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x3D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_9;    // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentDay_ReturnValue_1;              // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_10;   // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCompletedStoryQuestsCount_ReturnValue; // 0x3F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveChild_ReturnValue_2;                // 0x3F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveChild_ReturnValue_3;                // 0x3FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveChild_ReturnValue_4;                // 0x3FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x3FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x3FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x3FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x3FF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWid_RoomSkillTreeConfirm_C*           CallFunc_Create_ReturnValue_5;                     // 0x400(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_7;                  // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveChild_ReturnValue_5;                // 0x409(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_Message;                        // 0x40C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_8;                  // 0x414(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_3;          // 0x415(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue_1;           // 0x418(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x420(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_9;                  // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_10;                 // 0x431(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_11;                 // 0x432(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_12;                 // 0x433(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_13;                 // 0x434(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_14;                 // 0x435(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_15;                 // 0x436(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_16;                 // 0x437(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveChild_ReturnValue_6;                // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGHUD_C*                              CallFunc_GetCGHud_AsCGHUD;                         // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGHUD_C*                              CallFunc_GetCGHud_AsCGHUD_1;                       // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_3;            // 0x450(0x10)(NoDestructor, UObjectWrapper)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_11;   // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AnyTutorialPopupVisible_ReturnValue_1;    // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PermanentDataGetValue_ReturnValue_1;      // 0x469(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x46A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_11;                // 0x46B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AnyTutorialPopupVisible_ReturnValue_2;    // 0x46C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_12;                // 0x46D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x46E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EA[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x470(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x474(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue_1;     // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_RoomSkillTreeConfirm_C*           CallFunc_Create_ReturnValue_6;                     // 0x488(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_13;                // 0x491(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_14;                // 0x492(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5FE[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x498(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_2;                              // 0x4A0(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x4B8(0x10)(ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue_2;           // 0x4C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x4D0(0x10)(ZeroConstructor, NoDestructor)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_12;   // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_3;                              // 0x4E8(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_4;            // 0x508(0x10)(NoDestructor, UObjectWrapper)
	class FText                                  K2Node_Select_Default_1;                           // 0x518(0x18)(None)
	bool                                         CallFunc_PermanentDataGetValue_ReturnValue_2;      // 0x530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_616[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_RoomSkillTreeConfirm_C*           CallFunc_Create_ReturnValue_7;                     // 0x538(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue_3;           // 0x540(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x548(0x10)(ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue_4;           // 0x558(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x560(0x10)(ZeroConstructor, NoDestructor)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_13;   // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_4;                              // 0x578(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x590(0x18)(None)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_5;            // 0x5A8(0x10)(NoDestructor, UObjectWrapper)
	bool                                         CallFunc_PermanentDataGetValue_ReturnValue_3;      // 0x5B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_635[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x5BC(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x5CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_2;                           // 0x5D0(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x5E8(0x10)(ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue_5;           // 0x5F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_14;   // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_RoomSkillTreeConfirm_C*           CallFunc_Create_ReturnValue_8;                     // 0x608(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_6;                              // 0x610(0x18)(None)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x628(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_6;            // 0x630(0x10)(NoDestructor, UObjectWrapper)
	bool                                         CallFunc_PermanentDataGetValue_ReturnValue_4;      // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_652[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x644(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsAnyCompanionAssignedToStoryMission_Result; // 0x654(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_7;                              // 0x658(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x670(0x10)(ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue_6;           // 0x680(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_15;   // 0x688(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PermanentDataGetValue_ReturnValue_5;      // 0x691(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_3;                           // 0x698(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.OnMoveOut__DelegateSignature
struct UWid_WorkshopUI_Main_C_OnMoveOut__DelegateSignature_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


