#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C
class UUMG_MobileClientTeleportWarning_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Show;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hide;                                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Showold;                                           // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_62;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MessageText;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          WarningMessage;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_MobileClientTeleportWarning_C* GetDefaultObj();

	float GetEndAnimationDuration(const struct FNotification& Notification);
	float GetStartAnimationDuration(const struct FNotification& Notification);
	float GetWidgetDuration(const struct FNotification& Notification);
	void ClearWidget();
	void HideWidget();
	void SetParentNotificationWidget(class UGGNotificationUserWidget* Parent);
	void ShowWidget(const struct FNotification& Notification);
	void UpdateWidget(const struct FNotification& Notification);
	void Construct();
	void ExecuteUbergraph_UMG_MobileClientTeleportWarning(int32 EntryPoint, class UGGNotificationUserWidget* K2Node_Event_Parent, const struct FNotification& K2Node_Event_Notification_1, const struct FNotification& K2Node_Event_Notification, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided);
};

}


