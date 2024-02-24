#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x450 (0xC08 - 0x7B8)
// BlueprintGeneratedClass BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C
class ABP_IcarusPlayerControllerSpace_C : public AIcarusPlayerControllerSpace
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MoveToOperable_NewTrack_0_AE7BB1BA4A6ECAA53003F08A62920011; // 0x7C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveToOperable__Direction_AE7BB1BA4A6ECAA53003F08A62920011; // 0x7C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_592D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    MoveToOperable;                                    // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_UserInterfaceSpace_C*             UserInterface;                                     // 0x7D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FocusedOnObject;                                   // 0x7D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_593D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFProspectServerInfo                  ProspectInfo;                                      // 0x7E0(0x19B)(Edit, BlueprintVisible, Net, RepNotify, HasGetValueTypeHash)
	uint8                                        Pad_5942[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Requested_Prospect_Info;                           // 0x980(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_594B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_InputCaptureComponent_C*           InputCapture;                                      // 0x988(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PlayerCharacterClass;                              // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTransitioningPossession;                          // 0x998(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_595B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusCharacterDummy_C*            DefaultCharacterDummy;                             // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusCameraPawn_C*                CharacterSelectionCamera;                          // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class ESpaceMenuScene, class ABP_SpaceMenuCamera_C*> MenuScreenCameras;                                 // 0x9B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FOnlineProfileCharacter               SelectedCharacter;                                 // 0xA00(0xA0)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class AExponentialHeightFog*                 FxInteriorFogComponent;                            // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterLoadout                     Retrieved_Character_Loadout;                       // 0xAA8(0x138)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bLoadoutTutorialShown;                             // 0xBE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RequiresBackendInitialisation;                     // 0xBE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_597F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaItem>                     Meta_Inventory;                                    // 0xBE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FMetaItem>                     Loadout_Inventory;                                 // 0xBF8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_IcarusPlayerControllerSpace_C* GetDefaultObj();

	void GetUserInterface(class UUMG_UserInterface_Base_C** UserInterface);
	class UIcarusLinkedActorPanelBase* DisplayDynamicWidget(TSubclassOf<class UIcarusLinkedActorPanelBase> WidgetClass, class AActor* LinkedActorForWidget, class UClass* K2Node_ClassDynamicCast_AsUMG_Icarus_Linked_Actor_Panel, bool K2Node_ClassDynamicCast_bSuccess, class UUMG_IcarusLinkedActorPanel_C* CallFunc_Create_ReturnValue);
	class UUserInterfaceBase* GetUserInterfaceInternal();
	void Return_to_Character_Select(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_IcarusGameInstance_C* K2Node_DynamicCast_AsBP_Icarus_Game_Instance, bool K2Node_DynamicCast_bSuccess);
	void BackendConnection_PostInitialise(TArray<struct FMetaItem>& CallFunc_GetMetaInventory_ReturnValue, TArray<struct FMetaItem>& CallFunc_GetLoadoutInventory_ReturnValue);
	class UCheatOverlayBase* GetCheatOverlay(class UObject* WorldContextObject, class UUMG_CheatOverlay_C* CallFunc_GetCheatOverlay_Overlay);
	bool GetIsThirdPerson();
	void HasActiveSelectedCharacter(bool* HasSelectedCharacter, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_HasActiveCharacter_ReturnValue);
	void GetProspectInfo(struct FFProspectServerInfo* ProspectServerInfo);
	void OnRep_ProspectInfo();
	void MoveToOperable__FinishedFunc();
	void MoveToOperable__UpdateFunc();
	void InpActEvt_Escape_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_AltFire_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_AltFire_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key);
	void OnFailure_153E3E574849CADDC230B4BDF276D6E3(const struct FErrorCodesEnum& Result, const class FString& ExtraErrorInfo);
	void OnSuccess_153E3E574849CADDC230B4BDF276D6E3(const struct FErrorCodesEnum& Result, const class FString& ExtraErrorInfo);
	void OnFailure_C61F5EF443F6FA83FE9C9EBEFD43DCD9(const struct FErrorCodesEnum& Result, const class FString& ExtraErrorInfo);
	void OnSuccess_C61F5EF443F6FA83FE9C9EBEFD43DCD9(const struct FErrorCodesEnum& Result, const class FString& ExtraErrorInfo);
	void OnFailure_5F9E1E7C4E38E77D32A72DAA4B267722(const struct FErrorCodesEnum& Result, const class FString& ExtraErrorInfo);
	void OnSuccess_5F9E1E7C4E38E77D32A72DAA4B267722(const struct FErrorCodesEnum& Result, const class FString& ExtraErrorInfo);
	void InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ServerPushClientDynamicWidget(class UClass* WidgetClass, class AActor* LinkedActorForWidget);
	void CreateUI();
	void OnServer_ReturnFocus();
	void OnServer_GiveFocusToObject(class AActor* Object);
	void Open_Drop_Screen();
	void CloseUI();
	void OnActiveCharacterSet();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue);
	void BeginInputCapture(class UBP_InputCaptureComponent_C* InputCaptureComponent, class AActor* CapturedActor);
	void EndInputCapture();
	void OnConnectedPlayerInitialised();
	void LerpToInputCaptureLocation(class AActor* Target);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
	void SetCharacterUI();
	void ClientUpdateSelectedCharacter();
	void SetCharacterInitialisationUI();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Get_End_Of_Drop_Screen_Info();
	void MailRequest();
	void RequestSessionSettings();
	void UpdateSessionSettings(const struct FFProspectServerInfo& ProspectInfo);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BackendConnection_SetCharacter(const struct FOnlineProfileCharacter& SelectedCharacter);
	void NotifyOfCheater(const class FString& CharacterName);
	void Client_CheaterAlert(const class FString& Name);
	void UpdateCharacterPossession();
	void ReceivePossess(class APawn* PossessedPawn);
	void ClientOnPossess();
	void ShowLoadingScreen_Event(bool Show);
	void OnClient_SetReadyState(bool Ready);
	void OnServer_SetReadyState(bool Ready);
	void RefreshSessionSettings();
	void Kick();
	void LeaveSession();
	void On_Mouse_Sensitivity_Changed();
	void ExecuteClaimLaunchProspect(const struct FProspectInfo& Prospect_Info, const struct FOnlineProfileCharacter& OnlineProfileCharacter);
	void ExecuteJoinProspect(const struct FIcarusSession& IcarusSession, const struct FOnlineProfileCharacter& OnlineProfileCharacter, const class FString& ExtraSettings);
	void ExecuteResumeProspect(const struct FAssociatedProspectInfo& AssociatedProspectInfo, const struct FOnlineProfileCharacter& OnlineProfileCharacter);
	void ReturnToCharacterSelect();
	void AcceptInvite(const struct FIcarusSession& SessionToJoin);
	void BndEvt__BP_IcarusPlayerControllerSpace_PlayerDataComponent_K2Node_ComponentBoundEvent_0_OnMetaInventoryChanged__DelegateSignature();
	void ExecuteUbergraph_BP_IcarusPlayerControllerSpace(int32 EntryPoint, enum class ESpaceMenuScene Temp_byte_Variable, enum class ESpaceMenuScene Temp_byte_Variable_1, class UIcarusErrorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FErrorCodesEnum& K2Node_CustomEvent_Result_5, const class FString& K2Node_CustomEvent_ExtraErrorInfo_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FErrorCodesEnum& K2Node_CustomEvent_Result_4, const class FString& K2Node_CustomEvent_ExtraErrorInfo_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& Temp_string_Variable, const struct FErrorCodesEnum& Temp_struct_Variable, class UIcarusErrorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FErrorCodesEnum& K2Node_CustomEvent_Result_3, const class FString& K2Node_CustomEvent_ExtraErrorInfo_3, const struct FErrorCodesEnum& K2Node_CustomEvent_Result_2, const class FString& K2Node_CustomEvent_ExtraErrorInfo_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& Temp_string_Variable_1, const struct FErrorCodesEnum& Temp_struct_Variable_1, class UIcarusErrorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FErrorCodesEnum& K2Node_CustomEvent_Result_1, const class FString& K2Node_CustomEvent_ExtraErrorInfo_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FErrorCodesEnum& K2Node_CustomEvent_Result, const class FString& K2Node_CustomEvent_ExtraErrorInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const class FString& Temp_string_Variable_2, const struct FErrorCodesEnum& Temp_struct_Variable_2, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, class UClass* K2Node_CustomEvent_WidgetClass, class AActor* K2Node_CustomEvent_LinkedActorForWidget, class AActor* K2Node_CustomEvent_Object, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, float K2Node_InputAxisEvent_AxisValue_2, const struct FKey& K2Node_InputActionEvent_Key_4, bool CallFunc_IsValid_ReturnValue_1, class UBP_InputCaptureComponent_C* K2Node_CustomEvent_InputCaptureComponent, class AActor* K2Node_CustomEvent_CapturedActor, bool CallFunc_IsValid_ReturnValue_2, class ABP_Operable_C* K2Node_DynamicCast_AsBP_Operable, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_2, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_3, class AActor* K2Node_CustomEvent_Target, float K2Node_InputAxisEvent_AxisValue_1, class UCameraComponent* CallFunc_GetComponentByClass_ReturnValue, float K2Node_InputAxisEvent_AxisValue, bool CallFunc_IsValid_ReturnValue_3, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UUMG_UserInterfaceSpace_C* CallFunc_Create_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FKey& Temp_struct_Variable_3, class UBP_IcarusGameInstance_C* K2Node_DynamicCast_AsBP_Icarus_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, TArray<class UW_OperableTerminalInstructions_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputActionEvent_Key_5, class UW_OperableTerminalInstructions_C* CallFunc_Array_Get_Item, const struct FKey& K2Node_InputActionEvent_Key_6, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_ShowMainMenu_Success, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue_2, float K2Node_Event_DeltaSeconds, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FFProspectServerInfo& K2Node_CustomEvent_ProspectInfo, class ASpaceStation_Gamemode_C* K2Node_DynamicCast_AsSpace_Station_Gamemode, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FOnlineProfileCharacter& K2Node_CustomEvent_SelectedCharacter, const class FString& K2Node_Event_CharacterName, const class FString& K2Node_CustomEvent_Name, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_ShowMainMenu_Success_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsServer_ReturnValue_2, class APawn* K2Node_Event_PossessedPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ABP_IcarusCameraPawn_C* K2Node_DynamicCast_AsBP_Icarus_Camera_Pawn, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsOnlineSubsystemIcarusEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, class APlayerStart* CallFunc_GetActorOfClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_6, class ABP_IcarusCharacterDummy_C* K2Node_DynamicCast_AsBP_Icarus_Character_Dummy, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_12, const struct FKey& Temp_struct_Variable_4, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool K2Node_CustomEvent_Show, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State, bool K2Node_DynamicCast_bSuccess_5, const struct FKey& K2Node_InputActionEvent_Key_7, bool CallFunc_HasActiveSelectedCharacter_HasSelectedCharacter, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AIcarusPlayerCharacter* CallFunc_FinishSpawningActor_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_13, class ABP_IcarusCameraPawn_C* K2Node_DynamicCast_AsBP_Icarus_Camera_Pawn_1, bool K2Node_DynamicCast_bSuccess_6, const struct FKey& K2Node_InputActionEvent_Key_8, const struct FTransform& CallFunc_GetTransform_ReturnValue_2, const struct FKey& Temp_struct_Variable_5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_2, class ABP_IcarusCameraPawn_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_14, class ABP_SpaceMenuCamera_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_15, class ABP_SpaceMenuCamera_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, TArray<class AExponentialHeightFog*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class AExponentialHeightFog* K2Node_DynamicCast_AsExponential_Height_Fog, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, bool K2Node_CustomEvent_Ready_1, bool K2Node_CustomEvent_Ready, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_ShowMainMenu_Success_2, bool CallFunc_IsValid_ReturnValue_18, const struct FKey& K2Node_InputActionEvent_Key_3, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, float CallFunc_GetMouseSensitivityParameters_Yaw, float CallFunc_GetMouseSensitivityParameters_Pitch, float CallFunc_GetMouseSensitivityParameters_AimYaw, float CallFunc_GetMouseSensitivityParameters_AimPitch, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess_8, const struct FOnlineProfileCharacter& CallFunc_GetLocalSelectedCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FProspectInfo& K2Node_CustomEvent_Prospect_Info, const struct FOnlineProfileCharacter& K2Node_CustomEvent_OnlineProfileCharacter_2, class UW_OperableTerminalInstructions_C* CallFunc_Create_ReturnValue_1, class UNotificationSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const struct FIcarusSession& K2Node_CustomEvent_IcarusSession, const struct FOnlineProfileCharacter& K2Node_CustomEvent_OnlineProfileCharacter_1, const class FString& K2Node_CustomEvent_ExtraSettings, bool CallFunc_IsValid_ReturnValue_20, const struct FKey& K2Node_InputKeyEvent_Key, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_9, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_10, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_1, class UUMG_LoadingIcon_C* CallFunc_Create_ReturnValue_2, class UUMG_LoadingIcon_C* CallFunc_Create_ReturnValue_3, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_1, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_2, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_3, TMap<enum class EIcarusClaimLaunchConfirmationStep, struct FConfirmationPopupDetails> K2Node_MakeMap_Map, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_4, class UIcarusClaimLaunchSession* CallFunc_IcarusClaimLaunchSession_ReturnValue, TMap<enum class EIcarusJoinConfirmationStep, struct FConfirmationPopupDetails> K2Node_MakeMap_Map_1, class UIcarusJoinSession* CallFunc_IcarusJoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_IsValid_ReturnValue_22, const struct FAssociatedProspectInfo& K2Node_CustomEvent_AssociatedProspectInfo, const struct FOnlineProfileCharacter& K2Node_CustomEvent_OnlineProfileCharacter, bool CallFunc_IsValid_ReturnValue_23, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2, bool K2Node_DynamicCast_bSuccess_11, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_2, class UUMG_LoadingIcon_C* CallFunc_Create_ReturnValue_4, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_5, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_6, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_7, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_2, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_8, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_9, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_10, TMap<enum class EIcarusResumeConfirmationStep, struct FConfirmationPopupDetails> K2Node_MakeMap_Map_2, bool CallFunc_IsValid_ReturnValue_24, class UIcarusResumeSession* CallFunc_IcarusResumeSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_25, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, const struct FIcarusSession& K2Node_Event_SessionToJoin, class UBP_IcarusGameInstance_C* K2Node_DynamicCast_AsBP_Icarus_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_12, bool CallFunc_GetIcarusGameStateSpace_bValid, class AIcarusGameStateSpace* CallFunc_GetIcarusGameStateSpace_ReturnValue, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State_1, bool K2Node_DynamicCast_bSuccess_13, bool CallFunc_ProspectInfoIsValid_Valid);
};

}


