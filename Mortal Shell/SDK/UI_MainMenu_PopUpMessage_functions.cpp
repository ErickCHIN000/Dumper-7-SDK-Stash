#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C
// (None)

class UClass* UUI_MainMenu_PopUpMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MainMenu_PopUpMessage_C");

	return Clss;
}


// UI_MainMenu_PopUpMessage_C UI_MainMenu_PopUpMessage.Default__UI_MainMenu_PopUpMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MainMenu_PopUpMessage_C* UUI_MainMenu_PopUpMessage_C::GetDefaultObj()
{
	static class UUI_MainMenu_PopUpMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MainMenu_PopUpMessage_C*>(UUI_MainMenu_PopUpMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.OpenDiscord
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TryToLaunchURL_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_PopUpMessage_C::OpenDiscord(bool CallFunc_TryToLaunchURL_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "OpenDiscord");

	Params::UUI_MainMenu_PopUpMessage_C_OpenDiscord_Params Parms{};

	Parms.CallFunc_TryToLaunchURL_ReturnValue = CallFunc_TryToLaunchURL_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.FadeInDismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_PopUpMessage_C::FadeInDismiss(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "FadeInDismiss");

	Params::UUI_MainMenu_PopUpMessage_C_FadeInDismiss_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.CloseMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_PopUpMessage_C::CloseMessage(bool CallFunc_SetGamePaused_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "CloseMessage");

	Params::UUI_MainMenu_PopUpMessage_C_CloseMessage_Params Parms{};

	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.GetHoldToDismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHoldToDismiss_Hold                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_PopUpMessage_C::GetHoldToDismiss(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHoldToDismiss_Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "GetHoldToDismiss");

	Params::UUI_MainMenu_PopUpMessage_C_GetHoldToDismiss_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHoldToDismiss_Hold = CallFunc_GetHoldToDismiss_Hold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MainMenu_PopUpMessage_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.OnHoldToDismissChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_PopUpMessage_C::OnHoldToDismissChanged(bool Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "OnHoldToDismissChanged");

	Params::UUI_MainMenu_PopUpMessage_C_OnHoldToDismissChanged_Params Parms{};

	Parms.Hold = Hold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.OnFaceButtonPressAndHold_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_PopUpMessage_C::OnFaceButtonPressAndHold_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "OnFaceButtonPressAndHold_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.OnFaceButtonPressAndHold_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_PopUpMessage_C::OnFaceButtonPressAndHold_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "OnFaceButtonPressAndHold_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.OnClose_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_PopUpMessage_C::OnClose_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "OnClose_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.OnFadeInEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_PopUpMessage_C::OnFadeInEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "OnFadeInEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_PopUpMessage_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.BndEvt__UI_ControllerFaceButtonPressAndHold_K2Node_ComponentBoundEvent_0_OnPressStart__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_MainMenu_PopUpMessage_C::BndEvt__UI_ControllerFaceButtonPressAndHold_K2Node_ComponentBoundEvent_0_OnPressStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "BndEvt__UI_ControllerFaceButtonPressAndHold_K2Node_ComponentBoundEvent_0_OnPressStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.ForcedClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_PopUpMessage_C::ForcedClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "ForcedClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.Discord
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_PopUpMessage_C::Discord()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "Discord");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.BndEvt__UI_Controller_OpenDiscord_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_PopUpMessage_C::BndEvt__UI_Controller_OpenDiscord_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "BndEvt__UI_Controller_OpenDiscord_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	Params::UUI_MainMenu_PopUpMessage_C_BndEvt__UI_Controller_OpenDiscord_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_PopUpMessage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "Tick");

	Params::UUI_MainMenu_PopUpMessage_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_PopUpMessage.UI_MainMenu_PopUpMessage_C.ExecuteUbergraph_UI_MainMenu_PopUpMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Hold                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_PopUpMessage_C::ExecuteUbergraph_UI_MainMenu_PopUpMessage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_CustomEvent_Hold, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, bool CallFunc_SetGamePaused_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_PopUpMessage_C", "ExecuteUbergraph_UI_MainMenu_PopUpMessage");

	Params::UUI_MainMenu_PopUpMessage_C_ExecuteUbergraph_UI_MainMenu_PopUpMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_Hold = K2Node_CustomEvent_Hold;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsInputKeyDown_ReturnValue = CallFunc_IsInputKeyDown_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


