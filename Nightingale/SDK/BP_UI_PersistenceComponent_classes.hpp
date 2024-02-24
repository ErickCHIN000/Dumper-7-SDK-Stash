#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x249 (0x341 - 0xF8)
// BlueprintGeneratedClass BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C
class UBP_UI_PersistenceComponent_C : public UPersistentDataComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FS_DebugMenuSettings                  DebugMenuPreferences;                              // 0x100(0x1D)(Edit, BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_2EF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_UI_Preferences_Guidebook           GuideBookPreferences;                              // 0x120(0x90)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	bool                                         Realm_Inventory_Management_Enabled;                // 0x1B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MenuCamera_FoV;                                    // 0x1B8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MenuCamera_BoomArmLength;                          // 0x1C0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MenuCamera_Pedestal;                               // 0x1C8(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              MenuCamera_Rotation;                               // 0x1E0(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	int32                                        AccessibilityReader_FontIndex;                     // 0x1F8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AccessibilityReader_FontSize;                      // 0x1FC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AccessibilityReader_BackgroundOpacity;             // 0x200(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_WaypointInformation>        PlayerWaypoints;                                   // 0x208(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, ContainsInstancedReference)
	bool                                         IsGamespaceUIEnabled;                              // 0x218(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNotificationsEnabled;                            // 0x219(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHUD_UI_Visible;                                  // 0x21A(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F32[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ToggleHUDNotifications;                            // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnGamespaceUIToggled;                              // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         OverrideEnabledForGamespaceUI;                     // 0x240(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastUsedMapUI_Zoom;                                // 0x248(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AmmoPinned;                                        // 0x250(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	enum class EEntrySortOrder                   InvSortOrder;                                      // 0x251(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HUD_HidePocketWatch;                               // 0x252(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DB_Env_GroupVisibilty_Colors;                      // 0x253(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DB_Env_GroupVisibilty_Clouds;                      // 0x254(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DB_Env_GroupVisibilty_Season;                      // 0x255(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DB_Env_GroupVisibilty_AtmoFog;                     // 0x256(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DB_Env_GroupVisibilty_Brightness;                  // 0x257(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DB_Env_GroupVisibilty_CelestialControls;           // 0x258(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DB_Env_GroupVisibilty_Extras;                      // 0x259(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F76[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Debug_ShowEncounterTracks;                         // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  Feedback_Cached_Title;                             // 0x270(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)
	class FText                                  Feedback_Cached_Description;                       // 0x288(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)
	int32                                        Feedback_Screen_Dropdown_1;                        // 0x2A0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Feedback_Screen_Dropdown_2;                        // 0x2A4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug_HideWaterMark;                               // 0x2A8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ToggleHUDWaterMark;                                // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Debug_HideInteractionHighlighting;                 // 0x2C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DB_ToggleInteractHighlightVisibility;              // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         GoalTracker_ShowPanel;                             // 0x2D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         GoalTracker_SortbyGroup;                           // 0x2D9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FAB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       GoalTracker_BG_Opacity;                            // 0x2E0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	double                                       GoalTracker_TextScale;                             // 0x2E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GoalTrackerSettingsUpdated;                        // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       Chat_Pref_TimeToFade;                              // 0x300(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Chat_BG_Opacity;                                   // 0x308(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Chat_Text_Scale;                                   // 0x310(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Chat_Visibility;                                   // 0x318(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Chat_Last_Active_Channel;                          // 0x31C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HighestHopeMaxReached;                             // 0x320(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            HighestMaxHopeUpdated;                             // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         PocketWatch_ShowMap;                               // 0x338(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Inventory_Preference_ActiveGrid;                   // 0x33C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UnlockedTravelToSanctuary;                         // 0x340(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_UI_PersistenceComponent_C* GetDefaultObj();

	bool IsDiscoveryRewardTagHandled(const struct FGameplayTag& GameplayTag, bool bResult, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void OnRep_UnlockedTravelToSanctuary();
	void OnRep_HighestHopeMaxReached();
	void OnRep_GoalTracker_BG_Opacity();
	void OnRep_GoalTracker_TextScale();
	void OnRep_GoalTracker_SortbyGroup();
	void OnRep_GoalTracker_ShowPanel();
	void OnRep_Debug_HideInteractionHighlighting();
	void OnRep_Debug_HideWaterMark();
	void OnRep_DebugShowEncounterTracks();
	void OnRep_IsGamespaceUIEnabled();
	void OnRep_IsNotificationsEnabled();
	void RemovePlayerWaypointFromPersistenceByID(const struct FGuid& WaypointID, int32 IndexToRemove, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FS_WaypointInformation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void AddPlayerWaypointToPersistence(const struct FGuid& ID, const struct FVector& WorldLocation, const struct FDataTableRowHandle& WaypointType, bool ServerVerified, double AreaRadius, const struct FS_WaypointInformation& K2Node_MakeStruct_S_WaypointInformation, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float K2Node_MakeStruct_AreaRadius_50_A3B286DF40743CBE17C12692BBB73875_ImplicitCast);
	void DB_UpdatePreference_EnviroGroupViz_CelestialControls(bool Toggle_GroupVisibilty_CelestialControls);
	void DB_UpdatePreference_EnviroGroupViz_Brightness(bool Toggle_GroupVisibilty_Brightness);
	void DB_UpdatePreference_EnviroGroupViz_Season(bool Toggle_GroupVisibilty_Season);
	void DB_UpdatePreference_EnviroGroupViz_AtmoFog(bool Toggle_GroupVisibilty__AtmoFog);
	void DB_UpdatePreference_EnviroGroupViz_Extras(bool Toggle_GroupVisibilty__Extras);
	void DB_ToggleWaterMarkVis();
	void DB_ToggleInteractHighlighting();
	void Set_Acc_FontSize(int32 FontSize);
	void Set_Acc_FontIndex(int32 FontIndex);
	void Set_Acc_BackgroundOpacity(double BackgroundOpacity);
	void SetMenuCam_Pref_FoV(double Value);
	void SetMenuCam_Pref_Zoom(double Value);
	void SetMenuCam_Pref_Pedestal(const struct FVector& MenuCamera_Pedestal);
	void SetMenuCam_Pref_ArmRotation(const struct FRotator& Value);
	void DB_UpdatePreference_EnviroGroupViz_Clouds(bool DB_Env_GroupVisibilty_Clouds);
	void DB_UpdatePreference_EnviroGroupViz_Colors(bool DB_Env_GroupVisibilty_Colors);
	void UpdateDebugMenu_LastUsed(const struct FS_DebugMenuSettings& DebugSettings);
	void Server_SaveGuideBookPreferences(const struct FS_UI_Preferences_Guidebook& GuideBookPreferences);
	void DebugMenuToggleGamespaceUI();
	void ToggleSuppressNotifications();
	void EnableGamespaceUI();
	void DisableGamespaceUI();
	void SetPreference_Chat_LastActiveChannel(int32 LastActiveChannel);
	void SetPreference_Chat_TimeToFadeOut(double Chat_TimeToFade);
	void SetPreference_ChatBG_Opacity(double Chat_BG_Opacity);
	void ServerEnableGamespaceUI();
	void ServerDisableGamespaceUI();
	void SaveLastUsedMapZoom(double LastUsedZoom);
	void SetPreference_ChatTextScale(double Chat_TextScale);
	void Client_UpdateItemSortOrder(enum class EEntrySortOrder NewSortOrder);
	void Server_UpdateItemSortOrder(enum class EEntrySortOrder NewSortOrder);
	void Client_SaveGuideBookPreferences(const struct FS_UI_Preferences_Guidebook& GuideBookPreferences);
	void Server_RefreshFeedbackFields(class FText FeedbackScreen_CachedTitle, class FText FeedbackScreen_CachedDescription, int32 FeedbackScreen_Dropdown1, int32 FeedbackScreen_Dropdown2);
	void Server_SaveHighestHopeMaxReached(double HighestHopeMaxReached);
	void Server_SavePocketWatchMode(bool ShowMinimap);
	void Client_SavePocketWatchMode(bool ShowMinimap);
	void EnableTravelToSanctuary();
	void HandleDiscoveryRewardFromTag(const struct FGameplayTag& GameplayTag);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_UI_PersistenceComponent(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerState* K2Node_DynamicCast_AsPlayer_State, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerState* K2Node_DynamicCast_AsPlayer_State_1, bool K2Node_DynamicCast_bSuccess_1, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_CanUseSupportCommands_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_CanUseSupportCommands_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class APlayerState* K2Node_DynamicCast_AsPlayer_State_2, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_2, bool K2Node_DynamicCast_bSuccess_5, class APlayerState* K2Node_DynamicCast_AsPlayer_State_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_CanUseSupportCommands_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_3, bool K2Node_DynamicCast_bSuccess_7, bool K2Node_CustomEvent_Toggle_GroupVisibilty__Extras, bool CallFunc_CanUseSupportCommands_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_4, bool K2Node_CustomEvent_Toggle_GroupVisibilty__AtmoFog, class APlayerState* K2Node_DynamicCast_AsPlayer_State_4, bool K2Node_DynamicCast_bSuccess_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_5, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_4, bool K2Node_DynamicCast_bSuccess_9, class APlayerState* K2Node_DynamicCast_AsPlayer_State_5, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_CanUseSupportCommands_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_5, bool K2Node_DynamicCast_bSuccess_11, bool K2Node_CustomEvent_Toggle_GroupVisibilty_Season, bool CallFunc_CanUseSupportCommands_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue_6, bool K2Node_CustomEvent_Toggle_GroupVisibilty_Brightness, class APlayerState* K2Node_DynamicCast_AsPlayer_State_6, bool K2Node_DynamicCast_bSuccess_12, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class AActor* CallFunc_GetOwner_ReturnValue_7, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_6, bool K2Node_DynamicCast_bSuccess_13, class APlayerState* K2Node_DynamicCast_AsPlayer_State_7, bool K2Node_DynamicCast_bSuccess_14, bool CallFunc_CanUseSupportCommands_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_7, bool K2Node_DynamicCast_bSuccess_15, bool K2Node_CustomEvent_Toggle_GroupVisibilty_CelestialControls, bool CallFunc_CanUseSupportCommands_ReturnValue_7, int32 K2Node_CustomEvent_FontSize, int32 K2Node_CustomEvent_FontIndex, double K2Node_CustomEvent_BackgroundOpacity, double K2Node_CustomEvent_Value_2, double K2Node_CustomEvent_Value_1, const struct FVector& K2Node_CustomEvent_MenuCamera_Pedestal, const struct FRotator& K2Node_CustomEvent_Value, bool K2Node_CustomEvent_DB_Env_GroupVisibilty_Clouds, bool K2Node_CustomEvent_DB_Env_GroupVisibilty_Colors, const struct FS_DebugMenuSettings& K2Node_CustomEvent_DebugSettings, const struct FS_UI_Preferences_Guidebook& K2Node_CustomEvent_GuideBookPreferences_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, int32 K2Node_CustomEvent_LastActiveChannel, bool CallFunc_Not_PreBool_ReturnValue_4, double K2Node_CustomEvent_Chat_TimeToFade, double K2Node_CustomEvent_Chat_BG_Opacity, double K2Node_CustomEvent_LastUsedZoom, double K2Node_CustomEvent_Chat_TextScale, enum class EEntrySortOrder K2Node_CustomEvent_NewSortOrder_1, enum class EEntrySortOrder K2Node_CustomEvent_NewSortOrder, const struct FS_UI_Preferences_Guidebook& K2Node_CustomEvent_GuideBookPreferences, class FText K2Node_CustomEvent_FeedbackScreen_CachedTitle, class FText K2Node_CustomEvent_FeedbackScreen_CachedDescription, int32 K2Node_CustomEvent_FeedbackScreen_Dropdown1, int32 K2Node_CustomEvent_FeedbackScreen_Dropdown2, class AActor* CallFunc_GetOwner_ReturnValue_8, bool CallFunc_HasAuthority_ReturnValue, double K2Node_CustomEvent_HighestHopeMaxReached, bool K2Node_CustomEvent_ShowMinimap_1, bool K2Node_CustomEvent_ShowMinimap, const struct FGameplayTag& K2Node_Event_GameplayTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_9, class APlayerState* K2Node_DynamicCast_AsPlayer_State_8, bool K2Node_DynamicCast_bSuccess_16, class AActor* CallFunc_GetOwner_ReturnValue_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class APlayerState* K2Node_DynamicCast_AsPlayer_State_9, bool K2Node_DynamicCast_bSuccess_17, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_8, bool K2Node_DynamicCast_bSuccess_18, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, bool CallFunc_CanUseSupportCommands_ReturnValue_8, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_9, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_CanUseSupportCommands_ReturnValue_9, class AActor* CallFunc_GetOwner_ReturnValue_11, class APlayerState* K2Node_DynamicCast_AsPlayer_State_10, bool K2Node_DynamicCast_bSuccess_20, class APlayerController* CallFunc_GetPlayerController_ReturnValue_10, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_10, bool K2Node_DynamicCast_bSuccess_21, bool CallFunc_CanUseSupportCommands_ReturnValue_10);
	void HighestMaxHopeUpdated__DelegateSignature();
	void GoalTrackerSettingsUpdated__DelegateSignature();
	void DB_ToggleInteractHighlightVisibility__DelegateSignature();
	void ToggleHUDWaterMark__DelegateSignature();
	void Debug_ShowEncounterTracks__DelegateSignature();
	void OnGamespaceUIToggled__DelegateSignature();
	void ToggleHUDNotifications__DelegateSignature();
};

}


