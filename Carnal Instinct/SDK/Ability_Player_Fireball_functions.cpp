#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Player_Fireball.Ability_Player_Fireball_C
// (Actor)

class UClass* AAbility_Player_Fireball_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Player_Fireball_C");

	return Clss;
}


// Ability_Player_Fireball_C Ability_Player_Fireball.Default__Ability_Player_Fireball_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_Player_Fireball_C* AAbility_Player_Fireball_C::GetDefaultObj()
{
	static class AAbility_Player_Fireball_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_Player_Fireball_C*>(AAbility_Player_Fireball_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Player_Fireball.Ability_Player_Fireball_C.Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Fireball_C::Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Fireball_C", "Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Fireball.Ability_Player_Fireball_C.Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Fireball_C::Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Fireball_C", "Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Fireball.Ability_Player_Fireball_C.ResetMontageCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Fireball_C::ResetMontageCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Fireball_C", "ResetMontageCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Fireball.Ability_Player_Fireball_C.UpdateMontageCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Fireball_C::UpdateMontageCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Fireball_C", "UpdateMontageCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Fireball.Ability_Player_Fireball_C.UpdateSocket
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Fireball_C::UpdateSocket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Fireball_C", "UpdateSocket");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Fireball.Ability_Player_Fireball_C.ExecuteUbergraph_Ability_Player_Fireball
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartAbility_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDamage_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetAbilityMontage_Montage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAbilityMontage_Duration                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAE_FireballProjectile_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetCrosshairTransform_ReturnValue                       (IsPlainOldData, NoDestructor)

void AAbility_Player_Fireball_C::ExecuteUbergraph_Ability_Player_Fireball(int32 EntryPoint, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_StartAbility_Result, float CallFunc_GetDamage_ReturnValue, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAE_FireballProjectile_C* CallFunc_FinishSpawningActor_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FName K2Node_Select_Default, const struct FTransform& CallFunc_GetCrosshairTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Fireball_C", "ExecuteUbergraph_Ability_Player_Fireball");

	Params::AAbility_Player_Fireball_C_ExecuteUbergraph_Ability_Player_Fireball_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_StartAbility_Result = CallFunc_StartAbility_Result;
	Parms.CallFunc_GetDamage_ReturnValue = CallFunc_GetDamage_ReturnValue;
	Parms.CallFunc_GetAbilityMontage_Montage = CallFunc_GetAbilityMontage_Montage;
	Parms.CallFunc_PlayAbilityMontage_Duration = CallFunc_PlayAbilityMontage_Duration;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCrosshairTransform_ReturnValue = CallFunc_GetCrosshairTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


