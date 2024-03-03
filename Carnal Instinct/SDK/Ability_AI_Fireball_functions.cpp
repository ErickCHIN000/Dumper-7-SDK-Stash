#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_AI_Fireball.Ability_AI_Fireball_C
// (Actor)

class UClass* AAbility_AI_Fireball_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_AI_Fireball_C");

	return Clss;
}


// Ability_AI_Fireball_C Ability_AI_Fireball.Default__Ability_AI_Fireball_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_AI_Fireball_C* AAbility_AI_Fireball_C::GetDefaultObj()
{
	static class AAbility_AI_Fireball_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_AI_Fireball_C*>(AAbility_AI_Fireball_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_AI_Fireball.Ability_AI_Fireball_C.Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_Fireball_C::Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_Fireball_C", "Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_Fireball.Ability_AI_Fireball_C.UpdateEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_Fireball_C::UpdateEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_Fireball_C", "UpdateEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_Fireball.Ability_AI_Fireball_C.ResetMontageCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_Fireball_C::ResetMontageCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_Fireball_C", "ResetMontageCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_Fireball.Ability_AI_Fireball_C.UpdateMontageCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_Fireball_C::UpdateMontageCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_Fireball_C", "UpdateMontageCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_Fireball.Ability_AI_Fireball_C.UpdateSocket
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_Fireball_C::UpdateSocket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_Fireball_C", "UpdateSocket");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_Fireball.Ability_AI_Fireball_C.StartTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_Fireball_C::StartTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_Fireball_C", "StartTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_Fireball.Ability_AI_Fireball_C.StopTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_Fireball_C::StopTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_Fireball_C", "StopTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_Fireball.Ability_AI_Fireball_C.Ended
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AbilityEndResult      Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_AI_Fireball_C::Ended(enum class E_AbilityEndResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_Fireball_C", "Ended");

	Params::AAbility_AI_Fireball_C_Ended_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_AI_Fireball.Ability_AI_Fireball_C.Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_AI_Fireball_C::Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_Fireball_C", "Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_AI_Fireball.Ability_AI_Fireball_C.ExecuteUbergraph_Ability_AI_Fireball
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartAbility_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTarget_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAE_FireballProjectile_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetAbilityMontage_Montage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAbilityMontage_Duration                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// enum class E_AbilityEndResult      K2Node_Event_Result                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAbility_AI_Fireball_C::ExecuteUbergraph_Ability_AI_Fireball(int32 EntryPoint, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_StartAbility_Result, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetTarget_Target, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAE_FireballProjectile_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, class FName K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, enum class E_AbilityEndResult K2Node_Event_Result, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_AI_Fireball_C", "ExecuteUbergraph_Ability_AI_Fireball");

	Params::AAbility_AI_Fireball_C_ExecuteUbergraph_Ability_AI_Fireball_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_StartAbility_Result = CallFunc_StartAbility_Result;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetTarget_Target = CallFunc_GetTarget_Target;
	Parms.CallFunc_GetTargetLocation_ReturnValue = CallFunc_GetTargetLocation_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetAbilityMontage_Montage = CallFunc_GetAbilityMontage_Montage;
	Parms.CallFunc_PlayAbilityMontage_Duration = CallFunc_PlayAbilityMontage_Duration;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


