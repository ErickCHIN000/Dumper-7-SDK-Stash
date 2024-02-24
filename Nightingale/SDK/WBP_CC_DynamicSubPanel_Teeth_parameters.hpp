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
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.OnInputMethodChanged
struct UWBP_CC_DynamicSubPanel_Teeth_C_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_105F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.BP_GetDesiredFocusTarget
struct UWBP_CC_DynamicSubPanel_Teeth_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.HandleToothMetalTypeEnabled
struct UWBP_CC_DynamicSubPanel_Teeth_C_HandleToothMetalTypeEnabled_Params
{
public:
	struct FLinearColor                          Temp_struct_Variable;                              // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10BA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.CollectPanelValues
struct UWBP_CC_DynamicSubPanel_Teeth_C_CollectPanelValues_Params
{
public:
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> OutValues;                                         // 0x0(0x50)(Parm, OutParm)
	class FString                                OutPanelName;                                      // 0x50(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FTeethAppearance                      CurrentData;                                       // 0x60(0xC)(Edit, BlueprintVisible, NoDestructor)
	uint8                                        Pad_1148[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs; // 0x90(0x20)(None)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_3;           // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1; // 0xD0(0x20)(None)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FTeethAppearance                      CallFunc_GetTeethData_OutValue;                    // 0x100(0xC)(NoDestructor)
	uint8                                        Pad_115A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_1;        // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2; // 0x120(0x20)(None)
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map;                                // 0x140(0x50)(None)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast; // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1; // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.CacheStartingPanelValues
struct UWBP_CC_DynamicSubPanel_Teeth_C_CacheStartingPanelValues_Params
{
public:
	struct FTeethAppearance                      CallFunc_GetTeethData_OutValue;                    // 0x0(0xC)(NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.RefreshContentandUI
struct UWBP_CC_DynamicSubPanel_Teeth_C_RefreshContentandUI_Params
{
public:
	struct FTeethAppearance                      CallFunc_GetTeethData_OutValue;                    // 0x0(0xC)(NoDestructor)
	uint8                                        Pad_11D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.GetTeethCrookedness
struct UWBP_CC_DynamicSubPanel_Teeth_C_GetTeethCrookedness_Params
{
public:
	float                                        CallFunc_Utility_GetMorphValue_Value;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.PreConstruct
struct UWBP_CC_DynamicSubPanel_Teeth_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.BndEvt__WBP_CC_DynamicSubPanel_Teeth_Slider_Teeth_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Teeth_C_BndEvt__WBP_CC_DynamicSubPanel_Teeth_Slider_Teeth_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.BndEvt__WBP_CC_DynamicSubPanel_Teeth_Slider_Gold_K2Node_ComponentBoundEvent_1_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Teeth_C_BndEvt__WBP_CC_DynamicSubPanel_Teeth_Slider_Gold_K2Node_ComponentBoundEvent_1_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.BndEvt__WBP_CC_DynamicSubPanel_Teeth_Slider_Decay_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Teeth_C_BndEvt__WBP_CC_DynamicSubPanel_Teeth_Slider_Decay_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.BndEvt__WBP_CC_DynamicSubPanel_Teeth_Slider_Yellowing_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Teeth_C_BndEvt__WBP_CC_DynamicSubPanel_Teeth_Slider_Yellowing_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_CC_DynamicSubPanel_Teeth.WBP_CC_DynamicSubPanel_Teeth_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Teeth
struct UWBP_CC_DynamicSubPanel_Teeth_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Teeth_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_Slider_Value_3;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Slider_Value_2;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Slider_Value_1;         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Slider_Value;           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X;                          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_2;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_cc_sw_Slider_1D_C*>        K2Node_MakeArray_Array;                            // 0x58(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWBP_cc_sw_Slider_1D_C*                CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1416[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1418[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_cc_sw_Slider_1D_C*>        K2Node_MakeArray_Array_1;                          // 0x80(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWBP_cc_sw_Slider_1D_C*                CallFunc_Array_Get_Item_1;                         // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_141F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


