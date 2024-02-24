#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_TitleLogo.wid_MainMenu_TitleLogo_C
// (None)

class UClass* UWid_MainMenu_TitleLogo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_TitleLogo_C");

	return Clss;
}


// wid_MainMenu_TitleLogo_C wid_MainMenu_TitleLogo.Default__wid_MainMenu_TitleLogo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_TitleLogo_C* UWid_MainMenu_TitleLogo_C::GetDefaultObj()
{
	static class UWid_MainMenu_TitleLogo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_TitleLogo_C*>(UWid_MainMenu_TitleLogo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_TitleLogo.wid_MainMenu_TitleLogo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_TitleLogo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_TitleLogo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_TitleLogo.wid_MainMenu_TitleLogo_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_TitleLogo_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_TitleLogo_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_TitleLogo.wid_MainMenu_TitleLogo_C.UpdateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_TitleLogo_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_TitleLogo_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_TitleLogo.wid_MainMenu_TitleLogo_C.InputDeviceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewInputIsGamepad                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_TitleLogo_C::InputDeviceChanged(bool NewInputIsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_TitleLogo_C", "InputDeviceChanged");

	Params::UWid_MainMenu_TitleLogo_C_InputDeviceChanged_Params Parms{};

	Parms.NewInputIsGamepad = NewInputIsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_TitleLogo.wid_MainMenu_TitleLogo_C.Finish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_TitleLogo_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_TitleLogo_C", "Finish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_TitleLogo.wid_MainMenu_TitleLogo_C.ActivateInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_TitleLogo_C::ActivateInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_TitleLogo_C", "ActivateInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_TitleLogo.wid_MainMenu_TitleLogo_C.ExecuteUbergraph_wid_MainMenu_TitleLogo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGGameModeBase*             CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (ConstParm)
// class FText                        CallFunc_KeyToIcon_OutText                                       (None)
// bool                               K2Node_CustomEvent_NewInputIsGamepad                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatText_Output                                       (None)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_TitleLogo_C::ExecuteUbergraph_wid_MainMenu_TitleLogo(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_OpenSource_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, class FText K2Node_Select_Default, class FText CallFunc_KeyToIcon_OutText, bool K2Node_CustomEvent_NewInputIsGamepad, class FText CallFunc_FormatText_Output, bool Temp_bool_IsClosed_Variable, float CallFunc_GetWorldDeltaSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_TitleLogo_C", "ExecuteUbergraph_wid_MainMenu_TitleLogo");

	Params::UWid_MainMenu_TitleLogo_C_ExecuteUbergraph_wid_MainMenu_TitleLogo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode = CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_KeyToIcon_OutText = CallFunc_KeyToIcon_OutText;
	Parms.K2Node_CustomEvent_NewInputIsGamepad = K2Node_CustomEvent_NewInputIsGamepad;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_TitleLogo.wid_MainMenu_TitleLogo_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_TitleLogo_C::Finished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_TitleLogo_C", "Finished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


