#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_IsRetreated.BTD_IsRetreated_C
// (None)

class UClass* UBTD_IsRetreated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_IsRetreated_C");

	return Clss;
}


// BTD_IsRetreated_C BTD_IsRetreated.Default__BTD_IsRetreated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_IsRetreated_C* UBTD_IsRetreated_C::GetDefaultObj()
{
	static class UBTD_IsRetreated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_IsRetreated_C*>(UBTD_IsRetreated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_IsRetreated.BTD_IsRetreated_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAIRetreated_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTD_IsRetreated_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool CallFunc_HasAIRetreated_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_IsRetreated_C", "PerformConditionCheckAI");

	Params::UBTD_IsRetreated_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.CallFunc_HasAIRetreated_ReturnValue = CallFunc_HasAIRetreated_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


