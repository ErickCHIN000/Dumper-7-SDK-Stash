#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_ModifyControllerFloat.ShellUpgrade_ModifyControllerFloat_C
// (None)

class UClass* UShellUpgrade_ModifyControllerFloat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_ModifyControllerFloat_C");

	return Clss;
}


// ShellUpgrade_ModifyControllerFloat_C ShellUpgrade_ModifyControllerFloat.Default__ShellUpgrade_ModifyControllerFloat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_ModifyControllerFloat_C* UShellUpgrade_ModifyControllerFloat_C::GetDefaultObj()
{
	static class UShellUpgrade_ModifyControllerFloat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_ModifyControllerFloat_C*>(UShellUpgrade_ModifyControllerFloat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_ModifyControllerFloat.ShellUpgrade_ModifyControllerFloat_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_ModifyControllerFloat_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ModifyControllerFloat_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_ModifyControllerFloat.ShellUpgrade_ModifyControllerFloat_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_ModifyControllerFloat_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ModifyControllerFloat_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_ModifyControllerFloat.ShellUpgrade_ModifyControllerFloat_C.ExecuteUbergraph_ShellUpgrade_ModifyControllerFloat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_ModifyControllerFloat_C::ExecuteUbergraph_ShellUpgrade_ModifyControllerFloat(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ModifyControllerFloat_C", "ExecuteUbergraph_ShellUpgrade_ModifyControllerFloat");

	Params::UShellUpgrade_ModifyControllerFloat_C_ExecuteUbergraph_ShellUpgrade_ModifyControllerFloat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


