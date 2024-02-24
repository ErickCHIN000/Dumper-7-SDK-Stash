#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x380 - 0x340)
// WidgetBlueprintGeneratedClass WBP_HUD_Quest_Notification.WBP_HUD_Quest_Notification_C
class UWBP_HUD_Quest_Notification_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CTxt_QuestName;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Notification;                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_QuestComplete_Title;                           // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       TimeToDisplay;                                     // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface;                             // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_Quest_Notification_C* GetDefaultObj();

	void DisplayCompletedQuestNotification(class FText Name, class FText Description, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UUIAudioSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void OnQuestCompleted(struct FQuestAssetReference& QuestRowHandle, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void RemoveQuestNotification(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_HUD_Quest_Notification(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


