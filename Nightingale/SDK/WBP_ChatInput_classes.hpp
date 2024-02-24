#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3C8 - 0x340)
// WidgetBlueprintGeneratedClass WBP_ChatInput.WBP_ChatInput_C
class UWBP_ChatInput_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                       BackgroundBlur_0;                                  // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         EditableText;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChatWindow_C*                     ChatWindowReference;                               // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            EventSendChatMessage;                              // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            EventNumberedChannelShortcut;                      // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            EventWhisperShortcut;                              // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            EventSayShortcut;                                  // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  Text;                                              // 0x3A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            ChatEventRefreshInput;                             // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_ChatInput_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue);
	void SetPreviousText();
	void SetColor(const struct FSlateColor& NewColor, const struct FEditableTextStyle& K2Node_MakeStruct_EditableTextStyle);
	void RemoveWhisperCommand(const class FString& Message, class FText* Text, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ResolveWhisperTargetName(const class FString& Message, class FString* TargetName, bool* WasSuccessful, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue);
	void GetNumberedChannelIndex(const class FString& CommandShortcut, int32* NumberedChannelIndex, class FName RowNameIter, const struct FS_ChatCommand& CommandIter, int32 Temp_int_Array_Index_Variable, const struct FS_ChatCommand& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsFeatureFlagEnabled_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, class FText CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void CheckIfChannelCommand(const class FString& CommandString, bool* IsChannelCommand, int32 CallFunc_GetNumberedChannelIndex_NumberedChannelIndex, bool CallFunc_Greater_IntInt_ReturnValue);
	void CompareCommands(const class FString& EnteredCommand, const class FString& ShortcutsForTableCommand, bool* CommandMatch, const class FString& LocalCommand, bool LocalCommandMatch, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_ToLower_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_ToLower_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Trim_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue);
	void ExpandCommandShortcut(const class FString& CommandShortcut, bool* MatchedCommand, class FName* CommandName, enum class E_ChatCommandType* Type, bool LocalCommandMatched, class FName LocalCommandName, enum class E_ChatCommandType LocalType, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_CheckIfChannelCommand_IsChannelCommand, class AHUD* CallFunc_GetHUD_ReturnValue, class UBP_ChatComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GetCommandName_Success, enum class E_ChatCommandType CallFunc_GetCommandName_Type, class FName CallFunc_GetCommandName_Command);
	void RemoveInputCommand(const class FString& Message, class FText* Text, bool CallFunc_StartsWith_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	void ProcessInput(class FText Text, bool* Success, class FText MessageText, class FName LocalCommand, const class FString& LocalMessage, const class FString& LocalShortcut, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ResolveWhisperTargetName_TargetName, bool CallFunc_ResolveWhisperTargetName_WasSuccessful, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_ToLower_ReturnValue, int32 CallFunc_GetNumberedChannelIndex_NumberedChannelIndex, bool CallFunc_IsValidChannelIdentifier_IsValidChannelIndex, class FText CallFunc_RemoveInputCommand_Text, class FText CallFunc_RemoveWhisperCommand_Text, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_ExpandCommandShortcut_MatchedCommand, class FName CallFunc_ExpandCommandShortcut_CommandName, enum class E_ChatCommandType CallFunc_ExpandCommandShortcut_Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BndEvt__EditableText_K2Node_ComponentBoundEvent_467_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__EditableText_K2Node_ComponentBoundEvent_510_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnDeath();
	void ExecuteUbergraph_WBP_ChatInput(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, class UBP_ChatComponent_C* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_StartsWith_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_ProcessInput_Success, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class AHUD* CallFunc_GetHUD_ReturnValue_1, class UBP_ChatComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_StartsWith_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3);
	void ChatEventRefreshInput__DelegateSignature();
	void EventSayShortcut__DelegateSignature();
	void EventWhisperShortcut__DelegateSignature(const class FString& TargetName);
	void EventNumberedChannelShortcut__DelegateSignature(int32 NumberedChannelIdentifier);
	void EventSendChatMessage__DelegateSignature(const class FString& Message);
};

}


