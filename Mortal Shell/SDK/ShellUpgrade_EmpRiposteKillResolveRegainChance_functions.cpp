#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_EmpRiposteKillResolveRegainChance.ShellUpgrade_EmpRiposteKillResolveRegainChance_C
// (None)

class UClass* UShellUpgrade_EmpRiposteKillResolveRegainChance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_EmpRiposteKillResolveRegainChance_C");

	return Clss;
}


// ShellUpgrade_EmpRiposteKillResolveRegainChance_C ShellUpgrade_EmpRiposteKillResolveRegainChance.Default__ShellUpgrade_EmpRiposteKillResolveRegainChance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_EmpRiposteKillResolveRegainChance_C* UShellUpgrade_EmpRiposteKillResolveRegainChance_C::GetDefaultObj()
{
	static class UShellUpgrade_EmpRiposteKillResolveRegainChance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_EmpRiposteKillResolveRegainChance_C*>(UShellUpgrade_EmpRiposteKillResolveRegainChance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_EmpRiposteKillResolveRegainChance.ShellUpgrade_EmpRiposteKillResolveRegainChance_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_EmpRiposteKillResolveRegainChance_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_EmpRiposteKillResolveRegainChance_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_EmpRiposteKillResolveRegainChance.ShellUpgrade_EmpRiposteKillResolveRegainChance_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_EmpRiposteKillResolveRegainChance_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_EmpRiposteKillResolveRegainChance_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_EmpRiposteKillResolveRegainChance.ShellUpgrade_EmpRiposteKillResolveRegainChance_C.OnAnyDmgTaken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDied                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgrade_EmpRiposteKillResolveRegainChance_C::OnAnyDmgTaken(bool bDied)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_EmpRiposteKillResolveRegainChance_C", "OnAnyDmgTaken");

	Params::UShellUpgrade_EmpRiposteKillResolveRegainChance_C_OnAnyDmgTaken_Params Parms{};

	Parms.bDied = bDied;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgrade_EmpRiposteKillResolveRegainChance.ShellUpgrade_EmpRiposteKillResolveRegainChance_C.OnRip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEmpowered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            ParriedChar                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_EmpRiposteKillResolveRegainChance_C::OnRip(bool bEmpowered, class ABaseCharacter_C* ParriedChar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_EmpRiposteKillResolveRegainChance_C", "OnRip");

	Params::UShellUpgrade_EmpRiposteKillResolveRegainChance_C_OnRip_Params Parms{};

	Parms.bEmpowered = bEmpowered;
	Parms.ParriedChar = ParriedChar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgrade_EmpRiposteKillResolveRegainChance.ShellUpgrade_EmpRiposteKillResolveRegainChance_C.ExecuteUbergraph_ShellUpgrade_EmpRiposteKillResolveRegainChance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEmpowered                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_CustomEvent_ParriedChar                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bDied                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_EmpRiposteKillResolveRegainChance_C::ExecuteUbergraph_ShellUpgrade_EmpRiposteKillResolveRegainChance(int32 EntryPoint, bool K2Node_CustomEvent_bEmpowered, class ABaseCharacter_C* K2Node_CustomEvent_ParriedChar, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool K2Node_CustomEvent_bDied, float CallFunc_RandomFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_FloatFloat_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_EmpRiposteKillResolveRegainChance_C", "ExecuteUbergraph_ShellUpgrade_EmpRiposteKillResolveRegainChance");

	Params::UShellUpgrade_EmpRiposteKillResolveRegainChance_C_ExecuteUbergraph_ShellUpgrade_EmpRiposteKillResolveRegainChance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bEmpowered = K2Node_CustomEvent_bEmpowered;
	Parms.K2Node_CustomEvent_ParriedChar = K2Node_CustomEvent_ParriedChar;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsEnemy_Character_1 = K2Node_DynamicCast_AsEnemy_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_CustomEvent_bDied = K2Node_CustomEvent_bDied;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


