#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_SCREEN.WBP_HUD_Screen_C
// (None)

class UClass* UWBP_HUD_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_Screen_C");

	return Clss;
}


// WBP_HUD_Screen_C WBP_HUD_SCREEN.Default__WBP_HUD_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_Screen_C* UWBP_HUD_Screen_C::GetDefaultObj()
{
	static class UWBP_HUD_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_Screen_C*>(UWBP_HUD_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.OnSettingsUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_Screen_C::OnSettingsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "OnSettingsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.On Build Mode State Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_BuildModeFeedbackData_C* Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBuildModeContext       Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::On_Build_Mode_State_Changed(class UBP_BuildModeFeedbackData_C* Data, enum class EBuildModeContext Mode, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "On Build Mode State Changed");

	Params::UWBP_HUD_Screen_C_On_Build_Mode_State_Changed_Params Parms{};

	Parms.Data = Data;
	Parms.Mode = Mode;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.OnFadeTimerExpired
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::OnFadeTimerExpired(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "OnFadeTimerExpired");

	Params::UWBP_HUD_Screen_C_OnFadeTimerExpired_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.ResetFadeTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAutoHideHUD_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::ResetFadeTimer(class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetAutoHideHUD_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "ResetFadeTimer");

	Params::UWBP_HUD_Screen_C_ResetFadeTimer_Params Parms{};

	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAutoHideHUD_ReturnValue = CallFunc_GetAutoHideHUD_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.OnItemAbilityUsed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTechniqueDataAsset>Technique                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_HUD_Screen_C::OnItemAbilityUsed(TSoftObjectPtr<class UTechniqueDataAsset> Technique, const struct FInventoryEntry& ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "OnItemAbilityUsed");

	Params::UWBP_HUD_Screen_C_OnItemAbilityUsed_Params Parms{};

	Parms.Technique = Technique;
	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.OnAnyAttributeChanged
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::OnAnyAttributeChanged(struct FGameplayAttribute& Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "OnAnyAttributeChanged");

	Params::UWBP_HUD_Screen_C_OnAnyAttributeChanged_Params Parms{};

	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.OnOwnedGameplayTagCountChanged
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::OnOwnedGameplayTagCountChanged(struct FGameplayTag& Tag, int32 Count, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "OnOwnedGameplayTagCountChanged");

	Params::UWBP_HUD_Screen_C_OnOwnedGameplayTagCountChanged_Params Parms{};

	Parms.Tag = Tag;
	Parms.Count = Count;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.ListenForPlayerGameplayChanges
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  K2Node_DynamicCast_AsNWXAbility_System_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::ListenForPlayerGameplayChanges(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "ListenForPlayerGameplayChanges");

	Params::UWBP_HUD_Screen_C_ListenForPlayerGameplayChanges_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAbility_System_Component = K2Node_DynamicCast_AsNWXAbility_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.OnVoipRoomMemberChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsListening                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisplayName                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_GetLocalPlayerName_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>K2Node_DynamicCast_AsBPI_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FS_UpdaterNotificatorInfo   K2Node_MakeStruct_S_UpdaterNotificatorInfo                       (HasGetValueTypeHash)

void UWBP_HUD_Screen_C::OnVoipRoomMemberChanged(const class FString& PlayerName, bool IsListening, bool IsLocalPlayer, const class FString& DisplayName, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, class FText Temp_text_Variable_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText Temp_text_Variable_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_GetLocalPlayerName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FS_UpdaterNotificatorInfo& K2Node_MakeStruct_S_UpdaterNotificatorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "OnVoipRoomMemberChanged");

	Params::UWBP_HUD_Screen_C_OnVoipRoomMemberChanged_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.IsListening = IsListening;
	Parms.IsLocalPlayer = IsLocalPlayer;
	Parms.DisplayName = DisplayName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerName_ReturnValue = CallFunc_GetLocalPlayerName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager = CallFunc_Get_HUD_Manager_HUD_Manager;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_HUD_Manager = K2Node_DynamicCast_AsBPI_HUD_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_S_UpdaterNotificatorInfo = K2Node_MakeStruct_S_UpdaterNotificatorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.HandleAbilityFailedEvent
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameplayAbility*            Ability                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Reason                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetErrorNotificationFromGameplayTagContainer_ErrorNotification(None)
// bool                               CallFunc_GetErrorNotificationFromGameplayTagContainer_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::HandleAbilityFailedEvent(class UGameplayAbility* Ability, struct FGameplayTagContainer& Reason, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager, class FText CallFunc_GetErrorNotificationFromGameplayTagContainer_ErrorNotification, bool CallFunc_GetErrorNotificationFromGameplayTagContainer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "HandleAbilityFailedEvent");

	Params::UWBP_HUD_Screen_C_HandleAbilityFailedEvent_Params Parms{};

	Parms.Ability = Ability;
	Parms.Reason = Reason;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager = CallFunc_Get_HUD_Manager_HUD_Manager;
	Parms.CallFunc_GetErrorNotificationFromGameplayTagContainer_ErrorNotification = CallFunc_GetErrorNotificationFromGameplayTagContainer_ErrorNotification;
	Parms.CallFunc_GetErrorNotificationFromGameplayTagContainer_ReturnValue = CallFunc_GetErrorNotificationFromGameplayTagContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.ListenForAbilityFailedEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  K2Node_DynamicCast_AsNWXAbility_System_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::ListenForAbilityFailedEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "ListenForAbilityFailedEvents");

	Params::UWBP_HUD_Screen_C_ListenForAbilityFailedEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAbility_System_Component = K2Node_DynamicCast_AsNWXAbility_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.Check if in Tutorial Realms
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentRealmTags_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetCurrentRealmTags_RealmTags                           (None)
// bool                               CallFunc_HasOnboardingRealmsTags_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::Check_if_in_Tutorial_Realms(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_GetCurrentRealmTags_Success, const struct FGameplayTagContainer& CallFunc_GetCurrentRealmTags_RealmTags, bool CallFunc_HasOnboardingRealmsTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "Check if in Tutorial Realms");

	Params::UWBP_HUD_Screen_C_Check_if_in_Tutorial_Realms_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentRealmTags_Success = CallFunc_GetCurrentRealmTags_Success;
	Parms.CallFunc_GetCurrentRealmTags_RealmTags = CallFunc_GetCurrentRealmTags_RealmTags;
	Parms.CallFunc_HasOnboardingRealmsTags_ReturnValue = CallFunc_HasOnboardingRealmsTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.Show Hud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::Show_Hud(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "Show Hud");

	Params::UWBP_HUD_Screen_C_Show_Hud_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.Contextual Controls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContextualControlsData   ContextualControlsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::Contextual_Controls(bool IsVisible, const struct FS_ContextualControlsData& ContextualControlsData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "Contextual Controls");

	Params::UWBP_HUD_Screen_C_Contextual_Controls_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.ContextualControlsData = ContextualControlsData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.UpdateActionProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimation_StartAtTime_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::UpdateActionProgressBar(bool Visible, double CurrentProgress, class FText DisplayText, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image, double Temp_real_Variable, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, double Temp_real_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, bool Temp_bool_Variable_1, double K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "UpdateActionProgressBar");

	Params::UWBP_HUD_Screen_C_UpdateActionProgressBar_Params Parms{};

	Parms.Visible = Visible;
	Parms.CurrentProgress = CurrentProgress;
	Parms.DisplayText = DisplayText;
	Parms.ShowImage = ShowImage;
	Parms.Image = Image;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_StartAtTime_ImplicitCast = CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	Parms.CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast = CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.GetDebugModeState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_DebugModeStateComponent_C*DebugModeState                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerStateSystems_C>K2Node_DynamicCast_AsBPI_Player_State_Systems                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeStateComponent_C*CallFunc_GetDebugModeStateInterface_DebugModeState               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::GetDebugModeState(class UBP_DebugModeStateComponent_C** DebugModeState, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IBPI_PlayerStateSystems_C> K2Node_DynamicCast_AsBPI_Player_State_Systems, bool K2Node_DynamicCast_bSuccess, class UBP_DebugModeStateComponent_C* CallFunc_GetDebugModeStateInterface_DebugModeState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "GetDebugModeState");

	Params::UWBP_HUD_Screen_C_GetDebugModeState_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.K2Node_DynamicCast_AsBPI_Player_State_Systems = K2Node_DynamicCast_AsBPI_Player_State_Systems;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDebugModeStateInterface_DebugModeState = CallFunc_GetDebugModeStateInterface_DebugModeState;

	UObject::ProcessEvent(Func, &Parms);

	if (DebugModeState != nullptr)
		*DebugModeState = Parms.DebugModeState;

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.Bind_GetCheatModeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GodModeTag_GodModeTag                                   (NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_HUD_Screen_C::Bind_GetCheatModeText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FGameplayTag& CallFunc_GodModeTag_GodModeTag, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStateActive_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "Bind_GetCheatModeText");

	Params::UWBP_HUD_Screen_C_Bind_GetCheatModeText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GodModeTag_GodModeTag = CallFunc_GodModeTag_GodModeTag;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsStateActive_ReturnValue = CallFunc_IsStateActive_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.GetPlayerAttribute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::GetPlayerAttribute(const struct FGameplayAttribute& Attribute, bool* Success, double* Value, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "GetPlayerAttribute");

	Params::UWBP_HUD_Screen_C_GetPlayerAttribute_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.K2Node_FunctionResult_Value_ImplicitCast = K2Node_FunctionResult_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.CrosshairVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::CrosshairVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "CrosshairVisibility");

	Params::UWBP_HUD_Screen_C_CrosshairVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.DisplaySingleRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_Screen_C::DisplaySingleRecoil()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "DisplaySingleRecoil");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.DisplayRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bRecoil                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::DisplayRecoil(bool bRecoil)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "DisplayRecoil");

	Params::UWBP_HUD_Screen_C_DisplayRecoil_Params Parms{};

	Parms.bRecoil = bRecoil;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.DisplayHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             IndicationTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitType               Hit_Type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::DisplayHitIndicator(double IndicationTime, const struct FLinearColor& Color, enum class E_HitType Hit_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "DisplayHitIndicator");

	Params::UWBP_HUD_Screen_C_DisplayHitIndicator_Params Parms{};

	Parms.IndicationTime = IndicationTime;
	Parms.Color = Color;
	Parms.Hit_Type = Hit_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.DisplayCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CrosshairTypes        CrosshairType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCrosshairVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Crosshair_Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitIndicatorTypes     HitIndicatorType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHitIndicatorVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::DisplayCrosshair(enum class E_CrosshairTypes CrosshairType, bool bCrosshairVisible, const struct FLinearColor& Crosshair_Color, enum class E_HitIndicatorTypes HitIndicatorType, bool bHitIndicatorVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "DisplayCrosshair");

	Params::UWBP_HUD_Screen_C_DisplayCrosshair_Params Parms{};

	Parms.CrosshairType = CrosshairType;
	Parms.bCrosshairVisible = bCrosshairVisible;
	Parms.Crosshair_Color = Crosshair_Color;
	Parms.HitIndicatorType = HitIndicatorType;
	Parms.bHitIndicatorVisible = bHitIndicatorVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.DisplayCompass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Visible                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::DisplayCompass(bool bVisible, bool Visible, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "DisplayCompass");

	Params::UWBP_HUD_Screen_C_DisplayCompass_Params Parms{};

	Parms.bVisible = bVisible;
	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.HideCrosshair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::HideCrosshair(double Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "HideCrosshair");

	Params::UWBP_HUD_Screen_C_HideCrosshair_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_Screen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.OnPawnPossessedAndReady
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::OnPawnPossessedAndReady(class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "OnPawnPossessedAndReady");

	Params::UWBP_HUD_Screen_C_OnPawnPossessedAndReady_Params Parms{};

	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_Screen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_SCREEN.WBP_HUD_Screen_C.ExecuteUbergraph_WBP_HUD_Screen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_NewPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_BuildModeFeedback_C>K2Node_DynamicCast_AsBPI_Build_Mode_Feedback                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildModeFeedbackComponent_C*CallFunc_GetBuildModeFeedbackComponent_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Screen_C::ExecuteUbergraph_WBP_HUD_Screen(int32 EntryPoint, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_Event_NewPawn, double K2Node_CustomEvent_Duration, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_RetriggerableDelay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Screen_C", "ExecuteUbergraph_WBP_HUD_Screen");

	Params::UWBP_HUD_Screen_C_ExecuteUbergraph_WBP_HUD_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_NewPawn = K2Node_Event_NewPawn;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_2 = CallFunc_GetEngineSubsystem_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Build_Mode_Feedback = K2Node_DynamicCast_AsBPI_Build_Mode_Feedback;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetBuildModeFeedbackComponent_Component = CallFunc_GetBuildModeFeedbackComponent_Component;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


