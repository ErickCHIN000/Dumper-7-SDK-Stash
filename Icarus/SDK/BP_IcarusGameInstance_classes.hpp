#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x878 - 0x850)
// BlueprintGeneratedClass BP_IcarusGameInstance.BP_IcarusGameInstance_C
class UBP_IcarusGameInstance_C : public UIcarusGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x850(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            RequestErrorEvent;                                 // 0x858(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ULevelStreamingDynamic*                LoadingScreenLevel;                                // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                RT_LoadingScreen;                                  // 0x870(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGameInstance_C* GetDefaultObj();

	void UpdateSentryContext(const TArray<class FString>& FlagStates, const TArray<class FString>& EventStates, const TArray<class FString>& AssociatedMembers, TMap<class FString, class FString> ProspectContext, TMap<class FString, class FString> PlayerContext, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, class USentrySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class USentrySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_HasActiveProspect_ReturnValue, const struct FProspectInfo& CallFunc_GetActiveProspectInfo_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& Temp_string_Variable_4, class USentrySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const struct FProspectInfo& Temp_wildcard_Variable, class UVersionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, const class FString& CallFunc_GetFormattedVersion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const struct FProspectInfo& K2Node_MakeStruct_ProspectInfo, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FOnlineProfileUser& CallFunc_GetActiveUserProfile_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, bool CallFunc_IsTerrainAnchorValid_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue);
	void CreateLoadingScreenRT(class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue);
	void InputTypeApplied(enum class EInputTypeSetting Value);
	void OnSessionInviteAcceptedEvent(int32 ControllerId, struct FBlueprintSessionResult& InviteResult);
	void ReceiveInit();
	void OnSessionInvite_DoNothing();
	void ExecuteUbergraph_BP_IcarusGameInstance(int32 EntryPoint, enum class EInputTypeSetting Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class UIcarusErrorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EInputTypeSetting K2Node_CustomEvent_Value, int32 K2Node_Event_ControllerId, const struct FBlueprintSessionResult& K2Node_Event_InviteResult, const struct FIcarusSession& CallFunc_CreateIcarusSessionFromSession_ReturnValue, bool K2Node_Select_Default, const class FString& CallFunc_GetServerName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, class AIcarusPlayerControllerSpace* K2Node_DynamicCast_AsIcarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_1, enum class EInputTypeSetting CallFunc_GetInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsWithEditor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void RequestErrorEvent__DelegateSignature(const struct FErrorCodesEnum& ErrorCode);
};

}


