#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x4C9 - 0x4A0)
// WidgetBlueprintGeneratedClass UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C
class UUMG_KeyRebindPopUp_C : public UGGKeyRebindPopupUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      InitialScaleUpAnim;                                // 0x4A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderBg;                                          // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGButton*                             OutOfFocusArea;                                    // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsModal;                                          // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_KeyRebindPopUp_C* GetDefaultObj();

	class UGGButtonUserWidget* CreateButtonUserWidget(struct FPopupButton& Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPopupButtonUserWidget_C* CallFunc_Create_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue);
	void OnSetLabels(class FText& Title, class FText& Body);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Construct();
	void OnButtonInteracted(class UGGUserWidget* InWidget, const struct FPointerEvent& InPointerEvent, const struct FKeyEvent& InKeyEvent);
	void ExecuteUbergraph_UMG_KeyRebindPopUp(int32 EntryPoint, class FText K2Node_Event_Title, class FText K2Node_Event_Body, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UGGUserWidget* K2Node_Event_InWidget, const struct FPointerEvent& K2Node_Event_InPointerEvent, const struct FKeyEvent& K2Node_Event_InKeyEvent, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget, bool K2Node_DynamicCast_bSuccess);
};

}


