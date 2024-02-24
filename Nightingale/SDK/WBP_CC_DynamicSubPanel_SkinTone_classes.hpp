#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x4C8 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C
class UWBP_CC_DynamicSubPanel_SkinTone_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_0;                                         // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   SkinTonePicker;                                    // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                Slider_Mottled;                                    // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                Slider_Redness;                                    // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CachedData;                                        // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_SkinTone_C* GetDefaultObj();

	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void Reset_Content(const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor);
	void SetActiveValues_UpdateWidgets(double CallFunc_GetRedness_OutRedness, double CallFunc_GetMottling_OutMottling, const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1);
	void CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map);
	void CacheStartingPanelValues(const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WBP_CC_DynamicSubPanel_SkinTone_SkinTonePicker_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void ResetPanelContent();
	void RandomizePanelContent();
	void BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Mottled_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Redness_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_SkinTone_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature();
	void BndEvt__WBP_CC_DynamicSubPanel_SkinTone_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_5_OnResetSelected__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_SkinTone(int32 EntryPoint, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID, int32 K2Node_ComponentBoundEvent_GridIndex, bool K2Node_ComponentBoundEvent_ColorSwatch_, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double K2Node_ComponentBoundEvent_Slider_Value_1, bool K2Node_Event_IsDesignTime, double K2Node_ComponentBoundEvent_Slider_Value, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


