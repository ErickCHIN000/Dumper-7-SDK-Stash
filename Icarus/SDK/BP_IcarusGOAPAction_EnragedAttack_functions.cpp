#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_EnragedAttack.BP_IcarusGOAPAction_EnragedAttack_C
// (None)

class UClass* UBP_IcarusGOAPAction_EnragedAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_EnragedAttack_C");

	return Clss;
}


// BP_IcarusGOAPAction_EnragedAttack_C BP_IcarusGOAPAction_EnragedAttack.Default__BP_IcarusGOAPAction_EnragedAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_EnragedAttack_C* UBP_IcarusGOAPAction_EnragedAttack_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_EnragedAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_EnragedAttack_C*>(UBP_IcarusGOAPAction_EnragedAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_EnragedAttack.BP_IcarusGOAPAction_EnragedAttack_C.ExecutionComplete
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ExecutionComplete_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateMotivationValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EnragedAttack_C::ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_ExecutionComplete_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EnragedAttack_C", "ExecutionComplete");

	Params::UBP_IcarusGOAPAction_EnragedAttack_C_ExecutionComplete_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_ExecutionComplete_ReturnValue = CallFunc_ExecutionComplete_ReturnValue;
	Parms.CallFunc_UpdateMotivationValue_ReturnValue = CallFunc_UpdateMotivationValue_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


