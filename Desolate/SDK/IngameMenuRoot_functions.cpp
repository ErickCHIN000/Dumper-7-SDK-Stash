#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass IngameMenuRoot.IngameMenuRoot_C
// (None)

class UClass* UIngameMenuRoot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IngameMenuRoot_C");

	return Clss;
}


// IngameMenuRoot_C IngameMenuRoot.Default__IngameMenuRoot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIngameMenuRoot_C* UIngameMenuRoot_C::GetDefaultObj()
{
	static class UIngameMenuRoot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIngameMenuRoot_C*>(UIngameMenuRoot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IngameMenuRoot.IngameMenuRoot_C.FocusCurrentScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIngameMenuRoot_C::FocusCurrentScreen(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "FocusCurrentScreen");

	Params::UIngameMenuRoot_C_FocusCurrentScreen_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IngameMenuRoot.IngameMenuRoot_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMapping_Bindings                               (ReferenceParm, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyPlayerController_C*       K2Node_DynamicCast_AsMy_Player_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UIngameMenuRoot_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMapping_Bindings, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AMyPlayerController_C* K2Node_DynamicCast_AsMy_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "OnKeyDown");

	Params::UIngameMenuRoot_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetActionMapping_Bindings = CallFunc_GetActionMapping_Bindings;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsMy_Player_Controller = K2Node_DynamicCast_AsMy_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function IngameMenuRoot.IngameMenuRoot_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UIngameMenuRoot_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "OnFocusReceived");

	Params::UIngameMenuRoot_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function IngameMenuRoot.IngameMenuRoot_C.ShowScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseAutoHideWidget_C*       Screen                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIngameMenuRoot_C::ShowScreen(class UBaseAutoHideWidget_C* Screen, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "ShowScreen");

	Params::UIngameMenuRoot_C_ShowScreen_Params Parms{};

	Parms.Screen = Screen;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IngameMenuRoot.IngameMenuRoot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIngameMenuRoot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "PreConstruct");

	Params::UIngameMenuRoot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IngameMenuRoot.IngameMenuRoot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIngameMenuRoot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "Tick");

	Params::UIngameMenuRoot_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IngameMenuRoot.IngameMenuRoot_C.OnPressed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::OnPressed_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "OnPressed_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.OnPressed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::OnPressed_Event_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "OnPressed_Event_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.OnPressed_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::OnPressed_Event_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "OnPressed_Event_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.OnPressed_Event_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::OnPressed_Event_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "OnPressed_Event_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.OnPressed_Event_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::OnPressed_Event_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "OnPressed_Event_4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.OnPressed_Event_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::OnPressed_Event_5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "OnPressed_Event_5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.ExitToMainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::ExitToMainMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "ExitToMainMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.Suicide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::Suicide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "Suicide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.ExitGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::ExitGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "ExitGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.OnPressed_Event_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::OnPressed_Event_6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "OnPressed_Event_6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::CustomEvent_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "CustomEvent_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.RestartGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::RestartGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "RestartGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::CustomEvent_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "CustomEvent_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::CustomEvent_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "CustomEvent_4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.OnViewportReceiveFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::OnViewportReceiveFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "OnViewportReceiveFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.SaveGameBeforeQuit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bQuit                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIngameMenuRoot_C::SaveGameBeforeQuit(bool bQuit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "SaveGameBeforeQuit");

	Params::UIngameMenuRoot_C_SaveGameBeforeQuit_Params Parms{};

	Parms.bQuit = bQuit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IngameMenuRoot.IngameMenuRoot_C.OpenSavingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::OpenSavingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "OpenSavingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.CancelSaving
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIngameMenuRoot_C::CancelSaving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "CancelSaving");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IngameMenuRoot.IngameMenuRoot_C.ExecuteUbergraph_IngameMenuRoot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UConfirmScreen_v3_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericCharacter_C*         K2Node_DynamicCast_AsGeneric_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericCharacter_C*         K2Node_DynamicCast_AsGeneric_Character_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericCharacter_C*         K2Node_DynamicCast_AsGeneric_Character_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGamePaused_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGamePaused_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericCharacter_C*         K2Node_DynamicCast_AsGeneric_Character_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGamePaused_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyPlayerController_C*       K2Node_DynamicCast_AsMy_Player_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericCharacter_C*         K2Node_DynamicCast_AsGeneric_Character_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerController*         K2Node_DynamicCast_AsSHPlayer_Controller                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bQuit                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESaveSlot               CallFunc_GetCurrentSaveSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)

void UIngameMenuRoot_C::ExecuteUbergraph_IngameMenuRoot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UConfirmScreen_v3_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character_1, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_2, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character_2, bool K2Node_DynamicCast_bSuccess_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsGamePaused_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_IsGamePaused_ReturnValue_1, bool CallFunc_SetGamePaused_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_3, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_SetGamePaused_ReturnValue_2, bool CallFunc_IsGamePaused_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AMyPlayerController_C* K2Node_DynamicCast_AsMy_Player_Controller, bool K2Node_DynamicCast_bSuccess_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_5, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_4, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character_4, bool K2Node_DynamicCast_bSuccess_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller, bool K2Node_DynamicCast_bSuccess_7, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_CustomEvent_bQuit, class FText Temp_text_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_9, enum class ESaveSlot CallFunc_GetCurrentSaveSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IngameMenuRoot_C", "ExecuteUbergraph_IngameMenuRoot");

	Params::UIngameMenuRoot_C_ExecuteUbergraph_IngameMenuRoot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsGeneric_Character = K2Node_DynamicCast_AsGeneric_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGeneric_Character_1 = K2Node_DynamicCast_AsGeneric_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_2 = CallFunc_GetOwningPlayerPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGeneric_Character_2 = K2Node_DynamicCast_AsGeneric_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsGamePaused_ReturnValue = CallFunc_IsGamePaused_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_IsGamePaused_ReturnValue_1 = CallFunc_IsGamePaused_ReturnValue_1;
	Parms.CallFunc_SetGamePaused_ReturnValue_1 = CallFunc_SetGamePaused_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_3 = CallFunc_GetOwningPlayerPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGeneric_Character_3 = K2Node_DynamicCast_AsGeneric_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SetGamePaused_ReturnValue_2 = CallFunc_SetGamePaused_ReturnValue_2;
	Parms.CallFunc_IsGamePaused_ReturnValue_2 = CallFunc_IsGamePaused_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsMy_Player_Controller = K2Node_DynamicCast_AsMy_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_4 = CallFunc_GetOwningPlayerPawn_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGeneric_Character_4 = K2Node_DynamicCast_AsGeneric_Character_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSHPlayer_Controller = K2Node_DynamicCast_AsSHPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CustomEvent_bQuit = K2Node_CustomEvent_bQuit;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSHGame_Instance_1 = K2Node_DynamicCast_AsSHGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetCurrentSaveSlot_ReturnValue = CallFunc_GetCurrentSaveSlot_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;

	UObject::ProcessEvent(Func, &Parms);

}

}


