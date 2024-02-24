#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x300 - 0x260)
// WidgetBlueprintGeneratedClass MultiplayerStatusWidget.MultiplayerStatusWidget_C
class UMultiplayerStatusWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowStatus;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ContentBox;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ErrorIcon;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       IconSwitcher;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LoadingSpinner;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              NoticeIcon;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxContent;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StatusLabel;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SuccessIcon;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TitleLabel;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              WarningIcon;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget*                               WidgetToActivate;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TitleToShow;                                       // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  StatusToShow;                                      // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMultiplayerStatusWidget_C* GetDefaultObj();

	float GetEndAnimationDuration(const struct FNotification& Notification, float CallFunc_GetEndTime_ReturnValue);
	float GetStartAnimationDuration(const struct FNotification& Notification, float CallFunc_GetEndTime_ReturnValue);
	float GetWidgetDuration(const struct FNotification& Notification);
	void Change_Active_Widget(class UWidget* ActiveWidget, class FText CallFunc_GetText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, bool CallFunc_NotEqual_TextText_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FText CallFunc_GetText_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void SetParentNotificationWidget(class UGGNotificationUserWidget* Parent);
	void UpdateLabels(const struct FNotification& Notification);
	void ClearWidget();
	void HideWidget();
	void UpdateWidget(const struct FNotification& Notification);
	void ShowWidget(const struct FNotification& Notification);
	void WidgetAnimationEvt_ShowStatus_K2Node_WidgetAnimationEvent_1();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_MultiplayerStatusWidget(int32 EntryPoint, const struct FNotification& K2Node_Event_Notification_1, const struct FNotification& K2Node_Event_Notification, const struct FNotification& K2Node_CustomEvent_Notification, class UGGNotificationUserWidget* K2Node_Event_Parent, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue_2, bool CallFunc_MatchesTag_ReturnValue_3, bool CallFunc_MatchesTag_ReturnValue_4, bool CallFunc_IsGameplayTagValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue);
};

}


