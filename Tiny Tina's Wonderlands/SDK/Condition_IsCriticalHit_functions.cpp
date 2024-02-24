#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_IsCriticalHit.Condition_IsCriticalHit_C
// (None)

class UClass* UCondition_IsCriticalHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_IsCriticalHit_C");

	return Clss;
}


// Condition_IsCriticalHit_C Condition_IsCriticalHit.Default__Condition_IsCriticalHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_IsCriticalHit_C* UCondition_IsCriticalHit_C::GetDefaultObj()
{
	static class UCondition_IsCriticalHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_IsCriticalHit_C*>(UCondition_IsCriticalHit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_IsCriticalHit.Condition_IsCriticalHit_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UOakHitRegionData*           K2Node_DynamicCast_AsOak_Hit_Region_Data                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_IsCriticalHit_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class UOakHitRegionData* K2Node_DynamicCast_AsOak_Hit_Region_Data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_IsCriticalHit_C", "EvaluateCondition");

	Params::UCondition_IsCriticalHit_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsOak_Hit_Region_Data = K2Node_DynamicCast_AsOak_Hit_Region_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


