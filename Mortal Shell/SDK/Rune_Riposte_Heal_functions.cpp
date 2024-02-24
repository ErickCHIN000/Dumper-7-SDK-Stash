#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_Riposte_Heal.Rune_Riposte_Heal_C
// (None)

class UClass* URune_Riposte_Heal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_Riposte_Heal_C");

	return Clss;
}


// Rune_Riposte_Heal_C Rune_Riposte_Heal.Default__Rune_Riposte_Heal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_Riposte_Heal_C* URune_Riposte_Heal_C::GetDefaultObj()
{
	static class URune_Riposte_Heal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_Riposte_Heal_C*>(URune_Riposte_Heal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_Riposte_Heal.Rune_Riposte_Heal_C.Get Bonus Multiplier for XValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueForTier_RuneX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float URune_Riposte_Heal_C::Get_Bonus_Multiplier_for_XValue(int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Heal_C", "Get Bonus Multiplier for XValue");

	Params::URune_Riposte_Heal_C_Get_Bonus_Multiplier_for_XValue_Params Parms{};

	Parms.CallFunc_GetValueForTier_RuneX = CallFunc_GetValueForTier_RuneX;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_Riposte_Heal.Rune_Riposte_Heal_C.Sub_Riposte
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Heal_C::Sub_Riposte()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Heal_C", "Sub_Riposte");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Heal.Rune_Riposte_Heal_C.UnsubRiposte
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Heal_C::UnsubRiposte()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Heal_C", "UnsubRiposte");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Heal.Rune_Riposte_Heal_C.OnRip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEmpowered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            ParriedChar                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_Riposte_Heal_C::OnRip(bool bEmpowered, class ABaseCharacter_C* ParriedChar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Heal_C", "OnRip");

	Params::URune_Riposte_Heal_C_OnRip_Params Parms{};

	Parms.bEmpowered = bEmpowered;
	Parms.ParriedChar = ParriedChar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_Riposte_Heal.Rune_Riposte_Heal_C.OnAnyDmgTaken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDied                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_Riposte_Heal_C::OnAnyDmgTaken(bool bDied)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Heal_C", "OnAnyDmgTaken");

	Params::URune_Riposte_Heal_C_OnAnyDmgTaken_Params Parms{};

	Parms.bDied = bDied;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_Riposte_Heal.Rune_Riposte_Heal_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Heal_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Heal_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Heal.Rune_Riposte_Heal_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Riposte_Heal_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Heal_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Riposte_Heal.Rune_Riposte_Heal_C.ExecuteUbergraph_Rune_Riposte_Heal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bEmpowered                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_CustomEvent_ParriedChar                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bDied                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Bonus_Multiplier_for_XValue_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObject_C*               CallFunc_GetBuffFromClass_BuffObject                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffLifeStealForNextXHit_C* K2Node_DynamicCast_AsBuff_Life_Steal_for_Next_XHit               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UBuffLifeStealForNextXHit_C* CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueForTier_RuneX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetValueForTier_RuneX_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_BloodProjectileSpawner_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueForTier_RuneX_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void URune_Riposte_Heal_C::ExecuteUbergraph_Rune_Riposte_Heal(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool K2Node_CustomEvent_bEmpowered, class ABaseCharacter_C* K2Node_CustomEvent_ParriedChar, bool K2Node_CustomEvent_bDied, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_RandomFloat_ReturnValue, float CallFunc_GetChanceForTier_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_SwitchName_CmpSuccess_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Get_Bonus_Multiplier_for_XValue_ReturnValue, class UBuffObject_C* CallFunc_GetBuffFromClass_BuffObject, class UBuffLifeStealForNextXHit_C* K2Node_DynamicCast_AsBuff_Life_Steal_for_Next_XHit, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBuffLifeStealForNextXHit_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_GetValueForTier_RuneX, bool K2Node_SwitchName_CmpSuccess_2, int32 CallFunc_GetValueForTier_RuneX_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class ABP_BloodProjectileSpawner_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_GetValueForTier_RuneX_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Riposte_Heal_C", "ExecuteUbergraph_Rune_Riposte_Heal");

	Params::URune_Riposte_Heal_C_ExecuteUbergraph_Rune_Riposte_Heal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_CustomEvent_bEmpowered = K2Node_CustomEvent_bEmpowered;
	Parms.K2Node_CustomEvent_ParriedChar = K2Node_CustomEvent_ParriedChar;
	Parms.K2Node_CustomEvent_bDied = K2Node_CustomEvent_bDied;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetChanceForTier_ReturnValue = CallFunc_GetChanceForTier_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Get_Bonus_Multiplier_for_XValue_ReturnValue = CallFunc_Get_Bonus_Multiplier_for_XValue_ReturnValue;
	Parms.CallFunc_GetBuffFromClass_BuffObject = CallFunc_GetBuffFromClass_BuffObject;
	Parms.K2Node_DynamicCast_AsBuff_Life_Steal_for_Next_XHit = K2Node_DynamicCast_AsBuff_Life_Steal_for_Next_XHit;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetValueForTier_RuneX = CallFunc_GetValueForTier_RuneX;
	Parms.K2Node_SwitchName_CmpSuccess_2 = K2Node_SwitchName_CmpSuccess_2;
	Parms.CallFunc_GetValueForTier_RuneX_1 = CallFunc_GetValueForTier_RuneX_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetValueForTier_RuneX_2 = CallFunc_GetValueForTier_RuneX_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


