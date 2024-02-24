#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x440 - 0x3F0)
// WidgetBlueprintGeneratedClass CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C
class UCriticalErrorPopupUserWidget_C : public UGGPopupUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      InitialScaleUpAnim;                                // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ButtonContainer;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderBg;                                          // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGButton*                             OutOfFocusArea;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGRichTextBlock*                      PopupBodyLabel;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PopupTitleLabel;                                   // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsModal;                                          // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E4C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPopupTimedButtonUserWidget_C*         TimedButton;                                       // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCriticalErrorPopupUserWidget_C* GetDefaultObj();

	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, int32 Temp_int_Array_Index_Variable, const struct FEventReply& CallFunc_Handled_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue_1, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	class UWidget* GetInitialWidgetFocus(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UPopupTimedButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue, class UPopupTimedButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_2);
	void OnSetLabels(class FText& Title, class FText& Body);
	void OnCreatedButton(struct FPopupButton& Button);
	void OnPopupButtonInteracted(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent);
	void Construct();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_CriticalErrorPopupUserWidget(int32 EntryPoint, class FText K2Node_Event_Title, class FText K2Node_Event_Body, bool CallFunc_IsValid_ReturnValue, const struct FPopupButton& K2Node_Event_Button, class UGGUserWidget* K2Node_CustomEvent_Widget, const struct FPointerEvent& K2Node_CustomEvent_PointerEvent, const struct FKeyEvent& K2Node_CustomEvent_KeyEvent, class UPopupTimedButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPopupTimedButtonUserWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, const struct FMargin& K2Node_MakeStruct_Margin, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_IsTopMostPopup_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsTopMostPopup_ReturnValue_1);
};

}


