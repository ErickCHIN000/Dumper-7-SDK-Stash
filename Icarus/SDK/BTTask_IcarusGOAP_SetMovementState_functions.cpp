#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_IcarusGOAP_SetMovementState.BTTask_IcarusGOAP_SetMovementState_C
// (None)

class UClass* UBTTask_IcarusGOAP_SetMovementState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_IcarusGOAP_SetMovementState_C");

	return Clss;
}


// BTTask_IcarusGOAP_SetMovementState_C BTTask_IcarusGOAP_SetMovementState.Default__BTTask_IcarusGOAP_SetMovementState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_IcarusGOAP_SetMovementState_C* UBTTask_IcarusGOAP_SetMovementState_C::GetDefaultObj()
{
	static class UBTTask_IcarusGOAP_SetMovementState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_IcarusGOAP_SetMovementState_C*>(UBTTask_IcarusGOAP_SetMovementState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_IcarusGOAP_SetMovementState.BTTask_IcarusGOAP_SetMovementState_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_IcarusGOAP_SetMovementState_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_IcarusGOAP_SetMovementState_C", "ReceiveExecuteAI");

	Params::UBTTask_IcarusGOAP_SetMovementState_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_IcarusGOAP_SetMovementState.BTTask_IcarusGOAP_SetMovementState_C.ExecuteUbergraph_BTTask_IcarusGOAP_SetMovementState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPCharacter*     K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_IcarusGOAP_SetMovementState_C::ExecuteUbergraph_BTTask_IcarusGOAP_SetMovementState(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UpdateMovementState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_IcarusGOAP_SetMovementState_C", "ExecuteUbergraph_BTTask_IcarusGOAP_SetMovementState");

	Params::UBTTask_IcarusGOAP_SetMovementState_C_ExecuteUbergraph_BTTask_IcarusGOAP_SetMovementState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter = K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_UpdateMovementState_ReturnValue = CallFunc_UpdateMovementState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


