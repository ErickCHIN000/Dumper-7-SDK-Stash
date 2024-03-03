#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Player_Trap.Ability_Player_Trap_C
// (Actor)

class UClass* AAbility_Player_Trap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Player_Trap_C");

	return Clss;
}


// Ability_Player_Trap_C Ability_Player_Trap.Default__Ability_Player_Trap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_Player_Trap_C* AAbility_Player_Trap_C::GetDefaultObj()
{
	static class AAbility_Player_Trap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_Player_Trap_C*>(AAbility_Player_Trap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Player_Trap.Ability_Player_Trap_C.Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Trap_C::Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Trap_C", "Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Trap.Ability_Player_Trap_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_Player_Trap_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Trap_C", "ReceiveTick");

	Params::AAbility_Player_Trap_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Player_Trap.Ability_Player_Trap_C.Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Trap_C::Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Trap_C", "Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Trap.Ability_Player_Trap_C.UpdateEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Trap_C::UpdateEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Trap_C", "UpdateEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Trap.Ability_Player_Trap_C.Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Trap_C::Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Trap_C", "Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Trap.Ability_Player_Trap_C.PlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbility_Player_Trap_C::PlaySound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Trap_C", "PlaySound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Player_Trap.Ability_Player_Trap_C.ExecuteUbergraph_Ability_Player_Trap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsCasting_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsPressed_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsCasting_Result_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartAbility_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsCasting_Result_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAE_DamageTrap_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectLocation_Location                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEffectLocation_Location_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamage_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetAbilityMontage_Montage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAbilityMontage_Duration                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSurfaceTransform_Transform                           (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetEffectLocation_Location_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_Player_Trap_C::ExecuteUbergraph_Ability_Player_Trap(int32 EntryPoint, bool CallFunc_GetIsCasting_Result, bool CallFunc_GetIsPressed_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetIsCasting_Result_1, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_StartAbility_Result, bool CallFunc_GetIsCasting_Result_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float K2Node_Event_DeltaSeconds, class AAE_DamageTrap_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_GetEffectLocation_Location, const struct FVector& CallFunc_GetEffectLocation_Location_1, float CallFunc_GetDamage_ReturnValue, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, const struct FTransform& CallFunc_GetSurfaceTransform_Transform, const struct FVector& CallFunc_GetEffectLocation_Location_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Player_Trap_C", "ExecuteUbergraph_Ability_Player_Trap");

	Params::AAbility_Player_Trap_C_ExecuteUbergraph_Ability_Player_Trap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIsCasting_Result = CallFunc_GetIsCasting_Result;
	Parms.CallFunc_GetIsPressed_Result = CallFunc_GetIsPressed_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetIsCasting_Result_1 = CallFunc_GetIsCasting_Result_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_StartAbility_Result = CallFunc_StartAbility_Result;
	Parms.CallFunc_GetIsCasting_Result_2 = CallFunc_GetIsCasting_Result_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetEffectLocation_Location = CallFunc_GetEffectLocation_Location;
	Parms.CallFunc_GetEffectLocation_Location_1 = CallFunc_GetEffectLocation_Location_1;
	Parms.CallFunc_GetDamage_ReturnValue = CallFunc_GetDamage_ReturnValue;
	Parms.CallFunc_GetAbilityMontage_Montage = CallFunc_GetAbilityMontage_Montage;
	Parms.CallFunc_PlayAbilityMontage_Duration = CallFunc_PlayAbilityMontage_Duration;
	Parms.CallFunc_GetSurfaceTransform_Transform = CallFunc_GetSurfaceTransform_Transform;
	Parms.CallFunc_GetEffectLocation_Location_2 = CallFunc_GetEffectLocation_Location_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


