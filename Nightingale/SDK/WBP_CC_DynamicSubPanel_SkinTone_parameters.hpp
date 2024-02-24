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
// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.OnInputMethodChanged
struct UWBP_CC_DynamicSubPanel_SkinTone_C_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1974[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BP_GetDesiredFocusTarget
struct UWBP_CC_DynamicSubPanel_SkinTone_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.Reset Content
struct UWBP_CC_DynamicSubPanel_SkinTone_C_Reset_Content_Params
{
public:
	struct FDataTableRowHandle                   CallFunc_GetSkinColor_OutSkinColor;                // 0x0(0x10)(NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.SetActiveValues&UpdateWidgets
struct UWBP_CC_DynamicSubPanel_SkinTone_C_SetActiveValues_UpdateWidgets_Params
{
public:
	double                                       CallFunc_GetRedness_OutRedness;                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMottling_OutMottling;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetSkinColor_OutSkinColor;                // 0x10(0x10)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.CollectPanelValues
struct UWBP_CC_DynamicSubPanel_SkinTone_C_CollectPanelValues_Params
{
public:
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> OutValues;                                         // 0x0(0x50)(Parm, OutParm)
	class FString                                OutPanelName;                                      // 0x50(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetSkinColor_OutSkinColor;                // 0x60(0x10)(NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs; // 0x90(0x20)(None)
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map;                                // 0xB0(0x50)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.CacheStartingPanelValues
struct UWBP_CC_DynamicSubPanel_SkinTone_C_CacheStartingPanelValues_Params
{
public:
	struct FDataTableRowHandle                   CallFunc_GetSkinColor_OutSkinColor;                // 0x0(0x10)(NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.PreConstruct
struct UWBP_CC_DynamicSubPanel_SkinTone_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BndEvt__WBP_CC_DynamicSubPanel_SkinTone_SkinTonePicker_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature
struct UWBP_CC_DynamicSubPanel_SkinTone_C_BndEvt__WBP_CC_DynamicSubPanel_SkinTone_SkinTonePicker_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   ColorID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        GridIndex;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColorSwatch_;                                      // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RgbSwatch___Disable_tints;                         // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Mottled_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_SkinTone_C_BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Mottled_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Redness_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_SkinTone_C_BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Redness_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_SkinTone
struct UWBP_CC_DynamicSubPanel_SkinTone_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_SkinTone_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetDesiredFocusTarget_ReturnValue;        // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_ComponentBoundEvent_ColorID;                // 0x10(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_GridIndex;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_ColorSwatch_;           // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints; // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BDA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Slider_Value_1;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BDE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_Slider_Value;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetDesiredFocusTarget_ReturnValue_1;      // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


