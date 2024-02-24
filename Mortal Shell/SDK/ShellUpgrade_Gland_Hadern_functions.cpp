#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_Gland_Hadern.ShellUpgrade_Gland_Hadern_C
// (None)

class UClass* UShellUpgrade_Gland_Hadern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_Gland_Hadern_C");

	return Clss;
}


// ShellUpgrade_Gland_Hadern_C ShellUpgrade_Gland_Hadern.Default__ShellUpgrade_Gland_Hadern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_Gland_Hadern_C* UShellUpgrade_Gland_Hadern_C::GetDefaultObj()
{
	static class UShellUpgrade_Gland_Hadern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_Gland_Hadern_C*>(UShellUpgrade_Gland_Hadern_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_Gland_Hadern.ShellUpgrade_Gland_Hadern_C.ApplyMaxResolveBoost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_Gland_Hadern_C::ApplyMaxResolveBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_Gland_Hadern_C", "ApplyMaxResolveBoost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_Gland_Hadern.ShellUpgrade_Gland_Hadern_C.RemoveMaxResolveBoost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_Gland_Hadern_C::RemoveMaxResolveBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_Gland_Hadern_C", "RemoveMaxResolveBoost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_Gland_Hadern.ShellUpgrade_Gland_Hadern_C.OnGlandStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgrade_Gland_Hadern_C::OnGlandStateChanged_Event(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_Gland_Hadern_C", "OnGlandStateChanged_Event");

	Params::UShellUpgrade_Gland_Hadern_C_OnGlandStateChanged_Event_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgrade_Gland_Hadern.ShellUpgrade_Gland_Hadern_C.RemoveHPBoost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_Gland_Hadern_C::RemoveHPBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_Gland_Hadern_C", "RemoveHPBoost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_Gland_Hadern.ShellUpgrade_Gland_Hadern_C.ApplyHPBoost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_Gland_Hadern_C::ApplyHPBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_Gland_Hadern_C", "ApplyHPBoost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_Gland_Hadern.ShellUpgrade_Gland_Hadern_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_Gland_Hadern_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_Gland_Hadern_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_Gland_Hadern.ShellUpgrade_Gland_Hadern_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_Gland_Hadern_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_Gland_Hadern_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_Gland_Hadern.ShellUpgrade_Gland_Hadern_C.MaxResolveChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_Gland_Hadern_C::MaxResolveChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_Gland_Hadern_C", "MaxResolveChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_Gland_Hadern.ShellUpgrade_Gland_Hadern_C.ExecuteUbergraph_ShellUpgrade_Gland_Hadern
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEnabled                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGlandOn_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgrade_Gland_Hadern_C::ExecuteUbergraph_ShellUpgrade_Gland_Hadern(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue, bool K2Node_CustomEvent_bEnabled, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_IsGlandOn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_Gland_Hadern_C", "ExecuteUbergraph_ShellUpgrade_Gland_Hadern");

	Params::UShellUpgrade_Gland_Hadern_C_ExecuteUbergraph_ShellUpgrade_Gland_Hadern_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.K2Node_CustomEvent_bEnabled = K2Node_CustomEvent_bEnabled;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_IsGlandOn_ReturnValue = CallFunc_IsGlandOn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


