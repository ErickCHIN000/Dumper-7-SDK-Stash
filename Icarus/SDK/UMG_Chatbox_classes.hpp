#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4A (0x2AA - 0x260)
// WidgetBlueprintGeneratedClass UMG_Chatbox.UMG_Chatbox_C
class UUMG_Chatbox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeInChat;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOutChat;                                       // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              HintBox;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_35;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         TextBox;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Initalised;                                        // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Typing;                                            // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31A3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxMessageCharacterLength;                         // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FadeOutTimer;                                      // 0x298(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EChatBoxFadeState                 State;                                             // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeOutDelay;                                      // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UnfocusAfterSendMessage;                           // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseUnfocusBehaviour;                               // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_Chatbox_C* GetDefaultObj();

	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void AddServerMessage(const class FString& Message, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UBP_ChatboxItem_C* CallFunc_SpawnObject_ReturnValue);
	void ClampMessageLength(class FText InMessage, class FText* OutMessage, bool* WasClamped, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void FocusEntry(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ScrollToBottom();
	void AddLocalMessage(const class FString& Message, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UBP_ChatboxItem_C* CallFunc_SpawnObject_ReturnValue);
	void AddChatMessage(struct FIcarusPlayerChatMessage& Message, class UBP_ChatboxItem_C* CallFunc_SpawnObject_ReturnValue);
	void Finished_13A3F937400836F18C3C2AA44C299F32();
	void Finished_6346353C4787712A7E87BDAF80B3DCC4();
	void ShowChatTyping();
	void EndTyping();
	void Construct();
	void BeginFadeOutTimer();
	void PlayFadeOutAnim();
	void PlayFadeInAnim();
	void ShowChat();
	void BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void CheckChatBoxVisible();
	void CommitText();
	void ClearAndUnfocusTextBox();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void FocusInputBox();
	void ExecuteUbergraph_UMG_Chatbox(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class FText K2Node_ComponentBoundEvent_Text_1, class FText CallFunc_ClampMessageLength_OutMessage, bool CallFunc_ClampMessageLength_WasClamped, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_ClampMessageLength_OutMessage_1, bool CallFunc_ClampMessageLength_WasClamped_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_SwitchEnum_CmpSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess_3);
};

}


