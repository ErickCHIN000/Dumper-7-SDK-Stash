#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_GrantExperienceDebt.CF_GrantExperienceDebt_C
// (None)

class UClass* UCF_GrantExperienceDebt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_GrantExperienceDebt_C");

	return Clss;
}


// CF_GrantExperienceDebt_C CF_GrantExperienceDebt.Default__CF_GrantExperienceDebt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_GrantExperienceDebt_C* UCF_GrantExperienceDebt_C::GetDefaultObj()
{
	static class UCF_GrantExperienceDebt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_GrantExperienceDebt_C*>(UCF_GrantExperienceDebt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_GrantExperienceDebt.CF_GrantExperienceDebt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_GrantExperienceDebt_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_GrantExperienceDebt_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_GrantExperienceDebt.CF_GrantExperienceDebt_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_GrantExperienceDebt_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_GrantExperienceDebt_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_GrantExperienceDebt.CF_GrantExperienceDebt_C.ExecuteUbergraph_CF_GrantExperienceDebt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_GrantExperienceDebt_C::ExecuteUbergraph_CF_GrantExperienceDebt(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_GrantExperienceDebt_C", "ExecuteUbergraph_CF_GrantExperienceDebt");

	Params::UCF_GrantExperienceDebt_C_ExecuteUbergraph_CF_GrantExperienceDebt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


