#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Evade.GA_CreatureAbility_Evade_C
// (None)

class UClass* UGA_CreatureAbility_Evade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Evade_C");

	return Clss;
}


// GA_CreatureAbility_Evade_C GA_CreatureAbility_Evade.Default__GA_CreatureAbility_Evade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Evade_C* UGA_CreatureAbility_Evade_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Evade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Evade_C*>(UGA_CreatureAbility_Evade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Evade.GA_CreatureAbility_Evade_C.FireEQS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*CallFunc_RunEQSQuery_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNamedParam_Value_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNamedParam_Value_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Evade_C::FireEQS(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetNamedParam_Value_ImplicitCast, float CallFunc_SetNamedParam_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Evade_C", "FireEQS");

	Params::UGA_CreatureAbility_Evade_C_FireEQS_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RunEQSQuery_ReturnValue = CallFunc_RunEQSQuery_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetNamedParam_Value_ImplicitCast = CallFunc_SetNamedParam_Value_ImplicitCast;
	Parms.CallFunc_SetNamedParam_Value_ImplicitCast_1 = CallFunc_SetNamedParam_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_Evade.GA_CreatureAbility_Evade_C.ExecuteUbergraph_GA_CreatureAbility_Evade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Evade_C::ExecuteUbergraph_GA_CreatureAbility_Evade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Evade_C", "ExecuteUbergraph_GA_CreatureAbility_Evade");

	Params::UGA_CreatureAbility_Evade_C_ExecuteUbergraph_GA_CreatureAbility_Evade_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


