#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Event_RewardPlayerXP.Event_RewardPlayerXP_C
// (None)

class UClass* UEvent_RewardPlayerXP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Event_RewardPlayerXP_C");

	return Clss;
}


// Event_RewardPlayerXP_C Event_RewardPlayerXP.Default__Event_RewardPlayerXP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEvent_RewardPlayerXP_C* UEvent_RewardPlayerXP_C::GetDefaultObj()
{
	static class UEvent_RewardPlayerXP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEvent_RewardPlayerXP_C*>(UEvent_RewardPlayerXP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Event_RewardPlayerXP.Event_RewardPlayerXP_C.ExecuteEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNarrativeComponent*         NarrativeComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevellingComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddXP_XPOutput                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UEvent_RewardPlayerXP_C::ExecuteEvent(class APawn* Pawn, class APlayerController* Controller, class UNarrativeComponent* NarrativeComponent, class ULevellingComponent_C* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_AddXP_XPOutput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Event_RewardPlayerXP_C", "ExecuteEvent");

	Params::UEvent_RewardPlayerXP_C_ExecuteEvent_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Controller = Controller;
	Parms.NarrativeComponent = NarrativeComponent;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_AddXP_XPOutput = CallFunc_AddXP_XPOutput;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


