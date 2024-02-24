#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgradeBase.ShellUpgradeBase_C
// (None)

class UClass* UShellUpgradeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgradeBase_C");

	return Clss;
}


// ShellUpgradeBase_C ShellUpgradeBase.Default__ShellUpgradeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgradeBase_C* UShellUpgradeBase_C::GetDefaultObj()
{
	static class UShellUpgradeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgradeBase_C*>(UShellUpgradeBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgradeBase.ShellUpgradeBase_C.DebugAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlocked_bUnlocked                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)

void UShellUpgradeBase_C::DebugAbility(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsUnlocked_bUnlocked, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeBase_C", "DebugAbility");

	Params::UShellUpgradeBase_C_DebugAbility_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsUnlocked_bUnlocked = CallFunc_IsUnlocked_bUnlocked;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradeBase.ShellUpgradeBase_C.IsUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bUnlocked                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgradeBase_C::IsUnlocked(bool* bUnlocked, bool CallFunc_IsUpgradeUnlocked_bUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeBase_C", "IsUnlocked");

	Params::UShellUpgradeBase_C_IsUnlocked_Params Parms{};

	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;

	UObject::ProcessEvent(Func, &Parms);

	if (bUnlocked != nullptr)
		*bUnlocked = Parms.bUnlocked;

}


// Function ShellUpgradeBase.ShellUpgradeBase_C.LooseAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradeBase_C::LooseAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeBase_C", "LooseAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradeBase.ShellUpgradeBase_C.GainAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradeBase_C::GainAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeBase_C", "GainAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradeBase.ShellUpgradeBase_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradeBase_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeBase_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradeBase.ShellUpgradeBase_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradeBase_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeBase_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradeBase.ShellUpgradeBase_C.GainIfUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradeBase_C::GainIfUnlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeBase_C", "GainIfUnlocked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradeBase.ShellUpgradeBase_C.ExecuteUbergraph_ShellUpgradeBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlocked_bUnlocked                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgradeBase_C::ExecuteUbergraph_ShellUpgradeBase(int32 EntryPoint, bool CallFunc_IsUnlocked_bUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeBase_C", "ExecuteUbergraph_ShellUpgradeBase");

	Params::UShellUpgradeBase_C_ExecuteUbergraph_ShellUpgradeBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUnlocked_bUnlocked = CallFunc_IsUnlocked_bUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}

}


