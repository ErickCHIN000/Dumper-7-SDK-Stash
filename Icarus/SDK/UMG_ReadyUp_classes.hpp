#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x259 (0x4B9 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ReadyUp.UMG_ReadyUp_C
class UUMG_ReadyUp_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_BasicButton_2_C*                  CancelButton;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ContentSwitcher;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        ContractTabButton;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        CrewTabButton;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  EvenSplitButton;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  HomeButton;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_139;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               LaunchButtonBorder;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  LaunchDropButton;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LaunchDropOverlay;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_MenuHeader_C*        LoadoutTabButton;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainOverlay;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               NoContractBorder;                                  // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NotReadyInstructionText;                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ReadyButton;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Chatbox_C*                        UMG_Chatbox;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Crew_C*                           UMG_Crew;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoadingIcon_C*                    UMG_LoadingIcon;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PartySpace_C*                     UMG_PartySpace;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SpaceMenu_Cargo_C*                UMG_SpaceMenu_Cargo;                               // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                ProspectID;                                        // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FFProspectServerInfo                  Current_Contract;                                  // 0x318(0x19B)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_5581[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         BoundToBackend;                                    // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_ReadyUp_C* GetDefaultObj();

	void SetReadyUpButtonStates(bool Enabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void ShowError(const struct FErrorCodesEnum& ErrorCode, class UIcarusErrorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue);
	void SetContentState(enum class E_ContractTabs Tab, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void Log(const class FString& Description);
	void LoadoutUpdated(class FText Dropship, class FText EnviroSuit, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess);
	void PartyReadyStateChanged(bool AllPlayersReady, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1);
	void Reset(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsServer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Show_Loading_Screen(class FText Loading_Screen_Text);
	void Construct();
	void BndEvt__LaunchDropButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__EvenSplitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void OnOpened();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__ReadyButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void Launch();
	void BndEvt__ContractTabButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void BndEvt__LoadoutTabButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void BndEvt__CrewTabButton_K2Node_ComponentBoundEvent_6_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void ReadyUpResult();
	void ExecuteUbergraph_UMG_ReadyUp(int32 EntryPoint, bool CallFunc_GetIcarusGameStateSpace_bValid, class AIcarusGameStateSpace* CallFunc_GetIcarusGameStateSpace_ReturnValue, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_ProspectInfoIsValid_Valid, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_2, class FText K2Node_CustomEvent_Loading_Screen_Text, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool CallFunc_GetIcarusGameStateSpace_bValid_1, class AIcarusGameStateSpace* CallFunc_GetIcarusGameStateSpace_ReturnValue_1, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space_1, bool K2Node_DynamicCast_bSuccess_5, class ASpaceStation_GameState_C* K2Node_DynamicCast_AsSpace_Station_Game_State_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsServer_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_3, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValidSession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FProspectInfo& CallFunc_MakeProspectInfoFromExtraSettings_ReturnValue, const struct FFProspectServerInfo& K2Node_MakeStruct_FProspectServerInfo, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_2, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_1, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent_1, bool CallFunc_GetBackendProxyComponent_bSuccess_1, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent_2, bool CallFunc_GetBackendProxyComponent_bSuccess_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent_3, bool CallFunc_GetBackendProxyComponent_bSuccess_3, bool CallFunc_IsServer_ReturnValue_1);
};

}


