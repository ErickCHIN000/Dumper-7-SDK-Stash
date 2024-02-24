#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InfestationHealthBarUI.InfestationHealthBarUI_C
// (None)

class UClass* UInfestationHealthBarUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InfestationHealthBarUI_C");

	return Clss;
}


// InfestationHealthBarUI_C InfestationHealthBarUI.Default__InfestationHealthBarUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInfestationHealthBarUI_C* UInfestationHealthBarUI_C::GetDefaultObj()
{
	static class UInfestationHealthBarUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInfestationHealthBarUI_C*>(UInfestationHealthBarUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InfestationHealthBarUI.InfestationHealthBarUI_C.UpdateHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInfestationHealthBarUI_C::UpdateHealth(double Health, double MaxHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfestationHealthBarUI_C", "UpdateHealth");

	Params::UInfestationHealthBarUI_C_UpdateHealth_Params Parms{};

	Parms.Health = Health;
	Parms.MaxHealth = MaxHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfestationHealthBarUI.InfestationHealthBarUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInfestationHealthBarUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfestationHealthBarUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InfestationHealthBarUI.InfestationHealthBarUI_C.Event_Visible
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInfestationHealthBarUI_C::Event_Visible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfestationHealthBarUI_C", "Event_Visible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InfestationHealthBarUI.InfestationHealthBarUI_C.Event_Hidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInfestationHealthBarUI_C::Event_Hidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfestationHealthBarUI_C", "Event_Hidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InfestationHealthBarUI.InfestationHealthBarUI_C.ExecuteUbergraph_InfestationHealthBarUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_MaxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPi_ProgressBars_C>CallFunc_GetProgressBarManager_Manager                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class UWB_Base_C*                  K2Node_DynamicCast_AsWB_Base                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UInfestationHealthBarUI_C::ExecuteUbergraph_InfestationHealthBarUI(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double K2Node_CustomEvent_Health, double K2Node_CustomEvent_MaxHealth, double CallFunc_FClamp_ReturnValue, TScriptInterface<class IBPi_ProgressBars_C> CallFunc_GetProgressBarManager_Manager, class FText CallFunc_Conv_DoubleToText_ReturnValue, class UWB_Base_C* K2Node_DynamicCast_AsWB_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfestationHealthBarUI_C", "ExecuteUbergraph_InfestationHealthBarUI");

	Params::UInfestationHealthBarUI_C_ExecuteUbergraph_InfestationHealthBarUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Health = K2Node_CustomEvent_Health;
	Parms.K2Node_CustomEvent_MaxHealth = K2Node_CustomEvent_MaxHealth;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetProgressBarManager_Manager = CallFunc_GetProgressBarManager_Manager;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Base = K2Node_DynamicCast_AsWB_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfestationHealthBarUI.InfestationHealthBarUI_C.Hidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInfestationHealthBarUI_C::Hidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfestationHealthBarUI_C", "Hidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InfestationHealthBarUI.InfestationHealthBarUI_C.Visible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInfestationHealthBarUI_C::Visible__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfestationHealthBarUI_C", "Visible__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


