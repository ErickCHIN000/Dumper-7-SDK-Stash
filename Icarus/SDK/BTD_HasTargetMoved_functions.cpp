#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_HasTargetMoved.BTD_HasTargetMoved_C
// (None)

class UClass* UBTD_HasTargetMoved_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_HasTargetMoved_C");

	return Clss;
}


// BTD_HasTargetMoved_C BTD_HasTargetMoved.Default__BTD_HasTargetMoved_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_HasTargetMoved_C* UBTD_HasTargetMoved_C::GetDefaultObj()
{
	static class UBTD_HasTargetMoved_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_HasTargetMoved_C*>(UBTD_HasTargetMoved_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_HasTargetMoved.BTD_HasTargetMoved_C.GetTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTD_HasTargetMoved_C::GetTargetLocation(struct FVector* Out, const struct FVector& Temp_wildcard_Variable, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_HasTargetMoved_C", "GetTargetLocation");

	Params::UBTD_HasTargetMoved_C_GetTargetLocation_Params Parms{};

	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue = CallFunc_GetBlackboardValueAsVector_ReturnValue;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function BTD_HasTargetMoved.BTD_HasTargetMoved_C.PerformConditionCheck
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     CheckLocation                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetLocation_Out                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualExactly_VectorVector_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTD_HasTargetMoved_C::PerformConditionCheck(class AActor* OwnerActor, const struct FVector& CheckLocation, const struct FVector& CallFunc_GetTargetLocation_Out, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_EqualExactly_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_HasTargetMoved_C", "PerformConditionCheck");

	Params::UBTD_HasTargetMoved_C_PerformConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.CheckLocation = CheckLocation;
	Parms.CallFunc_GetTargetLocation_Out = CallFunc_GetTargetLocation_Out;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualExactly_VectorVector_ReturnValue = CallFunc_EqualExactly_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BTD_HasTargetMoved.BTD_HasTargetMoved_C.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBTNodeResult           NodeResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTD_HasTargetMoved_C::ReceiveExecutionFinish(class AActor* OwnerActor, enum class EBTNodeResult NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_HasTargetMoved_C", "ReceiveExecutionFinish");

	Params::UBTD_HasTargetMoved_C_ReceiveExecutionFinish_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTD_HasTargetMoved.BTD_HasTargetMoved_C.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTD_HasTargetMoved_C::ReceiveExecutionStart(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_HasTargetMoved_C", "ReceiveExecutionStart");

	Params::UBTD_HasTargetMoved_C_ReceiveExecutionStart_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTD_HasTargetMoved.BTD_HasTargetMoved_C.ExecuteUbergraph_BTD_HasTargetMoved
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetLocation_Out                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBTNodeResult           K2Node_Event_NodeResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTD_HasTargetMoved_C::ExecuteUbergraph_BTD_HasTargetMoved(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, const struct FVector& CallFunc_GetTargetLocation_Out, class AActor* K2Node_Event_OwnerActor_1, enum class EBTNodeResult K2Node_Event_NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_HasTargetMoved_C", "ExecuteUbergraph_BTD_HasTargetMoved");

	Params::UBTD_HasTargetMoved_C_ExecuteUbergraph_BTD_HasTargetMoved_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_GetTargetLocation_Out = CallFunc_GetTargetLocation_Out;
	Parms.K2Node_Event_OwnerActor_1 = K2Node_Event_OwnerActor_1;
	Parms.K2Node_Event_NodeResult = K2Node_Event_NodeResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


