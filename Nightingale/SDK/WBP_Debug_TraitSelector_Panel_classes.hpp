#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x548 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_Debug_TraitSelector_Panel.WBP_Debug_TraitSelector_Panel_C
class UWBP_Debug_TraitSelector_Panel_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                              ActiveCharBox;                                     // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    bu_clear;                                          // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      TraitFilter;                                       // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             TraitListView;                                     // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_activeTraitLabel;                              // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicText_OneLine_C*              WBP_BasicText_OneLine;                             // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Cleared;                                           // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UCharacteristicDataAsset*>      SelectedCharacteristics;                           // 0x500(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            CharacteristicSelected;                            // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  OldTraitText;                                      // 0x520(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UCharacteristicDataAsset*>      AllCharacteristics;                                // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Debug_TraitSelector_Panel_C* GetDefaultObj();

	void RefreshActiveTextWrapBox(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_HasAnyChildren_ReturnValue, class FText K2Node_Select_Default);
	void RefreshCharacteristicText(class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& Temp_struct_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCharacteristicDataAsset* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void FilterTraits(class FText FilterText, const TArray<class UCharacteristicDataAsset*>& CharacteristicsToFilter, class UCharacteristicDataAsset* CurrentCharacteristic, const class FString& CurrentFilterText, class FText WidgetValue, bool bShowWidget, class UWidget* CurrentWidget, const TArray<class UWidget*>& WidgetsToFilter, const TArray<class FString>& FilterArray, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FCharacteristicData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UCharacteristicDataAsset* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue);
	void OnCharacteristicSelected(bool CharacteristicSelected, class UCharacteristicDataAsset* CharacteristicRef, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void PopulateTraits(TArray<class UCharacteristicDataAsset*>& CallFunc_GetAllCharacteristics_ReturnValue);
	void Construct();
	void BndEvt__WBP_PopupTraits_bu_Done_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void BndEvt__WBP_PopupTraits_TraitFilter_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_Debug_TraitSelector_Panel_TraitListView_K2Node_ComponentBoundEvent_3_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__WBP_Debug_TraitSelector_Panel_TraitListView_K2Node_ComponentBoundEvent_4_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
	void ExecuteUbergraph_WBP_Debug_TraitSelector_Panel(int32 EntryPoint, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UWBP_sw_Debug_CharacteristicEntry_C* K2Node_DynamicCast_AsWBP_Sw_Debug_Characteristic_Entry, bool K2Node_DynamicCast_bSuccess, class FText K2Node_ComponentBoundEvent_Text, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_sw_Debug_CharacteristicEntry_C* K2Node_DynamicCast_AsWBP_Sw_Debug_Characteristic_Entry_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_Contains_ReturnValue);
	void CharacteristicSelected__DelegateSignature(bool CharacteristicSelected, class UCharacteristicDataAsset* CharacteristicRef);
	void Cleared__DelegateSignature();
};

}


