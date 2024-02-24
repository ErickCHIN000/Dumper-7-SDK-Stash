#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_StoneStompBlastHitAddResolve.ShellUpgrade_StoneStompBlastHitAddResolve_C
// (None)

class UClass* UShellUpgrade_StoneStompBlastHitAddResolve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_StoneStompBlastHitAddResolve_C");

	return Clss;
}


// ShellUpgrade_StoneStompBlastHitAddResolve_C ShellUpgrade_StoneStompBlastHitAddResolve.Default__ShellUpgrade_StoneStompBlastHitAddResolve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_StoneStompBlastHitAddResolve_C* UShellUpgrade_StoneStompBlastHitAddResolve_C::GetDefaultObj()
{
	static class UShellUpgrade_StoneStompBlastHitAddResolve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_StoneStompBlastHitAddResolve_C*>(UShellUpgrade_StoneStompBlastHitAddResolve_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_StoneStompBlastHitAddResolve.ShellUpgrade_StoneStompBlastHitAddResolve_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_StoneStompBlastHitAddResolve_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StoneStompBlastHitAddResolve_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_StoneStompBlastHitAddResolve.ShellUpgrade_StoneStompBlastHitAddResolve_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_StoneStompBlastHitAddResolve_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StoneStompBlastHitAddResolve_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_StoneStompBlastHitAddResolve.ShellUpgrade_StoneStompBlastHitAddResolve_C.OnStoneStompHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_StoneStompBlastHitAddResolve_C::OnStoneStompHit(class AEnemyCharacter_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StoneStompBlastHitAddResolve_C", "OnStoneStompHit");

	Params::UShellUpgrade_StoneStompBlastHitAddResolve_C_OnStoneStompHit_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgrade_StoneStompBlastHitAddResolve.ShellUpgrade_StoneStompBlastHitAddResolve_C.ExecuteUbergraph_ShellUpgrade_StoneStompBlastHitAddResolve
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_StoneStompBlastHitAddResolve_C::ExecuteUbergraph_ShellUpgrade_StoneStompBlastHitAddResolve(int32 EntryPoint, class AEnemyCharacter_C* K2Node_CustomEvent_Target, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_StoneStompBlastHitAddResolve_C", "ExecuteUbergraph_ShellUpgrade_StoneStompBlastHitAddResolve");

	Params::UShellUpgrade_StoneStompBlastHitAddResolve_C_ExecuteUbergraph_ShellUpgrade_StoneStompBlastHitAddResolve_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;

	UObject::ProcessEvent(Func, &Parms);

}

}


