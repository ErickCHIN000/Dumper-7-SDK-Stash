#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_SetCollisionEnabledWithActor.BTTask_SetCollisionEnabledWithActor_C
// (None)

class UClass* UBTTask_SetCollisionEnabledWithActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_SetCollisionEnabledWithActor_C");

	return Clss;
}


// BTTask_SetCollisionEnabledWithActor_C BTTask_SetCollisionEnabledWithActor.Default__BTTask_SetCollisionEnabledWithActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_SetCollisionEnabledWithActor_C* UBTTask_SetCollisionEnabledWithActor_C::GetDefaultObj()
{
	static class UBTTask_SetCollisionEnabledWithActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_SetCollisionEnabledWithActor_C*>(UBTTask_SetCollisionEnabledWithActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_SetCollisionEnabledWithActor.BTTask_SetCollisionEnabledWithActor_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_SetCollisionEnabledWithActor_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_SetCollisionEnabledWithActor_C", "ReceiveExecuteAI");

	Params::UBTTask_SetCollisionEnabledWithActor_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_SetCollisionEnabledWithActor.BTTask_SetCollisionEnabledWithActor_C.ExecuteUbergraph_BTTask_SetCollisionEnabledWithActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetBlackboardValueAsObject_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_SetCollisionEnabledWithActor_C::ExecuteUbergraph_BTTask_SetCollisionEnabledWithActor(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_SetCollisionEnabledWithActor_C", "ExecuteUbergraph_BTTask_SetCollisionEnabledWithActor");

	Params::UBTTask_SetCollisionEnabledWithActor_C_ExecuteUbergraph_BTTask_SetCollisionEnabledWithActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetBlackboardValueAsObject_ReturnValue = CallFunc_GetBlackboardValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


