#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_GetFollowerMoveLocation.BTT_GetFollowerMoveLocation_C
// (None)

class UClass* UBTT_GetFollowerMoveLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_GetFollowerMoveLocation_C");

	return Clss;
}


// BTT_GetFollowerMoveLocation_C BTT_GetFollowerMoveLocation.Default__BTT_GetFollowerMoveLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_GetFollowerMoveLocation_C* UBTT_GetFollowerMoveLocation_C::GetDefaultObj()
{
	static class UBTT_GetFollowerMoveLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_GetFollowerMoveLocation_C*>(UBTT_GetFollowerMoveLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_GetFollowerMoveLocation.BTT_GetFollowerMoveLocation_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_GetFollowerMoveLocation_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_GetFollowerMoveLocation_C", "ReceiveExecute");

	Params::UBTT_GetFollowerMoveLocation_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_GetFollowerMoveLocation.BTT_GetFollowerMoveLocation_C.ExecuteUbergraph_BTT_GetFollowerMoveLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetBlackboardValueAsObject_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SquadManager_C*          K2Node_DynamicCast_AsBP_Squad_Manager                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_RequestFollowTarget_TargetNode                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_GetFollowerMoveLocation_C::ExecuteUbergraph_BTT_GetFollowerMoveLocation(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class ABP_SquadManager_C* K2Node_DynamicCast_AsBP_Squad_Manager, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_RequestFollowTarget_TargetNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_GetFollowerMoveLocation_C", "ExecuteUbergraph_BTT_GetFollowerMoveLocation");

	Params::UBTT_GetFollowerMoveLocation_C_ExecuteUbergraph_BTT_GetFollowerMoveLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_GetBlackboardValueAsObject_ReturnValue = CallFunc_GetBlackboardValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Squad_Manager = K2Node_DynamicCast_AsBP_Squad_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RequestFollowTarget_TargetNode = CallFunc_RequestFollowTarget_TargetNode;

	UObject::ProcessEvent(Func, &Parms);

}

}


