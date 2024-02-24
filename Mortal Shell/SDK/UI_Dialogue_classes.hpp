#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E0 (0x510 - 0x230)
// WidgetBlueprintGeneratedClass UI_Dialogue.UI_Dialogue_C
class UUI_Dialogue_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Hide_Fast;                                    // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Show_Fast;                                    // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hide;                                              // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Show;                                              // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Dialogue;                              // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_DialogueText;                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG_Gradient;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Answers;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichText_Dialogue;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Dialogue;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Answers;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Answers;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Question;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Question_MultipleChoice;                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Dialogue_Answer_C*                 UI_Dialogue_Answer_No;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Dialogue_Answer_C*                 UI_Dialogue_Answer_Test_1;                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Dialogue_Answer_C*                 UI_Dialogue_Answer_Test_2;                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Dialogue_Answer_C*                 UI_Dialogue_Answer_Test_3;                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Dialogue_Answer_C*                 UI_Dialogue_Answer_Test_4;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Dialogue_Answer_C*                 UI_Dialogue_Answer_Test_5;                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Dialogue_Answer_C*                 UI_Dialogue_Answer_Test_6;                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Dialogue_Answer_C*                 UI_Dialogue_Answer_Test_7;                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Dialogue_Answer_C*                 UI_Dialogue_Answer_Yes;                            // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher;                                // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_MultipleChoiceContainer;               // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_SimpleChoiceContainer;                 // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               CurrentSequence;                                   // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        CurrentIndex;                                      // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          HideTimer;                                         // 0x330(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxIndex;                                          // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UpgradeToUnlock;                                   // 0x33C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3343[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUpgradeUnlocked;                                 // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SequenceCompleted;                                 // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         MakeButtonSoundOnPress_;                           // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3348[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeDisplayInfoTableID;                         // 0x36C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnOptionSelected;                                  // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bBranchAtEnd;                                      // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bYesSelected;                                      // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bWaitForChoice;                                    // 0x38A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3358[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  BranchText;                                        // 0x390(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnDlgWidgetHidden;                                 // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          ProceedTimer;                                      // 0x3B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bSequenceInitAfterBranch;                          // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3368[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            UnlockFancyNotificationFromDialogue;               // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FUIDialogueUpgradeEntry>       UpgradeEntries;                                    // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        LastHandeldUpgradeUnlockedID;                      // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_UpgradeUnlocked_C*                 WidgetUnlocked;                                    // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDialogueProceeded;                               // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnNewLineDisplayed;                                // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         DisableLineSkipping_;                              // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3375[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEndOfSequenceButBeforeBranch;                    // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        DelayBeforeAutoAdvanceUseNegative;                 // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Dialogue_Interrupted;                              // 0x434(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_337B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastNewLineDisplayTime;                            // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NoSkipDialogueThreshold;                           // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bProceedFromUserInput;                             // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3384[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             SoundCue;                                          // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDampenAudio;                                      // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bMultipleAnswers;                                  // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3393[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index_Answer;                                      // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_AnswerTemp;                                  // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          Answers;                                           // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UUI_Dialogue_Answer_C*>         Answers_Widgets;                                   // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class FName>                          Answers_IDs;                                       // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAnswerSelected;                                  // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bDoNotLeaveMultiBranch;                            // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     Controller;                                        // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bProceedEnabled;                                   // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayIfNoSound;                                    // 0x4B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayForFirstLine;                                 // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         NavigateEnabled;                                   // 0x4BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFastWidget;                                      // 0x4BD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      FadeInAnim;                                        // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideHUD;                                           // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStartTalking;                                    // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFinishTalking;                                   // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDHDialogueLine                       CurrentDialogueLine;                               // 0x4F0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_Dialogue_C* GetDefaultObj();

	void IsLastAudio(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void CallStartTalking(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void CallFinishTalking(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_IsValid_ReturnValue);
	void HandleShowHUD(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void HandleHideHUD(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void UpdateMultiBranchQuestion(class FText BranchText);
	void HideDialogue(TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsInPhotoMode_PhotoMode_, bool CallFunc_IsValid_ReturnValue);
	void DisableInputs(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInCutscene_ReturnValue, bool CallFunc_GetIsInPhotoMode_PhotoMode_, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void EnableInputs(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsInCutscene_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInPhotoMode_PhotoMode_, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue);
	void UpdateAnswers(TArray<class FText>& Answers, TArray<class FName>& AnswersID);
	void CallAnswerSelected(class UUI_Dialogue_Answer_C* CallFunc_Array_Get_Item);
	void Sound_NavAnswer();
	int32 GetNavAnswerIndex(int32 SelectedIndex, int32 Delta, int32 MaxIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void NavSelectAnswer(bool CustomIndex, bool SkipSound, int32 Delta, int32 Index, int32 Local_SelectedIndex, bool Local_SkipSound, int32 Local_Delta, bool Local_CustomIndex, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_GetNavAnswerIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUI_Dialogue_Answer_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_GetNavAnswerIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UUI_Dialogue_Answer_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4);
	void ClearAnswers();
	void CreateAnswers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_Dialogue_Answer_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FName CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	class FText Get_Text_No_Text(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	class FText Get_Text_Yes_Text(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void StopVO(bool StopVO, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_IsValid_ReturnValue);
	float GetProceedDelay(float Local_Delay, bool Temp_bool_Variable, float Temp_float_Variable, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue);
	float GetSoundCueDelay(bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Select_Default);
	void ClearProceedTimer();
	void SelectChoice(const class FString& Direction, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetUpgradeForThisNode(class FName* Upgrade, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FUIDialogueUpgradeEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void HasUpgradeForThisNode(bool* bHas, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FUIDialogueUpgradeEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	void DisplaySequenceWithBranch(TArray<struct FDHDialogueLine>& CurrentSequence, class FName UpgradeToUnlock, class FName UpgradeDisplayInfoTableID, class FText BranchText, bool bDampenAudio);
	void HideUI();
	void DlgLeft();
	void DlgRight();
	void DisplaySequenceAfterBranch(TArray<struct FDHDialogueLine>& CurrentSequence, bool bBranchAgain);
	void DisplayBranchOnly(class FText BranchText);
	void DisplayNewLine();
	void OnHide();
	void DisplaySimpleSequence(TArray<struct FDHDialogueLine>& CurrentSequence, bool bDampenAudio);
	void HideUIAfterBranch();
	void StopListeningForInputs();
	void UnlockFancyNotification(class FName UnlockName);
	void WidgetClosed_Event_0();
	void SetupInDialogueUpgrades(TArray<struct FUIDialogueUpgradeEntry>& UpgradeEntries);
	void OnScaleChanged_Bind();
	void OnScaleChanged_Set(float Scale);
	void OnDamageTaken_Bind();
	void DlgProceedPressed();
	void DamageTaken(class UClass* DamageType);
	void Dialogue_Interrupt(bool StopVO);
	void OnPlayerDeath_Bind();
	void OnPlayerDeath_Set();
	void OnDamageTaken_Unbind();
	void OnPlayerDeath_Unbind();
	void DisplaySequenceWithMultipleBranch(TArray<struct FDHDialogueLine>& CurrentSequence, class FName UpgradeToUnlock, class FName UpgradeDisplayInfoTableID, class FText BranchText, bool DampenAudio, TArray<class FText>& Answers, TArray<class FName>& AnswersIDs);
	void ShowBranch();
	void CompleteSequenceNoBranch();
	void UnlockUpgradeAtSequenceEnd();
	void Proceed();
	void DisplaySequence(TArray<struct FDHDialogueLine>& CurrentSequence, class FName UpgradeToUnlock, class FName UpgradeDisplayInfoTableID, bool bDampenAudio);
	void DisplayMultiBranchOnly(class FText BranchText, TArray<class FText>& AnswersArray, TArray<class FName>& AnswersIDArray, bool bDoNotLeaveMultiBranch);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnShowAnim_Finished();
	void DisplaySequenceAfterMultiBranch(TArray<struct FDHDialogueLine>& NewSequence, bool BranchAgain_, class FText NewBranchText, TArray<class FText>& NewAnswers, TArray<class FName>& NewIDs);
	void ExecuteUbergraph_UI_Dialogue(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_CurrentSequence_4, class FName K2Node_CustomEvent_UpgradeToUnlock_2, class FName K2Node_CustomEvent_UpgradeDisplayInfoTableID_2, class FText K2Node_CustomEvent_BranchText_3, bool K2Node_CustomEvent_bDampenAudio_2, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_CurrentSequence_3, bool K2Node_CustomEvent_bBranchAgain, class FText K2Node_CustomEvent_BranchText_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FDHDialogueLine& K2Node_MakeStruct_DHDialogueLine, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_CurrentSequence_2, bool K2Node_CustomEvent_bDampenAudio_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FName K2Node_CustomEvent_UnlockName, bool CallFunc_HasUpgradeForThisNode_bHas, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class UUI_UpgradeUnlocked_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FUIDialogueUpgradeEntry>& K2Node_CustomEvent_UpgradeEntries, class FName CallFunc_GetUpgradeForThisNode_Upgrade, float K2Node_CustomEvent_Scale, int32 CallFunc_Array_LastIndex_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_IsVisible_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UClass* K2Node_CustomEvent_DamageType, bool K2Node_CustomEvent_StopVO, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UUI_UpgradeUnlocked_C* CallFunc_Create_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_NameName_ReturnValue, float CallFunc_GetSoundCueDelay_ReturnValue, float CallFunc_GetProceedDelay_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UDamageNotifierComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, float Temp_float_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, float Temp_float_Variable_1, class UDamageNotifierComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_CurrentSequence_1, class FName K2Node_CustomEvent_UpgradeToUnlock_1, class FName K2Node_CustomEvent_UpgradeDisplayInfoTableID_1, class FText K2Node_CustomEvent_BranchText_1, bool K2Node_CustomEvent_DampenAudio, TArray<class FText>& K2Node_CustomEvent_Answers, TArray<class FName>& K2Node_CustomEvent_AnswersIDs, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_CurrentSequence, class FName K2Node_CustomEvent_UpgradeToUnlock, class FName K2Node_CustomEvent_UpgradeDisplayInfoTableID, bool K2Node_CustomEvent_bDampenAudio, class FText K2Node_CustomEvent_BranchText, TArray<class FText>& K2Node_CustomEvent_AnswersArray, TArray<class FName>& K2Node_CustomEvent_AnswersIDArray, bool K2Node_CustomEvent_bDoNotLeaveMultiBranch, const struct FDHDialogueLine& K2Node_MakeStruct_DHDialogueLine_1, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_NewSequence, bool K2Node_CustomEvent_BranchAgain_, class FText K2Node_CustomEvent_NewBranchText, TArray<class FText>& K2Node_CustomEvent_NewAnswers, TArray<class FName>& K2Node_CustomEvent_NewIDs, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UWidgetAnimation* K2Node_Select_Default, class UWidgetAnimation* K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_Select_Default_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue_1);
	void OnFinishTalking__DelegateSignature();
	void OnStartTalking__DelegateSignature();
	void OnAnswerSelected__DelegateSignature(class FName ID);
	void OnEndOfSequenceButBeforeBranch__DelegateSignature();
	void OnNewLineDisplayed__DelegateSignature(int32 Index);
	void OnDialogueProceeded__DelegateSignature(int32 NewEntryIndex);
	void UnlockFancyNotificationFromDialogue__DelegateSignature(class FName UnlockName);
	void OnDlgWidgetHidden__DelegateSignature();
	void OnOptionSelected__DelegateSignature(bool bYes);
	void SequenceCompleted__DelegateSignature();
	void OnUpgradeUnlocked__DelegateSignature(class FName UpgradeName);
};

}


