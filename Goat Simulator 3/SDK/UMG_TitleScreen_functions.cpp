#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TitleScreen.UMG_TitleScreen_C
// (None)

class UClass* UUMG_TitleScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TitleScreen_C");

	return Clss;
}


// UMG_TitleScreen_C UMG_TitleScreen.Default__UMG_TitleScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TitleScreen_C* UUMG_TitleScreen_C::GetDefaultObj()
{
	static class UUMG_TitleScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TitleScreen_C*>(UUMG_TitleScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TitleScreen.UMG_TitleScreen_C.GetGearInfoPanelContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Panel                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_C::GetGearInfoPanelContainer(class UPanelWidget** Panel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "GetGearInfoPanelContainer");

	Params::UUMG_TitleScreen_C_GetGearInfoPanelContainer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Panel != nullptr)
		*Panel = Parms.Panel;

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.CheckOwnership
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDLCLevelData               LevelData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               EveryoneHasOwnership                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPopupDataRow               CallFunc_MakePopupDataRow_ReturnValue                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesEveryoneOwn_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGPopupUserWidget*          CallFunc_CreatePopupCustom_OutWidget                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreatePopupCustom_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPopupDataRow               CallFunc_MakePopupDataRow_ReturnValue_1                          (None)
// class UGGPopupUserWidget*          CallFunc_CreatePopupCustom_OutWidget_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreatePopupCustom_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_bIsOwner                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGDLCHandler*               CallFunc_GetDLCHandler_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLCAvailable_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TitleScreen_C::CheckOwnership(const struct FDLCLevelData& LevelData, bool* EveryoneHasOwnership, const struct FPopupDataRow& CallFunc_MakePopupDataRow_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_DoesEveryoneOwn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue_1, class UGGPopupUserWidget* CallFunc_CreatePopupCustom_OutWidget, bool CallFunc_CreatePopupCustom_ReturnValue, const struct FPopupDataRow& CallFunc_MakePopupDataRow_ReturnValue_1, class UGGPopupUserWidget* CallFunc_CreatePopupCustom_OutWidget_1, bool CallFunc_CreatePopupCustom_ReturnValue_1, bool CallFunc_IsInLobby_bIsOwner, bool CallFunc_IsInLobby_ReturnValue, class UGGDLCHandler* CallFunc_GetDLCHandler_ReturnValue, bool CallFunc_IsDLCAvailable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "CheckOwnership");

	Params::UUMG_TitleScreen_C_CheckOwnership_Params Parms{};

	Parms.LevelData = LevelData;
	Parms.CallFunc_MakePopupDataRow_ReturnValue = CallFunc_MakePopupDataRow_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_DoesEveryoneOwn_ReturnValue = CallFunc_DoesEveryoneOwn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue_1 = CallFunc_GetPrimaryGGPlayerController_ReturnValue_1;
	Parms.CallFunc_CreatePopupCustom_OutWidget = CallFunc_CreatePopupCustom_OutWidget;
	Parms.CallFunc_CreatePopupCustom_ReturnValue = CallFunc_CreatePopupCustom_ReturnValue;
	Parms.CallFunc_MakePopupDataRow_ReturnValue_1 = CallFunc_MakePopupDataRow_ReturnValue_1;
	Parms.CallFunc_CreatePopupCustom_OutWidget_1 = CallFunc_CreatePopupCustom_OutWidget_1;
	Parms.CallFunc_CreatePopupCustom_ReturnValue_1 = CallFunc_CreatePopupCustom_ReturnValue_1;
	Parms.CallFunc_IsInLobby_bIsOwner = CallFunc_IsInLobby_bIsOwner;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_GetDLCHandler_ReturnValue = CallFunc_GetDLCHandler_ReturnValue;
	Parms.CallFunc_IsDLCAvailable_ReturnValue = CallFunc_IsDLCAvailable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EveryoneHasOwnership != nullptr)
		*EveryoneHasOwnership = Parms.EveryoneHasOwnership;

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.GetInitialWidgetFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_TitleScreen_C::GetInitialWidgetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "GetInitialWidgetFocus");

	Params::UUMG_TitleScreen_C_GetInitialWidgetFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDesktopPlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsConsolePlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UUMG_TitleScreen_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, bool Temp_bool_Variable, bool CallFunc_IsDesktopPlatform_ReturnValue, bool CallFunc_IsConsolePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_Select_Default, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "OnFocusReceived");

	Params::UUMG_TitleScreen_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsDesktopPlatform_ReturnValue = CallFunc_IsDesktopPlatform_ReturnValue;
	Parms.CallFunc_IsConsolePlatform_ReturnValue = CallFunc_IsConsolePlatform_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.AttemptToStartLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDLCLevelData               LevelData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_TitleScreen_C::AttemptToStartLevel(const struct FDLCLevelData& LevelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "AttemptToStartLevel");

	Params::UUMG_TitleScreen_C_AttemptToStartLevel_Params Parms{};

	Parms.LevelData = LevelData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.FadeOutAndStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Offline                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDLCLevelData               Level_Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_TitleScreen_C::FadeOutAndStart(bool Offline, const struct FDLCLevelData& Level_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "FadeOutAndStart");

	Params::UUMG_TitleScreen_C_FadeOutAndStart_Params Parms{};

	Parms.Offline = Offline;
	Parms.Level_Data = Level_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.OnFailedToStartLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TitleScreen_C::OnFailedToStartLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "OnFailedToStartLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TitleScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TitleScreen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.OnReceivedLobbyInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InviterName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      InviteId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_TitleScreen_C::OnReceivedLobbyInvite(const class FString& InviterName, const class FString& InviteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "OnReceivedLobbyInvite");

	Params::UUMG_TitleScreen_C_OnReceivedLobbyInvite_Params Parms{};

	Parms.InviterName = InviterName;
	Parms.InviteId = InviteId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.InvitePopupResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Button_ID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EPopupResponse          Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_C::InvitePopupResponse(const class FString& ID, class UObject* Object, const class FString& Button_ID, enum class EPopupResponse Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "InvitePopupResponse");

	Params::UUMG_TitleScreen_C_InvitePopupResponse_Params Parms{};

	Parms.ID = ID;
	Parms.Object = Object;
	Parms.Button_ID = Button_ID;
	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.OnLobbyUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELobbyUpdateType        LobbyUpdateType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_C::OnLobbyUpdated(enum class ELobbyUpdateType LobbyUpdateType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "OnLobbyUpdated");

	Params::UUMG_TitleScreen_C_OnLobbyUpdated_Params Parms{};

	Parms.LobbyUpdateType = LobbyUpdateType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.OnLeftLobby
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TitleScreen_C::OnLeftLobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "OnLeftLobby");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.OnLoginStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoginState             OldState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoginState             NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_C::OnLoginStateChanged(enum class ELoginState OldState, enum class ELoginState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "OnLoginStateChanged");

	Params::UUMG_TitleScreen_C_OnLoginStateChanged_Params Parms{};

	Parms.OldState = OldState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TitleScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "PreConstruct");

	Params::UUMG_TitleScreen_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.UpdateOnInitialLoginState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoginState             Current_State                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_C::UpdateOnInitialLoginState(enum class ELoginState Current_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "UpdateOnInitialLoginState");

	Params::UUMG_TitleScreen_C_UpdateOnInitialLoginState_Params Parms{};

	Parms.Current_State = Current_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.OnLoginTimedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TitleScreen_C::OnLoginTimedOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "OnLoginTimedOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.PlayEmote
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TitleScreen_C::PlayEmote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "PlayEmote");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.CreateStatusWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TitleScreen_C::CreateStatusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "CreateStatusWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.OnMenuEntered
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InTag                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_TitleScreen_C::OnMenuEntered(const struct FGameplayTag& InTag, const struct FMenuNavigationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "OnMenuEntered");

	Params::UUMG_TitleScreen_C_OnMenuEntered_Params Parms{};

	Parms.InTag = InTag;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.SetPlayerGameData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGPlayerGameDataAsset*      PlayerGameData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_C::SetPlayerGameData(class UGGPlayerGameDataAsset* PlayerGameData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "SetPlayerGameData");

	Params::UUMG_TitleScreen_C_SetPlayerGameData_Params Parms{};

	Parms.PlayerGameData = PlayerGameData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.OnClientStartedTravel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TitleScreen_C::OnClientStartedTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "OnClientStartedTravel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.DLCNotOwnedPopupResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EPopupResponse          Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_C::DLCNotOwnedPopupResponse(const class FString& ID, class UObject* Object, const class FString& ButtonID, enum class EPopupResponse Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "DLCNotOwnedPopupResponse");

	Params::UUMG_TitleScreen_C_DLCNotOwnedPopupResponse_Params Parms{};

	Parms.ID = ID;
	Parms.Object = Object;
	Parms.ButtonID = ButtonID;
	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen.UMG_TitleScreen_C.ExecuteUbergraph_UMG_TitleScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDLCHandler*               CallFunc_GetDLCHandler_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_bIsOwner                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLoggedIn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         K2Node_DynamicCast_AsGGPlayer_Controller                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Offline                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDLCLevelData               K2Node_CustomEvent_Level_Data                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_RequestMenuNavigation_OutWidget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestMenuNavigation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGGLobbyMember>      CallFunc_GetLobbyMembers_ReturnValue                             (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_bIsOwner_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ELoginState             CallFunc_GetLoginState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_InviterName                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_InviteId                                      (ZeroConstructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ID_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Object_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Button_ID                                     (ZeroConstructor, HasGetValueTypeHash)
// enum class EPopupResponse          K2Node_CustomEvent_Response_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FPopupDataRow               CallFunc_MakePopupDataRow_ReturnValue                            (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_bIsOwner_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningGGPlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningGGPlayer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGPopupUserWidget*          CallFunc_CreatePopupCustom_OutWidget                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreatePopupCustom_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNotificationProperties     CallFunc_MakeNotificationProperties_ReturnValue                  (NoDestructor)
// enum class ELobbyUpdateType        K2Node_CustomEvent_LobbyUpdateType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoginState             K2Node_CustomEvent_OldState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoginState             K2Node_CustomEvent_NewState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHostStartingServer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningGGPlayer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSplitScreenActive_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningGGPlayer_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDLCLevelData               K2Node_CustomEvent_LevelData                                     (None)
// bool                               CallFunc_CheckOwnership_EveryoneHasOwnership                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsForcedAlwaysOnline_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNotificationProperties     CallFunc_MakeNotificationProperties_ReturnValue_1                (NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningGGPlayer_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoginState             K2Node_CustomEvent_Current_State                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsForcedAlwaysOnline_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningGGPlayer_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasLoginTimedOut_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningGGPlayer_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationProperties     CallFunc_MakeNotificationProperties_ReturnValue_2                (NoDestructor)
// bool                               CallFunc_IsLoggedIn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnlineManagerBusy_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class UGGUserWidget*               CallFunc_SpawnAdditionalWidget_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_InTag                                               (NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      K2Node_Event_Context                                             (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGPlayerGameDataAsset*      K2Node_Event_PlayerGameData                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasClientStartedTravel_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasClientStartedTravel_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedWorldCollectionSlot_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GGGameInstance_C*        K2Node_DynamicCast_AsBP_GGGame_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateLastLoadedLevel_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSplitScreenActive_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ID                                            (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Object                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ButtonID                                      (ZeroConstructor, HasGetValueTypeHash)
// enum class EPopupResponse          K2Node_CustomEvent_Response                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_C::ExecuteUbergraph_UMG_TitleScreen(int32 EntryPoint, class UGGDLCHandler* CallFunc_GetDLCHandler_ReturnValue, bool CallFunc_IsInLobby_bIsOwner, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsLoggedIn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGGPlayerController* K2Node_DynamicCast_AsGGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Offline, const struct FDLCLevelData& K2Node_CustomEvent_Level_Data, bool CallFunc_Not_PreBool_ReturnValue_1, class UUserWidget* CallFunc_RequestMenuNavigation_OutWidget, bool CallFunc_RequestMenuNavigation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue_1, TArray<struct FGGLobbyMember>& CallFunc_GetLobbyMembers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsInLobby_bIsOwner_1, bool CallFunc_IsInLobby_ReturnValue_1, enum class ELoginState CallFunc_GetLoginState_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const class FString& K2Node_CustomEvent_InviterName, const class FString& K2Node_CustomEvent_InviteId, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& K2Node_CustomEvent_ID_1, class UObject* K2Node_CustomEvent_Object_1, const class FString& K2Node_CustomEvent_Button_ID, enum class EPopupResponse K2Node_CustomEvent_Response_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FPopupDataRow& CallFunc_MakePopupDataRow_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsInLobby_bIsOwner_2, bool CallFunc_IsInLobby_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue_1, class UGGPopupUserWidget* CallFunc_CreatePopupCustom_OutWidget, bool CallFunc_CreatePopupCustom_ReturnValue, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue, enum class ELobbyUpdateType K2Node_CustomEvent_LobbyUpdateType, enum class ELoginState K2Node_CustomEvent_OldState, enum class ELoginState K2Node_CustomEvent_NewState, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsHostStartingServer_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue_2, bool CallFunc_IsSplitScreenActive_ReturnValue, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue_3, const struct FDLCLevelData& K2Node_CustomEvent_LevelData, bool CallFunc_CheckOwnership_EveryoneHasOwnership, bool CallFunc_IsForcedAlwaysOnline_ReturnValue, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue_1, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue_4, enum class ELoginState K2Node_CustomEvent_Current_State, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsForcedAlwaysOnline_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue_5, bool CallFunc_HasLoginTimedOut_ReturnValue, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue_6, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue_2, bool CallFunc_IsLoggedIn_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsOnlineManagerBusy_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_5, class FText Temp_text_Variable, class FText Temp_text_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UGGUserWidget* CallFunc_SpawnAdditionalWidget_ReturnValue, const struct FGameplayTag& K2Node_Event_InTag, const struct FMenuNavigationContext& K2Node_Event_Context, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UGGPlayerGameDataAsset* K2Node_Event_PlayerGameData, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue_2, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue_3, bool CallFunc_HasClientStartedTravel_ReturnValue, bool CallFunc_HasClientStartedTravel_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class FText K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 CallFunc_GetSelectedWorldCollectionSlot_ReturnValue, class UBP_GGGameInstance_C* K2Node_DynamicCast_AsBP_GGGame_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_UpdateLastLoadedLevel_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_IsSplitScreenActive_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_6, bool Temp_bool_Variable_2, bool K2Node_Select_Default_1, const class FString& K2Node_CustomEvent_ID, class UObject* K2Node_CustomEvent_Object, const class FString& K2Node_CustomEvent_ButtonID, enum class EPopupResponse K2Node_CustomEvent_Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_C", "ExecuteUbergraph_UMG_TitleScreen");

	Params::UUMG_TitleScreen_C_ExecuteUbergraph_UMG_TitleScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDLCHandler_ReturnValue = CallFunc_GetDLCHandler_ReturnValue;
	Parms.CallFunc_IsInLobby_bIsOwner = CallFunc_IsInLobby_bIsOwner;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_IsLoggedIn_ReturnValue = CallFunc_IsLoggedIn_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGPlayer_Controller = K2Node_DynamicCast_AsGGPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Offline = K2Node_CustomEvent_Offline;
	Parms.K2Node_CustomEvent_Level_Data = K2Node_CustomEvent_Level_Data;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_RequestMenuNavigation_OutWidget = CallFunc_RequestMenuNavigation_OutWidget;
	Parms.CallFunc_RequestMenuNavigation_ReturnValue = CallFunc_RequestMenuNavigation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetOnlineManager_ReturnValue = CallFunc_GetOnlineManager_ReturnValue;
	Parms.CallFunc_GetOnlineManager_ReturnValue_1 = CallFunc_GetOnlineManager_ReturnValue_1;
	Parms.CallFunc_GetLobbyMembers_ReturnValue = CallFunc_GetLobbyMembers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsInLobby_bIsOwner_1 = CallFunc_IsInLobby_bIsOwner_1;
	Parms.CallFunc_IsInLobby_ReturnValue_1 = CallFunc_IsInLobby_ReturnValue_1;
	Parms.CallFunc_GetLoginState_ReturnValue = CallFunc_GetLoginState_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_InviterName = K2Node_CustomEvent_InviterName;
	Parms.K2Node_CustomEvent_InviteId = K2Node_CustomEvent_InviteId;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CustomEvent_ID_1 = K2Node_CustomEvent_ID_1;
	Parms.K2Node_CustomEvent_Object_1 = K2Node_CustomEvent_Object_1;
	Parms.K2Node_CustomEvent_Button_ID = K2Node_CustomEvent_Button_ID;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakePopupDataRow_ReturnValue = CallFunc_MakePopupDataRow_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsInLobby_bIsOwner_2 = CallFunc_IsInLobby_bIsOwner_2;
	Parms.CallFunc_IsInLobby_ReturnValue_2 = CallFunc_IsInLobby_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetOwningGGPlayer_ReturnValue = CallFunc_GetOwningGGPlayer_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetOwningGGPlayer_ReturnValue_1 = CallFunc_GetOwningGGPlayer_ReturnValue_1;
	Parms.CallFunc_CreatePopupCustom_OutWidget = CallFunc_CreatePopupCustom_OutWidget;
	Parms.CallFunc_CreatePopupCustom_ReturnValue = CallFunc_CreatePopupCustom_ReturnValue;
	Parms.CallFunc_MakeNotificationProperties_ReturnValue = CallFunc_MakeNotificationProperties_ReturnValue;
	Parms.K2Node_CustomEvent_LobbyUpdateType = K2Node_CustomEvent_LobbyUpdateType;
	Parms.K2Node_CustomEvent_OldState = K2Node_CustomEvent_OldState;
	Parms.K2Node_CustomEvent_NewState = K2Node_CustomEvent_NewState;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsHostStartingServer_ReturnValue = CallFunc_IsHostStartingServer_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetOwningGGPlayer_ReturnValue_2 = CallFunc_GetOwningGGPlayer_ReturnValue_2;
	Parms.CallFunc_IsSplitScreenActive_ReturnValue = CallFunc_IsSplitScreenActive_ReturnValue;
	Parms.CallFunc_GetOwningGGPlayer_ReturnValue_3 = CallFunc_GetOwningGGPlayer_ReturnValue_3;
	Parms.K2Node_CustomEvent_LevelData = K2Node_CustomEvent_LevelData;
	Parms.CallFunc_CheckOwnership_EveryoneHasOwnership = CallFunc_CheckOwnership_EveryoneHasOwnership;
	Parms.CallFunc_IsForcedAlwaysOnline_ReturnValue = CallFunc_IsForcedAlwaysOnline_ReturnValue;
	Parms.CallFunc_MakeNotificationProperties_ReturnValue_1 = CallFunc_MakeNotificationProperties_ReturnValue_1;
	Parms.CallFunc_GetOwningGGPlayer_ReturnValue_4 = CallFunc_GetOwningGGPlayer_ReturnValue_4;
	Parms.K2Node_CustomEvent_Current_State = K2Node_CustomEvent_Current_State;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsForcedAlwaysOnline_ReturnValue_1 = CallFunc_IsForcedAlwaysOnline_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetOwningGGPlayer_ReturnValue_5 = CallFunc_GetOwningGGPlayer_ReturnValue_5;
	Parms.CallFunc_HasLoginTimedOut_ReturnValue = CallFunc_HasLoginTimedOut_ReturnValue;
	Parms.CallFunc_GetOwningGGPlayer_ReturnValue_6 = CallFunc_GetOwningGGPlayer_ReturnValue_6;
	Parms.CallFunc_MakeNotificationProperties_ReturnValue_2 = CallFunc_MakeNotificationProperties_ReturnValue_2;
	Parms.CallFunc_IsLoggedIn_ReturnValue_1 = CallFunc_IsLoggedIn_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_IsOnlineManagerBusy_ReturnValue = CallFunc_IsOnlineManagerBusy_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_SpawnAdditionalWidget_ReturnValue = CallFunc_SpawnAdditionalWidget_ReturnValue;
	Parms.K2Node_Event_InTag = K2Node_Event_InTag;
	Parms.K2Node_Event_Context = K2Node_Event_Context;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_Event_PlayerGameData = K2Node_Event_PlayerGameData;
	Parms.CallFunc_GetOnlineManager_ReturnValue_2 = CallFunc_GetOnlineManager_ReturnValue_2;
	Parms.CallFunc_GetOnlineManager_ReturnValue_3 = CallFunc_GetOnlineManager_ReturnValue_3;
	Parms.CallFunc_HasClientStartedTravel_ReturnValue = CallFunc_HasClientStartedTravel_ReturnValue;
	Parms.CallFunc_HasClientStartedTravel_ReturnValue_1 = CallFunc_HasClientStartedTravel_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetSelectedWorldCollectionSlot_ReturnValue = CallFunc_GetSelectedWorldCollectionSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_GGGame_Instance = K2Node_DynamicCast_AsBP_GGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_UpdateLastLoadedLevel_ReturnValue = CallFunc_UpdateLastLoadedLevel_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsSplitScreenActive_ReturnValue_1 = CallFunc_IsSplitScreenActive_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.K2Node_CustomEvent_Object = K2Node_CustomEvent_Object;
	Parms.K2Node_CustomEvent_ButtonID = K2Node_CustomEvent_ButtonID;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;

	UObject::ProcessEvent(Func, &Parms);

}

}


