#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_InvestigateHostileStimulus.BP_IcarusGOAPAction_InvestigateHostileStimulus_C
// (None)

class UClass* UBP_IcarusGOAPAction_InvestigateHostileStimulus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_InvestigateHostileStimulus_C");

	return Clss;
}


// BP_IcarusGOAPAction_InvestigateHostileStimulus_C BP_IcarusGOAPAction_InvestigateHostileStimulus.Default__BP_IcarusGOAPAction_InvestigateHostileStimulus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_InvestigateHostileStimulus_C* UBP_IcarusGOAPAction_InvestigateHostileStimulus_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_InvestigateHostileStimulus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_InvestigateHostileStimulus_C*>(UBP_IcarusGOAPAction_InvestigateHostileStimulus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_InvestigateHostileStimulus.BP_IcarusGOAPAction_InvestigateHostileStimulus_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGOAPProperty               K2Node_MakeStruct_GOAPProperty                                   (NoDestructor)
// struct FGOAPState                  CallFunc_GetGOAPState_ReturnValue                                (None)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_InvestigateHostileStimulus_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, const struct FGOAPProperty& K2Node_MakeStruct_GOAPProperty, const struct FGOAPState& CallFunc_GetGOAPState_ReturnValue, bool CallFunc_CheckContextualPreconditions_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_InvestigateHostileStimulus_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_InvestigateHostileStimulus_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.K2Node_MakeStruct_GOAPProperty = K2Node_MakeStruct_GOAPProperty;
	Parms.CallFunc_GetGOAPState_ReturnValue = CallFunc_GetGOAPState_ReturnValue;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


