#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1FA (0x4C2 - 0x2C8)
// WidgetBlueprintGeneratedClass WBP_DialogueBase.WBP_DialogueBase_C
class UWBP_DialogueBase_C : public UDialogueUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnShown;                                           // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDismissed;                                       // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ReturnFromSubMenu;                                 // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            LeaveDialogue;                                     // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OpenSubMenu;                                       // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FConversationView                     CurrentView;                                       // 0x320(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDialogue*                             InDialogue;                                        // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsUsingGamepad;                                    // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPCHasAnotherLine;                                 // 0x361(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D5A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UConversationHostComponent*            ConversationHostComponent;                         // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentlySelectedReply;                            // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DialogueSpeed;                                     // 0x378(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  ReplyVisibilityInvalid;                            // 0x380(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  ReplyVisibilityValid;                              // 0x381(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D75[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ScrollSpeed;                                       // 0x388(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TextColourDefault;                                 // 0x390(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TextColourHighlighted;                             // 0x3A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CloseDialogueInstance;                             // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          PlayerReplyTimer;                                  // 0x3C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_NPCMenu_Content>            SubMenuList;                                       // 0x3C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkComponent*                          Audio_Component;                                   // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowSubMenu;                                      // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NoDialogue_MenuHubOnly;                            // 0x3E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D95[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogueNodeBase*                     PastPlayerNode;                                    // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  OwningPlayerController;                            // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerInterface> QuestTracker;                                      // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D9D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  CurrentRequestedTaskProgress;                      // 0x410(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bItemTurnInSuccess;                                // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerChoiceCausedWait;                            // 0x4C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DialogueBase_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_4(struct FGuid& ConversationInstanceId, struct FConversationView& ConversationView);
	void CREATEDELEGATE_PROXYFUNCTION_3(struct FGuid& ConversationInstanceId);
	void CREATEDELEGATE_PROXYFUNCTION_2(struct FGuid& ConversationInstanceId, struct FConversationView& ConversationView, bool bIsCorrection);
	void CREATEDELEGATE_PROXYFUNCTION_1(struct FGuid& ConversationInstanceId);
	void CREATEDELEGATE_PROXYFUNCTION_0(struct FGuid& ConversationInstanceId, struct FConversationView& ConversationView, bool bIsCorrection);
	void AppendAnyPendingPlayerResponse(class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetStringWithOutMarkUp_ReturnValue);
	void OnItemTurnInConfirmed(class UWBP_ContractReturn_ItemSelect_C* ItemSelectWidget, TArray<struct FInventoryEntryIdAndQuantity>& CallFunc_GetSelectedItemIdAndQuantities_IdAndQuantities, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnCloseItemTurnIn(class UNWXCommonWindowWidget* Window, class UWBP_ContractReturn_ItemSelect_C* K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleQuestSessionEnd(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnRequestItemTurnIn(struct FOngoingTaskProgress& TaskProgress, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_ContractReturn_ItemSelect_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void HandleQuestSetup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TArray<class UActorComponent*>& CallFunc_GetComponentsByInterface_ReturnValue, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void HideReplies(class UScrollBox* CallFunc_GetRepliesScroll_RepliesScroll, class UScrollBox* CallFunc_GetRepliesScroll_RepliesScroll_1, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box);
	void Play_Speech(class UAudioDialogueSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, FDelegateProperty_ Temp_delegate_Variable_1);
	void Cache_Audio_Component(class UAudioComponentAggregatorComponent* Audio_Component_Aggregator, class UScopedAkComponent* CallFunc_GetAudioComponent_ReturnValue, class UAudioComponentAggregatorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetTxt_SpeakerName(class UTextBlock** Txt_SpeakerName);
	void ShowSubMenuOptions(class UWBP_Dialogue_Reply_C* ReplyWidget, bool ValidSubMenuList, class UWBP_Dialogue_Reply_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, class UWBP_Dialogue_Reply_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_GoToNextNode_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_Common_Button_Base_C* CallFunc_GetBU_Next_BU_Next, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box, enum class ESlateVisibility K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box_1, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UBorder* CallFunc_GetBorder_Reply_Border_Reply, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, class UWBP_Common_Button_Base_C* CallFunc_GetBU_Return_BU_Return, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FS_NPCMenu_Content& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ShowDialogue(enum class E_ui_NPCMenus NPC_Menu, class FText Menu_Text, class UWBP_Common_Button_Base_C* CallFunc_GetBU_Return_BU_Return);
	void GetReply_Box(class UVerticalBox** Reply_Box);
	void GetRepliesScroll(class UScrollBox** RepliesScroll);
	void GetFade_JustReplies(class UWidgetAnimation** Fade_JustReplies);
	void GetFade_EntireReplyArea(class UWidgetAnimation** Fade_EntireReplyArea);
	void GetFade_Dialogue(class UWidgetAnimation** Fade_Dialogue);
	void GetDialogue_AnimatedText(class UWBP_Dialogue_AnimatedText_C** Dialogue_AnimatedText);
	void GetBU_Return(class UWBP_Common_Button_Base_C** BU_Return);
	void GetBU_Next(class UWBP_Common_Button_Base_C** BU_Next);
	void GetBorder_Reply(class UBorder** Border_Reply);
	void ToNpcReply(bool bDoRefresh, bool* bRequiresWait, const struct FConversationView& NewView, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GoToNextNode_ReturnValue);
	void OnLineFinishedAnimating(class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_2, float CallFunc_GetAnalogValue_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void ReverseDialog();
	void OnConversationWaitFinished(struct FGuid& ConversationInstanceId, const struct FConversationView& ConversationView, bool CallFunc_ToNpcReply_bRequiresWait);
	void OnConversationUpdated(const struct FGuid& ConversationInstanceId, struct FConversationView& ConversationView, bool bIsCorrection);
	void OnConversationStarted(const struct FGuid& ConversationInstanceId);
	void OnConstruct(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, class UConversationHostComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IConversationHostInterface> K2Node_DynamicCast_AsConversation_Host_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void GoToNpcReplyTimer(bool CallFunc_ToNpcReply_bRequiresWait);
	void Close_Dialogue(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IConversationHostInterface> K2Node_DynamicCast_AsConversation_Host_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void AdvanceDialog();
	void SetDefaultFocus(class UVerticalBox* CallFunc_GetReply_Box_Reply_Box, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Dialogue_Reply_C* K2Node_DynamicCast_AsWBP_Dialogue_Reply, bool K2Node_DynamicCast_bSuccess);
	void ScrollDialogBox(bool ScrollDown, class UScrollBox* DialogueScrollBox, double NewScrollOffset, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, float CallFunc_GetScrollOffset_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void OnSubMenuEntryClicked(enum class E_ui_NPCMenus NPC_Menu, class FText Menu_Text, const struct FS_NPCMenu_Content& MenuToOpen, bool FoundMenu, class UWBP_Common_Button_Base_C* CallFunc_GetBU_Return_BU_Return);
	void OnNextButtonClicked(class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText_1, bool CallFunc_ToNpcReply_bRequiresWait, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue);
	void RefreshDialogueMenu(class UTextBlock* CallFunc_GetTxt_SpeakerName_Txt_SpeakerName, class UTextBlock* CallFunc_GetTxt_SpeakerName_Txt_SpeakerName_1, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText_1, class FText CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetNPCNameText_NPCName, bool CallFunc_Array_IsValidIndex_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue);
	void RefreshDialogue(bool CallFunc_ToNpcReply_bRequiresWait);
	void DisplayNpcNode(const struct FConversationView& NpcView, bool ShowReplies, class UWBP_Common_Button_Base_C* CallFunc_GetBU_Next_BU_Next, class UWBP_Dialogue_AnimatedText_C* CallFunc_GetDialogue_AnimatedText_Dialogue_AnimatedText);
	void PlayPlayerReply(class UDialogueNodeBase* CurrentPlayerNode, const struct FConversationOption& CallFunc_Array_Get_Item, TScriptInterface<class IConversationHostInterface> K2Node_DynamicCast_AsConversation_Host_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AdvanceConversation_bIsWaiting, bool CallFunc_AdvanceConversation_ReturnValue, bool CallFunc_ToNpcReply_bRequiresWait);
	void LineFinishedAnimating_ShowContent(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GoToNextNode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void DisplayReplies(TArray<struct FConversationOption>& Replies, class UWBP_Dialogue_Reply_C* CallFunc_Create_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, const struct FConversationOption& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box, enum class ESlateVisibility K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UBorder* CallFunc_GetBorder_Reply_Border_Reply);
	struct FEventReply OnDecorativeResponseBorderMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Mouse_Select_Reply(class UWBP_Dialogue_Reply_C* WidgetThatWantsSelection, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWBP_Dialogue_Reply_C* K2Node_DynamicCast_AsWBP_Dialogue_Reply, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HighlightSelectedReply(class UVerticalBox* CallFunc_GetReply_Box_Reply_Box, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box_1, class UVerticalBox* CallFunc_GetReply_Box_Reply_Box_2, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 Temp_int_Variable, class UWBP_Dialogue_Reply_C* K2Node_DynamicCast_AsWBP_Dialogue_Reply, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWBP_Dialogue_Reply_C* K2Node_DynamicCast_AsWBP_Dialogue_Reply_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void AnimFadeInReplyArea(bool Reverse, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, class UWidgetAnimation* CallFunc_GetFade_EntireReplyArea_Fade_EntireReplyArea, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void AnimFadeInReplies(class UWBP_Common_Button_Base_C* CallFunc_GetBU_Next_BU_Next, bool CallFunc_Not_PreBool_ReturnValue, class UWidgetAnimation* CallFunc_GetFade_JustReplies_Fade_JustReplies, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidgetAnimation* CallFunc_GetFade_JustReplies_Fade_JustReplies_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void AnimFadeDialoguePanel(bool Reverse, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UWidgetAnimation* CallFunc_GetFade_Dialogue_Fade_Dialogue, class UWidgetAnimation* CallFunc_GetFade_Dialogue_Fade_Dialogue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void AddRootHubOption(struct FS_NPCMenu_Content& New_Item, int32 CallFunc_Array_Add_ReturnValue);
	void Construct();
	void Destruct();
	void OnFadeJustRepliesAnimFinished();
	void OnFadeDialogFinished();
	void ExecuteUbergraph_WBP_DialogueBase(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAudioDialogueSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
	void CloseDialogueInstance__DelegateSignature();
	void OpenSubMenu__DelegateSignature(class FText MenuName, enum class E_ui_NPCMenus MenuType);
	void LeaveDialogue__DelegateSignature();
	void ReturnFromSubMenu__DelegateSignature();
	void OnDismissed__DelegateSignature(class UWBP_DialogueBase_C* Dialogue);
	void OnShown__DelegateSignature(class UWBP_DialogueBase_C* Dialogue);
};

}


