#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C
// (None)

class UClass* UBP_IcarusGOAPAction_Melee_Attack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_Melee_Attack_C");

	return Clss;
}


// BP_IcarusGOAPAction_Melee_Attack_C BP_IcarusGOAPAction_Melee_Attack.Default__BP_IcarusGOAPAction_Melee_Attack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_Melee_Attack_C* UBP_IcarusGOAPAction_Melee_Attack_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_Melee_Attack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_Melee_Attack_C*>(UBP_IcarusGOAPAction_Melee_Attack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.TrySwitchAttackTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DidSwitch                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CurrentTargetKeyName                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBestValidEnemyTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompleteCurrentAction_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGOAPAction*           CallFunc_GetCurrentAction_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPAction_Melee_Attack_C::TrySwitchAttackTarget(class AIcarusNPCGOAPController* Controller, bool* DidSwitch, class FName CurrentTargetKeyName, class AActor* CallFunc_GetBestValidEnemyTarget_ReturnValue, bool CallFunc_CompleteCurrentAction_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UIcarusGOAPAction* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Melee_Attack_C", "TrySwitchAttackTarget");

	Params::UBP_IcarusGOAPAction_Melee_Attack_C_TrySwitchAttackTarget_Params Parms{};

	Parms.Controller = Controller;
	Parms.CurrentTargetKeyName = CurrentTargetKeyName;
	Parms.CallFunc_GetBestValidEnemyTarget_ReturnValue = CallFunc_GetBestValidEnemyTarget_ReturnValue;
	Parms.CallFunc_CompleteCurrentAction_ReturnValue = CallFunc_CompleteCurrentAction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentAction_ReturnValue = CallFunc_GetCurrentAction_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DidSwitch != nullptr)
		*DidSwitch = Parms.DidSwitch;

}


// Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.ActionReset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionReset_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Melee_Attack_C::ActionReset(bool Interrupted, bool CallFunc_ActionReset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Melee_Attack_C", "ActionReset");

	Params::UBP_IcarusGOAPAction_Melee_Attack_C_ActionReset_Params Parms{};

	Parms.Interrupted = Interrupted;
	Parms.CallFunc_ActionReset_ReturnValue = CallFunc_ActionReset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.UpdateCost
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     NewTargetLocation                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              YoungestStimulus                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateCost_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TrySwitchAttackTarget_DidSwitch                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Melee_Attack_C::UpdateCost(class AIcarusNPCGOAPController* Controller, const struct FVector& NewTargetLocation, float YoungestStimulus, bool CallFunc_UpdateCost_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_TrySwitchAttackTarget_DidSwitch, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Melee_Attack_C", "UpdateCost");

	Params::UBP_IcarusGOAPAction_Melee_Attack_C_UpdateCost_Params Parms{};

	Parms.Controller = Controller;
	Parms.NewTargetLocation = NewTargetLocation;
	Parms.YoungestStimulus = YoungestStimulus;
	Parms.CallFunc_UpdateCost_ReturnValue = CallFunc_UpdateCost_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_TrySwitchAttackTarget_DidSwitch = CallFunc_TrySwitchAttackTarget_DidSwitch;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.IsInRange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInRange_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Melee_Attack_C::IsInRange(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Melee_Attack_C", "IsInRange");

	Params::UBP_IcarusGOAPAction_Melee_Attack_C_IsInRange_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_IsInRange_ReturnValue = CallFunc_IsInRange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.PlanAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlanAction_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetBestValidEnemyTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Melee_Attack_C::PlanAction(class AIcarusNPCGOAPController* Controller, bool CallFunc_PlanAction_ReturnValue, class AActor* CallFunc_GetBestValidEnemyTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Melee_Attack_C", "PlanAction");

	Params::UBP_IcarusGOAPAction_Melee_Attack_C_PlanAction_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_PlanAction_ReturnValue = CallFunc_PlanAction_ReturnValue;
	Parms.CallFunc_GetBestValidEnemyTarget_ReturnValue = CallFunc_GetBestValidEnemyTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetBestValidEnemyTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateCurrentState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetActorThreat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Melee_Attack_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, bool CallFunc_CheckContextualPreconditions_ReturnValue, class AActor* CallFunc_GetBestValidEnemyTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_UpdateCurrentState_ReturnValue, float CallFunc_GetActorThreat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Melee_Attack_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_Melee_Attack_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;
	Parms.CallFunc_GetBestValidEnemyTarget_ReturnValue = CallFunc_GetBestValidEnemyTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_UpdateCurrentState_ReturnValue = CallFunc_UpdateCurrentState_ReturnValue;
	Parms.CallFunc_GetActorThreat_ReturnValue = CallFunc_GetActorThreat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


