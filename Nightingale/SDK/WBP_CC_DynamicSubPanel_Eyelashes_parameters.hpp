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
// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.OnInputMethodChanged
struct UWBP_CC_DynamicSubPanel_Eyelashes_C_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_297F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.BP_GetDesiredFocusTarget
struct UWBP_CC_DynamicSubPanel_Eyelashes_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.RefreshUIwithStoredValues
struct UWBP_CC_DynamicSubPanel_Eyelashes_C_RefreshUIwithStoredValues_Params
{
public:
	double                                       CallFunc_GetEyeLashLength_OutValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetEyeLashLength_OutValue_1;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1; // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C8 (0x2C8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.CollectSideData
struct UWBP_CC_DynamicSubPanel_Eyelashes_C_CollectSideData_Params
{
public:
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> InOutMap;                                          // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EEyeSide                          EyeSide;                                           // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashSettings                      NewLocalVar;                                       // 0x58(0x28)(Edit, BlueprintVisible, NoDestructor)
	class FString                                Prefix;                                            // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FEyeLashSettings                      OldData;                                           // 0x90(0x28)(Edit, BlueprintVisible, NoDestructor)
	struct FEyeLashSettings                      CurrentData;                                       // 0xB8(0x28)(Edit, BlueprintVisible, NoDestructor)
	enum class EEyeSide                          Temp_byte_Variable;                                // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EEyeSide                          Temp_byte_Variable_1;                              // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_2;          // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_3;          // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs; // 0x150(0x20)(None)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1; // 0x170(0x20)(None)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_1;        // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2; // 0x1B0(0x20)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x1E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x200(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x210(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x230(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FEyeLashSettings                      K2Node_Select_Default_1;                           // 0x240(0x28)(NoDestructor)
	struct FEyeLashAppearance                    CallFunc_GetEyeLashData_OutValue;                  // 0x268(0x50)(NoDestructor)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast; // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1; // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.CollectPanelValues
struct UWBP_CC_DynamicSubPanel_Eyelashes_C_CollectPanelValues_Params
{
public:
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> OutValues;                                         // 0x0(0x50)(Parm, OutParm)
	class FString                                OutPanelName;                                      // 0x50(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> Values;                                            // 0x60(0x50)(Edit, BlueprintVisible)
};

// 0xA0 (0xA0 - 0x0)
// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.CacheStartingPanelValues
struct UWBP_CC_DynamicSubPanel_Eyelashes_C_CacheStartingPanelValues_Params
{
public:
	struct FEyeLashAppearance                    CallFunc_GetEyeLashData_OutValue;                  // 0x0(0x50)(NoDestructor)
	struct FEyeLashAppearance                    CallFunc_GetEyeLashData_OutValue_1;                // 0x50(0x50)(NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.SetEyelashLengthThickness
struct UWBP_CC_DynamicSubPanel_Eyelashes_C_SetEyelashLengthThickness_Params
{
public:
	double                                       InputPin;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.PreConstruct
struct UWBP_CC_DynamicSubPanel_Eyelashes_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_196_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Eyelashes_C_BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_196_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_1_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Eyelashes_C_BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_1_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Eyelashes
struct UWBP_CC_DynamicSubPanel_Eyelashes_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Eyelashes_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_Slider_Value_1;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X;                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Slider_Value;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E5C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


