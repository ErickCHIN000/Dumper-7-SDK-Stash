#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_GlimpseDropChanceAfterHarden.ShellUpgrade_GlimpseDropChanceAfterHarden_C
// (None)

class UClass* UShellUpgrade_GlimpseDropChanceAfterHarden_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_GlimpseDropChanceAfterHarden_C");

	return Clss;
}


// ShellUpgrade_GlimpseDropChanceAfterHarden_C ShellUpgrade_GlimpseDropChanceAfterHarden.Default__ShellUpgrade_GlimpseDropChanceAfterHarden_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_GlimpseDropChanceAfterHarden_C* UShellUpgrade_GlimpseDropChanceAfterHarden_C::GetDefaultObj()
{
	static class UShellUpgrade_GlimpseDropChanceAfterHarden_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_GlimpseDropChanceAfterHarden_C*>(UShellUpgrade_GlimpseDropChanceAfterHarden_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_GlimpseDropChanceAfterHarden.ShellUpgrade_GlimpseDropChanceAfterHarden_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GlimpseDropChanceAfterHarden_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GlimpseDropChanceAfterHarden_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GlimpseDropChanceAfterHarden.ShellUpgrade_GlimpseDropChanceAfterHarden_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GlimpseDropChanceAfterHarden_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GlimpseDropChanceAfterHarden_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GlimpseDropChanceAfterHarden.ShellUpgrade_GlimpseDropChanceAfterHarden_C.OnStoneFormLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GlimpseDropChanceAfterHarden_C::OnStoneFormLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GlimpseDropChanceAfterHarden_C", "OnStoneFormLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GlimpseDropChanceAfterHarden.ShellUpgrade_GlimpseDropChanceAfterHarden_C.OnDurationOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GlimpseDropChanceAfterHarden_C::OnDurationOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GlimpseDropChanceAfterHarden_C", "OnDurationOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GlimpseDropChanceAfterHarden.ShellUpgrade_GlimpseDropChanceAfterHarden_C.ExecuteUbergraph_ShellUpgrade_GlimpseDropChanceAfterHarden
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_GlimpseDropChanceAfterHarden_C::ExecuteUbergraph_ShellUpgrade_GlimpseDropChanceAfterHarden(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GlimpseDropChanceAfterHarden_C", "ExecuteUbergraph_ShellUpgrade_GlimpseDropChanceAfterHarden");

	Params::UShellUpgrade_GlimpseDropChanceAfterHarden_C_ExecuteUbergraph_ShellUpgrade_GlimpseDropChanceAfterHarden_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;

	UObject::ProcessEvent(Func, &Parms);

}

}


