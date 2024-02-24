#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_Base.BP_IcarusGOAPAction_Base_C
// (None)

class UClass* UBP_IcarusGOAPAction_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_Base_C");

	return Clss;
}


// BP_IcarusGOAPAction_Base_C BP_IcarusGOAPAction_Base.Default__BP_IcarusGOAPAction_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_Base_C* UBP_IcarusGOAPAction_Base_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_Base_C*>(UBP_IcarusGOAPAction_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_Base.BP_IcarusGOAPAction_Base_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Base_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, bool CallFunc_CheckContextualPreconditions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Base_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_Base_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_Base.BP_IcarusGOAPAction_Base_C.ExecutionComplete
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ExecutionComplete_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Base_C::ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_ExecutionComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Base_C", "ExecutionComplete");

	Params::UBP_IcarusGOAPAction_Base_C_ExecutionComplete_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_ExecutionComplete_ReturnValue = CallFunc_ExecutionComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_Base.BP_IcarusGOAPAction_Base_C.UpdateCost
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateCost_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Base_C::UpdateCost(class AIcarusNPCGOAPController* Controller, bool CallFunc_UpdateCost_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Base_C", "UpdateCost");

	Params::UBP_IcarusGOAPAction_Base_C_UpdateCost_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_UpdateCost_ReturnValue = CallFunc_UpdateCost_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_Base.BP_IcarusGOAPAction_Base_C.Execute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Execute_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Base_C::Execute(class AIcarusNPCGOAPController* Controller, float Delta, bool CallFunc_Execute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Base_C", "Execute");

	Params::UBP_IcarusGOAPAction_Base_C_Execute_Params Parms{};

	Parms.Controller = Controller;
	Parms.Delta = Delta;
	Parms.CallFunc_Execute_ReturnValue = CallFunc_Execute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


