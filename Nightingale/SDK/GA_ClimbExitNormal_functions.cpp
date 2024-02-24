#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ClimbExitNormal.GA_ClimbExitNormal_C
// (None)

class UClass* UGA_ClimbExitNormal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ClimbExitNormal_C");

	return Clss;
}


// GA_ClimbExitNormal_C GA_ClimbExitNormal.Default__GA_ClimbExitNormal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ClimbExitNormal_C* UGA_ClimbExitNormal_C::GetDefaultObj()
{
	static class UGA_ClimbExitNormal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ClimbExitNormal_C*>(UGA_ClimbExitNormal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ClimbExitNormal.GA_ClimbExitNormal_C.IsValidInDeathStates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ClimbExitNormal_C::IsValidInDeathStates(bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ClimbExitNormal_C", "IsValidInDeathStates");

	Params::UGA_ClimbExitNormal_C_IsValidInDeathStates_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function GA_ClimbExitNormal.GA_ClimbExitNormal_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_ClimbExitNormal_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ClimbExitNormal_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ClimbExitNormal.GA_ClimbExitNormal_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ClimbExitNormal_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ClimbExitNormal_C", "K2_OnEndAbility");

	Params::UGA_ClimbExitNormal_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ClimbExitNormal.GA_ClimbExitNormal_C.ExecuteUbergraph_GA_ClimbExitNormal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ClimbExitNormal_C::ExecuteUbergraph_GA_ClimbExitNormal(int32 EntryPoint, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ClimbExitNormal_C", "ExecuteUbergraph_GA_ClimbExitNormal");

	Params::UGA_ClimbExitNormal_C_ExecuteUbergraph_GA_ClimbExitNormal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


