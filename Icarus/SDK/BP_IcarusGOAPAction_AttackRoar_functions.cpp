#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_AttackRoar.BP_IcarusGOAPAction_AttackRoar_C
// (None)

class UClass* UBP_IcarusGOAPAction_AttackRoar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_AttackRoar_C");

	return Clss;
}


// BP_IcarusGOAPAction_AttackRoar_C BP_IcarusGOAPAction_AttackRoar.Default__BP_IcarusGOAPAction_AttackRoar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_AttackRoar_C* UBP_IcarusGOAPAction_AttackRoar_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_AttackRoar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_AttackRoar_C*>(UBP_IcarusGOAPAction_AttackRoar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_AttackRoar.BP_IcarusGOAPAction_AttackRoar_C.PlanAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_AttackRoar_C::PlanAction(class AIcarusNPCGOAPController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_AttackRoar_C", "PlanAction");

	Params::UBP_IcarusGOAPAction_AttackRoar_C_PlanAction_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_AttackRoar.BP_IcarusGOAPAction_AttackRoar_C.ExecutionComplete
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ExecutionComplete_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_AttackRoar_C::ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_ExecutionComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_AttackRoar_C", "ExecutionComplete");

	Params::UBP_IcarusGOAPAction_AttackRoar_C_ExecutionComplete_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_ExecutionComplete_ReturnValue = CallFunc_ExecutionComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


