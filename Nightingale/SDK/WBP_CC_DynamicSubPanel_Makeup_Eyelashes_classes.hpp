#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x538 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Makeup_Eyelashes.WBP_CC_DynamicSubPanel_Makeup_Eyelashes_C
class UWBP_CC_DynamicSubPanel_Makeup_Eyelashes_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_button_base_C*                    bu_Reset;                                          // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIK_MenuTabs_C*                   Eye_Tabs_ActiveEyeSelection;                       // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   EyelashColorPicker_Root_False;                     // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   EyelashColorPicker_Root_Natural;                   // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   EyelashColorPicker_Tip_False;                      // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   EyelashColorPicker_Tip_Natural;                    // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    Lock;                                              // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    Randomize;                                         // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_EyelashSettings;                                // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FEyeLashSettings                      CachedLeftData;                                    // 0x4E8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEyeLashSettings                      CachedRightData;                                   // 0x510(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_Makeup_Eyelashes_C* GetDefaultObj();

	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void ResetEyelashColors();
	void RefreshUI_with_PersistedValues(const struct FDataTableRowHandle& CallFunc_GetEyeLashTipColor_OutValue, const struct FDataTableRowHandle& CallFunc_GetEyeLashRootColor_OutValue, const struct FDataTableRowHandle& CallFunc_GetEyeLashTipColor_OutValue_1, const struct FDataTableRowHandle& CallFunc_GetEyeLashRootColor_OutValue_1);
	void CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> Values);
	void CacheStartingPanelValues(const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue, const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue_1);
	void CollectSideData(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>& InOutMap, enum class EEyeSide EyeSide, const struct FEyeLashSettings& NewLocalVar, const class FString& Prefix, const struct FEyeLashSettings& OldData, const struct FEyeLashSettings& CurrentData, enum class EEyeSide Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, enum class EEyeSide Temp_byte_Variable_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& K2Node_Select_Default, const struct FEyeLashSettings& K2Node_Select_Default_1, const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1);
	void SetEyelashColor_root(const struct FDataTableRowHandle& DT_Row_Color, enum class EEyeLashType LashType, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SetEyelashColor_tip(const struct FDataTableRowHandle& DT_Row_Color, enum class EEyeLashType InputPin, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	class UWidget* GetDefaultFocusWidget();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_EyelashColorPicker_1_K2Node_ComponentBoundEvent_1_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_EyelashColorPicker_K2Node_ComponentBoundEvent_2_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_EyelashColorPicker_03_K2Node_ComponentBoundEvent_3_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_Eye_Tabs_ActiveEyeSelection_K2Node_ComponentBoundEvent_4_TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab);
	void BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_EyelashColorPicker_Root_Natural_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void RandomizePanelContent();
	void ResetPanelContent();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyelashes_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_6_OnResetSelected__DelegateSignature();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Eyelashes(int32 EntryPoint, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool K2Node_Event_IsDesignTime, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_3, int32 K2Node_ComponentBoundEvent_GridIndex_3, bool K2Node_ComponentBoundEvent_ColorSwatch__3, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_3, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_2, int32 K2Node_ComponentBoundEvent_GridIndex_2, bool K2Node_ComponentBoundEvent_ColorSwatch__2, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_1, int32 K2Node_ComponentBoundEvent_GridIndex_1, bool K2Node_ComponentBoundEvent_ColorSwatch__1, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1, class FText K2Node_ComponentBoundEvent_SelectedTabName, int32 K2Node_ComponentBoundEvent_ActiveTab, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID, int32 K2Node_ComponentBoundEvent_GridIndex, bool K2Node_ComponentBoundEvent_ColorSwatch_, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


