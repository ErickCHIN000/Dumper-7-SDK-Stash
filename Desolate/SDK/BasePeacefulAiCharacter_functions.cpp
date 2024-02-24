#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BasePeacefulAiCharacter.BasePeacefulAICharacter_C
// (Actor, Pawn)

class UClass* ABasePeacefulAICharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasePeacefulAICharacter_C");

	return Clss;
}


// BasePeacefulAICharacter_C BasePeacefulAiCharacter.Default__BasePeacefulAICharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABasePeacefulAICharacter_C* ABasePeacefulAICharacter_C::GetDefaultObj()
{
	static class ABasePeacefulAICharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABasePeacefulAICharacter_C*>(ABasePeacefulAICharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BasePeacefulAiCharacter.BasePeacefulAICharacter_C.OnStunComplete
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABasePeacefulAICharacter_C::OnStunComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePeacefulAICharacter_C", "OnStunComplete");

	Params::ABasePeacefulAICharacter_C_OnStunComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BasePeacefulAiCharacter.BasePeacefulAICharacter_C.UpdateAlertState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateNoiseAggro_Updated                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateAlertState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABasePeacefulAICharacter_C::UpdateAlertState(float DeltaTime, bool CallFunc_UpdateNoiseAggro_Updated, bool CallFunc_UpdateAlertState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePeacefulAICharacter_C", "UpdateAlertState");

	Params::ABasePeacefulAICharacter_C_UpdateAlertState_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_UpdateNoiseAggro_Updated = CallFunc_UpdateNoiseAggro_Updated;
	Parms.CallFunc_UpdateAlertState_ReturnValue = CallFunc_UpdateAlertState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BasePeacefulAiCharacter.BasePeacefulAICharacter_C.CalculateEscapePoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     FromPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MinRadius                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxRadius                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TempResult                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetPatrolPoint_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_ProjectPointToNavigation_ProjectedLocation           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_ProjectPointToNavigation_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABasePeacefulAICharacter_C::CalculateEscapePoint(const struct FVector& FromPoint, float MinRadius, float MaxRadius, const struct FVector& TempResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, bool CallFunc_SetPatrolPoint_Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePeacefulAICharacter_C", "CalculateEscapePoint");

	Params::ABasePeacefulAICharacter_C_CalculateEscapePoint_Params Parms{};

	Parms.FromPoint = FromPoint;
	Parms.MinRadius = MinRadius;
	Parms.MaxRadius = MaxRadius;
	Parms.TempResult = TempResult;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation = CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue = CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue;
	Parms.CallFunc_SetPatrolPoint_Result = CallFunc_SetPatrolPoint_Result;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue = CallFunc_GetDirectionUnitVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_ProjectPointToNavigation_ProjectedLocation = CallFunc_K2_ProjectPointToNavigation_ProjectedLocation;
	Parms.CallFunc_K2_ProjectPointToNavigation_ReturnValue = CallFunc_K2_ProjectPointToNavigation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePeacefulAiCharacter.BasePeacefulAICharacter_C.UpdatePatrolState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdatePatrolState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABasePeacefulAICharacter_C::UpdatePatrolState(float DeltaTime, bool CallFunc_UpdatePatrolState_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePeacefulAICharacter_C", "UpdatePatrolState");

	Params::ABasePeacefulAICharacter_C_UpdatePatrolState_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_UpdatePatrolState_ReturnValue = CallFunc_UpdatePatrolState_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BasePeacefulAiCharacter.BasePeacefulAICharacter_C.SensingTakeDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHCharacter*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromSensor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SensingTakeDamage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddNoiseAggro_ResultAggro                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABasePeacefulAICharacter_C::SensingTakeDamage(class ASHCharacter* Character, bool FromSensor, float Damage, bool CallFunc_SensingTakeDamage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_AddNoiseAggro_ResultAggro)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePeacefulAICharacter_C", "SensingTakeDamage");

	Params::ABasePeacefulAICharacter_C_SensingTakeDamage_Params Parms{};

	Parms.Character = Character;
	Parms.FromSensor = FromSensor;
	Parms.Damage = Damage;
	Parms.CallFunc_SensingTakeDamage_ReturnValue = CallFunc_SensingTakeDamage_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_AddNoiseAggro_ResultAggro = CallFunc_AddNoiseAggro_ResultAggro;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BasePeacefulAiCharacter.BasePeacefulAICharacter_C.SensingHearNoise
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromSensor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SensingHearNoise_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AddNoiseAggro_ResultAggro                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABasePeacefulAICharacter_C::SensingHearNoise(float Volume, class AActor* Actor, const struct FVector& Location, float Distance, bool FromSensor, bool CallFunc_SensingHearNoise_ReturnValue, float CallFunc_AddNoiseAggro_ResultAggro)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePeacefulAICharacter_C", "SensingHearNoise");

	Params::ABasePeacefulAICharacter_C_SensingHearNoise_Params Parms{};

	Parms.Volume = Volume;
	Parms.Actor = Actor;
	Parms.Location = Location;
	Parms.Distance = Distance;
	Parms.FromSensor = FromSensor;
	Parms.CallFunc_SensingHearNoise_ReturnValue = CallFunc_SensingHearNoise_ReturnValue;
	Parms.CallFunc_AddNoiseAggro_ResultAggro = CallFunc_AddNoiseAggro_ResultAggro;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BasePeacefulAiCharacter.BasePeacefulAICharacter_C.SensingSeePawn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromSensor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SensingSeePawn_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddNoiseAggro_ResultAggro                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABasePeacefulAICharacter_C::SensingSeePawn(class APawn* Pawn, bool FromSensor, bool CallFunc_SensingSeePawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_AddNoiseAggro_ResultAggro)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePeacefulAICharacter_C", "SensingSeePawn");

	Params::ABasePeacefulAICharacter_C_SensingSeePawn_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.FromSensor = FromSensor;
	Parms.CallFunc_SensingSeePawn_ReturnValue = CallFunc_SensingSeePawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_AddNoiseAggro_ResultAggro = CallFunc_AddNoiseAggro_ResultAggro;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


