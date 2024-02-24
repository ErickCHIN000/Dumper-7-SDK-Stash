#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_Notification_General.WBP_HUD_Notification_General_C
// (None)

class UClass* UWBP_HUD_Notification_General_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_Notification_General_C");

	return Clss;
}


// WBP_HUD_Notification_General_C WBP_HUD_Notification_General.Default__WBP_HUD_Notification_General_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_Notification_General_C* UWBP_HUD_Notification_General_C::GetDefaultObj()
{
	static class UWBP_HUD_Notification_General_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_Notification_General_C*>(UWBP_HUD_Notification_General_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_Notification_General.WBP_HUD_Notification_General_C.UpdateInputPresentation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UInputAction> InputAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        InputDescription                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_DynamicCast_AsInput_Action                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionPresentationData>CallFunc_GetInputActionPresentation_OutPresentationDataArray     (ReferenceParm)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Notification_General_C::UpdateInputPresentation(TSoftObjectPtr<class UInputAction> InputAction, class FText InputDescription, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsUsingGamepad_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool Temp_bool_Variable, class UInputAction* K2Node_DynamicCast_AsInput_Action, bool K2Node_DynamicCast_bSuccess, TArray<struct FInputActionPresentationData>& CallFunc_GetInputActionPresentation_OutPresentationDataArray, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Notification_General_C", "UpdateInputPresentation");

	Params::UWBP_HUD_Notification_General_C_UpdateInputPresentation_Params Parms{};

	Parms.InputAction = InputAction;
	Parms.InputDescription = InputDescription;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsInput_Action = K2Node_DynamicCast_AsInput_Action;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInputActionPresentation_OutPresentationDataArray = CallFunc_GetInputActionPresentation_OutPresentationDataArray;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Notification_General.WBP_HUD_Notification_General_C.OnRespiteNotReady
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNWXPlayerDeploymentRequest DeploymentRequest                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerRespiteDeploymentName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesPlayerHaveRespitePoint_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_MakeStruct_S_UpdaterNotificatorInfo                       (HasGetValueTypeHash)

void UWBP_HUD_Notification_General_C::OnRespiteNotReady(struct FNWXPlayerDeploymentRequest& DeploymentRequest, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsPlayerRespiteDeploymentName_ReturnValue, bool CallFunc_DoesPlayerHaveRespitePoint_ReturnValue, const struct FS_UpdaterNotificatorInfo& K2Node_MakeStruct_S_UpdaterNotificatorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Notification_General_C", "OnRespiteNotReady");

	Params::UWBP_HUD_Notification_General_C_OnRespiteNotReady_Params Parms{};

	Parms.DeploymentRequest = DeploymentRequest;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsPlayerRespiteDeploymentName_ReturnValue = CallFunc_IsPlayerRespiteDeploymentName_ReturnValue;
	Parms.CallFunc_DoesPlayerHaveRespitePoint_ReturnValue = CallFunc_DoesPlayerHaveRespitePoint_ReturnValue;
	Parms.K2Node_MakeStruct_S_UpdaterNotificatorInfo = K2Node_MakeStruct_S_UpdaterNotificatorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Notification_General.WBP_HUD_Notification_General_C.RemoveNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsRendered_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Notification_General_C::RemoveNotification(bool CallFunc_IsRendered_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Notification_General_C", "RemoveNotification");

	Params::UWBP_HUD_Notification_General_C_RemoveNotification_Params Parms{};

	Parms.CallFunc_IsRendered_ReturnValue = CallFunc_IsRendered_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Notification_General.WBP_HUD_Notification_General_C.Play Notification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UpdaterNotificatorInfo   Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Remove_Manual                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_to_Display                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Notification_General_C::Play_Notification(const struct FS_UpdaterNotificatorInfo& Content, bool Remove_Manual, double Time_to_Display)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Notification_General_C", "Play Notification");

	Params::UWBP_HUD_Notification_General_C_Play_Notification_Params Parms{};

	Parms.Content = Content;
	Parms.Remove_Manual = Remove_Manual;
	Parms.Time_to_Display = Time_to_Display;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Notification_General.WBP_HUD_Notification_General_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_Notification_General_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Notification_General_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_Notification_General.WBP_HUD_Notification_General_C.OnNumPlayersWaitingToRestChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumPlayersWaitingToRest                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalPlayers                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Notification_General_C::OnNumPlayersWaitingToRestChanged(int32 NumPlayersWaitingToRest, int32 TotalPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Notification_General_C", "OnNumPlayersWaitingToRestChanged");

	Params::UWBP_HUD_Notification_General_C_OnNumPlayersWaitingToRestChanged_Params Parms{};

	Parms.NumPlayersWaitingToRest = NumPlayersWaitingToRest;
	Parms.TotalPlayers = TotalPlayers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Notification_General.WBP_HUD_Notification_General_C.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Notification_General_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Notification_General_C", "OnInputMethodChanged");

	Params::UWBP_HUD_Notification_General_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Notification_General.WBP_HUD_Notification_General_C.ExecuteUbergraph_WBP_HUD_Notification_General
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_CustomEvent_Content                                       (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Remove_Manual                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Time_To_Display                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_DynamicCast_AsInput_Action                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           CallFunc_GetNWXGameStateBase_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumPlayersWaitingToRest                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TotalPlayers                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USyncRestComponent*          CallFunc_GetSyncRestComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumPlayersResting_NumPlayersWaitingToRestOut         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumPlayersResting_NumTotalPlayersOut                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_MakeStruct_S_UpdaterNotificatorInfo                       (HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_CurrentInputType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXPlayerDeploymentRequest CallFunc_GetPlayerDeploymentRequest_ReturnValue                  (ConstParm)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionPresentationData>CallFunc_GetInputActionPresentation_OutPresentationDataArray     (ReferenceParm)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Notification_General_C::ExecuteUbergraph_WBP_HUD_Notification_General(int32 EntryPoint, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, const struct FS_UpdaterNotificatorInfo& K2Node_CustomEvent_Content, bool K2Node_CustomEvent_Remove_Manual, double K2Node_CustomEvent_Time_To_Display, class UInputAction* K2Node_DynamicCast_AsInput_Action, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, int32 K2Node_CustomEvent_NumPlayersWaitingToRest, int32 K2Node_CustomEvent_TotalPlayers, class USyncRestComponent* CallFunc_GetSyncRestComponent_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetNumPlayersResting_NumPlayersWaitingToRestOut, int32 CallFunc_GetNumPlayersResting_NumTotalPlayersOut, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const struct FS_UpdaterNotificatorInfo& K2Node_MakeStruct_S_UpdaterNotificatorInfo, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, enum class ECommonInputType K2Node_Event_CurrentInputType, const struct FNWXPlayerDeploymentRequest& CallFunc_GetPlayerDeploymentRequest_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, TArray<struct FInputActionPresentationData>& CallFunc_GetInputActionPresentation_OutPresentationDataArray, bool CallFunc_Array_IsNotEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Notification_General_C", "ExecuteUbergraph_WBP_HUD_Notification_General");

	Params::UWBP_HUD_Notification_General_C_ExecuteUbergraph_WBP_HUD_Notification_General_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_CustomEvent_Content = K2Node_CustomEvent_Content;
	Parms.K2Node_CustomEvent_Remove_Manual = K2Node_CustomEvent_Remove_Manual;
	Parms.K2Node_CustomEvent_Time_To_Display = K2Node_CustomEvent_Time_To_Display;
	Parms.K2Node_DynamicCast_AsInput_Action = K2Node_DynamicCast_AsInput_Action;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetNWXGameStateBase_ReturnValue = CallFunc_GetNWXGameStateBase_ReturnValue;
	Parms.K2Node_CustomEvent_NumPlayersWaitingToRest = K2Node_CustomEvent_NumPlayersWaitingToRest;
	Parms.K2Node_CustomEvent_TotalPlayers = K2Node_CustomEvent_TotalPlayers;
	Parms.CallFunc_GetSyncRestComponent_ReturnValue = CallFunc_GetSyncRestComponent_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetNumPlayersResting_NumPlayersWaitingToRestOut = CallFunc_GetNumPlayersResting_NumPlayersWaitingToRestOut;
	Parms.CallFunc_GetNumPlayersResting_NumTotalPlayersOut = CallFunc_GetNumPlayersResting_NumTotalPlayersOut;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_S_UpdaterNotificatorInfo = K2Node_MakeStruct_S_UpdaterNotificatorInfo;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_Event_CurrentInputType = K2Node_Event_CurrentInputType;
	Parms.CallFunc_GetPlayerDeploymentRequest_ReturnValue = CallFunc_GetPlayerDeploymentRequest_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetInputActionPresentation_OutPresentationDataArray = CallFunc_GetInputActionPresentation_OutPresentationDataArray;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


