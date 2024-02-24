#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0x6BC - 0x628)
// WidgetBlueprintGeneratedClass ComboBoxWidget.ComboBoxWidget_C
class UComboBoxWidget_C : public UGGButtonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Background;                                        // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BoxBackground;                                     // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGScrollBox*                          EntriesBox;                                        // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          OptionsBox;                                        // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_0;                                        // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SelectedString;                                    // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x668(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_D2C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StringValue;                                       // 0x670(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FText>                          Options;                                           // 0x680(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SelectionIndex;                                    // 0x690(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D3C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SelectionChanged;                                  // 0x698(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsOpen;                                            // 0x6A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D46[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          HoveredColorAndOpacity;                            // 0x6AC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UComboBoxWidget_C* GetDefaultObj();

	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	class UWidget* Entries_List_Navigation(enum class EUINavigation Navigation, class UWidget* CallFunc_NavigateList_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Handled_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWidget* K2Node_Select_Default, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void UpdateColor();
	void BndEvt__ComboBoxWidget_ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OpenOptions();
	void SetOptions(TArray<class FText>& NewOptions);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnFocusMarkerEnabled(bool bEnabled, bool bPrevious);
	void PreConstruct(bool IsDesignTime);
	void SetSelectedOption(int32 OptionIndex);
	void OnSelection(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent);
	void CloseOptions();
	void OnSetIsEnabled(bool bInIsEnabled);
	void ExecuteUbergraph_ComboBoxWidget(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class FText>& K2Node_CustomEvent_NewOptions, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool K2Node_Event_bEnabled, bool K2Node_Event_bPrevious, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_OptionIndex, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UComboBoxEntryNew_C* CallFunc_Create_ReturnValue, class UGGUserWidget* K2Node_CustomEvent_Widget, const struct FPointerEvent& K2Node_CustomEvent_PointerEvent, const struct FKeyEvent& K2Node_CustomEvent_KeyEvent, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, bool K2Node_Event_bInIsEnabled, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UComboBoxEntryNew_C* K2Node_DynamicCast_AsCombo_Box_Entry_New, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class FText CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsUsingGamepad_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void SelectionChanged__DelegateSignature(int32 SelectionIndex);
};

}


