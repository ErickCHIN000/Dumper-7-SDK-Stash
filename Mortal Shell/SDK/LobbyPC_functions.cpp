#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LobbyPC.LobbyPC_C
// (Actor, PlayerController)

class UClass* ALobbyPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyPC_C");

	return Clss;
}


// LobbyPC_C LobbyPC.Default__LobbyPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALobbyPC_C* ALobbyPC_C::GetDefaultObj()
{
	static class ALobbyPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALobbyPC_C*>(ALobbyPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LobbyPC.LobbyPC_C.CharacterCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyGM_C*                  K2Node_DynamicCast_AsLobby_GM                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPC_C::CharacterCheck(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "CharacterCheck");

	Params::ALobbyPC_C_CharacterCheck_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GM = K2Node_DynamicCast_AsLobby_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.SaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerSaveGame_C*           CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerSaveGame_C*           K2Node_DynamicCast_AsPlayer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPC_C::SaveGame(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue, class UPlayerSaveGame_C* K2Node_DynamicCast_AsPlayer_Save_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "SaveGame");

	Params::ALobbyPC_C_SaveGame_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Save_Game = K2Node_DynamicCast_AsPlayer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.LoadGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerSaveGame_C*           K2Node_DynamicCast_AsPlayer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPC_C::LoadGame(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UPlayerSaveGame_C* K2Node_DynamicCast_AsPlayer_Save_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "LoadGame");

	Params::ALobbyPC_C_LoadGame_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Save_Game = K2Node_DynamicCast_AsPlayer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.Save Game Check
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPC_C::Save_Game_Check(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "Save Game Check");

	Params::ALobbyPC_C_Save_Game_Check_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.OnFailure_8C64497746DD83D395051FA82E2C7FC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobbyPC_C::OnFailure_8C64497746DD83D395051FA82E2C7FC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "OnFailure_8C64497746DD83D395051FA82E2C7FC8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyPC.LobbyPC_C.OnSuccess_8C64497746DD83D395051FA82E2C7FC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobbyPC_C::OnSuccess_8C64497746DD83D395051FA82E2C7FC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "OnSuccess_8C64497746DD83D395051FA82E2C7FC8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyPC.LobbyPC_C.InpActEvt_T_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ALobbyPC_C::InpActEvt_T_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "InpActEvt_T_K2Node_InputKeyEvent_0");

	Params::ALobbyPC_C_InpActEvt_T_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.InitialSetup
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobbyPC_C::InitialSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "InitialSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyPC.LobbyPC_C.CallUpdate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfo                 PlayerInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               ChangedStatus_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPC_C::CallUpdate(const struct FPlayerInfo& PlayerInfo, bool ChangedStatus_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "CallUpdate");

	Params::ALobbyPC_C_CallUpdate_Params Parms{};

	Parms.PlayerInfo = PlayerInfo;
	Parms.ChangedStatus_ = ChangedStatus_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.SetupLobbyMenu
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ServerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ALobbyPC_C::SetupLobbyMenu(class FText ServerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "SetupLobbyMenu");

	Params::ALobbyPC_C_SetupLobbyMenu_Params Parms{};

	Parms.ServerName = ServerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.AddPlayerInfo
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerInfo>         ConnectedPlayersInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ALobbyPC_C::AddPlayerInfo(TArray<struct FPlayerInfo>& ConnectedPlayersInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "AddPlayerInfo");

	Params::ALobbyPC_C_AddPlayerInfo_Params Parms{};

	Parms.ConnectedPlayersInfo = ConnectedPlayersInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.UpdateLobbySettings
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  MapImage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        MapName                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        MapTime                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ALobbyPC_C::UpdateLobbySettings(class UTexture2D* MapImage, class FText MapName, class FText MapTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "UpdateLobbySettings");

	Params::ALobbyPC_C_UpdateLobbySettings_Params Parms{};

	Parms.MapImage = MapImage;
	Parms.MapName = MapName;
	Parms.MapTime = MapTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.UpdateNumberOfPlayers
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentPlayers                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxPlayers                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobbyPC_C::UpdateNumberOfPlayers(int32 CurrentPlayers, int32 MaxPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "UpdateNumberOfPlayers");

	Params::ALobbyPC_C_UpdateNumberOfPlayers_Params Parms{};

	Parms.CurrentPlayers = CurrentPlayers;
	Parms.MaxPlayers = MaxPlayers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobbyPC_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "ReceiveEndPlay");

	Params::ALobbyPC_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.Kicked
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobbyPC_C::Kicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "Kicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyPC.LobbyPC_C.UpdateAvailableCharacters
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       AvailableCharacters                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ALobbyPC_C::UpdateAvailableCharacters(TArray<bool>& AvailableCharacters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "UpdateAvailableCharacters");

	Params::ALobbyPC_C_UpdateAvailableCharacters_Params Parms{};

	Parms.AvailableCharacters = AvailableCharacters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.AssignSelectedCharacter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CharacterImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobbyPC_C::AssignSelectedCharacter(int32 CharacterID, class UTexture2D* CharacterImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "AssignSelectedCharacter");

	Params::ALobbyPC_C_AssignSelectedCharacter_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.CharacterImage = CharacterImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.AssignPlayer
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CharacterImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobbyPC_C::AssignPlayer(class UClass* Character, class UTexture2D* CharacterImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "AssignPlayer");

	Params::ALobbyPC_C_AssignPlayer_Params Parms{};

	Parms.Character = Character;
	Parms.CharacterImage = CharacterImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.GetChatMessage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextToSend                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ALobbyPC_C::GetChatMessage(class FText TextToSend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "GetChatMessage");

	Params::ALobbyPC_C_GetChatMessage_Params Parms{};

	Parms.TextToSend = TextToSend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.UpdateChat
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void ALobbyPC_C::UpdateChat(class FText Sender, class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "UpdateChat");

	Params::ALobbyPC_C_UpdateChat_Params Parms{};

	Parms.Sender = Sender;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPC.LobbyPC_C.ExecuteUbergraph_LobbyPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerInfo                 K2Node_CustomEvent_PlayerInfo                                    (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ChangedStatus_                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_ServerName                                    (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyGM_C*                  K2Node_DynamicCast_AsLobby_GM                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FPlayerInfo>         K2Node_CustomEvent_ConnectedPlayersInfo                          (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_CustomEvent_MapImage                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_MapName                                       (None)
// class FText                        K2Node_CustomEvent_MapTime                                       (None)
// int32                              K2Node_CustomEvent_CurrentPlayers                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxPlayers                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class ULobbyMenu_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<bool>                       K2Node_CustomEvent_AvailableCharacters                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CharacterID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_CharacterImage_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfo                 CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_CharacterImage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextToSend                                    (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyGM_C*                  K2Node_DynamicCast_AsLobby_GM_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Sender                                        (None)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// class APlayerController*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyPC_C*                  K2Node_DynamicCast_AsLobby_PC                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPC_C::ExecuteUbergraph_LobbyPC(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FKey& K2Node_InputKeyEvent_Key, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FPlayerInfo& K2Node_CustomEvent_PlayerInfo, bool K2Node_CustomEvent_ChangedStatus_, class FText K2Node_CustomEvent_ServerName, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess, TArray<struct FPlayerInfo>& K2Node_CustomEvent_ConnectedPlayersInfo, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* K2Node_CustomEvent_MapImage, class FText K2Node_CustomEvent_MapName, class FText K2Node_CustomEvent_MapTime, int32 K2Node_CustomEvent_CurrentPlayers, int32 K2Node_CustomEvent_MaxPlayers, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ULobbyMenu_C* CallFunc_Create_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TArray<bool>& K2Node_CustomEvent_AvailableCharacters, bool CallFunc_IsValid_ReturnValue_3, class UButton* CallFunc_Array_Get_Item, bool CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 K2Node_CustomEvent_CharacterID, class UTexture2D* K2Node_CustomEvent_CharacterImage_1, const struct FPlayerInfo& CallFunc_Array_Get_Item_2, class UClass* K2Node_CustomEvent_Character, class UTexture2D* K2Node_CustomEvent_CharacterImage, class FText K2Node_CustomEvent_TextToSend, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM_1, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_CustomEvent_Sender, class FText K2Node_CustomEvent_Text, class APlayerController* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPC_C", "ExecuteUbergraph_LobbyPC");

	Params::ALobbyPC_C_ExecuteUbergraph_LobbyPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerInfo = K2Node_CustomEvent_PlayerInfo;
	Parms.K2Node_CustomEvent_ChangedStatus_ = K2Node_CustomEvent_ChangedStatus_;
	Parms.K2Node_CustomEvent_ServerName = K2Node_CustomEvent_ServerName;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GM = K2Node_DynamicCast_AsLobby_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_ConnectedPlayersInfo = K2Node_CustomEvent_ConnectedPlayersInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_MapImage = K2Node_CustomEvent_MapImage;
	Parms.K2Node_CustomEvent_MapName = K2Node_CustomEvent_MapName;
	Parms.K2Node_CustomEvent_MapTime = K2Node_CustomEvent_MapTime;
	Parms.K2Node_CustomEvent_CurrentPlayers = K2Node_CustomEvent_CurrentPlayers;
	Parms.K2Node_CustomEvent_MaxPlayers = K2Node_CustomEvent_MaxPlayers;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_AvailableCharacters = K2Node_CustomEvent_AvailableCharacters;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CustomEvent_CharacterID = K2Node_CustomEvent_CharacterID;
	Parms.K2Node_CustomEvent_CharacterImage_1 = K2Node_CustomEvent_CharacterImage_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_CharacterImage = K2Node_CustomEvent_CharacterImage;
	Parms.K2Node_CustomEvent_TextToSend = K2Node_CustomEvent_TextToSend;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLobby_GM_1 = K2Node_DynamicCast_AsLobby_GM_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Sender = K2Node_CustomEvent_Sender;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsLobby_PC = K2Node_DynamicCast_AsLobby_PC;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


