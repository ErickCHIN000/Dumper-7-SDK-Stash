#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C
// (None)

class UClass* UBP_IcarusGOAPAction_Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_Charge_C");

	return Clss;
}


// BP_IcarusGOAPAction_Charge_C BP_IcarusGOAPAction_Charge.Default__BP_IcarusGOAPAction_Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_Charge_C* UBP_IcarusGOAPAction_Charge_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_Charge_C*>(UBP_IcarusGOAPAction_Charge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C.IsTargetWithinValidChargeDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WithinValidDistance                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNPCStatWithDefaultValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNPCStatWithDefaultValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPAction_Charge_C::IsTargetWithinValidChargeDistance(class AIcarusNPCGOAPController* Controller, class AActor* Target, bool* WithinValidDistance, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Charge_C", "IsTargetWithinValidChargeDistance");

	Params::UBP_IcarusGOAPAction_Charge_C_IsTargetWithinValidChargeDistance_Params Parms{};

	Parms.Controller = Controller;
	Parms.Target = Target;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_GetNPCStatWithDefaultValue_ReturnValue = CallFunc_GetNPCStatWithDefaultValue_ReturnValue;
	Parms.CallFunc_GetNPCStatWithDefaultValue_ReturnValue_1 = CallFunc_GetNPCStatWithDefaultValue_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WithinValidDistance != nullptr)
		*WithinValidDistance = Parms.WithinValidDistance;

}


// Function BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C.ExecutionComplete
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGOAPMotivationsRowHandle   Threat                                                           (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecutionComplete_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMotivationValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateMotivationValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Charge_C::ExecutionComplete(class AIcarusNPCGOAPController* Controller, const struct FGOAPMotivationsRowHandle& Threat, bool CallFunc_ExecutionComplete_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetMotivationValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Charge_C", "ExecutionComplete");

	Params::UBP_IcarusGOAPAction_Charge_C_ExecutionComplete_Params Parms{};

	Parms.Controller = Controller;
	Parms.Threat = Threat;
	Parms.CallFunc_ExecutionComplete_ReturnValue = CallFunc_ExecutionComplete_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetMotivationValue_ReturnValue = CallFunc_GetMotivationValue_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_UpdateMotivationValue_ReturnValue = CallFunc_UpdateMotivationValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C.IsInRange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInRange_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Charge_C::IsInRange(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Charge_C", "IsInRange");

	Params::UBP_IcarusGOAPAction_Charge_C_IsInRange_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_IsInRange_ReturnValue = CallFunc_IsInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C.PlanAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlanAction_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetBestValidEnemyTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetWithinValidChargeDistance_WithinValidDistance   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Charge_C::PlanAction(class AIcarusNPCGOAPController* Controller, bool CallFunc_PlanAction_ReturnValue, class AActor* CallFunc_GetBestValidEnemyTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTargetWithinValidChargeDistance_WithinValidDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Charge_C", "PlanAction");

	Params::UBP_IcarusGOAPAction_Charge_C_PlanAction_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_PlanAction_ReturnValue = CallFunc_PlanAction_ReturnValue;
	Parms.CallFunc_GetBestValidEnemyTarget_ReturnValue = CallFunc_GetBestValidEnemyTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsTargetWithinValidChargeDistance_WithinValidDistance = CallFunc_IsTargetWithinValidChargeDistance_WithinValidDistance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              MinChargeDistance                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxChargeDistance                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNPCStatWithDefaultValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetBestValidEnemyTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetWithinValidChargeDistance_WithinValidDistance   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_Charge_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, float MinChargeDistance, float MaxChargeDistance, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CheckContextualPreconditions_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AActor* CallFunc_GetBestValidEnemyTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTargetWithinValidChargeDistance_WithinValidDistance, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_Charge_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_Charge_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.MinChargeDistance = MinChargeDistance;
	Parms.MaxChargeDistance = MaxChargeDistance;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;
	Parms.CallFunc_GetNPCStatWithDefaultValue_ReturnValue = CallFunc_GetNPCStatWithDefaultValue_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetBestValidEnemyTarget_ReturnValue = CallFunc_GetBestValidEnemyTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsTargetWithinValidChargeDistance_WithinValidDistance = CallFunc_IsTargetWithinValidChargeDistance_WithinValidDistance;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


