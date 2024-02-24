#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LobbyMenu.LobbyMenu_C
// (None)

class UClass* ULobbyMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyMenu_C");

	return Clss;
}


// LobbyMenu_C LobbyMenu.Default__LobbyMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULobbyMenu_C* ULobbyMenu_C::GetDefaultObj()
{
	static class ULobbyMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobbyMenu_C*>(ULobbyMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LobbyMenu.LobbyMenu_C.EnableReadyStartButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               ButtonStatus                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyPC_C*                  K2Node_DynamicCast_AsLobby_PC                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyGM_C*                  K2Node_DynamicCast_AsLobby_GM                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ULobbyMenu_C::EnableReadyStartButton(bool ButtonStatus, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "EnableReadyStartButton");

	Params::ULobbyMenu_C_EnableReadyStartButton_Params Parms{};

	Parms.ButtonStatus = ButtonStatus;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_PC = K2Node_DynamicCast_AsLobby_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GM = K2Node_DynamicCast_AsLobby_GM;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LobbyMenu.LobbyMenu_C.OnFailure_644333AB436DA73363A6BC8814E69262
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyMenu_C::OnFailure_644333AB436DA73363A6BC8814E69262()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "OnFailure_644333AB436DA73363A6BC8814E69262");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyMenu.LobbyMenu_C.OnSuccess_644333AB436DA73363A6BC8814E69262
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyMenu_C::OnSuccess_644333AB436DA73363A6BC8814E69262()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "OnSuccess_644333AB436DA73363A6BC8814E69262");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyMenu.LobbyMenu_C.ClearPlayerList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyMenu_C::ClearPlayerList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "ClearPlayerList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyMenu.LobbyMenu_C.UpdatePlayerWindow
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfo                 IncomingPlayerInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ULobbyMenu_C::UpdatePlayerWindow(const struct FPlayerInfo& IncomingPlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "UpdatePlayerWindow");

	Params::ULobbyMenu_C_UpdatePlayerWindow_Params Parms{};

	Parms.IncomingPlayerInfo = IncomingPlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyMenu.LobbyMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULobbyMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyMenu.LobbyMenu_C.BndEvt__LeaveLobby_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULobbyMenu_C::BndEvt__LeaveLobby_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "BndEvt__LeaveLobby_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyMenu.LobbyMenu_C.BndEvt__ReadyStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULobbyMenu_C::BndEvt__ReadyStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "BndEvt__ReadyStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyMenu.LobbyMenu_C.UpdateStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyMenu_C::UpdateStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "UpdateStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyMenu.LobbyMenu_C.BndEvt__SetGameSettings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULobbyMenu_C::BndEvt__SetGameSettings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "BndEvt__SetGameSettings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyMenu.LobbyMenu_C.BndEvt__ChooseCharacter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULobbyMenu_C::BndEvt__ChooseCharacter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "BndEvt__ChooseCharacter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyMenu.LobbyMenu_C.ExecuteUbergraph_LobbyMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerInfo                 K2Node_CustomEvent_IncomingPlayerInfo                            (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALobbyPC_C*                  K2Node_DynamicCast_AsLobby_PC                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyGM_C*                  K2Node_DynamicCast_AsLobby_GM                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyPC_C*                  K2Node_DynamicCast_AsLobby_PC_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyPC_C*                  K2Node_DynamicCast_AsLobby_PC_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConnectedPlayer_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyMenu_C::ExecuteUbergraph_LobbyMenu(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FPlayerInfo& K2Node_CustomEvent_IncomingPlayerInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC_2, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class UConnectedPlayer_C* CallFunc_Create_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyMenu_C", "ExecuteUbergraph_LobbyMenu");

	Params::ULobbyMenu_C_ExecuteUbergraph_LobbyMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_IncomingPlayerInfo = K2Node_CustomEvent_IncomingPlayerInfo;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_PC = K2Node_DynamicCast_AsLobby_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GM = K2Node_DynamicCast_AsLobby_GM;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_PC_1 = K2Node_DynamicCast_AsLobby_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsLobby_PC_2 = K2Node_DynamicCast_AsLobby_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_3 = CallFunc_GetOwningPlayer_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_4 = CallFunc_GetOwningPlayer_ReturnValue_4;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


