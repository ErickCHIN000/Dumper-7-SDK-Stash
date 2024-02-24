#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_FindFood.BP_IcarusGOAPAction_FindFood_C
// (None)

class UClass* UBP_IcarusGOAPAction_FindFood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_FindFood_C");

	return Clss;
}


// BP_IcarusGOAPAction_FindFood_C BP_IcarusGOAPAction_FindFood.Default__BP_IcarusGOAPAction_FindFood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_FindFood_C* UBP_IcarusGOAPAction_FindFood_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_FindFood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_FindFood_C*>(UBP_IcarusGOAPAction_FindFood_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_FindFood.BP_IcarusGOAPAction_FindFood_C.Execute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              SearchRadius                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Execute_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGOAPAIState*          CallFunc_GetAIState_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_IcarusGOAPAction_FindFood_C::Execute(class AIcarusNPCGOAPController* Controller, float Delta, float SearchRadius, bool CallFunc_Execute_ReturnValue, class UIcarusGOAPAIState* CallFunc_GetAIState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_FindFood_C", "Execute");

	Params::UBP_IcarusGOAPAction_FindFood_C_Execute_Params Parms{};

	Parms.Controller = Controller;
	Parms.Delta = Delta;
	Parms.SearchRadius = SearchRadius;
	Parms.CallFunc_Execute_ReturnValue = CallFunc_Execute_ReturnValue;
	Parms.CallFunc_GetAIState_ReturnValue = CallFunc_GetAIState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


