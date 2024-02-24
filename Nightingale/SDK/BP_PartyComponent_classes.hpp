#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x368 - 0x250)
// BlueprintGeneratedClass BP_PartyComponent.BP_PartyComponent_C
class UBP_PartyComponent_C : public UPartyComponentBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnPlayerListChanged;                               // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPartyInvite                          PartyInvite;                                       // 0x268(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnPartyListChanged;                                // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  InviteTitleText;                                   // 0x2C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UWBP_Popup_General_C*                  InvitePopup;                                       // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPendingInvitesChanged;                           // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Popup_General_C*                  WarningPopup;                                      // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  TravelInvitePopup;                                 // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTravelInviteBP                       TravelInvite;                                      // 0x300(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_RealmHistory_Persistence_C*        RealmHistoryPersistenceComponent;                  // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPartyMemberJoinedParty;                          // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPartyMemberLeftParty;                            // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_PartyComponent_C* GetDefaultObj();

	void OnTravelInviteClosePopup(class UNWXCommonWindowWidget* Window, bool CallFunc_IsValid_ReturnValue);
	void Accept_Travel_Invite_Popup();
	void Reject_Travel_Invite_Popup();
	void OnTravelInviteReceived(const struct FTravelInviteBP& Invite, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const class FString& CallFunc_GetPublicNameWithDiscriminator_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText Temp_text_Variable_3);
	void OnWarningPopupClose(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void AcceptWarningPopup();
	void RejectInviteFromQueue(const struct FPartyInvite& Invite);
	void AcceptInviteFromQueue(const struct FPartyInvite& Invite, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class FText Temp_text_Variable_2, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class FText Temp_text_Variable_3, const class FString& CallFunc_GetRoomName_ReturnValue, bool CallFunc_IsPlayerInParty_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnInvitePopupClose(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue);
	void CloseInvitePopup();
	void RejectInvitePopup();
	void AcceptInvitePopup();
	void HandlePartyMemberChanged(const struct FProfileNamesMapWrapper& Wrapper, const struct FOnlineServiceStatus& ServiceStatus, const class FString& PlayerName, bool CallFunc_IsSuccess_bIsSuccess, TArray<struct FUniqueName>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys, const struct FUniqueName& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetPublicNameWithDiscriminator_ReturnValue, bool CallFunc_IsPlayerInMyParty_ReturnValue);
	void DisplayNotification(class FText NotificationTitle, class FText NotificationDescription, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FS_UpdaterNotificatorInfo& K2Node_MakeStruct_S_UpdaterNotificatorInfo, bool CallFunc_IsValid_ReturnValue, class ANWXCommonHUD* CallFunc_GetNWXCommonHUD_ReturnValue, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	void OnPartyInviteREceived(struct FPartyInvite& Invite, enum class ESlateVisibility PartyInviteWarningVisibility, class FText PartyInviteWarning, class FText Temp_text_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText Temp_text_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText Temp_text_Variable_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsPlayerInParty_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_CurrentlyAcceptingInvites_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText Temp_text_Variable_3);
	void OnPartyInviteFailed(enum class EPartyActionFailure Reason, bool K2Node_SwitchEnum_CmpSuccess);
	void OnPartyJoinFailed(enum class EPartyActionFailure Reason, bool K2Node_SwitchEnum_CmpSuccess);
	void OnPartyMemberChanged(const class FString& RoomId, const class FString& ProfileId, const class FString& ProfileName, TArray<class FString>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnPartyRoomChanged(const class FString& RoomId, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TArray<class ANWXPlayerState*>& CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue, class ANWXPlayerState* CallFunc_Array_Get_Item, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue_1, bool CallFunc_NotEqual_StriStri_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7);
	TArray<struct FS_MapPartyMemberInfo> GetPartyMemberMapInfo(class ABP_PlayerState_C* LPartyMemberPlayerState, const TArray<struct FS_MapPartyMemberInfo>& PartyMemberMapInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsPlayerInMyParty_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, TArray<class ANWXPlayerState*>& CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ANWXPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FS_MapPartyMemberInfo& K2Node_MakeStruct_S_MapPartyMemberInfo, int32 CallFunc_Array_Add_ReturnValue);
	void OnCreatePartyComplete(bool bSuccess);
	bool CurrentlyAcceptingInvites(TArray<struct FGameplayTag>& CallFunc_GetAllLayerTags_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UNWXCommonWindowWidget* CallFunc_FindWindowInLayers_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInAnyDeathState_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void LeaveParty(bool CallFunc_LeaveCurrentParty_ReturnValue);
	void CreateParty(bool* Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsPlayerInMyParty_ReturnValue);
	void AcceptInvite(const struct FPartyInvite& Invite, bool CallFunc_AcceptPendingPartyInvite_ReturnValue);
	void RejectInvite(const struct FPartyInvite& Invite, bool CallFunc_RejectPendingPartyInvite_ReturnValue);
	void OnGameModeReady(class ANWXGameModeBase* GameMode, bool bIsReady);
	void OnPlayerLoggedIn(class APlayerController* NewPlayer);
	void ReceiveBeginPlay();
	void SendInvite(const class FString& InviteePlayerId);
	void ExecuteUbergraph_BP_PartyComponent(int32 EntryPoint, class UBP_RealmHistory_Persistence_C* CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component, bool CallFunc_GetRealmHistoryComponent_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXGameModeBase* K2Node_CustomEvent_GameMode, bool K2Node_CustomEvent_bIsReady, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FDelegateHandleBPWrapper& CallFunc_AwaitGameModeBPTimed_Handle, class ABP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode, bool K2Node_DynamicCast_bSuccess, class APlayerController* K2Node_CustomEvent_NewPlayer, bool CallFunc_IsDedicatedServer_ReturnValue, const class FString& K2Node_CustomEvent_InviteePlayerId);
	void OnPartyMemberLeftParty__DelegateSignature(const class FString& PlayerName);
	void OnPartyMemberJoinedParty__DelegateSignature(const class FString& PlayerName);
	void OnPendingInvitesChanged__DelegateSignature();
	void OnPartyListChanged__DelegateSignature();
	void OnPlayerListChanged__DelegateSignature();
};

}


