#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x4C8 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Jaws.WBP_CC_DynamicSubPanel_Jaws_C
class UWBP_CC_DynamicSubPanel_Jaws_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_0;                                         // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_sw_Morph2dSlider_C*            WBP_CC_sw_Morph2dSlider_Jaws;                      // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                WBP_cc_sw_Slider_1D_ChinSoften;                    // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                WBP_cc_sw_Slider_1D_JawStrength;                   // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                WBP_cc_sw_Slider_AdamsApple;                       // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                WBP_cc_sw_Slider_ChinForeBack;                     // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_Jaws_C* GetDefaultObj();

	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void ResetContent(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_cc_sw_Slider_1D_C*>& K2Node_MakeArray_Array, class UWBP_cc_sw_Slider_1D_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void RandomizeContent(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_cc_sw_Slider_1D_C*>& K2Node_MakeArray_Array, class UWBP_cc_sw_Slider_1D_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void RefreshUIWithActiveValues(bool Temp_bool_Variable, float CallFunc_Utility_GetMorphValue_Value, float CallFunc_Utility_GetMorphValue_Value_1, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_Select_Default, float CallFunc_Utility_GetMorphValue_Value_2, float CallFunc_Utility_GetMorphValue_Value_3, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float K2Node_Select_Option_0_ImplicitCast, float K2Node_Select_Option_1_ImplicitCast);
	void RefreshChinForthAndBackStrengthSlider(float CallFunc_Utility_GetMorphValue_Value, float CallFunc_Utility_GetMorphValue_Value_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WBP_CC_DynamicSubPanel_Jaws_WBP_cc_sw_Slider_1D_2_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_Jaws_WBP_cc_sw_Slider_1D_ChinSoften_K2Node_ComponentBoundEvent_1_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_Jaws_WBP_cc_sw_Slider_ChinForeBack_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void RandomizePanelContent();
	void ResetPanelContent();
	void BndEvt__WBP_CC_DynamicSubPanel_Jaws_WBP_cc_sw_Slider_ChinForeBack_1_K2Node_ComponentBoundEvent_6_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_Jaws_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_2_OnResetSelected__DelegateSignature();
	void BndEvt__WBP_CC_DynamicSubPanel_Jaws_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_Jaws(int32 EntryPoint, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_IsValid_ReturnValue, double K2Node_ComponentBoundEvent_Slider_Value_3, double K2Node_ComponentBoundEvent_Slider_Value_2, double K2Node_ComponentBoundEvent_Slider_Value_1, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double K2Node_ComponentBoundEvent_Slider_Value, double CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_MapRangeClamped_ReturnValue_3, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


