#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ChatWindow.WBP_ChatWindow_C
// (None)

class UClass* UWBP_ChatWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ChatWindow_C");

	return Clss;
}


// WBP_ChatWindow_C WBP_ChatWindow.Default__WBP_ChatWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ChatWindow_C* UWBP_ChatWindow_C::GetDefaultObj()
{
	static class UWBP_ChatWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ChatWindow_C*>(UWBP_ChatWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ChatWindow.WBP_ChatWindow_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_ChatWindow_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_ChatWindow_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.SwitchChannelAndButtonToRealmChat
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsFeatureFlagEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::SwitchChannelAndButtonToRealmChat(bool CallFunc_IsFeatureFlagEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "SwitchChannelAndButtonToRealmChat");

	Params::UWBP_ChatWindow_C_SwitchChannelAndButtonToRealmChat_Params Parms{};

	Parms.CallFunc_IsFeatureFlagEnabled_ReturnValue = CallFunc_IsFeatureFlagEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.SwitchChannelAndButtonToPartyChat
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsFeatureFlagEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::SwitchChannelAndButtonToPartyChat(bool CallFunc_IsFeatureFlagEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "SwitchChannelAndButtonToPartyChat");

	Params::UWBP_ChatWindow_C_SwitchChannelAndButtonToPartyChat_Params Parms{};

	Parms.CallFunc_IsFeatureFlagEnabled_ReturnValue = CallFunc_IsFeatureFlagEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.Switch To Numbered Channel and Buttons Via Channel Number
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Channel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::Switch_To_Numbered_Channel_and_Buttons_Via_Channel_Number(int32 Channel, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "Switch To Numbered Channel and Buttons Via Channel Number");

	Params::UWBP_ChatWindow_C_Switch_To_Numbered_Channel_and_Buttons_Via_Channel_Number_Params Parms{};

	Parms.Channel = Channel;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_ChatWindow_C::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "GetDefaultFocusWidget");

	Params::UWBP_ChatWindow_C_GetDefaultFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.PlayerFacingRoomNameFromRoomId
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      RoomId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (Parm, OutParm)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS_1                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_MapTable              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::PlayerFacingRoomNameFromRoomId(class FString& RoomId, class FText* DisplayName, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Split_LeftS_1, const class FString& CallFunc_Split_RightS_1, bool CallFunc_Split_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_UI_MapTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "PlayerFacingRoomNameFromRoomId");

	Params::UWBP_ChatWindow_C_PlayerFacingRoomNameFromRoomId_Params Parms{};

	Parms.RoomId = RoomId;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Split_LeftS_1 = CallFunc_Split_LeftS_1;
	Parms.CallFunc_Split_RightS_1 = CallFunc_Split_RightS_1;
	Parms.CallFunc_Split_ReturnValue_1 = CallFunc_Split_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = Parms.DisplayName;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.OnReceiveMessage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNWXChatRoom                Room                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      ProfileId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       MessageType                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFilteredPlayerNameByPersistentId_FilteredPlayerName  (ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::OnReceiveMessage(struct FNWXChatRoom& Room, const class FString& ProfileId, const class FString& PlayerName, const class FString& Message, enum class E_ChatMessageType MessageType, const class FString& CallFunc_GetFilteredPlayerNameByPersistentId_FilteredPlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "OnReceiveMessage");

	Params::UWBP_ChatWindow_C_OnReceiveMessage_Params Parms{};

	Parms.Room = Room;
	Parms.ProfileId = ProfileId;
	Parms.PlayerName = PlayerName;
	Parms.Message = Message;
	Parms.MessageType = MessageType;
	Parms.CallFunc_GetFilteredPlayerNameByPersistentId_FilteredPlayerName = CallFunc_GetFilteredPlayerNameByPersistentId_FilteredPlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.OnLeaveRoom
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNWXChatRoom                Room                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               WasSuccessful                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::OnLeaveRoom(struct FNWXChatRoom& Room, bool WasSuccessful, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "OnLeaveRoom");

	Params::UWBP_ChatWindow_C_OnLeaveRoom_Params Parms{};

	Parms.Room = Room;
	Parms.WasSuccessful = WasSuccessful;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.OnJoinRoom
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNWXChatRoom                Room                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               WasSuccessful                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::OnJoinRoom(struct FNWXChatRoom& Room, bool WasSuccessful, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "OnJoinRoom");

	Params::UWBP_ChatWindow_C_OnJoinRoom_Params Parms{};

	Parms.Room = Room;
	Parms.WasSuccessful = WasSuccessful;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.OnWhispherShortcut
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TargetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::OnWhispherShortcut(const class FString& TargetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "OnWhispherShortcut");

	Params::UWBP_ChatWindow_C_OnWhispherShortcut_Params Parms{};

	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.OnSayShortcut
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetCurrentChannel_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::OnSayShortcut(bool CallFunc_SetCurrentChannel_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "OnSayShortcut");

	Params::UWBP_ChatWindow_C_OnSayShortcut_Params Parms{};

	Parms.CallFunc_SetCurrentChannel_Success = CallFunc_SetCurrentChannel_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.OnNumberedChannelShortcut
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumberedChannelIdentifier                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::OnNumberedChannelShortcut(int32 NumberedChannelIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "OnNumberedChannelShortcut");

	Params::UWBP_ChatWindow_C_OnNumberedChannelShortcut_Params Parms{};

	Parms.NumberedChannelIdentifier = NumberedChannelIdentifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.OnSendChatMessage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Room_Id_By_Identifier_RoomId                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SendRoomChat_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::OnSendChatMessage(const class FString& Message, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Get_Room_Id_By_Identifier_RoomId, bool CallFunc_SendRoomChat_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "OnSendChatMessage");

	Params::UWBP_ChatWindow_C_OnSendChatMessage_Params Parms{};

	Parms.Message = Message;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Get_Room_Id_By_Identifier_RoomId = CallFunc_Get_Room_Id_By_Identifier_RoomId;
	Parms.CallFunc_SendRoomChat_ReturnValue = CallFunc_SendRoomChat_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.OnInputCancel
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ChatComponent_C*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_ChatWindow_C::OnInputCancel(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class UBP_ChatComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "OnInputCancel");

	Params::UWBP_ChatWindow_C_OnInputCancel_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.Remove Channel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RoomId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName              (None)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FNWXChatRoom>        CallFunc_GetJoinedRooms_ReturnValue                              (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::Remove_Channel(const class FString& RoomId, class FText CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FNWXChatRoom>& CallFunc_GetJoinedRooms_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "Remove Channel");

	Params::UWBP_ChatWindow_C_Remove_Channel_Params Parms{};

	Parms.RoomId = RoomId;
	Parms.CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName = CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetJoinedRooms_ReturnValue = CallFunc_GetJoinedRooms_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.GetNumberedChannelDisplayName
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ChannelNumber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (Parm, OutParm)
// class FString                      NewLocalVar_1                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Room_Id_By_Identifier_RoomId                        (ZeroConstructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_ChatWindow_C::GetNumberedChannelDisplayName(int32 ChannelNumber, class FText* DisplayName, const class FString& NewLocalVar_1, const class FString& CallFunc_Get_Room_Id_By_Identifier_RoomId, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "GetNumberedChannelDisplayName");

	Params::UWBP_ChatWindow_C_GetNumberedChannelDisplayName_Params Parms{};

	Parms.ChannelNumber = ChannelNumber;
	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.CallFunc_Get_Room_Id_By_Identifier_RoomId = CallFunc_Get_Room_Id_By_Identifier_RoomId;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName = CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = Parms.DisplayName;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragOperation_Item_C*       K2Node_DynamicCast_AsDrag_Operation_Item                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragOperation_Codex_C*      K2Node_DynamicCast_AsDrag_Operation_Codex                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ChatWindow_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess, class UDragOperation_Codex_C* K2Node_DynamicCast_AsDrag_Operation_Codex, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetItemName_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "OnDrop");

	Params::UWBP_ChatWindow_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.K2Node_DynamicCast_AsDrag_Operation_Item = K2Node_DynamicCast_AsDrag_Operation_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsDrag_Operation_Codex = K2Node_DynamicCast_AsDrag_Operation_Codex;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.GetBrushColor_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWBP_ChatWindow_C::GetBrushColor_0(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_HasFocusedDescendants_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "GetBrushColor_0");

	Params::UWBP_ChatWindow_C_GetBrushColor_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue = CallFunc_HasFocusedDescendants_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.GetSpeakerDisplayText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SpeakerName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        SpeakerDisplayText                                               (Parm, OutParm)
// class FText                        LocalSpeakerDisplayText                                          (Edit, BlueprintVisible)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_ChatWindow_C::GetSpeakerDisplayText(const class FString& SpeakerName, class FText* SpeakerDisplayText, class FText LocalSpeakerDisplayText, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "GetSpeakerDisplayText");

	Params::UWBP_ChatWindow_C_GetSpeakerDisplayText_Params Parms{};

	Parms.SpeakerName = SpeakerName;
	Parms.LocalSpeakerDisplayText = LocalSpeakerDisplayText;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpeakerDisplayText != nullptr)
		*SpeakerDisplayText = Parms.SpeakerDisplayText;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.SetCurrentWhisperTarget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TargetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentChannel_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::SetCurrentWhisperTarget(const class FString& TargetName, bool CallFunc_SetCurrentChannel_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "SetCurrentWhisperTarget");

	Params::UWBP_ChatWindow_C_SetCurrentWhisperTarget_Params Parms{};

	Parms.TargetName = TargetName;
	Parms.CallFunc_SetCurrentChannel_Success = CallFunc_SetCurrentChannel_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.AddChatLine
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ChatMessageType       MessageType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatSystemMessageType SystemMessageType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      RoomId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      SpeakerName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      MessageBody                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWBP_ChatLine_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_GetSpeakerDisplayText_SpeakerDisplayText                (None)
// class FText                        CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName              (None)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::AddChatLine(enum class E_ChatMessageType MessageType, enum class E_ChatSystemMessageType SystemMessageType, const class FString& RoomId, const class FString& SpeakerName, const class FString& MessageBody, class UWBP_ChatLine_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetSpeakerDisplayText_SpeakerDisplayText, class FText CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "AddChatLine");

	Params::UWBP_ChatWindow_C_AddChatLine_Params Parms{};

	Parms.MessageType = MessageType;
	Parms.SystemMessageType = SystemMessageType;
	Parms.RoomId = RoomId;
	Parms.SpeakerName = SpeakerName;
	Parms.MessageBody = MessageBody;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetSpeakerDisplayText_SpeakerDisplayText = CallFunc_GetSpeakerDisplayText_SpeakerDisplayText;
	Parms.CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName = CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.HandleSendChatMessage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Room_Id_By_Identifier_RoomId                        (ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::HandleSendChatMessage(const class FString& Message, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Get_Room_Id_By_Identifier_RoomId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "HandleSendChatMessage");

	Params::UWBP_ChatWindow_C_HandleSendChatMessage_Params Parms{};

	Parms.Message = Message;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Get_Room_Id_By_Identifier_RoomId = CallFunc_Get_Room_Id_By_Identifier_RoomId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.AddNumberedChannel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RoomId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FNWXChatRoom>        CallFunc_GetJoinedRooms_ReturnValue                              (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::AddNumberedChannel(const class FString& RoomId, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class FText CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FNWXChatRoom>& CallFunc_GetJoinedRooms_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "AddNumberedChannel");

	Params::UWBP_ChatWindow_C_AddNumberedChannel_Params Parms{};

	Parms.RoomId = RoomId;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName = CallFunc_PlayerFacingRoomNameFromRoomId_DisplayName;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetJoinedRooms_ReturnValue = CallFunc_GetJoinedRooms_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.IsValidChannelIdentifier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Identifier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValidChannelIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNWXChatRoom>        CallFunc_GetJoinedRooms_ReturnValue                              (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::IsValidChannelIdentifier(int32 Identifier, bool* IsValidChannelIndex, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FNWXChatRoom>& CallFunc_GetJoinedRooms_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "IsValidChannelIdentifier");

	Params::UWBP_ChatWindow_C_IsValidChannelIdentifier_Params Parms{};

	Parms.Identifier = Identifier;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetJoinedRooms_ReturnValue = CallFunc_GetJoinedRooms_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidChannelIndex != nullptr)
		*IsValidChannelIndex = Parms.IsValidChannelIndex;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.Get Room Id By Identifier
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Identifier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      RoomId                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidChannelIdentifier_IsValidChannelIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNWXChatRoom>        CallFunc_GetJoinedRooms_ReturnValue                              (ReferenceParm)
// struct FNWXChatRoom                CallFunc_Array_Get_Item                                          (None)

void UWBP_ChatWindow_C::Get_Room_Id_By_Identifier(int32 Identifier, class FString* RoomId, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValidChannelIdentifier_IsValidChannelIndex, TArray<struct FNWXChatRoom>& CallFunc_GetJoinedRooms_ReturnValue, const struct FNWXChatRoom& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "Get Room Id By Identifier");

	Params::UWBP_ChatWindow_C_Get_Room_Id_By_Identifier_Params Parms{};

	Parms.Identifier = Identifier;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_IsValidChannelIdentifier_IsValidChannelIndex = CallFunc_IsValidChannelIdentifier_IsValidChannelIndex;
	Parms.CallFunc_GetJoinedRooms_ReturnValue = CallFunc_GetJoinedRooms_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (RoomId != nullptr)
		*RoomId = std::move(Parms.RoomId);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.SetCurrentNumberedChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumberedChannelIdentifier                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentChannel_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::SetCurrentNumberedChannel(int32 NumberedChannelIdentifier, bool CallFunc_SetCurrentChannel_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "SetCurrentNumberedChannel");

	Params::UWBP_ChatWindow_C_SetCurrentNumberedChannel_Params Parms{};

	Parms.NumberedChannelIdentifier = NumberedChannelIdentifier;
	Parms.CallFunc_SetCurrentChannel_Success = CallFunc_SetCurrentChannel_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.SetInputText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewInputText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ChatWindow_C::SetInputText(class FText NewInputText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "SetInputText");

	Params::UWBP_ChatWindow_C_SetInputText_Params Parms{};

	Parms.NewInputText = NewInputText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.SetInputVisibleAndFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InputVisibleAndFocused                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEditableText*               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::SetInputVisibleAndFocused(bool InputVisibleAndFocused, bool NewLocalVar, class UEditableText* NewLocalVar_0, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "SetInputVisibleAndFocused");

	Params::UWBP_ChatWindow_C_SetInputVisibleAndFocused_Params Parms{};

	Parms.InputVisibleAndFocused = InputVisibleAndFocused;
	Parms.NewLocalVar = NewLocalVar;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.SetCurrentChannel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ChatChannel           NewChannel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              LocalNewChannel                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_Get_CurrentChannel_Color_ReturnValue                    (None)

void UWBP_ChatWindow_C::SetCurrentChannel(enum class E_ChatChannel NewChannel, bool* Success, uint8 LocalNewChannel, const struct FSlateColor& CallFunc_Get_CurrentChannel_Color_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "SetCurrentChannel");

	Params::UWBP_ChatWindow_C_SetCurrentChannel_Params Parms{};

	Parms.NewChannel = NewChannel;
	Parms.LocalNewChannel = LocalNewChannel;
	Parms.CallFunc_Get_CurrentChannel_Color_ReturnValue = CallFunc_Get_CurrentChannel_Color_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.GetCurrentChannelType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ChatMessageType       Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatChannel           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::GetCurrentChannelType(enum class E_ChatMessageType* Type, enum class E_ChatChannel Temp_byte_Variable, enum class E_ChatMessageType Temp_byte_Variable_1, enum class E_ChatMessageType Temp_byte_Variable_2, enum class E_ChatMessageType Temp_byte_Variable_3, enum class E_ChatMessageType Temp_byte_Variable_4, enum class E_ChatMessageType Temp_byte_Variable_5, enum class E_ChatMessageType Temp_byte_Variable_6, enum class E_ChatMessageType Temp_byte_Variable_7, enum class E_ChatMessageType Temp_byte_Variable_8, enum class E_ChatMessageType Temp_byte_Variable_9, enum class E_ChatMessageType Temp_byte_Variable_10, enum class E_ChatMessageType K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "GetCurrentChannelType");

	Params::UWBP_ChatWindow_C_GetCurrentChannelType_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.GetChannelColor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ChatMessageType       ChannelType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ChatMessageColor         LocalMessageColours                                              (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::GetChannelColor(enum class E_ChatMessageType ChannelType, struct FLinearColor* Color, const struct FS_ChatMessageColor& LocalMessageColours, enum class E_ChatMessageType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "GetChannelColor");

	Params::UWBP_ChatWindow_C_GetChannelColor_Params Parms{};

	Parms.ChannelType = ChannelType;
	Parms.LocalMessageColours = LocalMessageColours;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.Get_InputBackground_Visibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWBP_ChatWindow_C::Get_InputBackground_Visibility(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "Get_InputBackground_Visibility");

	Params::UWBP_ChatWindow_C_Get_InputBackground_Visibility_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.Get_CurrentChannel_Color
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class E_ChatMessageType       CallFunc_GetCurrentChannelType_Type                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetChannelColor_Color                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

struct FSlateColor UWBP_ChatWindow_C::Get_CurrentChannel_Color(enum class E_ChatMessageType CallFunc_GetCurrentChannelType_Type, const struct FLinearColor& CallFunc_GetChannelColor_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "Get_CurrentChannel_Color");

	Params::UWBP_ChatWindow_C_Get_CurrentChannel_Color_Params Parms{};

	Parms.CallFunc_GetCurrentChannelType_Type = CallFunc_GetCurrentChannelType_Type;
	Parms.CallFunc_GetChannelColor_Color = CallFunc_GetChannelColor_Color;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.Get_CurrentChannel_Visibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWBP_ChatWindow_C::Get_CurrentChannel_Visibility(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "Get_CurrentChannel_Visibility");

	Params::UWBP_ChatWindow_C_Get_CurrentChannel_Visibility_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.Get Current Numbered Channel Text
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_GetNumberedChannelDisplayName_DisplayName               (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

class FText UWBP_ChatWindow_C::Get_Current_Numbered_Channel_Text(class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetNumberedChannelDisplayName_DisplayName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "Get Current Numbered Channel Text");

	Params::UWBP_ChatWindow_C_Get_Current_Numbered_Channel_Text_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetNumberedChannelDisplayName_DisplayName = CallFunc_GetNumberedChannelDisplayName_DisplayName;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ChatWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ChatWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.BndEvt__WBP_ChatWindow_WBP_button_base_Realm_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ChatWindow_C::BndEvt__WBP_ChatWindow_WBP_button_base_Realm_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "BndEvt__WBP_ChatWindow_WBP_button_base_Realm_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.BndEvt__WBP_ChatWindow_WBP_button_base_Party_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ChatWindow_C::BndEvt__WBP_ChatWindow_WBP_button_base_Party_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "BndEvt__WBP_ChatWindow_WBP_button_base_Party_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.ShowPartyButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::ShowPartyButton(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "ShowPartyButton");

	Params::UWBP_ChatWindow_C_ShowPartyButton_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.ExecuteUbergraph_WBP_ChatWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNWXChatRoom>        CallFunc_GetJoinedRooms_ReturnValue                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXChatRoom                CallFunc_Array_Get_Item                                          (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Show                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_4                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_CommonNWX_C*            K2Node_DynamicCast_AsHUD_Common_NWX                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::ExecuteUbergraph_WBP_ChatWindow(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TArray<struct FNWXChatRoom>& CallFunc_GetJoinedRooms_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FNWXChatRoom& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_CustomEvent_Show, int32 Temp_int_Loop_Counter_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_4, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUD_CommonNWX_C* K2Node_DynamicCast_AsHUD_Common_NWX, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "ExecuteUbergraph_WBP_ChatWindow");

	Params::UWBP_ChatWindow_C_ExecuteUbergraph_WBP_ChatWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetJoinedRooms_ReturnValue = CallFunc_GetJoinedRooms_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_Show = K2Node_CustomEvent_Show;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_3 = CallFunc_GetOwningPlayerController_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_4 = CallFunc_GetOwningPlayerController_ReturnValue_4;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD_Common_NWX = K2Node_DynamicCast_AsHUD_Common_NWX;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.UpdateVisibiltyFromInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ChatWindow_C::UpdateVisibiltyFromInput__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "UpdateVisibiltyFromInput__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.EventPrivateMessageCommand__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Recipient                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::EventPrivateMessageCommand__DelegateSignature(const class FString& Recipient, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "EventPrivateMessageCommand__DelegateSignature");

	Params::UWBP_ChatWindow_C_EventPrivateMessageCommand__DelegateSignature_Params Parms{};

	Parms.Recipient = Recipient;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.EventRoomMessageCommand__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RoomName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::EventRoomMessageCommand__DelegateSignature(const class FString& RoomName, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "EventRoomMessageCommand__DelegateSignature");

	Params::UWBP_ChatWindow_C_EventRoomMessageCommand__DelegateSignature_Params Parms{};

	Parms.RoomName = RoomName;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.EventRoomLeaveCommand__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RoomName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::EventRoomLeaveCommand__DelegateSignature(const class FString& RoomName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "EventRoomLeaveCommand__DelegateSignature");

	Params::UWBP_ChatWindow_C_EventRoomLeaveCommand__DelegateSignature_Params Parms{};

	Parms.RoomName = RoomName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatWindow.WBP_ChatWindow_C.EventRoomJoinCommand__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RoomName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ChatWindow_C::EventRoomJoinCommand__DelegateSignature(const class FString& RoomName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatWindow_C", "EventRoomJoinCommand__DelegateSignature");

	Params::UWBP_ChatWindow_C_EventRoomJoinCommand__DelegateSignature_Params Parms{};

	Parms.RoomName = RoomName;

	UObject::ProcessEvent(Func, &Parms);

}

}


