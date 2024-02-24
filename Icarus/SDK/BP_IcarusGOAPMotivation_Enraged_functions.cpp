#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Enraged.BP_IcarusGOAPMotivation_Enraged_C
// (None)

class UClass* UBP_IcarusGOAPMotivation_Enraged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPMotivation_Enraged_C");

	return Clss;
}


// BP_IcarusGOAPMotivation_Enraged_C BP_IcarusGOAPMotivation_Enraged.Default__BP_IcarusGOAPMotivation_Enraged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPMotivation_Enraged_C* UBP_IcarusGOAPMotivation_Enraged_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPMotivation_Enraged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPMotivation_Enraged_C*>(UBP_IcarusGOAPMotivation_Enraged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPMotivation_Enraged.BP_IcarusGOAPMotivation_Enraged_C.UpdateCost
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentPropertyState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateCost_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGOAPMotivation             CallFunc_GetMotivationData_ReturnValue                           (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNPCStatWithDefaultValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_IcarusGOAPMotivation_Enraged_C::UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetCurrentPropertyState_ReturnValue, bool CallFunc_UpdateCost_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Fraction_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Enraged_C", "UpdateCost");

	Params::UBP_IcarusGOAPMotivation_Enraged_C_UpdateCost_Params Parms{};

	Parms.Delta = Delta;
	Parms.Controller = Controller;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCurrentPropertyState_ReturnValue = CallFunc_GetCurrentPropertyState_ReturnValue;
	Parms.CallFunc_UpdateCost_ReturnValue = CallFunc_UpdateCost_ReturnValue;
	Parms.CallFunc_GetMotivationData_ReturnValue = CallFunc_GetMotivationData_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_GetNPCStatWithDefaultValue_ReturnValue = CallFunc_GetNPCStatWithDefaultValue_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPMotivation_Enraged.BP_IcarusGOAPMotivation_Enraged_C.OnMotivationTriggerEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGOAPMotivationTrigger      TriggeredEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bWasTriggered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPMotivation_Enraged_C::OnMotivationTriggerEvent(class AIcarusNPCGOAPController* Controller, struct FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Enraged_C", "OnMotivationTriggerEvent");

	Params::UBP_IcarusGOAPMotivation_Enraged_C_OnMotivationTriggerEvent_Params Parms{};

	Parms.Controller = Controller;
	Parms.TriggeredEvent = TriggeredEvent;
	Parms.bWasTriggered = bWasTriggered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusGOAPMotivation_Enraged.BP_IcarusGOAPMotivation_Enraged_C.UnblockIncrease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusGOAPMotivation_Enraged_C::UnblockIncrease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Enraged_C", "UnblockIncrease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusGOAPMotivation_Enraged.BP_IcarusGOAPMotivation_Enraged_C.ExecuteUbergraph_BP_IcarusGOAPMotivation_Enraged
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    K2Node_Event_Controller                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGOAPMotivationTrigger      K2Node_Event_TriggeredEvent                                      (ConstParm)
// bool                               K2Node_Event_bWasTriggered                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNPCStatWithDefaultValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UBP_IcarusGOAPMotivation_Enraged_C::ExecuteUbergraph_BP_IcarusGOAPMotivation_Enraged(int32 EntryPoint, class AIcarusNPCGOAPController* K2Node_Event_Controller, const struct FGOAPMotivationTrigger& K2Node_Event_TriggeredEvent, bool K2Node_Event_bWasTriggered, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Enraged_C", "ExecuteUbergraph_BP_IcarusGOAPMotivation_Enraged");

	Params::UBP_IcarusGOAPMotivation_Enraged_C_ExecuteUbergraph_BP_IcarusGOAPMotivation_Enraged_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.K2Node_Event_TriggeredEvent = K2Node_Event_TriggeredEvent;
	Parms.K2Node_Event_bWasTriggered = K2Node_Event_bWasTriggered;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetNPCStatWithDefaultValue_ReturnValue = CallFunc_GetNPCStatWithDefaultValue_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


