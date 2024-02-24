#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x770 - 0x6F8)
// BlueprintGeneratedClass BP_SophiaCharacterController.BP_SophiaCharacterController_C
class ABP_SophiaCharacterController_C : public ASophiaController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         SettingsOpen;                                      // 0x700(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D54[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_LobbyHUD_C*                       LobbyHUD;                                          // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnToggleCharacterCustomization;                    // 0x710(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AFirstPersonCharacter_C*               PlayerRef;                                         // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USophiaGameInstance*                   GI;                                                // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          KeyGroup;                                          // 0x730(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASophiaHUD*                            PlayerHud;                                         // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWBP_ReceivePartyInvite_C*             PartyInviteWidget;                                 // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                 Level;                                             // 0x748(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SophiaCharacterController_C* GetDefaultObj();

	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_CameraF_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_CameraB_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_CtrlPlusShift_F7_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ReceiveBeginPlay();
	void SensitivityChanged(float NewValue);
	void BP_KickClient(bool bIsConquest);
	void DestroySessionLocal(TSoftObjectPtr<class UWorld> Level);
	void ReceivePossess(class APawn* PossessedPawn);
	void BP_OnPartyInvite(const struct FPartyInvite& Invite);
	void ToggleDebugCamera();
	void BP_ServerFPS(int32 Index);
	void BP_RemovePartyInvite();
	void ExecuteUbergraph_BP_SophiaCharacterController(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FGameplayTag& CallFunc_GetKeyGroupStatic_ReturnValue, class UGISSteam* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, float K2Node_CustomEvent_NewValue, bool K2Node_Event_bIsConquest, TSoftObjectPtr<class UWorld> K2Node_CustomEvent_Level, class APawn* K2Node_Event_PossessedPawn, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FPartyInvite& K2Node_Event_Invite, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_3, class UWBP_ReceivePartyInvite_C* CallFunc_Create_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key, bool Temp_bool_Has_Been_Initd_Variable, int32 K2Node_Event_Index, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess_4, class ABP_SophiaHUD_C* K2Node_DynamicCast_AsBP_Sophia_HUD, bool K2Node_DynamicCast_bSuccess_5, class AHUD* CallFunc_GetHUD_ReturnValue, class ASophiaHUD* K2Node_DynamicCast_AsSophia_HUD, bool K2Node_DynamicCast_bSuccess_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_7, const struct FKey& K2Node_InputActionEvent_Key_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABP_SophiaSplashMenuGameMode_C* K2Node_DynamicCast_AsBP_Sophia_Splash_Menu_Game_Mode, bool K2Node_DynamicCast_bSuccess_8, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_DeluxeItemClaimed_C* CallFunc_Create_ReturnValue_1);
	void OnToggleCharacterCustomization__DelegateSignature(bool Open);
};

}


