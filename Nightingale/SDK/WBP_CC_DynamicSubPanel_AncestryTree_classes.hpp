#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x4D0 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_AncestryTree.WBP_CC_DynamicSubPanel_AncestryTree_C
class UWBP_CC_DynamicSubPanel_AncestryTree_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ShowHide_PickerPanel;                         // 0x488(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_2;                                          // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_DynamicSubPanel_AncestryPicker_C* WBP_CC_DynamicSubPanel_AncestryPicker_C_0;         // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_ancestry_tree_C*            WBP_cc_sw_ancestry_tree;                           // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           GenePool;                                          // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_AncestryTree_C* GetDefaultObj();

	void PopulateGenePoolForRandomize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void Refresh(bool CallFunc_IsValid_ReturnValue);
	void SetAncestorData(const struct FDataTableRowHandle& Appearance_Row, int32 Ancestry_Slot_Index, const TArray<struct FAppearanceAncestorData>& Array);
	void RandomizeAll(const struct FDataTableRowHandle& SelectedArchetype, const TArray<struct FDataTableRowHandle>& L_DT_Archetypes, const TArray<struct FAppearanceAncestorData>& MeetTheRandos, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Variable, const struct FDataTableRowHandle& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OpenAncestryPickerPanel(const struct FDataTableRowHandle& ActiveArchetype, int32 Index);
	void Get_Random_Appearance(const struct FDataTableRowHandle& InputPin, int32 Index, struct FDataTableRowHandle* Output, bool* Success, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, int32 Temp_int_Variable, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue, const class FString& K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_RowHandlesEqual_Equal);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WBP_CC_DynamicSubPanel_AncestryTree_WBP_cc_sw_ancestry_tree_K2Node_ComponentBoundEvent_0_ED_TreeSlotSelected__DelegateSignature(const struct FDataTableRowHandle& AppearanceRow, int32 FamilyTreeIndex, bool IsEmpty);
	void BndEvt__WBP_CC_DynamicSubPanel_AncestryTree_WBP_CC_DynamicSubPanel_AncestryPicker_C_0_K2Node_ComponentBoundEvent_1_AncestrySelected__DelegateSignature(const struct FDataTableRowHandle& Archetype, int32 AncestrySlot, bool CloseMenu);
	void RandomizePanelContent();
	void RefreshPanel();
	void ResetPanelContent();
	void BndEvt__WBP_CC_DynamicSubPanel_AncestryTree_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_3_OnResetSelected__DelegateSignature();
	void BndEvt__WBP_CC_DynamicSubPanel_AncestryTree_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_AncestryTree(int32 EntryPoint, enum class E_CC_CameraMode Temp_byte_Variable, enum class E_CC_CameraMode Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_AppearanceRow, int32 K2Node_ComponentBoundEvent_FamilyTreeIndex, bool K2Node_ComponentBoundEvent_IsEmpty, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_Archetype, int32 K2Node_ComponentBoundEvent_AncestrySlot, bool K2Node_ComponentBoundEvent_CloseMenu, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class E_CC_CameraMode K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


