#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_ModifyPlayerFloat.ShellUpgrade_ModifyPlayerFloat_C
// (None)

class UClass* UShellUpgrade_ModifyPlayerFloat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_ModifyPlayerFloat_C");

	return Clss;
}


// ShellUpgrade_ModifyPlayerFloat_C ShellUpgrade_ModifyPlayerFloat.Default__ShellUpgrade_ModifyPlayerFloat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_ModifyPlayerFloat_C* UShellUpgrade_ModifyPlayerFloat_C::GetDefaultObj()
{
	static class UShellUpgrade_ModifyPlayerFloat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_ModifyPlayerFloat_C*>(UShellUpgrade_ModifyPlayerFloat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_ModifyPlayerFloat.ShellUpgrade_ModifyPlayerFloat_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_ModifyPlayerFloat_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ModifyPlayerFloat_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_ModifyPlayerFloat.ShellUpgrade_ModifyPlayerFloat_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_ModifyPlayerFloat_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ModifyPlayerFloat_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_ModifyPlayerFloat.ShellUpgrade_ModifyPlayerFloat_C.ExecuteUbergraph_ShellUpgrade_ModifyPlayerFloat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_ModifyPlayerFloat_C::ExecuteUbergraph_ShellUpgrade_ModifyPlayerFloat(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ModifyPlayerFloat_C", "ExecuteUbergraph_ShellUpgrade_ModifyPlayerFloat");

	Params::UShellUpgrade_ModifyPlayerFloat_C_ExecuteUbergraph_ShellUpgrade_ModifyPlayerFloat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


