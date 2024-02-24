#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x3B8 - 0x340)
// WidgetBlueprintGeneratedClass WBP_Social_PlayerListEntry.WBP_Social_PlayerListEntry_C
class UWBP_Social_PlayerListEntry_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_AdditionalOptions;                             // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_AddToParty;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_AdditionalOptions;                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_MuteStatus;                                // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Horizontal_AutoScrollingText_C*   Scrolltxt_PlayerName;                              // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AddToPartyClicked;                                 // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                PlayerName;                                        // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                PlayerUniqueId;                                    // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWBP_SubContextMenu_C*                 SubContextMenu;                                    // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_Dropdown_C*                 ReportPopup;                                       // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  ReportConfirmationPopup;                           // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Social_PlayerListEntry_C* GetDefaultObj();

	void SetPlayerNameText(const class FString& CallFunc_GetFilteredPlayerNameByPersistentId_FilteredPlayerName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateAddToPartyButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, bool CallFunc_EqualEqual_StriStri_ReturnValue, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, bool CallFunc_IsPlayerInMyParty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void HandlePartyChanged(const class FString& RoomId, const class FString& ProfileId, bool CallFunc_EqualEqual_StriStri_ReturnValue);
	void UpdateMuteIconVisibility(const class FString& UniquePlayerId, enum class EMuteAction MuteAction, enum class EMuteAction Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_EqualEqual_StriStri_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void GetIsPlayerMuted(bool* IsMuted, class UMutePlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsPlayerMuted_ReturnValue);
	void OnReportConfirmationPopupClose();
	void OnReportPopupSubmit(const class FString& ReportReason, class FText Temp_text_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class FText Temp_text_Variable_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText Temp_text_Variable_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const class FString& CallFunc_GetSelectedOption_ReturnValue, bool CallFunc_ReportPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnReportPopupCancel();
	void OnSubContextMenuEntrySelected(const struct FGameplayTag& UIGameplayTag, class UMutePlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class FText CallFunc_Format_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UWBP_Popup_Dropdown_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText Temp_text_Variable_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_UnMutePlayer_ReturnValue, bool CallFunc_MutePlayer_ReturnValue);
	void OpenSubContextMenu(const TArray<struct FDataTableRowHandle>& PlayerOptions, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_SubContextMenu_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_GetIsPlayerMuted_IsMuted, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class FName K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	struct FEventReply FocusDefaultWidget(const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_FocusDefaultWidget_ReturnValue);
	void Construct();
	void Destruct();
	void BndEvt__WBP_Social_PlayerListEntry_CBU_AdditionalOptions_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Social_PlayerListEntry_CBU_AddToParty_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Social_PlayerListEntry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_GetIsPlayerMuted_IsMuted, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_EqualEqual_StriStri_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool Temp_bool_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, class UMutePlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, class UMutePlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_4);
	void AddToPartyClicked__DelegateSignature(const class FString& PlayerName, const class FString& ID);
};

}


