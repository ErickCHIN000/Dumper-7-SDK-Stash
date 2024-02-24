#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x240 - 0x228)
// BlueprintGeneratedClass NMainMenu2.NMainMenu2_C
class ANMainMenu2_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bFriendFound;                                      // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACameraActor*                          CameraActor_1_ExecuteUbergraph_NMainMenu2_RefProperty; // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANMainMenu2_C* GetDefaultObj();

	void ParseConnectionId(bool* Result, class FString* Connect_lobby, const class FString& ConnectLobbyId, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_GetCommandLine_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Split_LeftS_1, const class FString& CallFunc_Split_RightS_1, bool CallFunc_Split_ReturnValue_1);
	void OnFailure_B301643A46E9D679E0B09FBFAFA230E7();
	void OnSuccess_B301643A46E9D679E0B09FBFAFA230E7();
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnFailure_CFC0E21541933D6CB40E358748D381C3(TArray<struct FOnlineSubsystemFriendInfo>& Results);
	void OnSuccess_CFC0E21541933D6CB40E358748D381C3(TArray<struct FOnlineSubsystemFriendInfo>& Results);
	void OnFailure_A2D7BA77487E87B53C2E14AC39682D7A(TArray<struct FBlueprintSessionResult>& Results);
	void OnSuccess_A2D7BA77487E87B53C2E14AC39682D7A(TArray<struct FBlueprintSessionResult>& Results);
	void OnFailure_08BE7A77434503A052FFA68E6049E546();
	void OnSuccess_08BE7A77434503A052FFA68E6049E546();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_NMainMenu2(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, TArray<struct FOnlineSubsystemFriendInfo>& K2Node_CustomEvent_Results_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FOnlineSubsystemFriendInfo>& K2Node_CustomEvent_Results_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FOnlineSubsystemFriendInfo>& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_1, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<struct FBlueprintSessionResult>& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Array_Length_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Array_Index_Variable, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const class FString& CallFunc_GetSessionIdStr_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, const struct FOnlineSubsystemFriendInfo& CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, int32 Temp_int_Loop_Counter_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class USHGetFriendsCallbackProxy* CallFunc_GetFriendsList_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class USHFindFrndsSessionsCallbackProxy* CallFunc_FindFriendsSessions_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UMainMenuRoot_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_ParseConnectionId_Result, const class FString& CallFunc_ParseConnectionId_connect_lobby, bool CallFunc_EqualEqual_StrStr_ReturnValue);
};

}


