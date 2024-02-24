#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x328 - 0x230)
// WidgetBlueprintGeneratedClass UI_Dialogue_VoiceOver.UI_Dialogue_VoiceOver_C
class UUI_Dialogue_VoiceOver_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Text;                                         // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_InitialDelay;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_DialogueDuration;                             // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Hide;                                         // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Show;                                         // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Dialogue;                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_DialogueText;                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG_Gradient_Bottom;                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG_Gradient_Top;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Text;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Dialogue;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Dialogue;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Skip;                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStormModeNotifier_Component_C*        NotifierComponent;                                 // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               Dialogue_Sequence;                                 // 0x2B0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class USoundCue*                             Dialogue_SoundCue;                                 // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Dialogue_Index;                                    // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Dialogue_ProceedEnable;                            // 0x2CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Dialogue_ProceedFromUser;                          // 0x2CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Dialogue_LastNewLineDisplayTime;                   // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       DialogueAudioComponent;                            // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Dialogue_Timer_Proceed;                            // 0x2E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Dialogue_DelayIfNoSound;                           // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Dialogue_DelayBeforeAutoAdvanceUseNegative;        // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDialogueProceed;                                 // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDialogueCompleted;                               // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        Dialogue_Duration;                                 // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnWantsToSkip;                                     // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUI_Dialogue_VoiceOver_C* GetDefaultObj();

	void HandleSubtitlesScale();
	void PopulateDialogueData();
	void IncrementDialogueIndex(int32 CallFunc_Add_IntInt_ReturnValue);
	void PlayUserProceedSound();
	bool IsSequenceAtEnd(int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void DialogueSound_Stop(bool CallFunc_IsValid_ReturnValue);
	float GetProceedDelay(float Local_Delay, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue);
	void HandleDialogueSound(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* CallFunc_StormMode_PlaySister3ChoiceWindowAudio_Audio);
	void Construct();
	void StartDialogue();
	void OnShowEnd();
	void DialogueProceed();
	void ContinueDialogue();
	void CompleteDialogue();
	void OnHideEnd();
	void OnInitialDelayEnd();
	void OnOpen();
	void BndEvt__UI_ControllerButton_Skip_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void ExecuteUbergraph_UI_Dialogue_VoiceOver(int32 EntryPoint, class UStormModeNotifier_Component_C* CallFunc_GetNotifierComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetProceedDelay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsSequenceAtEnd_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, float CallFunc_Multiply_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
	void OnWantsToSkip__DelegateSignature();
	void OnDialogueCompleted__DelegateSignature();
	void OnDialogueProceed__DelegateSignature(int32 NewIndex);
};

}


