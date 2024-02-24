#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EscapeAISample.EscapeAISample_C
// (Actor)

class UClass* AEscapeAISample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EscapeAISample_C");

	return Clss;
}


// EscapeAISample_C EscapeAISample.Default__EscapeAISample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEscapeAISample_C* AEscapeAISample_C::GetDefaultObj()
{
	static class AEscapeAISample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEscapeAISample_C*>(AEscapeAISample_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EscapeAISample.EscapeAISample_C.pûÕ
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEndPointLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionPatrol_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetEscapeTargetPosition_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionPatrolDirectLocation_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEscapeAISample_C::_p__(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetEndPointLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_ActionPatrol_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetEscapeTargetPosition_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_ActionPatrolDirectLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeAISample_C", "pûÕ");

	Params::AEscapeAISample_C__p___Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetEndPointLocation_ReturnValue = CallFunc_GetEndPointLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_ActionPatrol_ReturnValue = CallFunc_ActionPatrol_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEscapeTargetPosition_ReturnValue = CallFunc_GetEscapeTargetPosition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_ActionPatrolDirectLocation_ReturnValue = CallFunc_ActionPatrolDirectLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeAISample.EscapeAISample_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEscapeAISample_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeAISample_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeAISample.EscapeAISample_C.AIProcess
// (Event, Public, BlueprintEvent)
// Parameters:

void AEscapeAISample_C::AIProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeAISample_C", "AIProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeAISample.EscapeAISample_C.AIInit
// (Event, Public, BlueprintEvent)
// Parameters:

void AEscapeAISample_C::AIInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeAISample_C", "AIInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeAISample.EscapeAISample_C.AIHateTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEscapeAISample_C::AIHateTargetChanged(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeAISample_C", "AIHateTargetChanged");

	Params::AEscapeAISample_C_AIHateTargetChanged_Params Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscapeAISample.EscapeAISample_C.AIAttackFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void AEscapeAISample_C::AIAttackFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeAISample_C", "AIAttackFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscapeAISample.EscapeAISample_C.ExecuteUbergraph_EscapeAISample
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_targetActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEscapeTargetPosition_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSoftCollisionDistance_NearestPosition                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSoftCollisionDistance_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNearestEscapePath_DistanceToPath                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLSplinePath*              CallFunc_GetNearestEscapePath_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEscapeAISample_C::ExecuteUbergraph_EscapeAISample(int32 EntryPoint, class AActor* K2Node_Event_targetActor, const struct FVector& CallFunc_GetEscapeTargetPosition_ReturnValue, const struct FVector& CallFunc_GetSoftCollisionDistance_NearestPosition, float CallFunc_GetSoftCollisionDistance_ReturnValue, float CallFunc_GetNearestEscapePath_DistanceToPath, class ATTLSplinePath* CallFunc_GetNearestEscapePath_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscapeAISample_C", "ExecuteUbergraph_EscapeAISample");

	Params::AEscapeAISample_C_ExecuteUbergraph_EscapeAISample_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_targetActor = K2Node_Event_targetActor;
	Parms.CallFunc_GetEscapeTargetPosition_ReturnValue = CallFunc_GetEscapeTargetPosition_ReturnValue;
	Parms.CallFunc_GetSoftCollisionDistance_NearestPosition = CallFunc_GetSoftCollisionDistance_NearestPosition;
	Parms.CallFunc_GetSoftCollisionDistance_ReturnValue = CallFunc_GetSoftCollisionDistance_ReturnValue;
	Parms.CallFunc_GetNearestEscapePath_DistanceToPath = CallFunc_GetNearestEscapePath_DistanceToPath;
	Parms.CallFunc_GetNearestEscapePath_ReturnValue = CallFunc_GetNearestEscapePath_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


