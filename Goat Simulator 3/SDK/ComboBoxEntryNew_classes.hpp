#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x65A - 0x628)
// WidgetBlueprintGeneratedClass ComboBoxEntryNew.ComboBoxEntryNew_C
class UComboBoxEntryNew_C : public UGGButtonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HoverAnim;                                         // 0x630(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background_1;                                      // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StringEntry;                                       // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          HighlightColor;                                    // 0x648(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHoveredState;                                    // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Selected;                                       // 0x659(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UComboBoxEntryNew_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void SetEntry(class FText StringEntry);
	void BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void SetSelected(bool IsSelected);
	void ExecuteUbergraph_ComboBoxEntryNew(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class FText K2Node_CustomEvent_StringEntry, bool K2Node_CustomEvent_IsSelected, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
};

}


