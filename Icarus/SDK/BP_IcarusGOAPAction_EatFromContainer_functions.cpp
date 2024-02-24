#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_EatFromContainer.BP_IcarusGOAPAction_EatFromContainer_C
// (None)

class UClass* UBP_IcarusGOAPAction_EatFromContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_EatFromContainer_C");

	return Clss;
}


// BP_IcarusGOAPAction_EatFromContainer_C BP_IcarusGOAPAction_EatFromContainer.Default__BP_IcarusGOAPAction_EatFromContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_EatFromContainer_C* UBP_IcarusGOAPAction_EatFromContainer_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_EatFromContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_EatFromContainer_C*>(UBP_IcarusGOAPAction_EatFromContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_EatFromContainer.BP_IcarusGOAPAction_EatFromContainer_C.Execute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Execute_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EatFromContainer_C::Execute(class AIcarusNPCGOAPController* Controller, float Delta, bool CallFunc_Execute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatFromContainer_C", "Execute");

	Params::UBP_IcarusGOAPAction_EatFromContainer_C_Execute_Params Parms{};

	Parms.Controller = Controller;
	Parms.Delta = Delta;
	Parms.CallFunc_Execute_ReturnValue = CallFunc_Execute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_EatFromContainer.BP_IcarusGOAPAction_EatFromContainer_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              MaxDistance                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EatFromContainer_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, float MaxDistance, bool CallFunc_CheckContextualPreconditions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatFromContainer_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_EatFromContainer_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.MaxDistance = MaxDistance;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_EatFromContainer.BP_IcarusGOAPAction_EatFromContainer_C.ExecutionComplete
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecutionComplete_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGOAPMotivationsRowHandle   CallFunc_MakeGOAPMotivations_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateMotivationValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EatFromContainer_C::ExecutionComplete(class AIcarusNPCGOAPController* Controller, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_ExecutionComplete_ReturnValue, const struct FGOAPMotivationsRowHandle& CallFunc_MakeGOAPMotivations_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EatFromContainer_C", "ExecutionComplete");

	Params::UBP_IcarusGOAPAction_EatFromContainer_C_ExecutionComplete_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_ExecutionComplete_ReturnValue = CallFunc_ExecutionComplete_ReturnValue;
	Parms.CallFunc_MakeGOAPMotivations_ReturnValue = CallFunc_MakeGOAPMotivations_ReturnValue;
	Parms.CallFunc_UpdateMotivationValue_ReturnValue = CallFunc_UpdateMotivationValue_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


