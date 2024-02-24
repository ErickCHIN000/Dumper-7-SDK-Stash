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

// 0x537 (0x537 - 0x0)
// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.UpdateDLCLockIcon
struct UUMG_Talent_Outpost_C_UpdateDLCLockIcon_Params
{
public:
	struct FDLCPackageDataRowHandle              DLCRequired;                                       // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4ECA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4ED7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue;                // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0x60(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_CastToOutpostsRowHandle_Paths;            // 0x192(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F10[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutpostsRowHandle                    CallFunc_CastToOutpostsRowHandle_ReturnValue;      // 0x194(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutpost                              CallFunc_GetOutpostsStruct_Outposts;               // 0x1B0(0x70)(None)
	enum class EValid                            CallFunc_GetOutpostsStruct_Paths;                  // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x221(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F2B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x228(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x4F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F38[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFlagsMultiRowHandle                  CallFunc_Array_Get_Item;                           // 0x4F8(0x18)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x510(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDLCPackageDataRowHandle              CallFunc_ToDLCPackageDataRowHandle_ReturnValue;    // 0x514(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x52C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_1;           // 0x52D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F4D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x530(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x534(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AreAllFlagsSet_ReturnValue;               // 0x535(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x536(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.GetStringForFilterSearch
struct UUMG_Talent_Outpost_C_GetStringForFilterSearch_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x279 (0x279 - 0x0)
// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.UpdateLockedCondition
struct UUMG_Talent_Outpost_C_UpdateLockedCondition_Params
{
public:
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_507C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5085[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput;                  // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTalentModelInterface*                 CallFunc_GetModel_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_509E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x88(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x98(0x18)(None)
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0xB0(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50B9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutpostsRowHandle                    CallFunc_MakeOutposts_ReturnValue;                 // 0x1E4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutpost                              CallFunc_GetOutpostsStruct_Outposts;               // 0x200(0x70)(None)
	enum class EValid                            CallFunc_GetOutpostsStruct_Paths;                  // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x272(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50D8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetTalentRank_ReturnValue;                // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.SetTime
struct UUMG_Talent_Outpost_C_SetTime_Params
{
public:
	TArray<class FString>                        Time;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5163[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5168[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x68(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x80(0x18)(None)
	class FString                                CallFunc_Array_Get_Item_3;                         // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0xA8(0x18)(None)
};

// 0x212A (0x212A - 0x0)
// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.Refresh Hover State
struct UUMG_Talent_Outpost_C_Refresh_Hover_State_Params
{
public:
	struct FTalentView                           TalentView;                                        // 0x0(0x1BB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETalentState                      Temp_byte_Variable;                                // 0x1BB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ButtonState                     CallFunc_GetButtonState_State;                     // 0x1BB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1BBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_525E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_BreakTalentModelData_Rank;                // 0x1BBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_MaxRank;             // 0x1BC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentState                      CallFunc_BreakTalentModelData_State;               // 0x1BC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalentHoverConfig                    K2Node_Select_Default;                             // 0x1BC8(0x560)(None)
	enum class E_ButtonState                     CallFunc_GetButtonState_State_1;                   // 0x2128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.GetOverlay
struct UUMG_Talent_Outpost_C_GetOverlay_Params
{
public:
	class UOverlay*                              Overlay;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.OnStateChanged
struct UUMG_Talent_Outpost_C_OnStateChanged_Params
{
public:
	struct FTalentModelData                      NewState;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.Set Hover States
struct UUMG_Talent_Outpost_C_Set_Hover_States_Params
{
public:
	struct FSlateColor                           TextColor;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                           IconColor;                                         // 0x28(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.SetSearchHighlight
struct UUMG_Talent_Outpost_C_SetSearchHighlight_Params
{
public:
	bool                                         bHighlighted;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2120 (0x2120 - 0x0)
// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.ExecuteUbergraph_UMG_Talent_Outpost
struct UUMG_Talent_Outpost_C_ExecuteUbergraph_UMG_Talent_Outpost_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalentModelData                      K2Node_Event_NewState;                             // 0x1C(0x10)(NoDestructor)
	int32                                        CallFunc_BreakTalentModelData_Rank;                // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_MaxRank;             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentState                      CallFunc_BreakTalentModelData_State;               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5511[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0x38(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5523[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_TalentView_Outpost_C*             K2Node_DynamicCast_AsUMG_Talent_View_Outpost;      // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_552E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutpostsRowHandle                    CallFunc_MakeOutposts_ReturnValue;                 // 0x17C(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5534[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutpost                              CallFunc_GetOutpostsStruct_Outposts;               // 0x198(0x70)(None)
	enum class EValid                            CallFunc_GetOutpostsStruct_Paths;                  // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_553A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x210(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x4D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5548[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_CustomEvent_TextColor;                      // 0x4E0(0x28)(None)
	struct FSlateColor                           K2Node_CustomEvent_IconColor;                      // 0x508(0x28)(None)
	struct FTalentView                           CallFunc_GetTalentViewsStruct_TalentViews;         // 0x530(0x1BB8)(None)
	enum class EValid                            CallFunc_GetTalentViewsStruct_Paths;               // 0x20E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x20E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5558[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x20F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x20F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x2100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bHighlighted;                         // 0x2108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x2109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5567[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GenerateSearchStringForProspectTalent_ReturnValue; // 0x2110(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


