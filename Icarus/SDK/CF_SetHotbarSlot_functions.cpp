#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_SetHotbarSlot.CF_SetHotbarSlot_C
// (None)

class UClass* UCF_SetHotbarSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_SetHotbarSlot_C");

	return Clss;
}


// CF_SetHotbarSlot_C CF_SetHotbarSlot.Default__CF_SetHotbarSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_SetHotbarSlot_C* UCF_SetHotbarSlot_C::GetDefaultObj()
{
	static class UCF_SetHotbarSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_SetHotbarSlot_C*>(UCF_SetHotbarSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_SetHotbarSlot.CF_SetHotbarSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_SetHotbarSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_SetHotbarSlot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_SetHotbarSlot.CF_SetHotbarSlot_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_SetHotbarSlot_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_SetHotbarSlot_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_SetHotbarSlot.CF_SetHotbarSlot_C.ExecuteUbergraph_CF_SetHotbarSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_SetHotbarSlot_C::ExecuteUbergraph_CF_SetHotbarSlot(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_SetHotbarSlot_C", "ExecuteUbergraph_CF_SetHotbarSlot");

	Params::UCF_SetHotbarSlot_C_ExecuteUbergraph_CF_SetHotbarSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


