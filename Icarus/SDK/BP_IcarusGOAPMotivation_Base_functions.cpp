#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Base.BP_IcarusGOAPMotivation_Base_C
// (None)

class UClass* UBP_IcarusGOAPMotivation_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPMotivation_Base_C");

	return Clss;
}


// BP_IcarusGOAPMotivation_Base_C BP_IcarusGOAPMotivation_Base.Default__BP_IcarusGOAPMotivation_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPMotivation_Base_C* UBP_IcarusGOAPMotivation_Base_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPMotivation_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPMotivation_Base_C*>(UBP_IcarusGOAPMotivation_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPMotivation_Base.BP_IcarusGOAPMotivation_Base_C.UpdateCost
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPMotivation_Base_C::UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Base_C", "UpdateCost");

	Params::UBP_IcarusGOAPMotivation_Base_C_UpdateCost_Params Parms{};

	Parms.Delta = Delta;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


