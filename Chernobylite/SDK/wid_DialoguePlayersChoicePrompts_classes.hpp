#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x339 (0x599 - 0x260)
// WidgetBlueprintGeneratedClass wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C
class UWid_DialoguePlayersChoicePrompts_C : public UDialogueWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      FadeIn;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              ActorLeft;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ActorNameLeft;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                AvatarLeft;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            AvatarLeftScrollBox;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BackgroundEnding;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_DialogueItemInfo_C*               ItemInfo;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainOverlay;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PromptContainer;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Thoughts;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_DialogueChoice_Buttons_C*         Wid_DialogueChoice_Buttons;                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          HexDeselected;                                     // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HexSelected;                                       // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HexDisabledDeselected;                             // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HexDisabledSelected;                               // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           BorderDeselected;                                  // 0x310(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BorderSelected;                                    // 0x398(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BorderDisabledDeselected;                          // 0x420(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BorderDisabledSelected;                            // 0x4A8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SelectedOptionIndex;                               // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_528[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_DialogueSingleOptionData> Prompts;                                           // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UImage*>                        Hexes;                                             // 0x548(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UTextBlock*>                    PromptsTextboxes;                                  // 0x558(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWid_DialoguePrompt_C*>         _Prompts;                                          // 0x568(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         bAnimationDeselecting;                             // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bLineInterpolationInProgress;                      // 0x579(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_534[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetSidelineTop;                                 // 0x57C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InternalSidelineInterpSpeed;                       // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SidelineOffset;                                    // 0x584(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SidelineInterpTime;                                // 0x588(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAnimationInProgress;                              // 0x58C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Dialogue_C*                        Parent;                                            // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasGamepad;                                        // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_DialoguePlayersChoicePrompts_C* GetDefaultObj();

	void UpdateSubtitleManagerOffset(bool ToZero, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, TArray<class UWid_SubtitleManager_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UWid_SubtitleManager_C* CallFunc_Array_Get_Item, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void AddPrompt(int32 Idx, class UWid_DialoguePrompt_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	class FText RemoveTrailingSplitCharacter(class FText Text, int32 Counter, const class FString& String, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue_1, class FText K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Len_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, const class FString& CallFunc_GetCharacterAt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void CleanInput(class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	int32 SelectedIndex(bool* Enabled);
	void StartSidelineInterpolation(float Speed, float Target, float Current);
	void SetCanvasTop(class UWidget* Widget, float NewTop, float Bottom, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin);
	void GetCanvasY(class UWidget* Widget, float* Top, float* Height, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue);
	void GetCurrent(bool* Enabled, int32* Index);
	void SelectOption(int32 Index, bool AllowSoundEvent, bool WasPreviouslySelected, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWid_DialoguePrompt_C* CallFunc_Array_Get_Item, class UWid_DialoguePrompt_C* CallFunc_Array_Get_Item_1, class FText K2Node_Select_Default, class FText CallFunc_RemoveTrailingSplitCharacter_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Fill_Prompts(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_DialoguePrompt_C* CallFunc_Array_Get_Item, const struct FStruct_DialogueSingleOptionData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void FillReferencesArrayAndShowCorrectPromptsNumber(int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Construct();
	void Next();
	void Previous();
	void Refresh();
	void Init(TArray<struct FDialogueSingleOptionData>& Prompts);
	void InitBP(TArray<struct FStruct_DialogueSingleOptionData>& Prompts);
	void Up();
	void Down();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void PostSelectionEvent();
	void PauseToggled(bool IsPaused);
	void BindPauseToggledEvent();
	void UnbindPauseToggledEvent();
	void BindPhotomodeToggled();
	void UnbindPhotomodeToggled();
	void PhotomodeChanged(bool bIsActivated);
	void ExecuteUbergraph_wid_DialoguePlayersChoicePrompts(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FDialogueSingleOptionData>& K2Node_Event_Prompts, const struct FDialogueSingleOptionData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FStruct_DialogueSingleOptionData& K2Node_MakeStruct_struct_DialogueSingleOptionData, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FStruct_DialogueSingleOptionData>& K2Node_CustomEvent_Prompts, int32 CallFunc_Array_Add_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_LastInputWasFromGamepad_Gamepad, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Clamp_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_PostEvent_ReturnValue, bool K2Node_CustomEvent_IsPaused, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue, bool K2Node_CustomEvent_bIsActivated, enum class ESlateVisibility K2Node_Select_Default);
};

}


