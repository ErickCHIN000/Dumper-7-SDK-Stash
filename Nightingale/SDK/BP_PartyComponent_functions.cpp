#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PartyComponent.BP_PartyComponent_C
// (None)

class UClass* UBP_PartyComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PartyComponent_C");

	return Clss;
}


// BP_PartyComponent_C BP_PartyComponent.Default__BP_PartyComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PartyComponent_C* UBP_PartyComponent_C::GetDefaultObj()
{
	static class UBP_PartyComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PartyComponent_C*>(UBP_PartyComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PartyComponent.BP_PartyComponent_C.OnTravelInviteClosePopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnTravelInviteClosePopup(class UNWXCommonWindowWidget* Window, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnTravelInviteClosePopup");

	Params::UBP_PartyComponent_C_OnTravelInviteClosePopup_Params Parms{};

	Parms.Window = Window;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.Accept Travel Invite Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyComponent_C::Accept_Travel_Invite_Popup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "Accept Travel Invite Popup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyComponent.BP_PartyComponent_C.Reject Travel Invite Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyComponent_C::Reject_Travel_Invite_Popup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "Reject Travel Invite Popup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnTravelInviteReceived
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTravelInviteBP             Invite                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPublicNameWithDiscriminator_ReturnValue              (ZeroConstructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UWBP_Popup_General_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (ConstParm)

void UBP_PartyComponent_C::OnTravelInviteReceived(const struct FTravelInviteBP& Invite, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const class FString& CallFunc_GetPublicNameWithDiscriminator_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText Temp_text_Variable_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnTravelInviteReceived");

	Params::UBP_PartyComponent_C_OnTravelInviteReceived_Params Parms{};

	Parms.Invite = Invite;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetPublicNameWithDiscriminator_ReturnValue = CallFunc_GetPublicNameWithDiscriminator_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnWarningPopupClose
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnWarningPopupClose(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnWarningPopupClose");

	Params::UBP_PartyComponent_C_OnWarningPopupClose_Params Parms{};

	Parms.Window = Window;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.AcceptWarningPopup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyComponent_C::AcceptWarningPopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "AcceptWarningPopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyComponent.BP_PartyComponent_C.RejectInviteFromQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyInvite                Invite                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PartyComponent_C::RejectInviteFromQueue(const struct FPartyInvite& Invite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "RejectInviteFromQueue");

	Params::UBP_PartyComponent_C_RejectInviteFromQueue_Params Parms{};

	Parms.Invite = Invite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.AcceptInviteFromQueue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyInvite                Invite                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class FString                      CallFunc_GetRoomName_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerInParty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::AcceptInviteFromQueue(const struct FPartyInvite& Invite, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class FText Temp_text_Variable_2, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class FText Temp_text_Variable_3, const class FString& CallFunc_GetRoomName_ReturnValue, bool CallFunc_IsPlayerInParty_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "AcceptInviteFromQueue");

	Params::UBP_PartyComponent_C_AcceptInviteFromQueue_Params Parms{};

	Parms.Invite = Invite;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_GetRoomName_ReturnValue = CallFunc_GetRoomName_ReturnValue;
	Parms.CallFunc_IsPlayerInParty_ReturnValue = CallFunc_IsPlayerInParty_ReturnValue;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue = CallFunc_NotEqual_StriStri_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnInvitePopupClose
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnInvitePopupClose(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnInvitePopupClose");

	Params::UBP_PartyComponent_C_OnInvitePopupClose_Params Parms{};

	Parms.Window = Window;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.CloseInvitePopup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyComponent_C::CloseInvitePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "CloseInvitePopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyComponent.BP_PartyComponent_C.RejectInvitePopup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyComponent_C::RejectInvitePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "RejectInvitePopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyComponent.BP_PartyComponent_C.AcceptInvitePopup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyComponent_C::AcceptInvitePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "AcceptInvitePopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyComponent.BP_PartyComponent_C.HandlePartyMemberChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProfileNamesMapWrapper     Wrapper                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOnlineServiceStatus        ServiceStatus                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      PlayerName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSuccess_bIsSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueName>         CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// struct FUniqueName                 CallFunc_Array_Get_Item                                          (None)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPublicNameWithDiscriminator_ReturnValue              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerInMyParty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::HandlePartyMemberChanged(const struct FProfileNamesMapWrapper& Wrapper, const struct FOnlineServiceStatus& ServiceStatus, const class FString& PlayerName, bool CallFunc_IsSuccess_bIsSuccess, TArray<struct FUniqueName>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys, const struct FUniqueName& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetPublicNameWithDiscriminator_ReturnValue, bool CallFunc_IsPlayerInMyParty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "HandlePartyMemberChanged");

	Params::UBP_PartyComponent_C_HandlePartyMemberChanged_Params Parms{};

	Parms.Wrapper = Wrapper;
	Parms.ServiceStatus = ServiceStatus;
	Parms.PlayerName = PlayerName;
	Parms.CallFunc_IsSuccess_bIsSuccess = CallFunc_IsSuccess_bIsSuccess;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetPublicNameWithDiscriminator_ReturnValue = CallFunc_GetPublicNameWithDiscriminator_ReturnValue;
	Parms.CallFunc_IsPlayerInMyParty_ReturnValue = CallFunc_IsPlayerInMyParty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.DisplayNotification
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NotificationTitle                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NotificationDescription                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_MakeStruct_S_UpdaterNotificatorInfo                       (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCommonHUD*               CallFunc_GetNWXCommonHUD_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>K2Node_DynamicCast_AsBPI_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::DisplayNotification(class FText NotificationTitle, class FText NotificationDescription, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FS_UpdaterNotificatorInfo& K2Node_MakeStruct_S_UpdaterNotificatorInfo, bool CallFunc_IsValid_ReturnValue, class ANWXCommonHUD* CallFunc_GetNWXCommonHUD_ReturnValue, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "DisplayNotification");

	Params::UBP_PartyComponent_C_DisplayNotification_Params Parms{};

	Parms.NotificationTitle = NotificationTitle;
	Parms.NotificationDescription = NotificationDescription;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.K2Node_MakeStruct_S_UpdaterNotificatorInfo = K2Node_MakeStruct_S_UpdaterNotificatorInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNWXCommonHUD_ReturnValue = CallFunc_GetNWXCommonHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_HUD_Manager = K2Node_DynamicCast_AsBPI_HUD_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnPartyInviteREceived
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyInvite                Invite                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ESlateVisibility        PartyInviteWarningVisibility                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        PartyInviteWarning                                               (Edit, BlueprintVisible)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerInParty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CurrentlyAcceptingInvites_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (ConstParm)

void UBP_PartyComponent_C::OnPartyInviteREceived(struct FPartyInvite& Invite, enum class ESlateVisibility PartyInviteWarningVisibility, class FText PartyInviteWarning, class FText Temp_text_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText Temp_text_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText Temp_text_Variable_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsPlayerInParty_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_CurrentlyAcceptingInvites_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText Temp_text_Variable_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnPartyInviteREceived");

	Params::UBP_PartyComponent_C_OnPartyInviteREceived_Params Parms{};

	Parms.Invite = Invite;
	Parms.PartyInviteWarningVisibility = PartyInviteWarningVisibility;
	Parms.PartyInviteWarning = PartyInviteWarning;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsPlayerInParty_ReturnValue = CallFunc_IsPlayerInParty_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_CurrentlyAcceptingInvites_ReturnValue = CallFunc_CurrentlyAcceptingInvites_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnPartyInviteFailed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPartyActionFailure     Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnPartyInviteFailed(enum class EPartyActionFailure Reason, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnPartyInviteFailed");

	Params::UBP_PartyComponent_C_OnPartyInviteFailed_Params Parms{};

	Parms.Reason = Reason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnPartyJoinFailed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPartyActionFailure     Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnPartyJoinFailed(enum class EPartyActionFailure Reason, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnPartyJoinFailed");

	Params::UBP_PartyComponent_C_OnPartyJoinFailed_Params Parms{};

	Parms.Reason = Reason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnPartyMemberChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RoomId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ProfileId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ProfileName                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnPartyMemberChanged(const class FString& RoomId, const class FString& ProfileId, const class FString& ProfileName, TArray<class FString>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnPartyMemberChanged");

	Params::UBP_PartyComponent_C_OnPartyMemberChanged_Params Parms{};

	Parms.RoomId = RoomId;
	Parms.ProfileId = ProfileId;
	Parms.ProfileName = ProfileName;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnPartyRoomChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      RoomId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ANWXPlayerState*>     CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue               (ReferenceParm)
// class ANWXPlayerState*             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueId_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueId_ReturnValue_1                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnPartyRoomChanged(const class FString& RoomId, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TArray<class ANWXPlayerState*>& CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue, class ANWXPlayerState* CallFunc_Array_Get_Item, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue_1, bool CallFunc_NotEqual_StriStri_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnPartyRoomChanged");

	Params::UBP_PartyComponent_C_OnPartyRoomChanged_Params Parms{};

	Parms.RoomId = RoomId;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue = CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPersistentUniqueId_ReturnValue = CallFunc_GetPersistentUniqueId_ReturnValue;
	Parms.CallFunc_GetPersistentUniqueId_ReturnValue_1 = CallFunc_GetPersistentUniqueId_ReturnValue_1;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue = CallFunc_NotEqual_StriStri_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "SetupBindings");

	Params::UBP_PartyComponent_C_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.GetPartyMemberMapInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_MapPartyMemberInfo>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ABP_PlayerState_C*           LPartyMemberPlayerState                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_MapPartyMemberInfo>PartyMemberMapInfo                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerInMyParty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ANWXPlayerState*>     CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue               (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MapPartyMemberInfo       K2Node_MakeStruct_S_MapPartyMemberInfo                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<struct FS_MapPartyMemberInfo> UBP_PartyComponent_C::GetPartyMemberMapInfo(class ABP_PlayerState_C* LPartyMemberPlayerState, const TArray<struct FS_MapPartyMemberInfo>& PartyMemberMapInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsPlayerInMyParty_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, TArray<class ANWXPlayerState*>& CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ANWXPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FS_MapPartyMemberInfo& K2Node_MakeStruct_S_MapPartyMemberInfo, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "GetPartyMemberMapInfo");

	Params::UBP_PartyComponent_C_GetPartyMemberMapInfo_Params Parms{};

	Parms.LPartyMemberPlayerState = LPartyMemberPlayerState;
	Parms.PartyMemberMapInfo = PartyMemberMapInfo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsPlayerInMyParty_ReturnValue = CallFunc_IsPlayerInMyParty_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue = CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_MakeStruct_S_MapPartyMemberInfo = K2Node_MakeStruct_S_MapPartyMemberInfo;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnCreatePartyComplete
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnCreatePartyComplete(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnCreatePartyComplete");

	Params::UBP_PartyComponent_C_OnCreatePartyComplete_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.CurrentlyAcceptingInvites
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetAllLayerTags_ReturnValue                             (ReferenceParm)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      CallFunc_FindWindowInLayers_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInAnyDeathState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

bool UBP_PartyComponent_C::CurrentlyAcceptingInvites(TArray<struct FGameplayTag>& CallFunc_GetAllLayerTags_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UNWXCommonWindowWidget* CallFunc_FindWindowInLayers_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInAnyDeathState_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "CurrentlyAcceptingInvites");

	Params::UBP_PartyComponent_C_CurrentlyAcceptingInvites_Params Parms{};

	Parms.CallFunc_GetAllLayerTags_ReturnValue = CallFunc_GetAllLayerTags_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_FindWindowInLayers_ReturnValue = CallFunc_FindWindowInLayers_ReturnValue;
	Parms.CallFunc_GetPawn_ReturnValue = CallFunc_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInAnyDeathState_ReturnValue = CallFunc_IsInAnyDeathState_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PartyComponent.BP_PartyComponent_C.LeaveParty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_LeaveCurrentParty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::LeaveParty(bool CallFunc_LeaveCurrentParty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "LeaveParty");

	Params::UBP_PartyComponent_C_LeaveParty_Params Parms{};

	Parms.CallFunc_LeaveCurrentParty_ReturnValue = CallFunc_LeaveCurrentParty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.CreateParty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerInMyParty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::CreateParty(bool* Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsPlayerInMyParty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "CreateParty");

	Params::UBP_PartyComponent_C_CreateParty_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsPlayerInMyParty_ReturnValue = CallFunc_IsPlayerInMyParty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_PartyComponent.BP_PartyComponent_C.AcceptInvite
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyInvite                Invite                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_AcceptPendingPartyInvite_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::AcceptInvite(const struct FPartyInvite& Invite, bool CallFunc_AcceptPendingPartyInvite_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "AcceptInvite");

	Params::UBP_PartyComponent_C_AcceptInvite_Params Parms{};

	Parms.Invite = Invite;
	Parms.CallFunc_AcceptPendingPartyInvite_ReturnValue = CallFunc_AcceptPendingPartyInvite_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.RejectInvite
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyInvite                Invite                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_RejectPendingPartyInvite_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::RejectInvite(const struct FPartyInvite& Invite, bool CallFunc_RejectPendingPartyInvite_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "RejectInvite");

	Params::UBP_PartyComponent_C_RejectInvite_Params Parms{};

	Parms.Invite = Invite;
	Parms.CallFunc_RejectPendingPartyInvite_ReturnValue = CallFunc_RejectPendingPartyInvite_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnGameModeReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXGameModeBase*            GameMode                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsReady                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnGameModeReady(class ANWXGameModeBase* GameMode, bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnGameModeReady");

	Params::UBP_PartyComponent_C_OnGameModeReady_Params Parms{};

	Parms.GameMode = GameMode;
	Parms.bIsReady = bIsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnPlayerLoggedIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnPlayerLoggedIn(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnPlayerLoggedIn");

	Params::UBP_PartyComponent_C_OnPlayerLoggedIn_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PartyComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyComponent.BP_PartyComponent_C.SendInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InviteePlayerId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::SendInvite(const class FString& InviteePlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "SendInvite");

	Params::UBP_PartyComponent_C_SendInvite_Params Parms{};

	Parms.InviteePlayerId = InviteePlayerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.ExecuteUbergraph_BP_PartyComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RealmHistory_Persistence_C*CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmHistoryComponent_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_CustomEvent_GameMode                                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsReady                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitGameModeBPTimed_Handle                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GameMode_C*              K2Node_DynamicCast_AsBP_Game_Mode                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_NewPlayer                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_InviteePlayerId                               (ZeroConstructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::ExecuteUbergraph_BP_PartyComponent(int32 EntryPoint, class UBP_RealmHistory_Persistence_C* CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component, bool CallFunc_GetRealmHistoryComponent_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXGameModeBase* K2Node_CustomEvent_GameMode, bool K2Node_CustomEvent_bIsReady, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FDelegateHandleBPWrapper& CallFunc_AwaitGameModeBPTimed_Handle, class ABP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode, bool K2Node_DynamicCast_bSuccess, class APlayerController* K2Node_CustomEvent_NewPlayer, bool CallFunc_IsDedicatedServer_ReturnValue, const class FString& K2Node_CustomEvent_InviteePlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "ExecuteUbergraph_BP_PartyComponent");

	Params::UBP_PartyComponent_C_ExecuteUbergraph_BP_PartyComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component = CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component;
	Parms.CallFunc_GetRealmHistoryComponent_Success = CallFunc_GetRealmHistoryComponent_Success;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_GameMode = K2Node_CustomEvent_GameMode;
	Parms.K2Node_CustomEvent_bIsReady = K2Node_CustomEvent_bIsReady;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AwaitGameModeBPTimed_Handle = CallFunc_AwaitGameModeBPTimed_Handle;
	Parms.K2Node_DynamicCast_AsBP_Game_Mode = K2Node_DynamicCast_AsBP_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NewPlayer = K2Node_CustomEvent_NewPlayer;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CustomEvent_InviteePlayerId = K2Node_CustomEvent_InviteePlayerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnPartyMemberLeftParty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnPartyMemberLeftParty__DelegateSignature(const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnPartyMemberLeftParty__DelegateSignature");

	Params::UBP_PartyComponent_C_OnPartyMemberLeftParty__DelegateSignature_Params Parms{};

	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnPartyMemberJoinedParty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_PartyComponent_C::OnPartyMemberJoinedParty__DelegateSignature(const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnPartyMemberJoinedParty__DelegateSignature");

	Params::UBP_PartyComponent_C_OnPartyMemberJoinedParty__DelegateSignature_Params Parms{};

	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnPendingInvitesChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyComponent_C::OnPendingInvitesChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnPendingInvitesChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnPartyListChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyComponent_C::OnPartyListChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnPartyListChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyComponent.BP_PartyComponent_C.OnPlayerListChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyComponent_C::OnPlayerListChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PartyComponent_C", "OnPlayerListChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


