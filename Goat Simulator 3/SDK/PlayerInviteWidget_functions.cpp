#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerInviteWidget.PlayerInviteWidget_C
// (None)

class UClass* UPlayerInviteWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerInviteWidget_C");

	return Clss;
}


// PlayerInviteWidget_C PlayerInviteWidget.Default__PlayerInviteWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerInviteWidget_C* UPlayerInviteWidget_C::GetDefaultObj()
{
	static class UPlayerInviteWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerInviteWidget_C*>(UPlayerInviteWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerInviteWidget.PlayerInviteWidget_C.CanShowHoldText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECanStartSplitScreenResultCallFunc_CanStartSplitScreen_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         K2Node_DynamicCast_AsGGPlayer_Controller                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPrimaryPlayerBlueprint_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGamepadAvailableForPlayerIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPlayerInviteWidget_C::CanShowHoldText(class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECanStartSplitScreenResult CallFunc_CanStartSplitScreen_ReturnValue, class AGGPlayerController* K2Node_DynamicCast_AsGGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsPrimaryPlayerBlueprint_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsGamepadAvailableForPlayerIndex_ReturnValue, bool Temp_bool_Variable_1, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "CanShowHoldText");

	Params::UPlayerInviteWidget_C_CanShowHoldText_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_CanStartSplitScreen_ReturnValue = CallFunc_CanStartSplitScreen_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGPlayer_Controller = K2Node_DynamicCast_AsGGPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsPrimaryPlayerBlueprint_ReturnValue = CallFunc_IsPrimaryPlayerBlueprint_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsGamepadAvailableForPlayerIndex_ReturnValue = CallFunc_IsGamepadAvailableForPlayerIndex_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.Get_InviteButton_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGGGameInstance*             CallFunc_GetGGGameInstance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPlayerInviteWidget_C::Get_InviteButton_bIsEnabled(class UGGGameInstance* CallFunc_GetGGGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "Get_InviteButton_bIsEnabled");

	Params::UPlayerInviteWidget_C_Get_InviteButton_bIsEnabled_Params Parms{};

	Parms.CallFunc_GetGGGameInstance_ReturnValue = CallFunc_GetGGGameInstance_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.GetVisibility_InviteTextContainer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGGLobbyMember>      CallFunc_GetLobbyMembers_ReturnValue                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsAnyGamepadConnected_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_bIsOwner                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECanStartSplitScreenResultCallFunc_CanStartSplitScreen_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPlayerInviteWidget_C::GetVisibility_InviteTextContainer(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<struct FGGLobbyMember>& CallFunc_GetLobbyMembers_ReturnValue, bool CallFunc_IsAnyGamepadConnected_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsInLobby_bIsOwner, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ECanStartSplitScreenResult CallFunc_CanStartSplitScreen_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "GetVisibility_InviteTextContainer");

	Params::UPlayerInviteWidget_C_GetVisibility_InviteTextContainer_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetLobbyMembers_ReturnValue = CallFunc_GetLobbyMembers_ReturnValue;
	Parms.CallFunc_IsAnyGamepadConnected_ReturnValue = CallFunc_IsAnyGamepadConnected_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsInLobby_bIsOwner = CallFunc_IsInLobby_bIsOwner;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CanStartSplitScreen_ReturnValue = CallFunc_CanStartSplitScreen_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerInviteWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "Tick");

	Params::UPlayerInviteWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.OnSplitscreenPlayersUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::OnSplitscreenPlayersUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "OnSplitscreenPlayersUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.OnPrivilegeResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHasPrivilege                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerInviteWidget_C::OnPrivilegeResult(bool bHasPrivilege)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "OnPrivilegeResult");

	Params::UPlayerInviteWidget_C_OnPrivilegeResult_Params Parms{};

	Parms.bHasPrivilege = bHasPrivilege;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.OnGamepadConnected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::OnGamepadConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "OnGamepadConnected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.UpdateInviteTextVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::UpdateInviteTextVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "UpdateInviteTextVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerInviteWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "PreConstruct");

	Params::UPlayerInviteWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.OpenFriendsMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::OpenFriendsMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "OpenFriendsMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.OpenMobileFriendsMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::OpenMobileFriendsMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "OpenMobileFriendsMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.PopupResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EPopupResponse          Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerInviteWidget_C::PopupResponse(const class FString& ID, class UObject* Object, const class FString& ButtonID, enum class EPopupResponse Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "PopupResponse");

	Params::UPlayerInviteWidget_C_PopupResponse_Params Parms{};

	Parms.ID = ID;
	Parms.Object = Object;
	Parms.ButtonID = ButtonID;
	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPlayerInviteWidget_C::BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.OnMobileInviteButtonPopupPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EPopupResponse          Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerInviteWidget_C::OnMobileInviteButtonPopupPressed(const class FString& ID, class UObject* Object, const class FString& ButtonID, enum class EPopupResponse Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "OnMobileInviteButtonPopupPressed");

	Params::UPlayerInviteWidget_C_OnMobileInviteButtonPopupPressed_Params Parms{};

	Parms.ID = ID;
	Parms.Object = Object;
	Parms.ButtonID = ButtonID;
	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerInviteWidget.PlayerInviteWidget_C.ExecuteUbergraph_PlayerInviteWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConnectedToInternet_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetTargetUserIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUserHeldJoiningDuration_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_RequestTabNavigation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bHasPrivilege                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanShowHoldText_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestTabNavigation_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsInLobby_bIsOwner                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLowendMobileDevice_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPopupDataRow               K2Node_MakeStruct_PopupDataRow                                   (None)
