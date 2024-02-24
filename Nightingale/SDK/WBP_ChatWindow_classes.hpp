#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x590 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_ChatWindow.WBP_ChatWindow_C
class UWBP_ChatWindow_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_fadeChat;                                     // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur_0;                                  // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    button_ChatSettings;                               // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    button_PartyChannel;                               // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    button_RealmChannel;                               // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ChatBorder;                                        // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChatInput_C*                      ChatInput;                                         // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              InputSizeBox;                                      // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ResizableChatWindow;                               // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox;                                         // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextInputChannel;                                  // 0x510(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         InputText;                                         // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShowingTimeStamps;                               // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ChatChannel                     CurrentChannel;                                    // 0x521(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D4B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            EventRoomJoinCommand;                              // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            EventRoomLeaveCommand;                             // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            EventRoomMessageCommand;                           // 0x548(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            EventPrivateMessageCommand;                        // 0x558(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CurrentNumberedChannelIdentifier;                  // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentWhisperTarget;                              // 0x570(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            UpdateVisibiltyFromInput;                          // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_ChatWindow_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void SwitchChannelAndButtonToRealmChat(bool CallFunc_IsFeatureFlagEnabled_ReturnValue);
	void SwitchChannelAndButtonToPartyChat(bool CallFunc_IsFeatureFlagEnabled_ReturnValue);
	void Switch_To_Numbered_Channel_and_Buttons_Via_Channel_Number(int32 Channel, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	class UWidget* GetDefaultFocusWidget();
	void PlayerFacingRoomNameFromRoomId(class FString& RoomId, class FText* DisplayName, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Split_LeftS_1, const class FString& CallFunc_Split_RightS_1, bool CallFunc_Split_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_UI_MapTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnReceiveMessage(struct FNWXChatRoom& Room, const class FString& ProfileId, const class FString& PlayerName, const class FString& Message, enum class E_ChatMessageType MessageType, const class FString& CallFunc_GetFilteredPlayerNameByPersistentId_FilteredPlayerName);
	void OnLeaveRoom(struct FNWXChatRoom& Room, bool WasSuccessful, const class FString& Error);
	void OnJoinRoom(struct FNWXChatRoom& Room, bool WasSuccessful, const class FString& Error);
	void OnWhispherShortcut(const class FString& TargetName);
	void OnSayShortcut(bool CallFunc_SetCurrentChannel_Success);
	void OnNumberedChannelShortcut(int32 NumberedChannelIdentifier);
	void OnSendChatMessage(const class FString& Message, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Get_Room_Id_By_Identifier_RoomId, bool CallFunc_SendRoomChat_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	struct FEventReply OnInputCancel(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class UBP_ChatComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void Remove_Channel(const class FString& RoomId, class FText CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FNWXChatRoom>& CallFunc_GetJoinedRooms_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue);
	void GetNumberedChannelDisplayName(int32 ChannelNumber, class FText* DisplayName, const class FString& NewLocalVar_1, const class FString& CallFunc_Get_Room_Id_By_Identifier_RoomId, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess, class UDragOperation_Codex_C* K2Node_DynamicCast_AsDrag_Operation_Codex, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetItemName_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1);
	struct FLinearColor GetBrushColor_0(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_HasFocusedDescendants_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void GetSpeakerDisplayText(const class FString& SpeakerName, class FText* SpeakerDisplayText, class FText LocalSpeakerDisplayText, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Format_ReturnValue);
	void SetCurrentWhisperTarget(const class FString& TargetName, bool CallFunc_SetCurrentChannel_Success);
	void AddChatLine(enum class E_ChatMessageType MessageType, enum class E_ChatSystemMessageType SystemMessageType, const class FString& RoomId, const class FString& SpeakerName, const class FString& MessageBody, class UWBP_ChatLine_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetSpeakerDisplayText_SpeakerDisplayText, class FText CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void HandleSendChatMessage(const class FString& Message, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Get_Room_Id_By_Identifier_RoomId);
	void AddNumberedChannel(const class FString& RoomId, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class FText CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FNWXChatRoom>& CallFunc_GetJoinedRooms_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void IsValidChannelIdentifier(int32 Identifier, bool* IsValidChannelIndex, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FNWXChatRoom>& CallFunc_GetJoinedRooms_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Get_Room_Id_By_Identifier(int32 Identifier, class FString* RoomId, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValidChannelIdentifier_IsValidChannelIndex, TArray<struct FNWXChatRoom>& CallFunc_GetJoinedRooms_ReturnValue, const struct FNWXChatRoom& CallFunc_Array_Get_Item);
	void SetCurrentNumberedChannel(int32 NumberedChannelIdentifier, bool CallFunc_SetCurrentChannel_Success);
	void SetInputText(class FText NewInputText);
	void SetInputVisibleAndFocused(bool InputVisibleAndFocused, bool NewLocalVar, class UEditableText* NewLocalVar_0, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue);
	void SetCurrentChannel(enum class E_ChatChannel NewChannel, bool* Success, uint8 LocalNewChannel, const struct FSlateColor& CallFunc_Get_CurrentChannel_Color_ReturnValue);
	void GetCurrentChannelType(enum class E_ChatMessageType* Type, enum class E_ChatChannel Temp_byte_Variable, enum class E_ChatMessageType Temp_byte_Variable_1, enum class E_ChatMessageType Temp_byte_Variable_2, enum class E_ChatMessageType Temp_byte_Variable_3, enum class E_ChatMessageType Temp_byte_Variable_4, enum class E_ChatMessageType Temp_byte_Variable_5, enum class E_ChatMessageType Temp_byte_Variable_6, enum class E_ChatMessageType Temp_byte_Variable_7, enum class E_ChatMessageType Temp_byte_Variable_8, enum class E_ChatMessageType Temp_byte_Variable_9, enum class E_ChatMessageType Temp_byte_Variable_10, enum class E_ChatMessageType K2Node_Select_Default);
	void GetChannelColor(enum class E_ChatMessageType ChannelType, struct FLinearColor* Color, const struct FS_ChatMessageColor& LocalMessageColours, enum class E_ChatMessageType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& K2Node_Select_Default);
	enum class ESlateVisibility Get_InputBackground_Visibility(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	struct FSlateColor Get_CurrentChannel_Color(enum class E_ChatMessageType CallFunc_GetCurrentChannelType_Type, const struct FLinearColor& CallFunc_GetChannelColor_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	enum class ESlateVisibility Get_CurrentChannel_Visibility(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue);
	class FText Get_Current_Numbered_Channel_Text(class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetNumberedChannelDisplayName_DisplayName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void Construct();
	void Destruct();
	void BndEvt__WBP_ChatWindow_WBP_button_base_Realm_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void BndEvt__WBP_ChatWindow_WBP_button_base_Party_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature();
	void ShowPartyButton(bool Show);
	void ExecuteUbergraph_WBP_ChatWindow(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TArray<struct FNWXChatRoom>& CallFunc_GetJoinedRooms_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FNWXChatRoom& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_CustomEvent_Show, int32 Temp_int_Loop_Counter_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_4, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUD_CommonNWX_C* K2Node_DynamicCast_AsHUD_Common_NWX, bool K2Node_DynamicCast_bSuccess);
	void UpdateVisibiltyFromInput__DelegateSignature();
	void EventPrivateMessageCommand__DelegateSignature(const class FString& Recipient, const class FString& Message);
	void EventRoomMessageCommand__DelegateSignature(const class FString& RoomName, const class FString& Message);
	void EventRoomLeaveCommand__DelegateSignature(const class FString& RoomName);
	void EventRoomJoinCommand__DelegateSignature(const class FString& RoomName);
};

}


