#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x548 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C
class UWBP_MapMarkerEditPanel_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               ButtonCancel;                                      // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ButtonSave;                                        // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableText*                MarkerNoteEditText;                                // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               RadiusSlider;                                      // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Content;                                        // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_60;                                    // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Note;                                              // 0x4F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                       Radius;                                            // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            MarkerEditPanelSavePressed;                        // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        MaxTextLength;                                     // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5546[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            RadiusSliderValueChanged;                          // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                NoteBuffer;                                        // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MapMarkerEditPanel_C* GetDefaultObj();

	void SetPosition(const struct FVector2D& InPosition, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	void IsTextValid(class FText& InText, bool* IsValid, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WBP_MapMarkerEditPanel_ButtonCancel_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_MapMarkerEditPanel_ButtonSave_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_MapMarkerEditPanel_MarkerNoteEditText_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_MapMarkerEditPanel_RadiusSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_WBP_MapMarkerEditPanel(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetText_ReturnValue, float CallFunc_GetValue_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsTextValid_IsValid, const struct FFocusEvent& K2Node_Event_InFocusEvent, float K2Node_ComponentBoundEvent_Value, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast, double K2Node_CallDelegate_NewRadius_ImplicitCast, double K2Node_CallDelegate_NewRadius_ImplicitCast_1);
	void RadiusSliderValueChanged__DelegateSignature(double NewRadius);
	void MarkerEditPanelSavePressed__DelegateSignature(class FText NewNote, double NewRadius);
};

}


