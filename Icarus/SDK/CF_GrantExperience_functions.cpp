#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_GrantExperience.CF_GrantExperience_C
// (None)

class UClass* UCF_GrantExperience_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_GrantExperience_C");

	return Clss;
}


// CF_GrantExperience_C CF_GrantExperience.Default__CF_GrantExperience_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_GrantExperience_C* UCF_GrantExperience_C::GetDefaultObj()
{
	static class UCF_GrantExperience_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_GrantExperience_C*>(UCF_GrantExperience_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_GrantExperience.CF_GrantExperience_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_GrantExperience_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_GrantExperience_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_GrantExperience.CF_GrantExperience_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_GrantExperience_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_GrantExperience_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_GrantExperience.CF_GrantExperience_C.ExecuteUbergraph_CF_GrantExperience
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_GrantExperience_C::ExecuteUbergraph_CF_GrantExperience(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_GrantExperience_C", "ExecuteUbergraph_CF_GrantExperience");

	Params::UCF_GrantExperience_C_ExecuteUbergraph_CF_GrantExperience_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


