#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C
// (None)

class UClass* UActionSkill_Barbarian_NowWeSlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionSkill_Barbarian_NowWeSlass_C");

	return Clss;
}


// ActionSkill_Barbarian_NowWeSlass_C ActionSkill_Barbarian_NowWeSlass.Default__ActionSkill_Barbarian_NowWeSlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionSkill_Barbarian_NowWeSlass_C* UActionSkill_Barbarian_NowWeSlass_C::GetDefaultObj()
{
	static class UActionSkill_Barbarian_NowWeSlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionSkill_Barbarian_NowWeSlass_C*>(UActionSkill_Barbarian_NowWeSlass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.GetTotalHealthPercentage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HealthPercentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsesPools                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              MaxHealth                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentHealth                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakDamageComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameResourcePoolManagerComponent*CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHealthPercent_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameResourceData*           Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameResourceData*           Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameResourceData*           Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameResourceData*           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  CallFunc_GetResourcePoolByResource_ReturnValue                   (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakResourcePoolReference_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionSkill_Barbarian_NowWeSlass_C::GetTotalHealthPercentage(class AActor* Actor, float* HealthPercentage, bool UsesPools, float MaxHealth, float CurrentHealth, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, float CallFunc_GetCurrentHealthPercent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UGameResourceData* Temp_object_Variable, class UGameResourceData* Temp_object_Variable1, class UGameResourceData* Temp_object_Variable2, int32 Temp_int_Variable1, class UGameResourceData* K2Node_Select_Default, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "GetTotalHealthPercentage");

	Params::UActionSkill_Barbarian_NowWeSlass_C_GetTotalHealthPercentage_Params Parms{};

	Parms.Actor = Actor;
	Parms.UsesPools = UsesPools;
	Parms.MaxHealth = MaxHealth;
	Parms.CurrentHealth = CurrentHealth;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_GetCurrentHealthPercent_ReturnValue = CallFunc_GetCurrentHealthPercent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetResourcePoolByResource_ReturnValue = CallFunc_GetResourcePoolByResource_ReturnValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid = CallFunc_BreakResourcePoolReference_bValid;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue = CallFunc_BreakResourcePoolReference_CurrentValue;
	Parms.CallFunc_BreakResourcePoolReference_MinValue = CallFunc_BreakResourcePoolReference_MinValue;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue = CallFunc_BreakResourcePoolReference_MaxValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (HealthPercentage != nullptr)
		*HealthPercentage = Parms.HealthPercentage;

}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.ExecuteLeap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayControlledMove                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEnvQueryParams             CheckForWorld                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FVector                     LocalLeapTarget                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalFalling                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      LocalControlledMove                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TargetFound                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// bool                               NarrowTarget                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// class AActor*                      LocalTarget                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RunEnvQueryForBestLocation_ResultLocation               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestLocation_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select5_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select8_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartControlledMove_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionSkill_Barbarian_NowWeSlass_C::ExecuteLeap(bool* PlayControlledMove, const struct FEnvQueryParams& CheckForWorld, const struct FVector& LocalLeapTarget, bool LocalFalling, class UClass* LocalControlledMove, bool TargetFound, bool NarrowTarget, class AActor* LocalTarget, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable2, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, class AActor* Temp_object_Variable, bool Temp_bool_Variable6, float Temp_float_Variable, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_RunEnvQueryForBestLocation_ResultLocation, bool CallFunc_RunEnvQueryForBestLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool Temp_bool_Variable7, float Temp_float_Variable1, class UClass* K2Node_Select_Default, bool CallFunc_IsFalling_ReturnValue, class UClass* K2Node_Select1_Default, float K2Node_Select2_Default, class UClass* K2Node_Select3_Default, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select4_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& K2Node_Select5_Default, bool Temp_bool_Variable8, class AActor* K2Node_Select6_Default, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select7_Default, float CallFunc_GetDistanceTo_ReturnValue, float K2Node_Select8_Default, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor1, bool CallFunc_RunEnvQueryForBestActor_ReturnValue1, bool CallFunc_StartControlledMove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "ExecuteLeap");

	Params::UActionSkill_Barbarian_NowWeSlass_C_ExecuteLeap_Params Parms{};

	Parms.CheckForWorld = CheckForWorld;
	Parms.LocalLeapTarget = LocalLeapTarget;
	Parms.LocalFalling = LocalFalling;
	Parms.LocalControlledMove = LocalControlledMove;
	Parms.TargetFound = TargetFound;
	Parms.NarrowTarget = NarrowTarget;
	Parms.LocalTarget = LocalTarget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestLocation_ResultLocation = CallFunc_RunEnvQueryForBestLocation_ResultLocation;
	Parms.CallFunc_RunEnvQueryForBestLocation_ReturnValue = CallFunc_RunEnvQueryForBestLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor1 = CallFunc_RunEnvQueryForBestActor_ResultActor1;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue1 = CallFunc_RunEnvQueryForBestActor_ReturnValue1;
	Parms.CallFunc_StartControlledMove_ReturnValue = CallFunc_StartControlledMove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayControlledMove != nullptr)
		*PlayControlledMove = Parms.PlayControlledMove;

}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.ExecuteAirLeap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_StartControlledMove_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionSkill_Barbarian_NowWeSlass_C::ExecuteAirLeap(bool CallFunc_StartControlledMove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "ExecuteAirLeap");

	Params::UActionSkill_Barbarian_NowWeSlass_C_ExecuteAirLeap_Params Parms{};

	Parms.CallFunc_StartControlledMove_ReturnValue = CallFunc_StartControlledMove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.ExecuteGroundLeap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayControlledMove                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TargetLoc                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TargetFound                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// bool                               NarrowTarget                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// class AActor*                      LocalTarget                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartControlledMove_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionSkill_Barbarian_NowWeSlass_C::ExecuteGroundLeap(bool* PlayControlledMove, const struct FVector& TargetLoc, bool TargetFound, bool NarrowTarget, class AActor* LocalTarget, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class AActor* Temp_object_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool Temp_bool_Variable1, class AActor* K2Node_Select_Default, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable2, const struct FVector& K2Node_Select1_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, float CallFunc_GetDistanceTo_ReturnValue, float K2Node_Select2_Default, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor1, bool CallFunc_RunEnvQueryForBestActor_ReturnValue1, bool CallFunc_StartControlledMove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "ExecuteGroundLeap");

	Params::UActionSkill_Barbarian_NowWeSlass_C_ExecuteGroundLeap_Params Parms{};

	Parms.TargetLoc = TargetLoc;
	Parms.TargetFound = TargetFound;
	Parms.NarrowTarget = NarrowTarget;
	Parms.LocalTarget = LocalTarget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue1 = CallFunc_LessEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor1 = CallFunc_RunEnvQueryForBestActor_ResultActor1;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue1 = CallFunc_RunEnvQueryForBestActor_ReturnValue1;
	Parms.CallFunc_StartControlledMove_ReturnValue = CallFunc_StartControlledMove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayControlledMove != nullptr)
		*PlayControlledMove = Parms.PlayControlledMove;

}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.OnDialogSequenceFinished_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionSkill_Barbarian_NowWeSlass_C::OnDialogSequenceFinished_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "OnDialogSequenceFinished_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Barbarian_NowWeSlass_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.CausedDeath
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActionSkill_Barbarian_NowWeSlass_C::CausedDeath(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "CausedDeath");

	Params::UActionSkill_Barbarian_NowWeSlass_C_CausedDeath_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.OnResumed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Barbarian_NowWeSlass_C::OnResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "OnResumed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Barbarian_NowWeSlass_C::OnStartActionAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "OnStartActionAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_Barbarian_NowWeSlass_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.Slass_CheckForInstantDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UActionSkill_Barbarian_NowWeSlass_C::Slass_CheckForInstantDeath(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "Slass_CheckForInstantDeath");

	Params::UActionSkill_Barbarian_NowWeSlass_C_Slass_CheckForInstantDeath_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_Barbarian_NowWeSlass.ActionSkill_Barbarian_NowWeSlass_C.ExecuteUbergraph_ActionSkill_Barbarian_NowWeSlass
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable1                                            (ConstParm, ZeroConstructor, ReferenceParm)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageComponent*            K2Node_CustomEvent_Damaged                                       (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         K2Node_CustomEvent_Details1                                      (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecuteLeap_PlayControlledMove                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamageInstigator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details                                       (ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// float                              CallFunc_GetTotalHealthPercentage_HealthPercentage               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Compare_Damage_Source_Equal1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2         (NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  CallFunc_GetResourcePoolByResource_ReturnValue                   (NoDestructor, ContainsInstancedReference)

void UActionSkill_Barbarian_NowWeSlass_C::ExecuteUbergraph_ActionSkill_Barbarian_NowWeSlass(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, bool Temp_bool_Variable, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class UGbxAction* CallFunc_K2Play_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue3, bool CallFunc_ExecuteLeap_PlayControlledMove, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, float CallFunc_GetTotalHealthPercentage_HealthPercentage, bool CallFunc_Compare_Damage_Source_Equal1, bool CallFunc_Compare_Damage_Source_Not_Equal1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, float CallFunc_GetDataTableValueFromHandle_ReturnValue4, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_Barbarian_NowWeSlass_C", "ExecuteUbergraph_ActionSkill_Barbarian_NowWeSlass");

	Params::UActionSkill_Barbarian_NowWeSlass_C_ExecuteUbergraph_ActionSkill_Barbarian_NowWeSlass_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.K2Node_CustomEvent_Damaged = K2Node_CustomEvent_Damaged;
	Parms.K2Node_CustomEvent_Details1 = K2Node_CustomEvent_Details1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Compare_Damage_Source_Equal = CallFunc_Compare_Damage_Source_Equal;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal = CallFunc_Compare_Damage_Source_Not_Equal;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue2 = CallFunc_GetDataTableValueFromHandle_ReturnValue2;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.CallFunc_K2Play_ReturnValue1 = CallFunc_K2Play_ReturnValue1;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue3 = CallFunc_GetDataTableValueFromHandle_ReturnValue3;
	Parms.CallFunc_ExecuteLeap_PlayControlledMove = CallFunc_ExecuteLeap_PlayControlledMove;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_CustomEvent_DamageInstigator = K2Node_CustomEvent_DamageInstigator;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.CallFunc_GetTotalHealthPercentage_HealthPercentage = CallFunc_GetTotalHealthPercentage_HealthPercentage;
	Parms.CallFunc_Compare_Damage_Source_Equal1 = CallFunc_Compare_Damage_Source_Equal1;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal1 = CallFunc_Compare_Damage_Source_Not_Equal1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2;
	Parms.CallFunc_GetAbilityOwner_ReturnValue2 = CallFunc_GetAbilityOwner_ReturnValue2;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue4 = CallFunc_GetDataTableValueFromHandle_ReturnValue4;
	Parms.CallFunc_GetResourcePoolByResource_ReturnValue = CallFunc_GetResourcePoolByResource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


