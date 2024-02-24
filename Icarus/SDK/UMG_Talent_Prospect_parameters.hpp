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

// 0x423 (0x423 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.SetIsOpenWorld
struct UUMG_Talent_Prospect_C_SetIsOpenWorld_Params
{
public:
	bool                                         IsOpenWorld;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0x8(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43BA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0x13C(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x158(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x422(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.SetFlavourText
struct UUMG_Talent_Prospect_C_SetFlavourText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBA0 (0xBA0 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.SetProspectColour
struct UUMG_Talent_Prospect_C_SetProspectColour_Params
{
public:
	enum class ETalentProspectButtonState        State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentProspectButtonState        Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentProspectButtonState        Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentProspectButtonState        Temp_byte_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x30(0x28)(None)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x68(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x90(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0xB8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0xE0(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_6;                    // 0x108(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_7;                    // 0x130(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_8;                    // 0x158(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_9;                    // 0x180(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_10;                   // 0x1A8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_11;                   // 0x1D0(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_12;                   // 0x1F8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_13;                   // 0x220(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_14;                   // 0x248(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_15;                   // 0x270(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default;                             // 0x298(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_16;                   // 0x2C0(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_17;                   // 0x2E8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_18;                   // 0x310(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_19;                   // 0x338(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_20;                   // 0x360(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x388(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_21;                   // 0x3B0(0x28)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x3D8(0x88)(None)
	struct FSlateColor                           K2Node_Select_Default_2;                           // 0x460(0x28)(None)
	float                                        CallFunc_BreakColor_R;                             // 0x488(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x48C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x494(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x498(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_22;                   // 0x4A8(0x28)(None)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x4D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x4E0(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x568(0x88)(None)
	struct FProgressBarStyle                     K2Node_MakeStruct_ProgressBarStyle;                // 0x5F0(0x1A0)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0x790(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_4;                    // 0x818(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_5;                    // 0x8A0(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x928(0x278)(None)
};

// 0x147 (0x147 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.IsMissionCurrentlyTimeLocked
struct UUMG_Talent_Prospect_C_IsMissionCurrentlyTimeLocked_Params
{
public:
	bool                                         IsTimeLocked;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4909[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusGameStateSurvival*              K2Node_DynamicCast_AsIcarus_Game_State_Survival;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4948[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFactionMission                       CallFunc_GetFactionMissionsStruct_FactionMissions; // 0x28(0xF0)(None)
	enum class EValid                            CallFunc_GetFactionMissionsStruct_Paths;           // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4960[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLevelTimeElapsedSec_ReturnValue;       // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4974[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimeLockedMissionInfo                CallFunc_Array_Get_Item;                           // 0x124(0x1C)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue; // 0x146(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x501 (0x501 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.Set Status
struct UUMG_Talent_Prospect_C_Set_Status_Params
{
public:
	enum class EOnProspectAvailability           Status;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOnProspectAvailability           Temp_byte_Variable_4;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B02[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	enum class EOnProspectAvailability           Temp_byte_Variable_5;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x58(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x70(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x88(0x18)(None)
	enum class EOnProspectAvailability           Temp_byte_Variable_6;                              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0xA8(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x1DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B56[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0x1DC(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x1F8(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x4C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B8D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x4C8(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue;             // 0x4E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BA4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_2;                           // 0x4E8(0x18)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B1 (0x1B1 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.RefreshTalentRequirement
struct UUMG_Talent_Prospect_C_RefreshTalentRequirement_Params
{
public:
	struct FDLCPackageDataRowHandle              DLCRequired;                                       // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CF4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0x28(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D2C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFlagsMultiRowHandle                  CallFunc_Array_Get_Item;                           // 0x168(0x18)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDLCPackageDataRowHandle              CallFunc_ToDLCPackageDataRowHandle_ReturnValue;    // 0x184(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_1;           // 0x19D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D50[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue;                // 0x1A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                         CallFunc_AreAllFlagsSet_ReturnValue;               // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.GetStringForFilterSearch
struct UUMG_Talent_Prospect_C_GetStringForFilterSearch_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.SetTime
struct UUMG_Talent_Prospect_C_SetTime_Params
{
public:
	TArray<class FString>                        Time;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E8F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x68(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x80(0x18)(None)
	class FString                                CallFunc_Array_Get_Item_3;                         // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0xA8(0x18)(None)
};

// 0x1BB8 (0x1BB8 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.Refresh Hover State
struct UUMG_Talent_Prospect_C_Refresh_Hover_State_Params
{
public:
	struct FTalentView                           TalentView;                                        // 0x0(0x1BB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.GetOverlay
struct UUMG_Talent_Prospect_C_GetOverlay_Params
{
public:
	class UOverlay*                              Overlay;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.Set Hover States
struct UUMG_Talent_Prospect_C_Set_Hover_States_Params
{
public:
	struct FSlateColor                           TextColor;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                           IconColor;                                         // 0x28(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.Set Zoom Level
struct UUMG_Talent_Prospect_C_Set_Zoom_Level_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.SetSearchHighlight
struct UUMG_Talent_Prospect_C_SetSearchHighlight_Params
{
public:
	bool                                         bHighlighted;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.OnStateChanged
struct UUMG_Talent_Prospect_C_OnStateChanged_Params
{
public:
	struct FTalentModelData                      NewState;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x2911 (0x2911 - 0x0)
// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.ExecuteUbergraph_UMG_Talent_Prospect
struct UUMG_Talent_Prospect_C_ExecuteUbergraph_UMG_Talent_Prospect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterFlagsRowHandle              Temp_struct_Variable;                              // 0x4(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FCharacterFlagsRowHandle              Temp_struct_Variable_1;                            // 0x1C(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_567E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5689[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x44(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProspectRequiredTech             Temp_byte_Variable_2;                              // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable;                          // 0x58(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_1;                        // 0x80(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_2;                        // 0xA8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_3;                        // 0xD0(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_4;                        // 0xF8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	enum class EProspectRequiredTech             Temp_byte_Variable_3;                              // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x128(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x140(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x158(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x170(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EOnProspectAvailability           Temp_byte_Variable_4;                              // 0x18A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x18B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x18D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x18E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOnProspectAvailability           Temp_byte_Variable_9;                              // 0x18F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_4;                              // 0x190(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x1A8(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0x1C0(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0x1D8(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x1F0(0x18)(None)
	struct FTalentView                           CallFunc_GetTalentViewsStruct_TalentViews;         // 0x208(0x1BB8)(None)
	enum class EValid                            CallFunc_GetTalentViewsStruct_Paths;               // 0x1DC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_573E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0x1DC8(0x98)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1E60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5747[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x1E68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_TalentView_Prospect_C*            K2Node_DynamicCast_AsUMG_Talent_View_Prospect;     // 0x1E70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1E78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5756[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         CallFunc_Map_Find_Value;                           // 0x1E80(0x90)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1F10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5763[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_TalentView_Prospect_C*            K2Node_DynamicCast_AsUMG_Talent_View_Prospect_1;   // 0x1F18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1F20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5787[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x1F24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0x1F2C(0x18)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1F44(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_GetRemainingProspectTime_ReturnValue;     // 0x1F54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_CustomEvent_TextColor;                      // 0x1F58(0x28)(None)
	struct FSlateColor                           K2Node_CustomEvent_IconColor;                      // 0x1F80(0x28)(None)
	int32                                        K2Node_Event_Level;                                // 0x1FA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Scale;                                // 0x1FAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x1FB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x1FB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x1FC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue_1;                     // 0x1FC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_8;                              // 0x1FD0(0x18)(ConstParm)
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue_2;                     // 0x1FE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_9;                              // 0x1FF0(0x18)(ConstParm)
	TArray<class FString>                        CallFunc_FormatRawSecondsToTimeLengthDigital_Time; // 0x2008(0x10)(ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x2018(0x18)(None)
	class FString                                CallFunc_Array_Get_Item;                           // 0x2030(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x2040(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x2080(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2084(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue_3;                     // 0x2088(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bHighlighted;                         // 0x2090(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x2091(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_580F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GenerateSearchStringForProspectTalent_ReturnValue; // 0x2098(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x20A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5820[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x20B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x20B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x20C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x20C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5830[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x20D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x20D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x20E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x20E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5841[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_TalentView_Prospect_C*            K2Node_DynamicCast_AsUMG_Talent_View_Prospect_2;   // 0x20E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x20F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked; // 0x20F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_10;                             // 0x20F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_585B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_2;                // 0x20F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0x2100(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x2230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x2231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5867[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalentModelData                      K2Node_Event_NewState;                             // 0x2234(0x10)(NoDestructor)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue_1;           // 0x2244(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_Rank;                // 0x225C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_MaxRank;             // 0x2260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentState                      CallFunc_BreakTalentModelData_State;               // 0x2264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5874[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x2268(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x2530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x2531(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x2532(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x2533(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x2534(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_11;                             // 0x2535(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58CE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFactionMission                       CallFunc_GetFactionMissionsStruct_FactionMissions; // 0x2538(0xF0)(None)
	enum class EValid                            CallFunc_GetFactionMissionsStruct_Paths;           // 0x2628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0x2629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58E1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFactionMission                       CallFunc_GetFactionMissionsStruct_FactionMissions_1; // 0x2630(0xF0)(None)
	enum class EValid                            CallFunc_GetFactionMissionsStruct_Paths_1;         // 0x2720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0x2721(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x2722(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58EC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterFlagsRowHandle              CallFunc_Array_Get_Item_1;                         // 0x2724(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x273C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterFlag                        CallFunc_GetCharacterFlagsStruct_CharacterFlags;   // 0x2740(0x30)(None)
	enum class EValid                            CallFunc_GetCharacterFlagsStruct_Paths;            // 0x2770(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_7;                    // 0x2771(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_590C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2774(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x2778(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x27B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5916[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x27C0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x27D0(0x18)(None)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x27E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x27EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5923[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0x27F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x27F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x27F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_8;                    // 0x27F6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x27F7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x27F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_12;                             // 0x27F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x27FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5968[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             K2Node_Select_Default_2;                           // 0x2800(0x28)(UObjectWrapper, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x2828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_13;                             // 0x2829(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5977[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x2830(0x18)(None)
	class FText                                  K2Node_Select_Default_4;                           // 0x2848(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x2860(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x28A0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x28B0(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x28C8(0x18)(ConstParm)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x28E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked_1; // 0x28E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_4;                              // 0x28E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x28E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_5;                           // 0x28E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked_2; // 0x28E5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x28E6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x28E7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x28E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x28E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59D8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      K2Node_Select_Default_6;                           // 0x28F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x28F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      K2Node_Select_Default_7;                           // 0x2900(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x2908(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_8;                           // 0x2910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


