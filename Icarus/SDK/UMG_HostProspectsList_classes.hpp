#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x348 - 0x260)
// WidgetBlueprintGeneratedClass UMG_HostProspectsList.UMG_HostProspectsList_C
class UUMG_HostProspectsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BackgroundPattern;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SessionFilterCheckbox_C*          FilterCheckbox_Locked;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SessionFilterCheckbox_C*          FilterCheckbox_MatchingVersion;                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_87;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LoadingScreen;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             MultiplayerList;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MultiplayerVertBox;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      ProspectNameTextbox;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ServerCountText;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SessionSortButton_C*              SortButton_Difficulty;                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SessionSortButton_C*              SortButton_Duration;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SessionSortButton_C*              SortButton_Hardcore;                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SessionSortButton_C*              SortButton_Host;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SessionSortButton_C*              SortButton_Ping;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SessionSortButton_C*              SortButton_Prospect;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SessionSortButton_C*              SortButton_Slots;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoadingIcon_C*                    UMG_LoadingIcon;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MultiToggle_C*                    UMG_MultiToggle;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SpacePlayerInfo_C*                UMG_SpacePlayerInfo;                               // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SelectProspect;                                    // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class ESessionSortType                  SortType;                                          // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESessionSortDirection             SortDirection;                                     // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Dedicated;                                         // 0x312(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ClaimedProspect;                                   // 0x313(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_DirectConnectInput_C*             DirectConnectInput;                                // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                DirectConnectString;                               // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        Previous_Toggle_Index;                             // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CachedDirectConnectString;                         // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_HostProspectsList_C* GetDefaultObj();

	void OnFocus();
	class FText Get_ServerCountText(int32 CallFunc_GetNumItems_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void ClearDirectConnect(bool CallFunc_IsEmpty_ReturnValue);
	void UpdateQueryFilters(const TArray<struct FSessionsSearchSetting>& Filters, bool CallFunc_IsEmpty_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue, const struct FSessionsSearchSetting& CallFunc_MakeLiteralSessionSearchProperty_ReturnValue, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ClearList();
	void AddInstanceToList(class UObject* Instance);
	void SessionButtonClicked(class UUMG_ButtonBase_C* Button, class UUMG_SessionSortButton_C* ButtonPressed, enum class ESessionSortType OldSortType, bool NewType, enum class ESessionSortType NewSortType, class UUMG_SessionSortButton_C* Temp_object_Variable, class UUMG_SessionSortButton_C* K2Node_DynamicCast_AsUMG_Session_Sort_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESessionSortType Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMG_SessionSortButton_C* K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue_1);
	void SetLoading(bool Loading);
	void RefreshList(bool Dedicated, bool ClaimedProspect, bool Temp_bool_Variable, enum class ESessionSearchType Temp_byte_Variable, enum class ESessionSearchType Temp_byte_Variable_1, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FSessionFilters& K2Node_MakeStruct_SessionFilters, const struct FSessionQuery& K2Node_MakeStruct_SessionQuery, enum class ESessionSearchType K2Node_Select_Default, TArray<class UIcarusSessionResult*>& CallFunc_GetSessions_ReturnValue);
	void Construct();
	void SortButton(class UUMG_ButtonBase_C* Button);
	void FilterCheked(enum class ESessionFilterState Checked, bool WasForced);
	void BndEvt__UMG_HostProspectsList_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__UMG_HostProspectsList_UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature(int32 PreviousToggleIndex, int32 CurrentToggleIndex);
	void OnFindInstance(class UIcarusSessionResult* Session);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnSessionsCleared();
	void ConfirmDirectConnect();
	void CancelDirectConnect();
	void ProspectSelected(const struct FFProspectServerInfo& ProspectInfo, bool Active);
	void OnSessionsUpdated();
	void ExecuteUbergraph_UMG_HostProspectsList(int32 EntryPoint, enum class ESteamSearchType Temp_byte_Variable, enum class ESteamSearchType Temp_byte_Variable_1, enum class ESteamSearchType Temp_byte_Variable_2, enum class ESteamSearchType Temp_byte_Variable_3, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMG_DirectConnectInput_C* CallFunc_Create_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsFindDedicatedSessionsRunning_ReturnValue, bool CallFunc_IsFindFriendSessionsRunning_ReturnValue, enum class ESessionSearchType CallFunc_GetCurrentSearchType_ReturnValue, enum class ESessionSearchType Temp_byte_Variable_4, bool K2Node_Select_Default, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button, enum class ESessionFilterState K2Node_CustomEvent_Checked, bool K2Node_CustomEvent_WasForced, class FText K2Node_ComponentBoundEvent_Text, int32 K2Node_ComponentBoundEvent_PreviousToggleIndex, int32 K2Node_ComponentBoundEvent_CurrentToggleIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESteamSearchType Temp_byte_Variable_5, class UIcarusSessionResult* K2Node_CustomEvent_Session, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Variable, enum class ESteamSearchType K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, const class FString& CallFunc_GetConnectString_Pasword, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool CallFunc_IsEmpty_ReturnValue, const struct FFProspectServerInfo& K2Node_CustomEvent_ProspectInfo, bool K2Node_CustomEvent_Active, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void SelectProspect__DelegateSignature(const struct FFProspectServerInfo& ProspectInfo, bool Active);
};

}


