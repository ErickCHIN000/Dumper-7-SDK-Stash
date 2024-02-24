#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_ResolveOnStoneFormDmg.ShellUpgrade_ResolveOnStoneFormDmg_C
// (None)

class UClass* UShellUpgrade_ResolveOnStoneFormDmg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_ResolveOnStoneFormDmg_C");

	return Clss;
}


// ShellUpgrade_ResolveOnStoneFormDmg_C ShellUpgrade_ResolveOnStoneFormDmg.Default__ShellUpgrade_ResolveOnStoneFormDmg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_ResolveOnStoneFormDmg_C* UShellUpgrade_ResolveOnStoneFormDmg_C::GetDefaultObj()
{
	static class UShellUpgrade_ResolveOnStoneFormDmg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_ResolveOnStoneFormDmg_C*>(UShellUpgrade_ResolveOnStoneFormDmg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_ResolveOnStoneFormDmg.ShellUpgrade_ResolveOnStoneFormDmg_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_ResolveOnStoneFormDmg_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ResolveOnStoneFormDmg_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_ResolveOnStoneFormDmg.ShellUpgrade_ResolveOnStoneFormDmg_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_ResolveOnStoneFormDmg_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ResolveOnStoneFormDmg_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_ResolveOnStoneFormDmg.ShellUpgrade_ResolveOnStoneFormDmg_C.OnDmgBlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_ResolveOnStoneFormDmg_C::OnDmgBlocked(class AActor* SourceActor, float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ResolveOnStoneFormDmg_C", "OnDmgBlocked");

	Params::UShellUpgrade_ResolveOnStoneFormDmg_C_OnDmgBlocked_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgrade_ResolveOnStoneFormDmg.ShellUpgrade_ResolveOnStoneFormDmg_C.ExecuteUbergraph_ShellUpgrade_ResolveOnStoneFormDmg
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_SourceActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStoneFormDmgResOn_Yes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgrade_ResolveOnStoneFormDmg_C::ExecuteUbergraph_ShellUpgrade_ResolveOnStoneFormDmg(int32 EntryPoint, class AActor* K2Node_CustomEvent_SourceActor, float K2Node_CustomEvent_Amount, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_IsStoneFormDmgResOn_Yes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_ResolveOnStoneFormDmg_C", "ExecuteUbergraph_ShellUpgrade_ResolveOnStoneFormDmg");

	Params::UShellUpgrade_ResolveOnStoneFormDmg_C_ExecuteUbergraph_ShellUpgrade_ResolveOnStoneFormDmg_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SourceActor = K2Node_CustomEvent_SourceActor;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_IsStoneFormDmgResOn_Yes = CallFunc_IsStoneFormDmgResOn_Yes;

	UObject::ProcessEvent(Func, &Parms);

}

}


