#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x4C8 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C
class UWBP_CC_DynamicSubPanel_EyeSize_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_0;                                         // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                WBP_cc_sw_Slider_1D_Depth;                         // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                WBP_cc_sw_Slider_1D_rotation;                      // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                WBP_cc_sw_Slider_1D_roundness;                     // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                WBP_cc_sw_Slider_1D_Size;                          // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_2D_C*                WBP_cc_sw_Slider_2D;                               // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_EyeSize_C* GetDefaultObj();

	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void UpdateUIFromActiveValues(double CallFunc_GetEyeScale_OutEyeScale, const struct FVector& CallFunc_GetEyeOffset_EyeOffset, bool Temp_bool_Variable, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_Utility_GetMorphValue_Value, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, float CallFunc_Utility_GetMorphValue_Value_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_4, float CallFunc_Utility_GetMorphValue_Value_2, float K2Node_Select_Default, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1, float K2Node_Select_Option_0_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float K2Node_Select_Option_1_ImplicitCast);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void Construct();
	void BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value);
	void PreConstruct(bool IsDesignTime);
	void RandomizePanelContent();
	void ResetPanelContent();
	void BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_Size_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_Depth_1_K2Node_ComponentBoundEvent_4_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_rotation_K2Node_ComponentBoundEvent_4_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_6_OnResetSelected__DelegateSignature();
	void BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_7_OnRandomizeSelected__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_EyeSize(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FVector2D& K2Node_ComponentBoundEvent_Slider_Value_4, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool K2Node_Event_IsDesignTime, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double K2Node_ComponentBoundEvent_Slider_Value_3, double CallFunc_MapRangeClamped_ReturnValue_4, const struct FVector& CallFunc_GetEyeOffset_EyeOffset, const struct FVector& CallFunc_GetEyeOffset_EyeOffset_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double K2Node_ComponentBoundEvent_Slider_Value_2, double K2Node_ComponentBoundEvent_Slider_Value_1, double K2Node_ComponentBoundEvent_Slider_Value, double CallFunc_MapRangeClamped_ReturnValue_5, double CallFunc_MapRangeClamped_ReturnValue_6, TArray<class UWBP_cc_sw_Slider_1D_C*>& K2Node_MakeArray_Array, class UWBP_cc_sw_Slider_1D_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


