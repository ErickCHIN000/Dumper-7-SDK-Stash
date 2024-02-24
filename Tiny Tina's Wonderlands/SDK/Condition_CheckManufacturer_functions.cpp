#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_CheckManufacturer.Condition_CheckManufacturer_C
// (None)

class UClass* UCondition_CheckManufacturer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_CheckManufacturer_C");

	return Clss;
}


// Condition_CheckManufacturer_C Condition_CheckManufacturer.Default__Condition_CheckManufacturer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_CheckManufacturer_C* UCondition_CheckManufacturer_C::GetDefaultObj()
{
	static class UCondition_CheckManufacturer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_CheckManufacturer_C*>(UCondition_CheckManufacturer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_CheckManufacturer.Condition_CheckManufacturer_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryBalanceStateComponent*CallFunc_GetInventoryBalanceState_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsManufactureredBy_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_CheckManufacturer_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, bool CallFunc_IsManufactureredBy_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_CheckManufacturer_C", "EvaluateCondition");

	Params::UCondition_CheckManufacturer_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInventoryBalanceState_ReturnValue = CallFunc_GetInventoryBalanceState_ReturnValue;
	Parms.CallFunc_IsManufactureredBy_ReturnValue = CallFunc_IsManufactureredBy_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


