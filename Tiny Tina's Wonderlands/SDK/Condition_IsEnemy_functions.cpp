#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_IsEnemy.Condition_IsEnemy_C
// (None)

class UClass* UCondition_IsEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_IsEnemy_C");

	return Clss;
}


// Condition_IsEnemy_C Condition_IsEnemy.Default__Condition_IsEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_IsEnemy_C* UCondition_IsEnemy_C::GetDefaultObj()
{
	static class UCondition_IsEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_IsEnemy_C*>(UCondition_IsEnemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_IsEnemy.Condition_IsEnemy_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTeamComponent*              CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETeamAttitude           CallFunc_GetTeamAttitudeTowardsTeam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_IsEnemy_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UTeamComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ETeamAttitude CallFunc_GetTeamAttitudeTowardsTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_IsEnemy_C", "EvaluateCondition");

	Params::UCondition_IsEnemy_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTeamAttitudeTowardsTeam_ReturnValue = CallFunc_GetTeamAttitudeTowardsTeam_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


