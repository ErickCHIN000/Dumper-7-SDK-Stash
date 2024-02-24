#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_IsFriendlyVehicle.Condition_IsFriendlyVehicle_C
// (None)

class UClass* UCondition_IsFriendlyVehicle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_IsFriendlyVehicle_C");

	return Clss;
}


// Condition_IsFriendlyVehicle_C Condition_IsFriendlyVehicle.Default__Condition_IsFriendlyVehicle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_IsFriendlyVehicle_C* UCondition_IsFriendlyVehicle_C::GetDefaultObj()
{
	static class UCondition_IsFriendlyVehicle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_IsFriendlyVehicle_C*>(UCondition_IsFriendlyVehicle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_IsFriendlyVehicle.Condition_IsFriendlyVehicle_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AOakVehicle*                 K2Node_DynamicCast_AsOak_Vehicle                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETeamAttitude           CallFunc_GetAttitudeTowardPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_IsFriendlyVehicle_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AOakVehicle* K2Node_DynamicCast_AsOak_Vehicle, bool K2Node_DynamicCast_bSuccess, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_IsFriendlyVehicle_C", "EvaluateCondition");

	Params::UCondition_IsFriendlyVehicle_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsOak_Vehicle = K2Node_DynamicCast_AsOak_Vehicle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttitudeTowardPlayer_ReturnValue = CallFunc_GetAttitudeTowardPlayer_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


