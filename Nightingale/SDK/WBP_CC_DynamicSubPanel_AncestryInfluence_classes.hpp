#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x540 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_AncestryInfluence.WBP_CC_DynamicSubPanel_AncestryInfluence_C
class UWBP_CC_DynamicSubPanel_AncestryInfluence_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          AddFamilyMembersWarning;                           // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_AppearanceOptionEntry_C*       Ancestor_0;                                        // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_AppearanceOptionEntry_C*       Ancestor_1;                                        // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_AppearanceOptionEntry_C*       Ancestor_2;                                        // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_AppearanceOptionEntry_C*       Ancestor_3;                                        // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_DynamicSubPanel_AncestryInfluence_Tree_C* AncestryTree;                                      // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    bu_Reset;                                          // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    Lock;                                              // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    Randomize;                                         // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Panel;                                          // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Ancestry2DSlider_C*         WBP_CC_Ancestry2DSlider_C_0;                       // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       Slider_Value_X;                                    // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Slider_Value_Y;                                    // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AncestryThumbSelected;                             // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FAppearanceAncestorData>       Ancestor_Data;                                     // 0x518(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ActiveFamilyIndex;                                 // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7FD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               AncestorWeights;                                   // 0x530(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_AncestryInfluence_C* GetDefaultObj();

	class UWidget* NavigateToRightAncestor(enum class EUINavigation Navigation, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	class UWidget* NavigateToLeftAncestor(enum class EUINavigation Navigation, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	class UWidget* NavigateToBottomAncestor(enum class EUINavigation Navigation, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	class UWidget* NavigateToTopAncestor(enum class EUINavigation Navigation, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	class UWidget* NavigateToSlider(enum class EUINavigation Navigation, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void UpdateTreeVisibility(bool bShowTree, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void Refresh_UI();
	void GetSliderValuesForData(double L_RangeMax, const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3);
	void RefreshSliderFromAncestryData(bool Temp_bool_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable_1, const struct FAppearanceAncestorData& CallFunc_Array_Get_Item, const struct FAppearanceAncestorData& CallFunc_Array_Get_Item_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, const struct FAppearanceAncestorData& CallFunc_Array_Get_Item_2, const struct FAppearanceAncestorData& CallFunc_Array_Get_Item_3, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, float K2Node_Select_Default, float K2Node_Select_Default_1, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Less_DoubleDouble_B_ImplicitCast, float K2Node_Select_Option_0_ImplicitCast, float K2Node_Select_Option_1_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_2, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast_3, double CallFunc_Less_DoubleDouble_B_ImplicitCast_1, float K2Node_Select_Option_1_ImplicitCast_1, float K2Node_Select_Option_0_ImplicitCast_1, double K2Node_VariableSet_Slider_Value_Y_ImplicitCast, double K2Node_VariableSet_Slider_Value_X_ImplicitCast);
	void RefreshABCDTargetsFromPersistence(bool L_HasAtLeastOneValidInheritanceActor, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable, const struct FAppearanceAncestorData& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FAppearanceAncestorData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FAppearanceAncestorData& K2Node_MakeStruct_AppearanceAncestorData, bool Temp_bool_Variable_1, const struct FAppearanceAncestorData& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, TArray<class UWBP_CC_AppearanceOptionEntry_C*>& K2Node_MakeArray_Array, TArray<struct FAppearanceAncestorData>& CallFunc_GetAncestorData_OutAncestorData, class UWBP_CC_AppearanceOptionEntry_C* CallFunc_Array_Get_Item_2, bool CallFunc_DoesDataTableRowExist_ReturnValue_1);
	void GetPersisted_AncestryData();
	void DB_(class UTextBlock* Text, double _, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OpenAncestryPickerPanel(const struct FDataTableRowHandle& ActiveArchetype, int32 Index);
	bool GetBlendValue(class FName InputPin, float* OutputPin, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FAppearanceMorphTarget>& CallFunc_GetBodyMorphTargets_OutCurrentMorphs, int32 CallFunc_Array_Length_ReturnValue, const struct FAppearanceMorphTarget& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void RemoveCurrentBlends();
	void Get_Random_Appearance(const struct FDataTableRowHandle& InputPin, int32 Index, struct FDataTableRowHandle* Output, bool* Success, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, int32 Temp_int_Variable, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue, const class FString& K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_RowHandlesEqual_Equal);
	class FName GetBlendShapeName(struct FDataTableRowHandle& DataTableRowHandle, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void Construct();
	void BndEvt__WBP_CC_DynamicSubPanel_Ancestry_WBP_CC_AppearanceOptionEntry_K2Node_ComponentBoundEvent_1_AppearanceSelected__DelegateSignature(const struct FDataTableRowHandle& Appearance_Row, int32 GridIndex);
	void BndEvt__WBP_CC_DynamicSubPanel_Ancestry_WBP_CC_AppearanceOptionEntry_1_K2Node_ComponentBoundEvent_2_AppearanceSelected__DelegateSignature(const struct FDataTableRowHandle& Appearance_Row, int32 GridIndex);
	void BndEvt__WBP_CC_DynamicSubPanel_Ancestry_OptionA_K2Node_ComponentBoundEvent_3_AppearanceSelected__DelegateSignature(const struct FDataTableRowHandle& Appearance_Row, int32 GridIndex);
	void BndEvt__WBP_CC_DynamicSubPanel_Ancestry_OptionB_K2Node_ComponentBoundEvent_4_AppearanceSelected__DelegateSignature(const struct FDataTableRowHandle& Appearance_Row, int32 GridIndex);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_WBP_button_base_2_K2Node_ComponentBoundEvent_7_BU_Click__DelegateSignature();
	void RefreshPanel();
	void ResetPanelContent();
	void BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_8_OnResetSelected__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_WBP_CC_Ancestry2DSlider_C_0_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_AncestryInfluence_AncestryTree_K2Node_ComponentBoundEvent_9_OnThumbSelected__DelegateSignature(const struct FDataTableRowHandle& Current_Archetype, int32 Index);
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_AncestryInfluence(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_Appearance_Row_1, int32 K2Node_ComponentBoundEvent_GridIndex_1, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_Appearance_Row, int32 K2Node_ComponentBoundEvent_GridIndex, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_Appearance_Row_2, int32 K2Node_ComponentBoundEvent_GridIndex_2, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_Appearance_Row_3, int32 K2Node_ComponentBoundEvent_GridIndex_3, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, class UWBP_CC_AppearanceOptionEntry_C* K2Node_Select_Default, TArray<double>& K2Node_MakeArray_Array, const struct FVector2D& K2Node_ComponentBoundEvent_Slider_Value, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_Current_Archetype, int32 K2Node_ComponentBoundEvent_Index, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void AncestryThumbSelected__DelegateSignature(int32 Index, const struct FDataTableRowHandle& Current_Archetype);
};

}


