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

// 0x10 (0x10 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.GetStringForFilterSearch
struct UUMG_Talent_Blueprint_C_GetStringForFilterSearch_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x236 (0x236 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.UpdateRequiredTalent
struct UUMG_Talent_Blueprint_C_UpdateRequiredTalent_Params
{
public:
	struct FDLCPackageDataRowHandle              DLCRequired;                                       // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FDLCPackageDataRowHandle              RequiredDLC;                                       // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FTalentsRowHandle                     RequiredTalent;                                    // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_1;           // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTalentsRowHandle                     CallFunc_GetRequiredCharacterTalentForBlueprintUnlock_ReturnValue; // 0x5C(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue;                // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0xA8(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFeatureLevelsRowHandle               CallFunc_GetFeatureLevel_ReturnValue;              // 0x1DC(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AreAllFlagsSet_ReturnValue;               // 0x1F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFlagsMultiRowHandle                  CallFunc_Array_Get_Item;                           // 0x1F8(0x18)(HasGetValueTypeHash)
	struct FDLCPackageDataRowHandle              CallFunc_ToDLCPackageDataRowHandle_ReturnValue;    // 0x210(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x22C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_2;           // 0x22D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x235(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x162 (0x162 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Update Required Level
struct UUMG_Talent_Blueprint_C_Update_Required_Level_Params
{
public:
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0x0(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTalentModelInterface_Const*           CallFunc_GetModel_ReturnValue;                     // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x148(0x18)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.UpdateDesaturationMaterial
struct UUMG_Talent_Blueprint_C_UpdateDesaturationMaterial_Params
{
public:
	int32                                        CallFunc_BreakTalentModelData_Rank;                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_MaxRank;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentState                      CallFunc_BreakTalentModelData_State;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.GetOverlay
struct UUMG_Talent_Blueprint_C_GetOverlay_Params
{
public:
	class UOverlay*                              Overlay;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Set Icon
struct UUMG_Talent_Blueprint_C_Set_Icon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UObject>                CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x30(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_SoftObjectReference_ReturnValue; // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.SetSize
struct UUMG_Talent_Blueprint_C_SetSize_Params
{
public:
	struct FVector2D                             InVec;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x212A (0x212A - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Refresh Hover State
struct UUMG_Talent_Blueprint_C_Refresh_Hover_State_Params
{
public:
	struct FTalentView                           TalentView;                                        // 0x0(0x1BB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETalentState                      Temp_byte_Variable;                                // 0x1BB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_BreakTalentModelData_Rank;                // 0x1BBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_MaxRank;             // 0x1BC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentState                      CallFunc_BreakTalentModelData_State;               // 0x1BC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ButtonState                     CallFunc_GetButtonState_State;                     // 0x1BC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1BC6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalentHoverConfig                    K2Node_Select_Default;                             // 0x1BC8(0x560)(None)
	enum class E_ButtonState                     CallFunc_GetButtonState_State_1;                   // 0x2128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Set Hover States
struct UUMG_Talent_Blueprint_C_Set_Hover_States_Params
{
public:
	struct FSlateColor                           TextColor;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                           IconColor;                                         // 0x28(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnStateChanged
struct UUMG_Talent_Blueprint_C_OnStateChanged_Params
{
public:
	struct FTalentModelData                      NewState;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnMouseEnter
struct UUMG_Talent_Blueprint_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnMouseLeave
struct UUMG_Talent_Blueprint_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.SetSearchHighlight
struct UUMG_Talent_Blueprint_C_SetSearchHighlight_Params
{
public:
	bool                                         bHighlighted;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2029 (0x2029 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.ExecuteUbergraph_UMG_Talent_Blueprint
struct UUMG_Talent_Blueprint_C_ExecuteUbergraph_UMG_Talent_Blueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_307[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GenerateSearchStringForBlueprintTalent_ReturnValue; // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_CustomEvent_TextColor;                      // 0x30(0x28)(None)
	struct FSlateColor                           K2Node_CustomEvent_IconColor;                      // 0x58(0x28)(None)
	struct FTalentModelData                      K2Node_Event_NewState;                             // 0x80(0x10)(NoDestructor)
	struct FTalentView                           CallFunc_GetTalentViewsStruct_TalentViews;         // 0x90(0x1BB8)(None)
	enum class EValid                            CallFunc_GetTalentViewsStruct_Paths;               // 0x1C48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1C49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_BreakTalentModelData_Rank;                // 0x1C4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_MaxRank;             // 0x1C50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentState                      CallFunc_BreakTalentModelData_State;               // 0x1C54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1C55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_316[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue;                // 0x1C58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1C68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_UnlockNextTalentRank_ReturnValue;         // 0x1C69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_319[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x1C70(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x1C88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x1C90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0x1C98(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x1DC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1DC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x1DCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31C[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x1DD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_CastToItemableRowHandle_Paths;            // 0x1DD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_320[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableRowHandle                    CallFunc_CastToItemableRowHandle_ReturnValue;      // 0x1DDC(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableData                         CallFunc_GetItemableStruct_Itemable;               // 0x1DF8(0xE8)(None)
	enum class EValid                            CallFunc_GetItemableStruct_Paths;                  // 0x1EE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x1EE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x1EE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_326[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x1EE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x1EF0(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x1F28(0x70)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x1F98(0x70)(ConstParm)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_2;                // 0x2008(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue;         // 0x2010(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bHighlighted;                         // 0x2011(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x2012(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_330[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTalentTooltipWidget*                  CallFunc_TryGetCurrentTooltipWidget_ReturnValue;   // 0x2018(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_TalentTooltip_Blueprint_C*        K2Node_DynamicCast_AsUMG_Talent_Tooltip_Blueprint; // 0x2020(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2028(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnTalentClicked__DelegateSignature
struct UUMG_Talent_Blueprint_C_OnTalentClicked__DelegateSignature_Params
{
public:
	struct FTalentsRowHandle                     Talent;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


