#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_ChangeParryMontage.ShellUpgrade_ChangeParryMontage_C
// (None)

class UClass* UShellUpgrade_ChangeParryMontage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_ChangeParryMontage_C");

	return Clss;
}


// ShellUpgrade_ChangeParryMontage_C ShellUpgrade_ChangeParryMontage.Default__ShellUpgrade_ChangeParryMontage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_ChangeParryMontage_C* UShellUpgrade_ChangeParryMontage_C::GetDefaultObj()
{
	static class UShellUpgrade_ChangeParryMontage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_ChangeParryMontage_C*>(UShellUpgrade_ChangeParryMontage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_ChangeParryMontage.ShellUpgrade_ChangeParryMontage_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_ChangeParryMontage_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ChangeParryMontage_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_ChangeParryMontage.ShellUpgrade_ChangeParryMontage_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_ChangeParryMontage_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ChangeParryMontage_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_ChangeParryMontage.ShellUpgrade_ChangeParryMontage_C.ExecuteUbergraph_ShellUpgrade_ChangeParryMontage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgrade_ChangeParryMontage_C::ExecuteUbergraph_ShellUpgrade_ChangeParryMontage(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ChangeParryMontage_C", "ExecuteUbergraph_ShellUpgrade_ChangeParryMontage");

	Params::UShellUpgrade_ChangeParryMontage_C_ExecuteUbergraph_ShellUpgrade_ChangeParryMontage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


