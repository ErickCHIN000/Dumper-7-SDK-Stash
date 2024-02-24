#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GOAPMotivation_Hunting.BP_GOAPMotivation_Hunting_C
// (None)

class UClass* UBP_GOAPMotivation_Hunting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GOAPMotivation_Hunting_C");

	return Clss;
}


// BP_GOAPMotivation_Hunting_C BP_GOAPMotivation_Hunting.Default__BP_GOAPMotivation_Hunting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GOAPMotivation_Hunting_C* UBP_GOAPMotivation_Hunting_C::GetDefaultObj()
{
	static class UBP_GOAPMotivation_Hunting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GOAPMotivation_Hunting_C*>(UBP_GOAPMotivation_Hunting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GOAPMotivation_Hunting.BP_GOAPMotivation_Hunting_C.UpdateCost
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateCost_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGOAPMotivation             CallFunc_GetMotivationData_ReturnValue                           (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetNearestAlivePlayer_Player                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetNearestAlivePlayer_NearbyAlivePlayers                (ReferenceParm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckLineOfSightToTarget_ControllerHasLineOfSightToTarget(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckLineOfSightToTarget_IsTargetWithinControllerView   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckLineOfSightToTarget_IsControllerWithinTargetView   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_GOAPMotivation_Hunting_C::UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, bool CallFunc_UpdateCost_ReturnValue, int32 Temp_int_Array_Index_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetNearestAlivePlayer_Player, TArray<class AActor*>& CallFunc_GetNearestAlivePlayer_NearbyAlivePlayers, float CallFunc_Conv_IntToFloat_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CheckLineOfSightToTarget_ControllerHasLineOfSightToTarget, bool CallFunc_CheckLineOfSightToTarget_IsTargetWithinControllerView, bool CallFunc_CheckLineOfSightToTarget_IsControllerWithinTargetView, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Fraction_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GOAPMotivation_Hunting_C", "UpdateCost");

	Params::UBP_GOAPMotivation_Hunting_C_UpdateCost_Params Parms{};

	Parms.Delta = Delta;
	Parms.Controller = Controller;
	Parms.CallFunc_UpdateCost_ReturnValue = CallFunc_UpdateCost_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetMotivationData_ReturnValue = CallFunc_GetMotivationData_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetNearestAlivePlayer_Player = CallFunc_GetNearestAlivePlayer_Player;
	Parms.CallFunc_GetNearestAlivePlayer_NearbyAlivePlayers = CallFunc_GetNearestAlivePlayer_NearbyAlivePlayers;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CheckLineOfSightToTarget_ControllerHasLineOfSightToTarget = CallFunc_CheckLineOfSightToTarget_ControllerHasLineOfSightToTarget;
	Parms.CallFunc_CheckLineOfSightToTarget_IsTargetWithinControllerView = CallFunc_CheckLineOfSightToTarget_IsTargetWithinControllerView;
	Parms.CallFunc_CheckLineOfSightToTarget_IsControllerWithinTargetView = CallFunc_CheckLineOfSightToTarget_IsControllerWithinTargetView;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


