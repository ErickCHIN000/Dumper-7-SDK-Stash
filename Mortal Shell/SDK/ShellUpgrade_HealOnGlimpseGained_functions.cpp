#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_HealOnGlimpseGained.ShellUpgrade_HealOnGlimpseGained_C
// (None)

class UClass* UShellUpgrade_HealOnGlimpseGained_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_HealOnGlimpseGained_C");

	return Clss;
}


// ShellUpgrade_HealOnGlimpseGained_C ShellUpgrade_HealOnGlimpseGained.Default__ShellUpgrade_HealOnGlimpseGained_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_HealOnGlimpseGained_C* UShellUpgrade_HealOnGlimpseGained_C::GetDefaultObj()
{
	static class UShellUpgrade_HealOnGlimpseGained_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_HealOnGlimpseGained_C*>(UShellUpgrade_HealOnGlimpseGained_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_HealOnGlimpseGained.ShellUpgrade_HealOnGlimpseGained_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_HealOnGlimpseGained_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_HealOnGlimpseGained_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_HealOnGlimpseGained.ShellUpgrade_HealOnGlimpseGained_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_HealOnGlimpseGained_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_HealOnGlimpseGained_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_HealOnGlimpseGained.ShellUpgrade_HealOnGlimpseGained_C.OnGlimpseGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_HealOnGlimpseGained_C::OnGlimpseGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_HealOnGlimpseGained_C", "OnGlimpseGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_HealOnGlimpseGained.ShellUpgrade_HealOnGlimpseGained_C.ExecuteUbergraph_ShellUpgrade_HealOnGlimpseGained
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgrade_HealOnGlimpseGained_C::ExecuteUbergraph_ShellUpgrade_HealOnGlimpseGained(int32 EntryPoint, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_ApplyDamage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_HealOnGlimpseGained_C", "ExecuteUbergraph_ShellUpgrade_HealOnGlimpseGained");

	Params::UShellUpgrade_HealOnGlimpseGained_C_ExecuteUbergraph_ShellUpgrade_HealOnGlimpseGained_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


