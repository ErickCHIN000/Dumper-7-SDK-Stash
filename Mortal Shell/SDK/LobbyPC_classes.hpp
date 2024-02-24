#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x650 - 0x570)
// BlueprintGeneratedClass LobbyPC.LobbyPC_C
class ALobbyPC_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FPlayerInfo                           PlayerSettings;                                    // 0x578(0x48)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	class ULobbyMenu_C*                          LobbyMenuWB;                                       // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerInfo>                   AllConnectedPlayers;                               // 0x5C8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                PlayerSettingsSave;                                // 0x5D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        SelectedCharacter;                                 // 0x5E8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerSaveGame_C*                     PlayerSaveGameRef;                                 // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   GameInstanceRef;                                   // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 AvailableCharacters;                               // 0x600(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        PreviousSelection;                                 // 0x610(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A67[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CharacterImage;                                    // 0x618(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  SenderText;                                        // 0x620(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class FText                                  SenderName;                                        // 0x638(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ALobbyPC_C* GetDefaultObj();

	void CharacterCheck(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
	void SaveGame(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue, class UPlayerSaveGame_C* K2Node_DynamicCast_AsPlayer_Save_Game, bool K2Node_DynamicCast_bSuccess);
	void LoadGame(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UPlayerSaveGame_C* K2Node_DynamicCast_AsPlayer_Save_Game, bool K2Node_DynamicCast_bSuccess);
	void Save_Game_Check(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void OnFailure_8C64497746DD83D395051FA82E2C7FC8();
	void OnSuccess_8C64497746DD83D395051FA82E2C7FC8();
	void InpActEvt_T_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InitialSetup();
	void CallUpdate(const struct FPlayerInfo& PlayerInfo, bool ChangedStatus_);
	void SetupLobbyMenu(class FText ServerName);
	void AddPlayerInfo(TArray<struct FPlayerInfo>& ConnectedPlayersInfo);
	void UpdateLobbySettings(class UTexture2D* MapImage, class FText MapName, class FText MapTime);
	void UpdateNumberOfPlayers(int32 CurrentPlayers, int32 MaxPlayers);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Kicked();
	void UpdateAvailableCharacters(TArray<bool>& AvailableCharacters);
	void AssignSelectedCharacter(int32 CharacterID, class UTexture2D* CharacterImage);
	void AssignPlayer(class UClass* Character, class UTexture2D* CharacterImage);
	void GetChatMessage(class FText TextToSend);
	void UpdateChat(class FText Sender, class FText Text);
	void ExecuteUbergraph_LobbyPC(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FKey& K2Node_InputKeyEvent_Key, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FPlayerInfo& K2Node_CustomEvent_PlayerInfo, bool K2Node_CustomEvent_ChangedStatus_, class FText K2Node_CustomEvent_ServerName, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess, TArray<struct FPlayerInfo>& K2Node_CustomEvent_ConnectedPlayersInfo, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* K2Node_CustomEvent_MapImage, class FText K2Node_CustomEvent_MapName, class FText K2Node_CustomEvent_MapTime, int32 K2Node_CustomEvent_CurrentPlayers, int32 K2Node_CustomEvent_MaxPlayers, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ULobbyMenu_C* CallFunc_Create_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TArray<bool>& K2Node_CustomEvent_AvailableCharacters, bool CallFunc_IsValid_ReturnValue_3, class UButton* CallFunc_Array_Get_Item, bool CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 K2Node_CustomEvent_CharacterID, class UTexture2D* K2Node_CustomEvent_CharacterImage_1, const struct FPlayerInfo& CallFunc_Array_Get_Item_2, class UClass* K2Node_CustomEvent_Character, class UTexture2D* K2Node_CustomEvent_CharacterImage, class FText K2Node_CustomEvent_TextToSend, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM_1, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_CustomEvent_Sender, class FText K2Node_CustomEvent_Text, class APlayerController* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_2);
};

}


