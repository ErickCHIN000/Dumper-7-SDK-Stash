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

// 0x18 (0x18 - 0x0)
// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.SetPosition
struct UWBP_MapMarkerEditPanel_C_SetPosition_Params
{
public:
	struct FVector2D                             InPosition;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.BP_GetDesiredFocusTarget
struct UWBP_MapMarkerEditPanel_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.IsTextValid
struct UWBP_MapMarkerEditPanel_C_IsTextValid_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsValid;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5363[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.PreConstruct
struct UWBP_MapMarkerEditPanel_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.BndEvt__WBP_MapMarkerEditPanel_MarkerNoteEditText_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextChangedEvent__DelegateSignature
struct UWBP_MapMarkerEditPanel_C_BndEvt__WBP_MapMarkerEditPanel_MarkerNoteEditText_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.OnRemovedFromFocusPath
struct UWBP_MapMarkerEditPanel_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.BndEvt__WBP_MapMarkerEditPanel_RadiusSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_MapMarkerEditPanel_C_BndEvt__WBP_MapMarkerEditPanel_RadiusSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.ExecuteUbergraph_WBP_MapMarkerEditPanel
struct UWBP_MapMarkerEditPanel_C_ExecuteUbergraph_WBP_MapMarkerEditPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_549D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(None)
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x28(0x18)(ConstParm)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTextValid_IsValid;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x54(0x8)(NoDestructor)
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(None)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_CallDelegate_NewRadius_ImplicitCast;        // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CallDelegate_NewRadius_ImplicitCast_1;      // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.RadiusSliderValueChanged__DelegateSignature
struct UWBP_MapMarkerEditPanel_C_RadiusSliderValueChanged__DelegateSignature_Params
{
public:
	double                                       NewRadius;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.MarkerEditPanelSavePressed__DelegateSignature
struct UWBP_MapMarkerEditPanel_C_MarkerEditPanelSavePressed__DelegateSignature_Params
{
public:
	class FText                                  NewNote;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       NewRadius;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


