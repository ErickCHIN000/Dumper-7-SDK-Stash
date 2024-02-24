#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x3C8 - 0x348)
// WidgetBlueprintGeneratedClass WBP_sw_PlayerSearch.WBP_sw_PlayerSearch_C
class UWBP_sw_PlayerSearch_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_ClearSearch;                                   // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         EditableText;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Sb_Invites;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Sb_PlayersInRealm;                                 // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Sb_PlayersPreviouslyPlayedWith;                    // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Sb_Results;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_NoInvites;                                     // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_NoResults;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_SearchResults;                                  // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_Tabs;                                           // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIK_MenuTabs_C*                   WBP_UIK_MenuTabs;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      Ws_HasInvites;                                     // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      Ws_HasResults;                                     // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      Ws_PanelMode;                                      // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Ws_Tabs;                                           // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_PlayerSearch_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_0(const class FString& SearchedName, TArray<struct FSearchResultProfile>& Profiles, const class FString& NextPageToken, struct FOnlineServiceStatus& ServiceStatus);
	void ReturnNavigableTarget(class UWidget** Output);
	void PopulatePlayersPreviouslyPlayedWith(struct FGetOnlineProfileNamesByIdsResponse& Response, struct FOnlineServiceStatus& Status, class UWBP_Social_PlayerListEntry_C* CallFunc_Create_ReturnValue, bool CallFunc_IsSuccess_bIsSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void HandlePlayerInviteReceived(struct FPartyInvite& Invite);
	void UpdateAddToPartyButtons(class UPanelWidget* PanelWidget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_Social_PlayerListEntry_C* K2Node_DynamicCast_AsWBP_Social_Player_List_Entry, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void RefreshPlayersPreviouslyPlayedWith(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_RealmHistory_Persistence_C* CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component, bool CallFunc_GetRealmHistoryComponent_Success, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FGetOnlineProfileNamesByIdsRequest& K2Node_MakeStruct_GetOnlineProfileNamesByIdsRequest, bool CallFunc_Greater_IntInt_ReturnValue);
	void RefreshPlayerLists(const class FString& RoomId);
	void UnbindFromPlayerListEntryEvents(class UPanelWidget* PanelWidget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_Social_PlayerListEntry_C* K2Node_DynamicCast_AsWBP_Social_Player_List_Entry, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void BindToPlayerListEntryEvents(class UWBP_Social_PlayerListEntry_C* PlayerListEntryWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void RefreshPlayerInvites(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Social_PlayerInviteEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, TArray<struct FPartyInvite>& CallFunc_GetPendingPartyInvites_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FPartyInvite& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void PopulatePlayersInCurrentRealm(class UCanvasPanel* SocialScreenCanvas, class UWBP_Social_PlayerListEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue);
	void PopulatePlayerLists();
	void ReturnResults(const class FString& SearchedName, TArray<struct FSearchResultProfile>& Profiles, class FString& NextPageToken, struct FOnlineServiceStatus& ServiceStatus, bool CallFunc_IsSuccess_bIsSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, class FText CallFunc_Format_ReturnValue, const struct FSearchResultProfile& CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWBP_Social_PlayerListEntry_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void FocusDefaultWidget(struct FEventReply* Return_Value, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_FocusDefaultWidget_Return_Value);
	bool HasChildren(bool CallFunc_HasAnyChildren_ReturnValue);
	void InvitePlayer(const class FString& PlayerName, const class FString& ID, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent);
	void Construct();
	void BndEvt__WBP_sw_PlayerSearch_WBP_UIK_MenuTabs_K2Node_ComponentBoundEvent_2_TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab);
	void BndEvt__EditableText_64_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void Destruct();
	void BndEvt__WBP_sw_PlayerSearch_CBU_ClearSearch_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_sw_PlayerSearch(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText K2Node_ComponentBoundEvent_SelectedTabName, int32 K2Node_ComponentBoundEvent_ActiveTab, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UBP_RealmHistory_Persistence_C* CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component, bool CallFunc_GetRealmHistoryComponent_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UBP_RealmHistory_Persistence_C* CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component_1, bool CallFunc_GetRealmHistoryComponent_Success_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7);
};

}


