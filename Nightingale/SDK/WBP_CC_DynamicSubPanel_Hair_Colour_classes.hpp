#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x4E0 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Hair_Colour.WBP_CC_DynamicSubPanel_Hair_Colour_C
class UWBP_CC_DynamicSubPanel_Hair_Colour_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_cc_sw_Slider_1D_C*                OnedSlider_Peppering2Hiddenforlive;                // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                OnedSlider_Pepperinghiddenforlive;                 // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   HairColour_1;                                      // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   HairColour_2;                                      // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   HairColour_Eyebrows;                               // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   HairColour_Facial1;                                // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CachedData;                                        // 0x4D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_Hair_Colour_C* GetDefaultObj();

	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void Update_Active_Selection_for_All_Pickers(const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor, const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor_1, const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor_2);
	void CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map);
	void CacheStartingPanelValues(const struct FDataTableRowHandle& CallFunc_GetHairColor_OutHairColor);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WBP_CC_DynamicSubPanel_Hair_Colour_HairColour_1_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void BndEvt__WBP_CC_DynamicSubPanel_Hair_Colour_HairColour_Facial1_K2Node_ComponentBoundEvent_1_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void ResetPanelContent();
	void RandomizePanelContent();
	void BndEvt__WBP_CC_DynamicSubPanel_Hair_Colour_HairColour_Eyebrows_K2Node_ComponentBoundEvent_3_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void BndEvt__WBP_CC_DynamicSubPanel_Hair_Colour_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_4_OnResetSelected__DelegateSignature();
	void BndEvt__WBP_CC_DynamicSubPanel_Hair_Colour_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_5_OnRandomizeSelected__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_Hair_Colour(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_2, int32 K2Node_ComponentBoundEvent_GridIndex_2, bool K2Node_ComponentBoundEvent_ColorSwatch__2, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_1, int32 K2Node_ComponentBoundEvent_GridIndex_1, bool K2Node_ComponentBoundEvent_ColorSwatch__1, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_IsValid_ReturnValue_2, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID, int32 K2Node_ComponentBoundEvent_GridIndex, bool K2Node_ComponentBoundEvent_ColorSwatch_, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


