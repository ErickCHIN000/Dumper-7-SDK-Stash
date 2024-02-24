#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Combat.AIA_Creature_Combat_C
// (None)

class UClass* UAIA_Creature_Combat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Combat_C");

	return Clss;
}


// AIA_Creature_Combat_C AIA_Creature_Combat.Default__AIA_Creature_Combat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Combat_C* UAIA_Creature_Combat_C::GetDefaultObj()
{
	static class UAIA_Creature_Combat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Combat_C*>(UAIA_Creature_Combat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Combat.AIA_Creature_Combat_C.Get Distance Score
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DistanceScore                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwnerPawn_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_DistanceScore_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_C::Get_Distance_Score(class AActor* Target, double* DistanceScore, class APawn* CallFunc_GetOwnerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue, double K2Node_FunctionResult_DistanceScore_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_C", "Get Distance Score");

	Params::UAIA_Creature_Combat_C_Get_Distance_Score_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetOwnerPawn_ReturnValue = CallFunc_GetOwnerPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_ClampAndCurveNormalizedScore_ReturnValue = CallFunc_ClampAndCurveNormalizedScore_ReturnValue;
	Parms.K2Node_FunctionResult_DistanceScore_ImplicitCast = K2Node_FunctionResult_DistanceScore_ImplicitCast;
	Parms.CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast = CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast;
	Parms.CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast = CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast;
	Parms.CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast = CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (DistanceScore != nullptr)
		*DistanceScore = Parms.DistanceScore;

}


// Function AIA_Creature_Combat.AIA_Creature_Combat_C.HandleNewTarget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ObjectIsA_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_C::HandleNewTarget(class AActor* Target, bool CallFunc_ObjectIsA_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_C", "HandleNewTarget");

	Params::UAIA_Creature_Combat_C_HandleNewTarget_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_ObjectIsA_ReturnValue = CallFunc_ObjectIsA_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIA_Creature_Combat.AIA_Creature_Combat_C.GetTicketPriority
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UAIA_Creature_Combat_C::GetTicketPriority(class AActor* Target, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_C", "GetTicketPriority");

	Params::UAIA_Creature_Combat_C_GetTicketPriority_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_ClampAndCurveNormalizedScore_ReturnValue = CallFunc_ClampAndCurveNormalizedScore_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast = CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast;
	Parms.CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast = CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat.AIA_Creature_Combat_C.GetNormalizedRunPriority
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNormalizedScore_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNormalizedRunPriority_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_Combat_C::GetNormalizedRunPriority(class AActor* Target, float CallFunc_GetNormalizedScore_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetNormalizedRunPriority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_C", "GetNormalizedRunPriority");

	Params::UAIA_Creature_Combat_C_GetNormalizedRunPriority_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetNormalizedScore_ReturnValue = CallFunc_GetNormalizedScore_ReturnValue;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNormalizedRunPriority_ReturnValue = CallFunc_GetNormalizedRunPriority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat.AIA_Creature_Combat_C.CheckTargetRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LTarget                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UObject*                     FocusTarget                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_5                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_6                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSquadBBVar_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInCooldown_InCooldown                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_7                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_8                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActorPrey_IsPrey                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetSquadBlackboard_Blackboard                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_C::CheckTargetRequirements(class AActor* Target, bool LStructure, class AActor* LTarget, class UObject* FocusTarget, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, const struct FGameplayTag& Temp_struct_Variable_6, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetSquadBBVar_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInCooldown_InCooldown, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_7, bool CallFunc_ActorHasTag_ReturnValue_3, bool CallFunc_ActorHasTag_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_ActorHasTag_ReturnValue_5, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_4, const struct FGameplayTag& Temp_struct_Variable_8, bool CallFunc_ActorHasTag_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsActorPrey_IsPrey, bool CallFunc_ActorHasTag_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_1, class UBlackboardComponent* CallFunc_GetSquadBlackboard_Blackboard, bool CallFunc_IsValid_ReturnValue_3, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_C", "CheckTargetRequirements");

	Params::UAIA_Creature_Combat_C_CheckTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.LStructure = LStructure;
	Parms.LTarget = LTarget;
	Parms.FocusTarget = FocusTarget;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSquadBBVar_ReturnValue = CallFunc_GetSquadBBVar_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsInCooldown_InCooldown = CallFunc_IsInCooldown_InCooldown;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_ActorHasTag_ReturnValue_2 = CallFunc_ActorHasTag_ReturnValue_2;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.CallFunc_ActorHasTag_ReturnValue_3 = CallFunc_ActorHasTag_ReturnValue_3;
	Parms.CallFunc_ActorHasTag_ReturnValue_4 = CallFunc_ActorHasTag_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_ActorHasTag_ReturnValue_5 = CallFunc_ActorHasTag_ReturnValue_5;
	Parms.CallFunc_GetSpawner_Spawner = CallFunc_GetSpawner_Spawner;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_ActorHasTag_ReturnValue_6 = CallFunc_ActorHasTag_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.CallFunc_ActorHasTag_ReturnValue_7 = CallFunc_ActorHasTag_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsActorPrey_IsPrey = CallFunc_IsActorPrey_IsPrey;
	Parms.CallFunc_ActorHasTag_ReturnValue_8 = CallFunc_ActorHasTag_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetSquadBlackboard_Blackboard = CallFunc_GetSquadBlackboard_Blackboard;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat.AIA_Creature_Combat_C.GetNormalizedScore
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_5                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAISpawnerInterface>CallFunc_GetDamagers_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetDamagers_ReturnValue                                 (ReferenceParm)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Distance_Score_DistanceScore                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedScore              K2Node_MakeStruct_WeightedScore                                  (NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedScore              K2Node_MakeStruct_WeightedScore_1                                (NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedScore              K2Node_MakeStruct_WeightedScore_2                                (NoDestructor)
// bool                               CallFunc_IsInCooldown_InCooldown                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetIncentiveScore_IncentiveScore                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedScore              K2Node_MakeStruct_WeightedScore_3                                (NoDestructor)
// struct FWeightedScore              K2Node_MakeStruct_WeightedScore_4                                (NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedScore              K2Node_MakeStruct_WeightedScore_5                                (NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTypeScore_Type_Score                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedScore              K2Node_MakeStruct_WeightedScore_6                                (NoDestructor)
// double                             CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedScore              K2Node_MakeStruct_WeightedScore_7                                (NoDestructor)
// double                             CallFunc_SelectFloat_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedScore              K2Node_MakeStruct_WeightedScore_8                                (NoDestructor)
// struct FWeightedScore              K2Node_MakeStruct_WeightedScore_9                                (NoDestructor)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_10                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_11                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_12                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_13                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_14                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_15                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_16                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_16               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_17                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_17               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CombineWeightedScores_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalScore_18                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AccumulateWeightedScore_OutTotalWeight_18               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CombineWeightedScores_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_NormalizedScore_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_NormalizedScore_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Weight_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Weight_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_NormalizedScore_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_NormalizedScore_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Weight_ImplicitCast_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Weight_ImplicitCast_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_NormalizedScore_ImplicitCast_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_NormalizedScore_ImplicitCast_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Weight_ImplicitCast_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Weight_ImplicitCast_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Weight_ImplicitCast_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_NormalizedScore_ImplicitCast_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_NormalizedScore_ImplicitCast_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Weight_ImplicitCast_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Weight_ImplicitCast_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_Combat_C::GetNormalizedScore(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, TScriptInterface<class IAISpawnerInterface> CallFunc_GetDamagers_self_CastInput, TArray<class AActor*>& CallFunc_GetDamagers_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Get_Distance_Score_DistanceScore, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_2, class ANWXAISpawner* CallFunc_GetSpawner_Spawner_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_1, bool CallFunc_ActorHasTag_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_2, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_2, bool CallFunc_IsInCooldown_InCooldown, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_GetIncentiveScore_IncentiveScore, double CallFunc_Conv_BoolToDouble_ReturnValue, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_3, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_4, bool CallFunc_ActorHasTag_ReturnValue_4, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_5, bool CallFunc_ActorHasTag_ReturnValue_5, double CallFunc_GetTypeScore_Type_Score, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_6, double CallFunc_SelectFloat_ReturnValue_4, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_7, double CallFunc_SelectFloat_ReturnValue_5, double CallFunc_Add_DoubleDouble_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue, double CallFunc_SelectFloat_ReturnValue_6, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue_1, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_8, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_9, float CallFunc_AccumulateWeightedScore_OutTotalScore, float CallFunc_AccumulateWeightedScore_OutTotalWeight, float CallFunc_AccumulateWeightedScore_OutTotalScore_1, float CallFunc_AccumulateWeightedScore_OutTotalWeight_1, float CallFunc_AccumulateWeightedScore_OutTotalScore_2, float CallFunc_AccumulateWeightedScore_OutTotalWeight_2, float CallFunc_AccumulateWeightedScore_OutTotalScore_3, float CallFunc_AccumulateWeightedScore_OutTotalWeight_3, float CallFunc_AccumulateWeightedScore_OutTotalScore_4, float CallFunc_AccumulateWeightedScore_OutTotalWeight_4, float CallFunc_AccumulateWeightedScore_OutTotalScore_5, float CallFunc_AccumulateWeightedScore_OutTotalWeight_5, float CallFunc_AccumulateWeightedScore_OutTotalScore_6, float CallFunc_AccumulateWeightedScore_OutTotalWeight_6, float CallFunc_AccumulateWeightedScore_OutTotalScore_7, float CallFunc_AccumulateWeightedScore_OutTotalWeight_7, float CallFunc_AccumulateWeightedScore_OutTotalScore_8, float CallFunc_AccumulateWeightedScore_OutTotalWeight_8, float CallFunc_AccumulateWeightedScore_OutTotalScore_9, float CallFunc_AccumulateWeightedScore_OutTotalWeight_9, float CallFunc_AccumulateWeightedScore_OutTotalScore_10, float CallFunc_AccumulateWeightedScore_OutTotalWeight_10, float CallFunc_AccumulateWeightedScore_OutTotalScore_11, float CallFunc_AccumulateWeightedScore_OutTotalWeight_11, float CallFunc_AccumulateWeightedScore_OutTotalScore_12, float CallFunc_AccumulateWeightedScore_OutTotalWeight_12, float CallFunc_AccumulateWeightedScore_OutTotalScore_13, float CallFunc_AccumulateWeightedScore_OutTotalWeight_13, float CallFunc_AccumulateWeightedScore_OutTotalScore_14, float CallFunc_AccumulateWeightedScore_OutTotalWeight_14, float CallFunc_AccumulateWeightedScore_OutTotalScore_15, float CallFunc_AccumulateWeightedScore_OutTotalWeight_15, float CallFunc_AccumulateWeightedScore_OutTotalScore_16, float CallFunc_AccumulateWeightedScore_OutTotalWeight_16, float CallFunc_AccumulateWeightedScore_OutTotalScore_17, float CallFunc_AccumulateWeightedScore_OutTotalWeight_17, float CallFunc_CombineWeightedScores_ReturnValue, float CallFunc_AccumulateWeightedScore_OutTotalScore_18, float CallFunc_AccumulateWeightedScore_OutTotalWeight_18, float CallFunc_CombineWeightedScores_ReturnValue_1, float K2Node_MakeStruct_NormalizedScore_ImplicitCast, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_1, float K2Node_MakeStruct_Weight_ImplicitCast, float K2Node_MakeStruct_Weight_ImplicitCast_1, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_2, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_3, float K2Node_MakeStruct_Weight_ImplicitCast_2, float K2Node_MakeStruct_Weight_ImplicitCast_3, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_4, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_5, float K2Node_MakeStruct_Weight_ImplicitCast_4, float K2Node_MakeStruct_Weight_ImplicitCast_5, float K2Node_MakeStruct_Weight_ImplicitCast_6, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_6, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_7, double CallFunc_SelectFloat_A_ImplicitCast, float K2Node_MakeStruct_Weight_ImplicitCast_7, float CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast_1, float CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast_1, float CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast_1, float K2Node_MakeStruct_Weight_ImplicitCast_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_C", "GetNormalizedScore");

	Params::UAIA_Creature_Combat_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_GetSpawner_Spawner = CallFunc_GetSpawner_Spawner;
	Parms.CallFunc_GetDamagers_self_CastInput = CallFunc_GetDamagers_self_CastInput;
	Parms.CallFunc_GetDamagers_ReturnValue = CallFunc_GetDamagers_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Get_Distance_Score_DistanceScore = CallFunc_Get_Distance_Score_DistanceScore;
	Parms.K2Node_MakeStruct_WeightedScore = K2Node_MakeStruct_WeightedScore;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_ActorHasTag_ReturnValue_2 = CallFunc_ActorHasTag_ReturnValue_2;
	Parms.CallFunc_GetSpawner_Spawner_1 = CallFunc_GetSpawner_Spawner_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_WeightedScore_1 = K2Node_MakeStruct_WeightedScore_1;
	Parms.CallFunc_ActorHasTag_ReturnValue_3 = CallFunc_ActorHasTag_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.K2Node_MakeStruct_WeightedScore_2 = K2Node_MakeStruct_WeightedScore_2;
	Parms.CallFunc_IsInCooldown_InCooldown = CallFunc_IsInCooldown_InCooldown;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetIncentiveScore_IncentiveScore = CallFunc_GetIncentiveScore_IncentiveScore;
	Parms.CallFunc_Conv_BoolToDouble_ReturnValue = CallFunc_Conv_BoolToDouble_ReturnValue;
	Parms.K2Node_MakeStruct_WeightedScore_3 = K2Node_MakeStruct_WeightedScore_3;
	Parms.K2Node_MakeStruct_WeightedScore_4 = K2Node_MakeStruct_WeightedScore_4;
	Parms.CallFunc_ActorHasTag_ReturnValue_4 = CallFunc_ActorHasTag_ReturnValue_4;
	Parms.K2Node_MakeStruct_WeightedScore_5 = K2Node_MakeStruct_WeightedScore_5;
	Parms.CallFunc_ActorHasTag_ReturnValue_5 = CallFunc_ActorHasTag_ReturnValue_5;
	Parms.CallFunc_GetTypeScore_Type_Score = CallFunc_GetTypeScore_Type_Score;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.K2Node_MakeStruct_WeightedScore_6 = K2Node_MakeStruct_WeightedScore_6;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_MakeStruct_WeightedScore_7 = K2Node_MakeStruct_WeightedScore_7;
	Parms.CallFunc_SelectFloat_ReturnValue_5 = CallFunc_SelectFloat_ReturnValue_5;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_ClampAndCurveNormalizedScore_ReturnValue = CallFunc_ClampAndCurveNormalizedScore_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_6 = CallFunc_SelectFloat_ReturnValue_6;
	Parms.CallFunc_ClampAndCurveNormalizedScore_ReturnValue_1 = CallFunc_ClampAndCurveNormalizedScore_ReturnValue_1;
	Parms.K2Node_MakeStruct_WeightedScore_8 = K2Node_MakeStruct_WeightedScore_8;
	Parms.K2Node_MakeStruct_WeightedScore_9 = K2Node_MakeStruct_WeightedScore_9;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore = CallFunc_AccumulateWeightedScore_OutTotalScore;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight = CallFunc_AccumulateWeightedScore_OutTotalWeight;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_1 = CallFunc_AccumulateWeightedScore_OutTotalScore_1;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_1 = CallFunc_AccumulateWeightedScore_OutTotalWeight_1;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_2 = CallFunc_AccumulateWeightedScore_OutTotalScore_2;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_2 = CallFunc_AccumulateWeightedScore_OutTotalWeight_2;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_3 = CallFunc_AccumulateWeightedScore_OutTotalScore_3;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_3 = CallFunc_AccumulateWeightedScore_OutTotalWeight_3;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_4 = CallFunc_AccumulateWeightedScore_OutTotalScore_4;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_4 = CallFunc_AccumulateWeightedScore_OutTotalWeight_4;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_5 = CallFunc_AccumulateWeightedScore_OutTotalScore_5;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_5 = CallFunc_AccumulateWeightedScore_OutTotalWeight_5;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_6 = CallFunc_AccumulateWeightedScore_OutTotalScore_6;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_6 = CallFunc_AccumulateWeightedScore_OutTotalWeight_6;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_7 = CallFunc_AccumulateWeightedScore_OutTotalScore_7;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_7 = CallFunc_AccumulateWeightedScore_OutTotalWeight_7;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_8 = CallFunc_AccumulateWeightedScore_OutTotalScore_8;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_8 = CallFunc_AccumulateWeightedScore_OutTotalWeight_8;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_9 = CallFunc_AccumulateWeightedScore_OutTotalScore_9;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_9 = CallFunc_AccumulateWeightedScore_OutTotalWeight_9;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_10 = CallFunc_AccumulateWeightedScore_OutTotalScore_10;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_10 = CallFunc_AccumulateWeightedScore_OutTotalWeight_10;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_11 = CallFunc_AccumulateWeightedScore_OutTotalScore_11;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_11 = CallFunc_AccumulateWeightedScore_OutTotalWeight_11;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_12 = CallFunc_AccumulateWeightedScore_OutTotalScore_12;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_12 = CallFunc_AccumulateWeightedScore_OutTotalWeight_12;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_13 = CallFunc_AccumulateWeightedScore_OutTotalScore_13;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_13 = CallFunc_AccumulateWeightedScore_OutTotalWeight_13;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_14 = CallFunc_AccumulateWeightedScore_OutTotalScore_14;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_14 = CallFunc_AccumulateWeightedScore_OutTotalWeight_14;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_15 = CallFunc_AccumulateWeightedScore_OutTotalScore_15;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_15 = CallFunc_AccumulateWeightedScore_OutTotalWeight_15;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_16 = CallFunc_AccumulateWeightedScore_OutTotalScore_16;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_16 = CallFunc_AccumulateWeightedScore_OutTotalWeight_16;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_17 = CallFunc_AccumulateWeightedScore_OutTotalScore_17;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_17 = CallFunc_AccumulateWeightedScore_OutTotalWeight_17;
	Parms.CallFunc_CombineWeightedScores_ReturnValue = CallFunc_CombineWeightedScores_ReturnValue;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalScore_18 = CallFunc_AccumulateWeightedScore_OutTotalScore_18;
	Parms.CallFunc_AccumulateWeightedScore_OutTotalWeight_18 = CallFunc_AccumulateWeightedScore_OutTotalWeight_18;
	Parms.CallFunc_CombineWeightedScores_ReturnValue_1 = CallFunc_CombineWeightedScores_ReturnValue_1;
	Parms.K2Node_MakeStruct_NormalizedScore_ImplicitCast = K2Node_MakeStruct_NormalizedScore_ImplicitCast;
	Parms.K2Node_MakeStruct_NormalizedScore_ImplicitCast_1 = K2Node_MakeStruct_NormalizedScore_ImplicitCast_1;
	Parms.K2Node_MakeStruct_Weight_ImplicitCast = K2Node_MakeStruct_Weight_ImplicitCast;
	Parms.K2Node_MakeStruct_Weight_ImplicitCast_1 = K2Node_MakeStruct_Weight_ImplicitCast_1;
	Parms.K2Node_MakeStruct_NormalizedScore_ImplicitCast_2 = K2Node_MakeStruct_NormalizedScore_ImplicitCast_2;
	Parms.K2Node_MakeStruct_NormalizedScore_ImplicitCast_3 = K2Node_MakeStruct_NormalizedScore_ImplicitCast_3;
	Parms.K2Node_MakeStruct_Weight_ImplicitCast_2 = K2Node_MakeStruct_Weight_ImplicitCast_2;
	Parms.K2Node_MakeStruct_Weight_ImplicitCast_3 = K2Node_MakeStruct_Weight_ImplicitCast_3;
	Parms.K2Node_MakeStruct_NormalizedScore_ImplicitCast_4 = K2Node_MakeStruct_NormalizedScore_ImplicitCast_4;
	Parms.K2Node_MakeStruct_NormalizedScore_ImplicitCast_5 = K2Node_MakeStruct_NormalizedScore_ImplicitCast_5;
	Parms.K2Node_MakeStruct_Weight_ImplicitCast_4 = K2Node_MakeStruct_Weight_ImplicitCast_4;
	Parms.K2Node_MakeStruct_Weight_ImplicitCast_5 = K2Node_MakeStruct_Weight_ImplicitCast_5;
	Parms.K2Node_MakeStruct_Weight_ImplicitCast_6 = K2Node_MakeStruct_Weight_ImplicitCast_6;
	Parms.K2Node_MakeStruct_NormalizedScore_ImplicitCast_6 = K2Node_MakeStruct_NormalizedScore_ImplicitCast_6;
	Parms.K2Node_MakeStruct_NormalizedScore_ImplicitCast_7 = K2Node_MakeStruct_NormalizedScore_ImplicitCast_7;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.K2Node_MakeStruct_Weight_ImplicitCast_7 = K2Node_MakeStruct_Weight_ImplicitCast_7;
	Parms.CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast = CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast;
	Parms.CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast = CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast;
	Parms.CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast = CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast;
	Parms.CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast_1 = CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast_1;
	Parms.CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast_1 = CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast_1;
	Parms.CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast_1 = CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast_1;
	Parms.K2Node_MakeStruct_Weight_ImplicitCast_8 = K2Node_MakeStruct_Weight_ImplicitCast_8;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat.AIA_Creature_Combat_C.GetTypeScore
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Type_Score                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_C::GetTypeScore(class AActor* Target, double* Type_Score, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_ActorHasTag_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_C", "GetTypeScore");

	Params::UAIA_Creature_Combat_C_GetTypeScore_Params Parms{};

	Parms.Target = Target;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_ActorHasTag_ReturnValue_2 = CallFunc_ActorHasTag_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Type_Score != nullptr)
		*Type_Score = Parms.Type_Score;

}


// Function AIA_Creature_Combat.AIA_Creature_Combat_C.Start
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_C::Start(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_C", "Start");

	Params::UAIA_Creature_Combat_C_Start_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIA_Creature_Combat.AIA_Creature_Combat_C.Stop
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_C::Stop(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_C", "Stop");

	Params::UAIA_Creature_Combat_C_Stop_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIA_Creature_Combat.AIA_Creature_Combat_C.OnTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OldTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_C::OnTargetChanged(class AActor* OldTarget, class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_C", "OnTargetChanged");

	Params::UAIA_Creature_Combat_C_OnTargetChanged_Params Parms{};

	Parms.OldTarget = OldTarget;
	Parms.NewTarget = NewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIA_Creature_Combat.AIA_Creature_Combat_C.ExecuteUbergraph_AIA_Creature_Combat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISquadMemberNativeInterface>CallFunc_GetSpawnerActor_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSpawnerActor_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OldTarget                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_NewTarget                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_DynamicCast_AsBP_Creature_Spawner_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISquadMemberNativeInterface>CallFunc_GetSpawnerActor_self_CastInput_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSpawnerActor_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_DynamicCast_AsBP_Creature_Spawner_Base_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (ConstParm, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_C::ExecuteUbergraph_AIA_Creature_Combat(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, TScriptInterface<class ISquadMemberNativeInterface> CallFunc_GetSpawnerActor_self_CastInput, class AActor* CallFunc_GetSpawnerActor_ReturnValue, class AActor* K2Node_Event_OldTarget, class AActor* K2Node_Event_NewTarget, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISquadMemberNativeInterface> CallFunc_GetSpawnerActor_self_CastInput_1, class AActor* CallFunc_GetSpawnerActor_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_1, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue_1, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Target_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_C", "ExecuteUbergraph_AIA_Creature_Combat");

	Params::UAIA_Creature_Combat_C_ExecuteUbergraph_AIA_Creature_Combat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetSpawnerActor_self_CastInput = CallFunc_GetSpawnerActor_self_CastInput;
	Parms.CallFunc_GetSpawnerActor_ReturnValue = CallFunc_GetSpawnerActor_ReturnValue;
	Parms.K2Node_Event_OldTarget = K2Node_Event_OldTarget;
	Parms.K2Node_Event_NewTarget = K2Node_Event_NewTarget;
	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_Base = K2Node_DynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSpawnerActor_self_CastInput_1 = CallFunc_GetSpawnerActor_self_CastInput_1;
	Parms.CallFunc_GetSpawnerActor_ReturnValue_1 = CallFunc_GetSpawnerActor_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_Base_1 = K2Node_DynamicCast_AsBP_Creature_Spawner_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue_1 = CallFunc_EqualEqual_VectorVector_ReturnValue_1;
	Parms.K2Node_Event_Target = K2Node_Event_Target;
	Parms.K2Node_Event_Target_1 = K2Node_Event_Target_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


