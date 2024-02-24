#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8A (0x6B2 - 0x628)
// WidgetBlueprintGeneratedClass ListEmbeddedButton.ListEmbeddedButton_C
class UListEmbeddedButton_C : public UGGButtonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HoverAnim;                                         // 0x630(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background_1;                                      // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ContentOverlay;                                    // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGRichTextBlock*                      Label;                                             // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             LabelScaleBox;                                     // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          HighlightColor;                                    // 0x660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Caption;                                           // 0x670(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsHoveredState;                                    // 0x688(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AB7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Image;                                             // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               ContentPadding;                                    // 0x698(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        LabelScaleMultiplier;                              // 0x6A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LabelWrapTextAtVar;                                // 0x6AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStretch                          MobileStretch;                                     // 0x6B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlignIconToLeft;                                   // 0x6B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UListEmbeddedButton_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void SetCaption(class FText NewCaption);
	void BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void SetIcon(class UTexture2D* New_Icon);
	void ExecuteUbergraph_ListEmbeddedButton(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, bool K2Node_Event_IsDesignTime, class UScaleBoxSlot* K2Node_DynamicCast_AsScale_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, class FText K2Node_CustomEvent_NewCaption, class UTexture2D* K2Node_CustomEvent_New_Icon, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue);
};

}