// class FString                      K2Node_CustomEvent_ID_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Object_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ButtonID_1                                    (ZeroConstructor, HasGetValueTypeHash)
// enum class EPopupResponse          K2Node_CustomEvent_Response_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGPopupUserWidget*          CallFunc_CreatePopupCustom_OutWidget                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreatePopupCustom_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPopupDataRow               CallFunc_MakePopupDataRow_ReturnValue                            (None)
// class FString                      K2Node_CustomEvent_ID                                            (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Object                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ButtonID                                      (ZeroConstructor, HasGetValueTypeHash)
// enum class EPopupResponse          K2Node_CustomEvent_Response                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGPopupUserWidget*          CallFunc_CreatePopupCustom_OutWidget_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreatePopupCustom_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerInviteWidget_C::ExecuteUbergraph_PlayerInviteWidget(int32 EntryPoint, bool CallFunc_IsConnectedToInternet_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText CallFunc_GetText_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_SetTargetUserIndex_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, float CallFunc_GetUserHeldJoiningDuration_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_RequestTabNavigation_ReturnValue, bool K2Node_CustomEvent_bHasPrivilege, bool CallFunc_CanShowHoldText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue_1, bool CallFunc_RequestTabNavigation_ReturnValue_1, bool CallFunc_IsMobilePlatform_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsInLobby_bIsOwner, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsLowendMobileDevice_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FPopupDataRow& K2Node_MakeStruct_PopupDataRow, const class FString& K2Node_CustomEvent_ID_1, class UObject* K2Node_CustomEvent_Object_1, const class FString& K2Node_CustomEvent_ButtonID_1, enum class EPopupResponse K2Node_CustomEvent_Response_1, class UGGPopupUserWidget* CallFunc_CreatePopupCustom_OutWidget, bool CallFunc_CreatePopupCustom_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FPopupDataRow& CallFunc_MakePopupDataRow_ReturnValue, const class FString& K2Node_CustomEvent_ID, class UObject* K2Node_CustomEvent_Object, const class FString& K2Node_CustomEvent_ButtonID, enum class EPopupResponse K2Node_CustomEvent_Response, class UGGPopupUserWidget* CallFunc_CreatePopupCustom_OutWidget_1, bool CallFunc_CreatePopupCustom_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInviteWidget_C", "ExecuteUbergraph_PlayerInviteWidget");

	Params::UPlayerInviteWidget_C_ExecuteUbergraph_PlayerInviteWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsConnectedToInternet_ReturnValue = CallFunc_IsConnectedToInternet_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_SetTargetUserIndex_ReturnValue = CallFunc_SetTargetUserIndex_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetUserHeldJoiningDuration_ReturnValue = CallFunc_GetUserHeldJoiningDuration_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_RequestTabNavigation_ReturnValue = CallFunc_RequestTabNavigation_ReturnValue;
	Parms.K2Node_CustomEvent_bHasPrivilege = K2Node_CustomEvent_bHasPrivilege;
	Parms.CallFunc_CanShowHoldText_ReturnValue = CallFunc_CanShowHoldText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue_1 = CallFunc_GetPrimaryGGPlayerController_ReturnValue_1;
	Parms.CallFunc_RequestTabNavigation_ReturnValue_1 = CallFunc_RequestTabNavigation_ReturnValue_1;
	Parms.CallFunc_IsMobilePlatform_ReturnValue_1 = CallFunc_IsMobilePlatform_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsInLobby_bIsOwner = CallFunc_IsInLobby_bIsOwner;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_IsLowendMobileDevice_ReturnValue = CallFunc_IsLowendMobileDevice_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_PopupDataRow = K2Node_MakeStruct_PopupDataRow;
	Parms.K2Node_CustomEvent_ID_1 = K2Node_CustomEvent_ID_1;
	Parms.K2Node_CustomEvent_Object_1 = K2Node_CustomEvent_Object_1;
	Parms.K2Node_CustomEvent_ButtonID_1 = K2Node_CustomEvent_ButtonID_1;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.CallFunc_CreatePopupCustom_OutWidget = CallFunc_CreatePopupCustom_OutWidget;
	Parms.CallFunc_CreatePopupCustom_ReturnValue = CallFunc_CreatePopupCustom_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_MakePopupDataRow_ReturnValue = CallFunc_MakePopupDataRow_ReturnValue;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.K2Node_CustomEvent_Object = K2Node_CustomEvent_Object;
	Parms.K2Node_CustomEvent_ButtonID = K2Node_CustomEvent_ButtonID;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.CallFunc_CreatePopupCustom_OutWidget_1 = CallFunc_CreatePopupCustom_OutWidget_1;
	Parms.CallFunc_CreatePopupCustom_ReturnValue_1 = CallFunc_CreatePopupCustom_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


