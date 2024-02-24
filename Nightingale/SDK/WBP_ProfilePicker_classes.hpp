#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x6A0 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_ProfilePicker.WBP_ProfilePicker_C
class UWBP_ProfilePicker_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_fade_HIDE_CharacterCreation;                  // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CharacterPhotograph_ExistingCharacter_FadeIn; // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CharacterTransition_FocusPhoto;               // 0x4D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_fade_ShowPhoto;                               // 0x4D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Fade_DeleteProfileConfirm;                    // 0x4E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Wyswig_ProfileSelect;                              // 0x4E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_fade_showCharacterCreation;                   // 0x4F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_NavBar_C*                         Bottom_NavBar;                                     // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_CreateNewProfile;                              // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_DeleteProfile;                                 // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_NavLeft;                                       // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_NavRight;                                      // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_ResumeProfile;                                 // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_SelectServer;                                  // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Cc_CharGenBorder;                                  // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               DeleteProfileConfirmPopupBorder;                   // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_playerName_Private;                            // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_profileIndex;                                  // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_profileTitle_Public;                           // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_TargetRealmLabel;                              // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_DevSelect;                                      // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Picker;                                // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_CharacterCreation_C*           WBP_CC_CharacterCreation;                          // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NavBar_News_PatchNotes_C*         WBP_NavBar_News_PatchNotes;                        // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_ProfileButtons;                     // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSelectableProfile>            Profiles;                                          // 0x588(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            ProfileSelected;                                   // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        SelectedProfileIndex;                              // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxNumberOfProfiles;                               // 0x5AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ProfileCreate;                                     // 0x5B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ProfileConfirm;                                    // 0x5C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            EmptyProfileSlotSelected;                          // 0x5D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CC_CharacterCreationCancelled;                     // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Cc_UpdateAppearancePreset;                         // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CC_AdvanceToConfirm;                               // 0x600(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CC_ReturnToAppearanceOptions;                      // 0x610(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Popup_General_CustomPlayerText_C* DeleteConfirmationPopup;                           // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_ProxyCharacter_Child_CharacterCreation_C* Character;                                         // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsInCharacterCreation;                             // 0x630(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CC_CamModeChange;                                  // 0x638(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class AStaticMeshActor*>              SceneProps;                                        // 0x648(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	class ACameraActor*                          CameraActor_Scene;                                 // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Character_Standing;                                // 0x660(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5501[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            JoinAsNewProfile;                                  // 0x668(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CC_CharacterCreation_C*           CharacterCreationWidget;                           // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          AkComponent;                                       // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       LogoutShutdownTime;                                // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CountdownDisplay_C*               LogoutCountdownDisplay;                            // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_QuitGame_C*                 QuitPopup;                                         // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ProfilePicker_C* GetDefaultObj();

	void OnQuitPopupClosed(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue);
	void InitializeCCStartingCameraPosition(class ABP_CharacterCreation_ProxyChar_Base_C* Self2, double Temp_real_Variable, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetNormalizedCameraZoom_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, enum class E_CC_CharacterPose Temp_byte_Variable, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_SafeDivide_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void ClearIntro();
	void OnLoginStateChanged(enum class E_UILoginState UILoginState, bool K2Node_SwitchEnum_CmpSuccess);
	void TriggerDeleteAudio(FDelegateProperty_ Temp_delegate_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	bool BP_OnHandleBackAction(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UNWXGameInstance* K2Node_DynamicCast_AsNWXGame_Instance, bool K2Node_DynamicCast_bSuccess);
	void Create_Quit_Widget(class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsPlayerLoggedIn_ReturnValue, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Popup_QuitGame_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void On_Join_As_New_Profile(const struct FCreateProfile& Profile);
	void SetCharacterPoseAndVisibility(bool Visible_, bool Stand_Up_, bool IsNewProfile, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, bool CallFunc_GetProfileOnCurrentIndex_IsValidProfile, const struct FSelectableProfile& CallFunc_GetProfileOnCurrentIndex_Profile);
	void ChangeControlsVisibility(bool IsVisible);
	void CC_Assign_Player_Appearance(const struct FDataTableRowHandle& AppearanceHandle, class UBP_CharacterCustomization_Component_C* CustomizationComponent);
	void SelectLastConnectedProfile(int32 RecentlyConnectedProfileIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSelectableProfile& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_Int64Int64_ReturnValue);
	class UWidget* Get_BU_DeleteProfile_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void OnProfileListUpdated(TArray<struct FSelectableProfile>& Profiles, struct FOnlineServiceStatus& Status);
	void OnProfileDeleted(struct FOnlineServiceStatus& Status, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsSuccess_bIsSuccess, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DeleteProfile(const struct FSelectableProfile& Profile, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void UpdateProfileIndexText(int64 CallFunc_Conv_IntToInt64_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateNavButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1);
	void AnimCharacterCreationFinished(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnDeleteConfirmationClosed(class UNWXCommonWindowWidget* Window, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void DeleteConfirmed(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetProfileOnCurrentIndex_IsValidProfile, const struct FSelectableProfile& CallFunc_GetProfileOnCurrentIndex_Profile);
	void OpenDeleteConfirmationWindow(class FText Temp_text_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_General_CustomPlayerText_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GetProfileOnCurrentIndex_IsValidProfile, const struct FSelectableProfile& CallFunc_GetProfileOnCurrentIndex_Profile, class FText Temp_text_Variable_1, const class FString& CallFunc_GetPublicNameWithDiscriminator_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void BeginNewProfileCreation(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_CC_CharacterCreation_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void GetProfileOnCurrentIndex(bool* IsValidProfile, struct FSelectableProfile* Profile, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void NavigateNext(int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void NavigatePrevious(int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void SelectInvalidProfile(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void SelectValidProfile(struct FSelectableProfile& Profile, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, TMap<enum class ELoadoutSlotType, struct FInventoryEntry> CallFunc_GetEquippedEntriesFromMetadata_ReturnValue, class UBP_CharacterCustomization_Component_C* CallFunc_GetComponentByClass_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetPublicNameWithDiscriminator_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void UpdateSelectedProfile(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_GetProfileOnCurrentIndex_IsValidProfile, const struct FSelectableProfile& CallFunc_GetProfileOnCurrentIndex_Profile, bool CallFunc_GetProfileOnCurrentIndex_IsValidProfile_1, const struct FSelectableProfile& CallFunc_GetProfileOnCurrentIndex_Profile_1);
	void OnUsingGamepadChanged(bool bUsingGamepad);
	struct FEventReply OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue);
	bool CanSelectDeployment(class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsDevEnvironment_ReturnValue, bool CallFunc_HasSupportPermissions_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	struct FEventReply OnInputPrevious(const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnInputNext(const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnInputContext(int32 ContextIndex, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_TryFetchDeployments_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, bool CallFunc_CanSelectDeployment_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	class UWidget* Get_BU_SelectServer_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void UpdateDeploymentSelectionVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_CanSelectDeployment_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void CharCreateCancelFinished();
	void BndEvt__WBP_ProfilePicker_BU_C_NavLeft_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ProfilePicker_BU_C_NavRight_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ProfilePicker_BU_C_ResumeProfile_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ProfilePicker_BU_C_CreateNewProfile_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ProfilePicker_BU_C_DeleteProfile_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void CharacterCreationCancelled_ReturnToProfilePicking();
	void ReturnToCC_FromFinalize();
	void CC_PlayerAppearanceUpdate(const struct FDataTableRowHandle& PresetRow);
	void CC_AdvanceToConfirmation();
	void CC_CameraModeChange(enum class E_CC_CameraMode Camera_Mode, double Zoom_Level);
	void CC_LightingChange(double Lighting);
	void PlayAnim_hideMenu();
	void VFX_DeleteProfile();
	void Destruct();
	void BndEvt__WBP_ProfilePicker_CBU_SelectServer_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void CustomEvent();
	void OnCloseClicked_Event();
	void OnConsoleLogout_Event();
	void BP_OnActivated();
	void ExecuteUbergraph_WBP_ProfilePicker(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_GetProfileOnCurrentIndex_IsValidProfile, const struct FSelectableProfile& CallFunc_GetProfileOnCurrentIndex_Profile, const struct FDataTableRowHandle& K2Node_CustomEvent_PresetRow, enum class E_CC_CameraMode K2Node_CustomEvent_Camera_Mode, double K2Node_CustomEvent_Zoom_Level, double K2Node_CustomEvent_Lighting, bool CallFunc_NVFX_SpawnExplosion_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnExplosion_SpawnedSystem, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UWBP_CountdownBackground_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UWBP_CountdownDisplay_C* CallFunc_Create_ReturnValue_1, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_TryFetchDeployments_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UNWXGameInstance* K2Node_DynamicCast_AsNWXGame_Instance, bool K2Node_DynamicCast_bSuccess, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, bool CallFunc_IsOnConsolePlatform_ReturnValue);
	void JoinAsNewProfile__DelegateSignature(const struct FCreateProfile& Profile);
	void CC_CamModeChange__DelegateSignature(enum class E_CC_CameraMode Camera_Mode, double Zoom_Level);
	void CC_ReturnToAppearanceOptions__DelegateSignature();
	void CC_AdvanceToConfirm__DelegateSignature();
	void Cc_UpdateAppearancePreset__DelegateSignature(const struct FDataTableRowHandle& PresetRow);
	void CC_CharacterCreationCancelled__DelegateSignature();
	void EmptyProfileSlotSelected__DelegateSignature();
	void ProfileConfirm__DelegateSignature(const struct FSelectableProfile& SelectedProfile);
	void ProfileCreate__DelegateSignature();
	void ProfileSelected__DelegateSignature(const struct FSelectableProfile& Profile);
};

}


