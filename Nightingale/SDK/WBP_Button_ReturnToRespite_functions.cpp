#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C
// (None)

class UClass* UWBP_Button_ReturnToRespite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Button_ReturnToRespite_C");

	return Clss;
}


// WBP_Button_ReturnToRespite_C WBP_Button_ReturnToRespite.Default__WBP_Button_ReturnToRespite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Button_ReturnToRespite_C* UWBP_Button_ReturnToRespite_C::GetDefaultObj()
{
	static class UWBP_Button_ReturnToRespite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Button_ReturnToRespite_C*>(UWBP_Button_ReturnToRespite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C.DisableButton
// (Exec, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReasonLocalized                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Button_ReturnToRespite_C::DisableButton(class FText ReasonLocalized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_ReturnToRespite_C", "DisableButton");

	Params::UWBP_Button_ReturnToRespite_C_DisableButton_Params Parms{};

	Parms.ReasonLocalized = ReasonLocalized;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C.HandleButtonClick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (ConstParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// bool                               CallFunc_IsPlayerInRespiteRealm_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class UWBP_Popup_General_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_ReturnToRespite_C::HandleButtonClick(class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class FText Temp_text_Variable_3, bool CallFunc_IsPlayerInRespiteRealm_ReturnValue, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class FText K2Node_Select_Default, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_ReturnToRespite_C", "HandleButtonClick");

	Params::UWBP_Button_ReturnToRespite_C_HandleButtonClick_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_IsPlayerInRespiteRealm_ReturnValue = CallFunc_IsPlayerInRespiteRealm_ReturnValue;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C.HandleRespiteConfirmationWindowClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_ReturnToRespite_C::HandleRespiteConfirmationWindowClosed(class UNWXCommonWindowWidget* Window)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_ReturnToRespite_C", "HandleRespiteConfirmationWindowClosed");

	Params::UWBP_Button_ReturnToRespite_C_HandleRespiteConfirmationWindowClosed_Params Parms{};

	Parms.Window = Window;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C.CloseRespiteConfirmationWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_ReturnToRespite_C::CloseRespiteConfirmationWindow(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_ReturnToRespite_C", "CloseRespiteConfirmationWindow");

	Params::UWBP_Button_ReturnToRespite_C_CloseRespiteConfirmationWindow_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C.TravelToRespite
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerInRespiteRealm_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryTravelToRespitePoint_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesPlayerHaveRespitePoint_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_ReturnToRespite_C::TravelToRespite(const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_IsPlayerInRespiteRealm_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, bool CallFunc_TryTravelToRespitePoint_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, bool CallFunc_DoesPlayerHaveRespitePoint_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_ReturnToRespite_C", "TravelToRespite");

	Params::UWBP_Button_ReturnToRespite_C_TravelToRespite_Params Parms{};

	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_IsPlayerInRespiteRealm_ReturnValue = CallFunc_IsPlayerInRespiteRealm_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.CallFunc_TryTravelToRespitePoint_ReturnValue = CallFunc_TryTravelToRespitePoint_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_3 = CallFunc_GetOwningPlayerController_ReturnValue_3;
	Parms.CallFunc_DoesPlayerHaveRespitePoint_ReturnValue = CallFunc_DoesPlayerHaveRespitePoint_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C.BU_Click_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Button_ReturnToRespite_C::BU_Click_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_ReturnToRespite_C", "BU_Click_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Button_ReturnToRespite_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_ReturnToRespite_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C.ExecuteUbergraph_WBP_Button_ReturnToRespite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FNWXPlayerDeploymentRequest CallFunc_GetPlayerDeploymentRequest_ReturnValue                  (ConstParm)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanTravelToRespite_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_ReturnToRespite_C::ExecuteUbergraph_WBP_Button_ReturnToRespite(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FNWXPlayerDeploymentRequest& CallFunc_GetPlayerDeploymentRequest_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_CanTravelToRespite_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_ReturnToRespite_C", "ExecuteUbergraph_WBP_Button_ReturnToRespite");

	Params::UWBP_Button_ReturnToRespite_C_ExecuteUbergraph_WBP_Button_ReturnToRespite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerDeploymentRequest_ReturnValue = CallFunc_GetPlayerDeploymentRequest_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_CanTravelToRespite_ReturnValue = CallFunc_CanTravelToRespite_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C.OnLocalTravel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Button_ReturnToRespite_C::OnLocalTravel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_ReturnToRespite_C", "OnLocalTravel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C.ConfirmationPopup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ConfirmOpened                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_ReturnToRespite_C::ConfirmationPopup__DelegateSignature(bool ConfirmOpened)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_ReturnToRespite_C", "ConfirmationPopup__DelegateSignature");

	Params::UWBP_Button_ReturnToRespite_C_ConfirmationPopup__DelegateSignature_Params Parms{};

	Parms.ConfirmOpened = ConfirmOpened;

	UObject::ProcessEvent(Func, &Parms);

}

}


