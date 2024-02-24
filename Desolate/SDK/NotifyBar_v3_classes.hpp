#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x271 - 0x248)
// WidgetBlueprintGeneratedClass NotifyBar_v3.NotifyBar_v3_C
class UNotifyBar_v3_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        MaxWidth;                                          // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_173F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundWave*                            QuestAddNotifySound;                               // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                            QuestCompleteNotifySound;                          // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bNeedJournalNotify;                                // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UNotifyBar_v3_C* GetDefaultObj();

	void HasActiveNotify(bool* Result, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	class UNotifyLine_v3_C* CreateNotify(enum class ENotifyType Type, class FText Caption, class FText ToolTip, class USoundWave* Sound, bool bNeedPressJ, class UNotifyLine_v3_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void RemoveNotifyWidget(class UNotifyLine_v3_C* Notify, bool CallFunc_RemoveChild_ReturnValue);
	void AddNotify(class UNotifyLine_v3_C* Line, int32 Center, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnHasBleeding();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnQuestComplete_Event_0(struct FQuestView& QuestView);
	void OnQuestUpdated_Event_0(struct FQuestView& QuestView);
	void Construct();
	void OnLevelAdded_Event_0();
	void OnTaskComplete_Event_0(struct FTaskView& TaskView);
	void OnNoteLearned();
	void OnTraumaApplied_Event_0();
	void OnRecipeLearned();
	void OnHasPoisoning();
	void OnIncomingInvite_Event_0();
	void OnQuestAdded_Event_0(struct FQuestView& QuestView);
	void CustomEvent_0();
	void OnNotifyMapChanged_Event_0();
	void ExecuteUbergraph_NotifyBar_v3(int32 EntryPoint, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FQuestView& K2Node_CustomEvent_QuestView_2, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FQuestView& K2Node_CustomEvent_QuestView_1, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FTaskView& K2Node_CustomEvent_TaskView, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_3, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_5, class UNotifyLine_v3_C* CallFunc_CreateNotify_ReturnValue_6, const struct FQuestView& K2Node_CustomEvent_QuestView, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class ASHMapManager* CallFunc_GetMapManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


