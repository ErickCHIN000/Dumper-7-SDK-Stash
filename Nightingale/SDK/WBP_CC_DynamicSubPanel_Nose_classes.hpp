#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x4B8 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C
class UWBP_CC_DynamicSubPanel_Nose_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_cc_sw_Slider_1D_C*                Oned_BridgeDepth;                                  // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_sw_Morph2dSlider_C*            Twod_NosePositionSlider;                           // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_2D_C*                Twod_NoseShape;                                    // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_Nose_C* GetDefaultObj();

	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void RefreshUIwithPersistedValues(bool Temp_bool_Variable, bool Temp_bool_Variable_1, float CallFunc_Utility_GetMorphValue_Value, float CallFunc_Utility_GetMorphValue_Value_1, float CallFunc_Utility_GetMorphValue_Value_2, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Utility_GetMorphValue_Value_3, double CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_Utility_GetMorphValue_Value_4, double CallFunc_MapRangeClamped_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float K2Node_Select_Default_1, double CallFunc_MakeVector2D_Y_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_2, float K2Node_Select_Option_0_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float K2Node_Select_Option_1_ImplicitCast);
	void Construct();
	void RandomizePanelContent();
	void ResetPanelContent();
	void RefreshPanel();
	void BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_cc_sw_Slider_1D_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature();
	void BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_Nose(int32 EntryPoint, const struct FVector2D& K2Node_ComponentBoundEvent_Slider_Value_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double K2Node_ComponentBoundEvent_Slider_Value, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, bool K2Node_Event_IsDesignTime, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


