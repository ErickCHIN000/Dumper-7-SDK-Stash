#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_SetTargetLocationFleeTarget.BTT_SetTargetLocationFleeTarget_C
// (None)

class UClass* UBTT_SetTargetLocationFleeTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_SetTargetLocationFleeTarget_C");

	return Clss;
}


// BTT_SetTargetLocationFleeTarget_C BTT_SetTargetLocationFleeTarget.Default__BTT_SetTargetLocationFleeTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_SetTargetLocationFleeTarget_C* UBTT_SetTargetLocationFleeTarget_C::GetDefaultObj()
{
	static class UBTT_SetTargetLocationFleeTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_SetTargetLocationFleeTarget_C*>(UBTT_SetTargetLocationFleeTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_SetTargetLocationFleeTarget.BTT_SetTargetLocationFleeTarget_C.SelectDestination
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Destination                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocationOfTarget                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     RandomLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast_1(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetTargetLocationFleeTarget_C::SelectDestination(bool* bSuccess, struct FVector* Destination, const struct FVector& LocationOfTarget, const struct FVector& RandomLocation, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_VSize_ReturnValue_1, const struct FVector& CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation, bool CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation_1, bool CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue_1, float CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast, float CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetTargetLocationFleeTarget_C", "SelectDestination");

	Params::UBTT_SetTargetLocationFleeTarget_C_SelectDestination_Params Parms{};

	Parms.LocationOfTarget = LocationOfTarget;
	Parms.RandomLocation = RandomLocation;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation = CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue = CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation_1 = CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation_1;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue_1 = CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue_1;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast = CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast_1 = CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Destination != nullptr)
		*Destination = std::move(Parms.Destination);

}


// Function BTT_SetTargetLocationFleeTarget.BTT_SetTargetLocationFleeTarget_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetTargetLocationFleeTarget_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetTargetLocationFleeTarget_C", "ReceiveExecuteAI");

	Params::UBTT_SetTargetLocationFleeTarget_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_SetTargetLocationFleeTarget.BTT_SetTargetLocationFleeTarget_C.ExecuteUbergraph_BTT_SetTargetLocationFleeTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectDestination_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectDestination_Destination                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetTargetLocationFleeTarget_C::ExecuteUbergraph_BTT_SetTargetLocationFleeTarget(int32 EntryPoint, bool CallFunc_SelectDestination_bSuccess, const struct FVector& CallFunc_SelectDestination_Destination, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetTargetLocationFleeTarget_C", "ExecuteUbergraph_BTT_SetTargetLocationFleeTarget");

	Params::UBTT_SetTargetLocationFleeTarget_C_ExecuteUbergraph_BTT_SetTargetLocationFleeTarget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SelectDestination_bSuccess = CallFunc_SelectDestination_bSuccess;
	Parms.CallFunc_SelectDestination_Destination = CallFunc_SelectDestination_Destination;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


