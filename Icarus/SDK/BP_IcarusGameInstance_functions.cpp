#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGameInstance.BP_IcarusGameInstance_C
// (None)

class UClass* UBP_IcarusGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGameInstance_C");

	return Clss;
}


// BP_IcarusGameInstance_C BP_IcarusGameInstance.Default__BP_IcarusGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGameInstance_C* UBP_IcarusGameInstance_C::GetDefaultObj()
{
	static class UBP_IcarusGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGameInstance_C*>(UBP_IcarusGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.UpdateSentryContext
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              FlagStates                                                       (Edit, BlueprintVisible)
// TArray<class FString>              EventStates                                                      (Edit, BlueprintVisible)
// TArray<class FString>              AssociatedMembers                                                (Edit, BlueprintVisible)
// TMap<class FString, class FString> ProspectContext                                                  (Edit, BlueprintVisible)
// TMap<class FString, class FString> PlayerContext                                                    (Edit, BlueprintVisible)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class USentrySubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USentrySubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasActiveProspect_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectInfo               CallFunc_GetActiveProspectInfo_ReturnValue                       (ConstParm)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class USentrySubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectInfo               Temp_wildcard_Variable                                           (None)
// class UVersionSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFormattedVersion_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_6                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FProspectInfo               K2Node_MakeStruct_ProspectInfo                                   (None)
// class FString                      Temp_string_Variable_7                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_8                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_9                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConnectedPlayer            CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer(None)
// bool                               CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileUser          CallFunc_GetActiveUserProfile_ReturnValue                        (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTerrainAnchorValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)

void UBP_IcarusGameInstance_C::UpdateSentryContext(const TArray<class FString>& FlagStates, const TArray<class FString>& EventStates, const TArray<class FString>& AssociatedMembers, TMap<class FString, class FString> ProspectContext, TMap<class FString, class FString> PlayerContext, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, class USentrySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class USentrySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_HasActiveProspect_ReturnValue, const struct FProspectInfo& CallFunc_GetActiveProspectInfo_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& Temp_string_Variable_4, class USentrySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const struct FProspectInfo& Temp_wildcard_Variable, class UVersionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, const class FString& CallFunc_GetFormattedVersion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const struct FProspectInfo& K2Node_MakeStruct_ProspectInfo, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FOnlineProfileUser& CallFunc_GetActiveUserProfile_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, bool CallFunc_IsTerrainAnchorValid_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGameInstance_C", "UpdateSentryContext");

	Params::UBP_IcarusGameInstance_C_UpdateSentryContext_Params Parms{};

	Parms.FlagStates = FlagStates;
	Parms.EventStates = EventStates;
	Parms.AssociatedMembers = AssociatedMembers;
	Parms.ProspectContext = ProspectContext;
	Parms.PlayerContext = PlayerContext;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_HasActiveProspect_ReturnValue = CallFunc_HasActiveProspect_ReturnValue;
	Parms.CallFunc_GetActiveProspectInfo_ReturnValue = CallFunc_GetActiveProspectInfo_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_GetFormattedVersion_ReturnValue = CallFunc_GetFormattedVersion_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.K2Node_MakeStruct_ProspectInfo = K2Node_MakeStruct_ProspectInfo;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.Temp_string_Variable_8 = Temp_string_Variable_8;
	Parms.Temp_string_Variable_9 = Temp_string_Variable_9;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer = CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer;
	Parms.CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue = CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActiveUserProfile_ReturnValue = CallFunc_GetActiveUserProfile_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_IsTerrainAnchorValid_ReturnValue = CallFunc_IsTerrainAnchorValid_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.CreateLoadingScreenRT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeY                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IcarusGameInstance_C::CreateLoadingScreenRT(class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGameInstance_C", "CreateLoadingScreenRT");

	Params::UBP_IcarusGameInstance_C_CreateLoadingScreenRT_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewportSize_SizeX = CallFunc_GetViewportSize_SizeX;
	Parms.CallFunc_GetViewportSize_SizeY = CallFunc_GetViewportSize_SizeY;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.InputTypeApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputTypeSetting       Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IcarusGameInstance_C::InputTypeApplied(enum class EInputTypeSetting Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGameInstance_C", "InputTypeApplied");

	Params::UBP_IcarusGameInstance_C_InputTypeApplied_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.OnSessionInviteAcceptedEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              ControllerId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     InviteResult                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_IcarusGameInstance_C::OnSessionInviteAcceptedEvent(int32 ControllerId, struct FBlueprintSessionResult& InviteResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGameInstance_C", "OnSessionInviteAcceptedEvent");

	Params::UBP_IcarusGameInstance_C_OnSessionInviteAcceptedEvent_Params Parms{};

	Parms.ControllerId = ControllerId;
	Parms.InviteResult = InviteResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_IcarusGameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGameInstance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.OnSessionInvite_DoNothing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusGameInstance_C::OnSessionInvite_DoNothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGameInstance_C", "OnSessionInvite_DoNothing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.ExecuteUbergraph_BP_IcarusGameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputTypeSetting       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusErrorSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EInputTypeSetting       K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ControllerId                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     K2Node_Event_InviteResult                                        (ConstParm)
// struct FIcarusSession              CallFunc_CreateIcarusSessionFromSession_ReturnValue              (None)
// bool                               K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetServerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSpace*K2Node_DynamicCast_AsIcarus_Player_Controller_Space              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputTypeSetting       CallFunc_GetInputType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWithEditor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UBP_IcarusGameInstance_C::ExecuteUbergraph_BP_IcarusGameInstance(int32 EntryPoint, enum class EInputTypeSetting Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class UIcarusErrorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EInputTypeSetting K2Node_CustomEvent_Value, int32 K2Node_Event_ControllerId, const struct FBlueprintSessionResult& K2Node_Event_InviteResult, const struct FIcarusSession& CallFunc_CreateIcarusSessionFromSession_ReturnValue, bool K2Node_Select_Default, const class FString& CallFunc_GetServerName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, class AIcarusPlayerControllerSpace* K2Node_DynamicCast_AsIcarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_1, enum class EInputTypeSetting CallFunc_GetInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsWithEditor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGameInstance_C", "ExecuteUbergraph_BP_IcarusGameInstance");

	Params::UBP_IcarusGameInstance_C_ExecuteUbergraph_BP_IcarusGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_Event_ControllerId = K2Node_Event_ControllerId;
	Parms.K2Node_Event_InviteResult = K2Node_Event_InviteResult;
	Parms.CallFunc_CreateIcarusSessionFromSession_ReturnValue = CallFunc_CreateIcarusSessionFromSession_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetServerName_ReturnValue = CallFunc_GetServerName_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Space = K2Node_DynamicCast_AsIcarus_Player_Controller_Space;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings_1 = CallFunc_Get_Icarus_Game_User_Settings_Settings_1;
	Parms.CallFunc_GetInputType_ReturnValue = CallFunc_GetInputType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsWithEditor_ReturnValue = CallFunc_IsWithEditor_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.RequestErrorEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FErrorCodesEnum             ErrorCode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_IcarusGameInstance_C::RequestErrorEvent__DelegateSignature(const struct FErrorCodesEnum& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGameInstance_C", "RequestErrorEvent__DelegateSignature");

	Params::UBP_IcarusGameInstance_C_RequestErrorEvent__DelegateSignature_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}

}


