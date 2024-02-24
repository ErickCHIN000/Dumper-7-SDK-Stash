#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_SetPlayerBool.ShellUpgrade_SetPlayerBool_C
// (None)

class UClass* UShellUpgrade_SetPlayerBool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_SetPlayerBool_C");

	return Clss;
}


// ShellUpgrade_SetPlayerBool_C ShellUpgrade_SetPlayerBool.Default__ShellUpgrade_SetPlayerBool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_SetPlayerBool_C* UShellUpgrade_SetPlayerBool_C::GetDefaultObj()
{
	static class UShellUpgrade_SetPlayerBool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_SetPlayerBool_C*>(UShellUpgrade_SetPlayerBool_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_SetPlayerBool.ShellUpgrade_SetPlayerBool_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_SetPlayerBool_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_SetPlayerBool_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_SetPlayerBool.ShellUpgrade_SetPlayerBool_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_SetPlayerBool_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_SetPlayerBool_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_SetPlayerBool.ShellUpgrade_SetPlayerBool_C.ExecuteUbergraph_ShellUpgrade_SetPlayerBool
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_SetPlayerBool_C::ExecuteUbergraph_ShellUpgrade_SetPlayerBool(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_SetPlayerBool_C", "ExecuteUbergraph_ShellUpgrade_SetPlayerBool");

	Params::UShellUpgrade_SetPlayerBool_C_ExecuteUbergraph_ShellUpgrade_SetPlayerBool_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


