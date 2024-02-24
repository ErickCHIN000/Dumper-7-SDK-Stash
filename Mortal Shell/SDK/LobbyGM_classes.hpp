#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x3C4 - 0x308)
// BlueprintGeneratedClass LobbyGM.LobbyGM_C
class ALobbyGM_C : public AGameMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         CanWeStart_;                                       // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_155A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APlayerController*>             AllPlayerControllers;                              // 0x320(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class APlayerStart*>                  SpawnPoints;                                       // 0x330(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                  ServerName;                                        // 0x340(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int32                                        MaxPlayers;                                        // 0x358(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1562[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            GM_MapImage;                                       // 0x360(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  GM_MapName;                                        // 0x368(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class FText                                  GM_MapTime;                                        // 0x380(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int32                                        CurrentPlayers;                                    // 0x398(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_156F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPlayerInfo>                   ConnectedPlayers;                                  // 0x3A0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<bool>                                 AvailableCharacters;                               // 0x3B0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        GM_MapID;                                          // 0x3C0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALobbyGM_C* GetDefaultObj();

	void SwapCharacter(class APlayerController* PlayerController, class UClass* CharacterClass, bool ChangedStatus);
	void EveryoneUpdate();
	void LaunchTheGame();
	void K2_PostLogin(class APlayerController* NewPlayer);
	void RespawnPlayer(class APlayerController* PlayerController);
	void AddToKickList();
	void CannotStartGame();
	void ServerUpdateGameSettings(class UTexture2D* MapImage, class FText MapName, class FText MapTime, int32 MapId);
	void YouHaveBeenKicked(int32 PlayerId);
	void K2_OnLogout(class AController* ExitingController);
	void ExecuteUbergraph_LobbyGM(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* K2Node_CustomEvent_PlayerController_1, class UClass* K2Node_CustomEvent_CharacterClass, bool K2Node_CustomEvent_ChangedStatus, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* K2Node_Event_NewPlayer, int32 CallFunc_Array_Add_ReturnValue, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC, bool K2Node_DynamicCast_bSuccess, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* K2Node_CustomEvent_PlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class APlayerStart* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AZero_Base_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FPlayerInfo& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UTexture2D* K2Node_CustomEvent_MapImage, class FText K2Node_CustomEvent_MapName, class FText K2Node_CustomEvent_MapTime, int32 K2Node_CustomEvent_MapId, class APlayerController* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_5, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable_4, class APlayerController* CallFunc_Array_Get_Item_4, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC_3, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Add_ReturnValue_1, int32 K2Node_CustomEvent_PlayerID, class AController* K2Node_Event_ExitingController, class APlayerController* CallFunc_Array_Get_Item_5, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC_4, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_Array_Get_Item_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APlayerController* CallFunc_Array_Get_Item_7, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC_5, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC_6, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess_8, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class APlayerStart* CallFunc_Array_Get_Item_8, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ACharacter* CallFunc_FinishSpawningActor_ReturnValue_1);
};

}


