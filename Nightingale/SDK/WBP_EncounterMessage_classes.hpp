#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x371 - 0x340)
// WidgetBlueprintGeneratedClass WBP_EncounterMessage.WBP_EncounterMessage_C
class UWBP_EncounterMessage_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Wyswig;                                            // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Fade;                                         // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            Txt_EncounterMessage;                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_EncounterMessage_1;                            // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_MessageContext;                                // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         EncounterMessageActive;                            // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_EncounterMessage_C* GetDefaultObj();

	void SetupMessageAndShow(class FText InText, class FText InText2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void EncounterMessage_RemoveMessage();
	void EncounterMessage_DisplayAndPin(struct FNotificationEncounter& Notification_Encounter);
	void EncounterMessage_DisplayFor(double TimeToDisplay, const struct FNotificationEncounter& Content);
	void ExecuteUbergraph_WBP_EncounterMessage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double Temp_real_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, const struct FNotificationEncounter& K2Node_CustomEvent_Notification_Encounter, double K2Node_CustomEvent_TimeToDisplay, const struct FNotificationEncounter& K2Node_CustomEvent_Content, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


