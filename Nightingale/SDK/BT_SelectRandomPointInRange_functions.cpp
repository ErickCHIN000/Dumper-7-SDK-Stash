#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BT_SelectRandomPointInRange.BT_SelectRandomPointInRange_C
// (None)

class UClass* UBT_SelectRandomPointInRange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BT_SelectRandomPointInRange_C");

	return Clss;
}


// BT_SelectRandomPointInRange_C BT_SelectRandomPointInRange.Default__BT_SelectRandomPointInRange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBT_SelectRandomPointInRange_C* UBT_SelectRandomPointInRange_C::GetDefaultObj()
{
	static class UBT_SelectRandomPointInRange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBT_SelectRandomPointInRange_C*>(UBT_SelectRandomPointInRange_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BT_SelectRandomPointInRange.BT_SelectRandomPointInRange_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBT_SelectRandomPointInRange_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BT_SelectRandomPointInRange_C", "ReceiveExecuteAI");

	Params::UBT_SelectRandomPointInRange_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BT_SelectRandomPointInRange.BT_SelectRandomPointInRange_C.ExecuteUbergraph_BT_SelectRandomPointInRange
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBT_SelectRandomPointInRange_C::ExecuteUbergraph_BT_SelectRandomPointInRange(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation, bool CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue, float CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BT_SelectRandomPointInRange_C", "ExecuteUbergraph_BT_SelectRandomPointInRange");

	Params::UBT_SelectRandomPointInRange_C_ExecuteUbergraph_BT_SelectRandomPointInRange_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation = CallFunc_FindReachableLocationAroundPointOnNavMesh_OutLocation;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue = CallFunc_FindReachableLocationAroundPointOnNavMesh_ReturnValue;
	Parms.CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast = CallFunc_FindReachableLocationAroundPointOnNavMesh_BoxHalfSize_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


