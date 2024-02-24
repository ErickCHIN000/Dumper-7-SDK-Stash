#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShadowKnightTeleportAbilityTask.ShadowKnightTeleportAbilityTask_C
// (None)

class UClass* UShadowKnightTeleportAbilityTask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShadowKnightTeleportAbilityTask_C");

	return Clss;
}


// ShadowKnightTeleportAbilityTask_C ShadowKnightTeleportAbilityTask.Default__ShadowKnightTeleportAbilityTask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShadowKnightTeleportAbilityTask_C* UShadowKnightTeleportAbilityTask_C::GetDefaultObj()
{
	static class UShadowKnightTeleportAbilityTask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShadowKnightTeleportAbilityTask_C*>(UShadowKnightTeleportAbilityTask_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShadowKnightTeleportAbilityTask.ShadowKnightTeleportAbilityTask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShadowKnightTeleportAbilityTask_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShadowKnightTeleportAbilityTask_C", "ReceiveExecuteAI");

	Params::UShadowKnightTeleportAbilityTask_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShadowKnightTeleportAbilityTask.ShadowKnightTeleportAbilityTask_C.ExecuteUbergraph_ShadowKnightTeleportAbilityTask
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ShadowKnightNew_C*       K2Node_DynamicCast_AsBP_Shadow_Knight_New                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShadowKnightTeleportAbilityTask_C::ExecuteUbergraph_ShadowKnightTeleportAbilityTask(int32 EntryPoint, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_ShadowKnightNew_C* K2Node_DynamicCast_AsBP_Shadow_Knight_New, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetBlackboardValueAsBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShadowKnightTeleportAbilityTask_C", "ExecuteUbergraph_ShadowKnightTeleportAbilityTask");

	Params::UShadowKnightTeleportAbilityTask_C_ExecuteUbergraph_ShadowKnightTeleportAbilityTask_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBP_Shadow_Knight_New = K2Node_DynamicCast_AsBP_Shadow_Knight_New;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue = CallFunc_GetBlackboardValueAsBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


